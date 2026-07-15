#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830D7A48"))) PPC_WEAK_FUNC(sub_830D7A48);
PPC_FUNC_IMPL(__imp__sub_830D7A48) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x830fdab8
	sub_830FDAB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D7A50"))) PPC_WEAK_FUNC(sub_830D7A50);
PPC_FUNC_IMPL(__imp__sub_830D7A50) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x830f7bf0
	sub_830F7BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D7A58"))) PPC_WEAK_FUNC(sub_830D7A58);
PPC_FUNC_IMPL(__imp__sub_830D7A58) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x830fdf10
	sub_830FDF10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D7A60"))) PPC_WEAK_FUNC(sub_830D7A60);
PPC_FUNC_IMPL(__imp__sub_830D7A60) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x830f8278
	sub_830F8278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D7A68"))) PPC_WEAK_FUNC(sub_830D7A68);
PPC_FUNC_IMPL(__imp__sub_830D7A68) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x830f8378
	sub_830F8378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D7A70"))) PPC_WEAK_FUNC(sub_830D7A70);
PPC_FUNC_IMPL(__imp__sub_830D7A70) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r11,r29
	r11.u64 = r29.u64;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// b 0x830d7aa0
	goto loc_830D7AA0;
loc_830D7A90:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// mulli r9,r31,33
	ctx.r9.s64 = r31.s64 * 33;
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_830D7AA0:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x830d7a90
	if (!cr0.eq) goto loc_830D7A90;
	// li r11,27
	r11.s64 = 27;
	// divwu r11,r31,r11
	r11.u32 = r31.u32 / r11.u32;
	// mulli r11,r11,27
	r11.s64 = r11.s64 * 27;
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r3
	r30.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// b 0x830d7ae8
	goto loc_830D7AE8;
loc_830D7AC4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x830d7ae4
	if (!cr6.eq) goto loc_830D7AE4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830d7afc
	if (cr0.eq) goto loc_830D7AFC;
loc_830D7AE4:
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
loc_830D7AE8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830d7ac4
	if (!cr6.eq) goto loc_830D7AC4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830D7AF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_830D7AFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830d7af4
	goto loc_830D7AF4;
}

__attribute__((alias("__imp__sub_830D7B08"))) PPC_WEAK_FUNC(sub_830D7B08);
PPC_FUNC_IMPL(__imp__sub_830D7B08) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d7b34
	if (cr6.eq) goto loc_830D7B34;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_830D7B34:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// addic. r11,r3,1
	xer.ca = ctx.r3.u32 > 4294967294;
	r11.s64 = ctx.r3.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830d7b80
	if (cr0.eq) goto loc_830D7B80;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x830d7b80
	if (!cr6.lt) goto loc_830D7B80;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830d7b80
	if (cr0.eq) goto loc_830D7B80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830d7b84
	goto loc_830D7B84;
loc_830D7B80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830D7B84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830D7B90"))) PPC_WEAK_FUNC(sub_830D7B90);
PPC_FUNC_IMPL(__imp__sub_830D7B90) {
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d7bcc
	if (cr6.eq) goto loc_830D7BCC;
	// bl 0x83112cc8
	sub_83112CC8(ctx, base);
loc_830D7BCC:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830d7bdc
	if (cr0.eq) goto loc_830D7BDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830D7BDC:
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

__attribute__((alias("__imp__sub_830D7BF8"))) PPC_WEAK_FUNC(sub_830D7BF8);
PPC_FUNC_IMPL(__imp__sub_830D7BF8) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d7c2c
	if (cr6.eq) goto loc_830D7C2C;
	// bl 0x83119068
	sub_83119068(ctx, base);
loc_830D7C2C:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830d7c3c
	if (cr0.eq) goto loc_830D7C3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830D7C3C:
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

__attribute__((alias("__imp__sub_830D7C58"))) PPC_WEAK_FUNC(sub_830D7C58);
PPC_FUNC_IMPL(__imp__sub_830D7C58) {
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
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d7c84
	if (cr6.eq) goto loc_830D7C84;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830D7C84:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8311f9c8
	sub_8311F9C8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830d7c9c
	if (cr0.eq) goto loc_830D7C9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830D7C9C:
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

__attribute__((alias("__imp__sub_830D7CB8"))) PPC_WEAK_FUNC(sub_830D7CB8);
PPC_FUNC_IMPL(__imp__sub_830D7CB8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x830d7cd8
	if (!cr6.eq) goto loc_830D7CD8;
	// li r31,0
	r31.s64 = 0;
loc_830D7CD8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d7cf0
	if (cr6.eq) goto loc_830D7CF0;
	// bl 0x83112cc8
	sub_83112CC8(ctx, base);
loc_830D7CF0:
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

__attribute__((alias("__imp__sub_830D7D08"))) PPC_WEAK_FUNC(sub_830D7D08);
PPC_FUNC_IMPL(__imp__sub_830D7D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D7D30"))) PPC_WEAK_FUNC(sub_830D7D30);
PPC_FUNC_IMPL(__imp__sub_830D7D30) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
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

__attribute__((alias("__imp__sub_830D7D80"))) PPC_WEAK_FUNC(sub_830D7D80);
PPC_FUNC_IMPL(__imp__sub_830D7D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
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
	// bl 0x831b1438
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r4,8
	ctx.r4.s64 = 8;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f30,4(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f28,12(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831b1484
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D7DF0"))) PPC_WEAK_FUNC(sub_830D7DF0);
PPC_FUNC_IMPL(__imp__sub_830D7DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
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
	// bl 0x831b1438
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r4,16
	ctx.r4.s64 = 16;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f30,4(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f28,12(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831b1484
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D7E60"))) PPC_WEAK_FUNC(sub_830D7E60);
PPC_FUNC_IMPL(__imp__sub_830D7E60) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_830D7EB0"))) PPC_WEAK_FUNC(sub_830D7EB0);
PPC_FUNC_IMPL(__imp__sub_830D7EB0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_830D7EF8"))) PPC_WEAK_FUNC(sub_830D7EF8);
PPC_FUNC_IMPL(__imp__sub_830D7EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,2015
	ctx.r4.s64 = 2015;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// lfs f0,-24780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830D7F50"))) PPC_WEAK_FUNC(sub_830D7F50);
PPC_FUNC_IMPL(__imp__sub_830D7F50) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,2016
	ctx.r4.s64 = 2016;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830D7FA0"))) PPC_WEAK_FUNC(sub_830D7FA0);
PPC_FUNC_IMPL(__imp__sub_830D7FA0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830D7FE0"))) PPC_WEAK_FUNC(sub_830D7FE0);
PPC_FUNC_IMPL(__imp__sub_830D7FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r4,2042
	ctx.r4.s64 = 2042;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8030"))) PPC_WEAK_FUNC(sub_830D8030);
PPC_FUNC_IMPL(__imp__sub_830D8030) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mullw r3,r30,r29
	ctx.r3.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x830d80d4
	if (cr6.lt) goto loc_830D80D4;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// blt cr6,0x830d80d4
	if (cr6.lt) goto loc_830D80D4;
	// lis r11,32767
	r11.s64 = 2147418112;
	// twllei r29,0
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// divw r11,r11,r29
	r11.s32 = r11.s32 / r29.s32;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x830d80d4
	if (!cr6.lt) goto loc_830D80D4;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830d80d4
	if (cr0.eq) goto loc_830D80D4;
	// addic. r11,r30,-1
	xer.ca = r30.u32 > 0;
	r11.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// ble 0x830d80b0
	if (!cr0.gt) goto loc_830D80B0;
loc_830D8098:
	// add r10,r29,r3
	ctx.r10.u64 = r29.u64 + ctx.r3.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r29,r3
	ctx.r3.u64 = r29.u64 + ctx.r3.u64;
	// bne 0x830d8098
	if (!cr0.eq) goto loc_830D8098;
loc_830D80B0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// stwx r10,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// b 0x830d80dc
	goto loc_830D80DC;
loc_830D80D4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_830D80DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830D80E8"))) PPC_WEAK_FUNC(sub_830D80E8);
PPC_FUNC_IMPL(__imp__sub_830D80E8) {
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
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x830d810c
	if (cr6.eq) goto loc_830D810C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830d811c
	goto loc_830D811C;
loc_830D810C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830e8b80
	sub_830E8B80(ctx, base);
loc_830D811C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8130"))) PPC_WEAK_FUNC(sub_830D8130);
PPC_FUNC_IMPL(__imp__sub_830D8130) {
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
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x830d8154
	if (cr6.eq) goto loc_830D8154;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830d8164
	goto loc_830D8164;
loc_830D8154:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830e8bd0
	sub_830E8BD0(ctx, base);
loc_830D8164:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8178"))) PPC_WEAK_FUNC(sub_830D8178);
PPC_FUNC_IMPL(__imp__sub_830D8178) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830e8c28
	sub_830E8C28(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d81b4
	if (cr0.lt) goto loc_830D81B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8310b140
	sub_8310B140(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830D81B4:
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

__attribute__((alias("__imp__sub_830D81C8"))) PPC_WEAK_FUNC(sub_830D81C8);
PPC_FUNC_IMPL(__imp__sub_830D81C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d8234
	if (cr6.eq) goto loc_830D8234;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83113330
	sub_83113330(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d822c
	if (cr0.lt) goto loc_830D822C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d8220
	if (cr6.eq) goto loc_830D8220;
	// bl 0x83112cc8
	sub_83112CC8(ctx, base);
loc_830D8220:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_830D822C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830d8240
	if (cr6.lt) goto loc_830D8240;
loc_830D8234:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
loc_830D8240:
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

__attribute__((alias("__imp__sub_830D8258"))) PPC_WEAK_FUNC(sub_830D8258);
PPC_FUNC_IMPL(__imp__sub_830D8258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d82a8
	if (cr0.lt) goto loc_830D82A8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d82a0
	if (cr6.eq) goto loc_830D82A0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830d82a0
	if (!cr6.eq) goto loc_830D82A0;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x830d6258
	sub_830D6258(ctx, base);
	// b 0x830d82a8
	goto loc_830D82A8;
loc_830D82A0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D82A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D82B8"))) PPC_WEAK_FUNC(sub_830D82B8);
PPC_FUNC_IMPL(__imp__sub_830D82B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830d830c
	if (cr6.eq) goto loc_830D830C;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830d830c
	if (!cr6.eq) goto loc_830D830C;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// beq cr6,0x830d82e4
	if (cr6.eq) goto loc_830D82E4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// b 0x830d82e8
	goto loc_830D82E8;
loc_830D82E4:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_830D82E8:
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d8304
	if (cr6.eq) goto loc_830D8304;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,132(r11)
	PPC_STORE_U32(r11.u32 + 132, ctx.r10.u32);
loc_830D8304:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830D830C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8318"))) PPC_WEAK_FUNC(sub_830D8318);
PPC_FUNC_IMPL(__imp__sub_830D8318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830d832c
	if (!cr6.eq) goto loc_830D832C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_830D832C:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x830d8344
	if (cr6.lt) goto loc_830D8344;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// blr 
	return;
loc_830D8344:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x830d8380
	if (cr6.eq) goto loc_830D8380;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d8374
	if (cr6.eq) goto loc_830D8374;
	// lwz r9,132(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r9.u32);
loc_830D8374:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_830D8380:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8388"))) PPC_WEAK_FUNC(sub_830D8388);
PPC_FUNC_IMPL(__imp__sub_830D8388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830d839c
	if (!cr6.eq) goto loc_830D839C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_830D839C:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x830d83b4
	if (cr6.lt) goto loc_830D83B4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// blr 
	return;
loc_830D83B4:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x830d83f8
	if (cr6.eq) goto loc_830D83F8;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d83e8
	if (cr6.eq) goto loc_830D83E8;
	// lwz r9,132(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r9.u32);
loc_830D83E8:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
loc_830D83F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8400"))) PPC_WEAK_FUNC(sub_830D8400);
PPC_FUNC_IMPL(__imp__sub_830D8400) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830d8424
	if (!cr6.eq) goto loc_830D8424;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830d8454
	goto loc_830D8454;
loc_830D8424:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x830d843c
	if (cr6.lt) goto loc_830D843C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// b 0x830d8454
	goto loc_830D8454;
loc_830D843C:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x8310b1d0
	sub_8310B1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830D8454:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8468"))) PPC_WEAK_FUNC(sub_830D8468);
PPC_FUNC_IMPL(__imp__sub_830D8468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830d848c
	if (!cr6.eq) goto loc_830D848C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830d84c0
	goto loc_830D84C0;
loc_830D848C:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x830d84a4
	if (cr6.lt) goto loc_830D84A4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// b 0x830d84c0
	goto loc_830D84C0;
loc_830D84A4:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8310b188
	sub_8310B188(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830D84C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D84D0"))) PPC_WEAK_FUNC(sub_830D84D0);
PPC_FUNC_IMPL(__imp__sub_830D84D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d84fc
	if (cr6.eq) goto loc_830D84FC;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,132(r11)
	PPC_STORE_U32(r11.u32 + 132, ctx.r10.u32);
loc_830D84FC:
	// lis r11,8191
	r11.s64 = 536805376;
	// rlwinm r3,r29,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x830d8514
	if (!cr6.gt) goto loc_830D8514;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830D8514:
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830d8554
	if (cr0.eq) goto loc_830D8554;
	// addic. r11,r29,-1
	xer.ca = r29.u32 > 0;
	r11.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt 0x830d854c
	if (cr0.lt) goto loc_830D854C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
loc_830D8534:
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bge 0x830d8534
	if (!cr0.lt) goto loc_830D8534;
loc_830D854C:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x830d8558
	goto loc_830D8558;
loc_830D8554:
	// li r30,0
	r30.s64 = 0;
loc_830D8558:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830d856c
	if (!cr6.eq) goto loc_830D856C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830d85cc
	goto loc_830D85CC;
loc_830D856C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830d85b8
	if (!cr6.gt) goto loc_830D85B8;
	// li r11,0
	r11.s64 = 0;
loc_830D8580:
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// bge cr6,0x830d85b8
	if (!cr6.lt) goto loc_830D85B8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r8,r11,r30
	ctx.r8.u64 = r11.u64 + r30.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x830d8580
	if (cr6.lt) goto loc_830D8580;
loc_830D85B8:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830D85CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830D85D8"))) PPC_WEAK_FUNC(sub_830D85D8);
PPC_FUNC_IMPL(__imp__sub_830D85D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d8608
	if (cr6.eq) goto loc_830D8608;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x830d8608
	if (!cr6.eq) goto loc_830D8608;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,132(r11)
	PPC_STORE_U32(r11.u32 + 132, ctx.r10.u32);
	// b 0x830d77b0
	sub_830D77B0(ctx, base);
	return;
loc_830D8608:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8618"))) PPC_WEAK_FUNC(sub_830D8618);
PPC_FUNC_IMPL(__imp__sub_830D8618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830d8658
	if (cr6.eq) goto loc_830D8658;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x830d8658
	if (!cr6.eq) goto loc_830D8658;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stfs f13,44(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// stfs f12,48(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lwz r11,132(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, r11.u32);
	// blr 
	return;
loc_830D8658:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8668"))) PPC_WEAK_FUNC(sub_830D8668);
PPC_FUNC_IMPL(__imp__sub_830D8668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830d86a8
	if (cr6.eq) goto loc_830D86A8;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x830d86a8
	if (!cr6.eq) goto loc_830D86A8;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,52(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// stfs f13,56(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// stfs f12,60(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lwz r11,132(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, r11.u32);
	// blr 
	return;
loc_830D86A8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D86B8"))) PPC_WEAK_FUNC(sub_830D86B8);
PPC_FUNC_IMPL(__imp__sub_830D86B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830d8738
	if (cr6.eq) goto loc_830D8738;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x830d8738
	if (!cr6.eq) goto loc_830D8738;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,136(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x830d8730
	if (cr6.eq) goto loc_830D8730;
	// stw r11,136(r4)
	PPC_STORE_U32(ctx.r4.u32 + 136, r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x830d86f4
	if (!cr6.eq) goto loc_830D86F4;
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x830d8704
	goto loc_830D8704;
loc_830D86F4:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x830d8724
	if (!cr6.eq) goto loc_830D8724;
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
loc_830D8704:
	// addi r11,r4,20
	r11.s64 = ctx.r4.s64 + 20;
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r10,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d8724
	if (cr6.eq) goto loc_830D8724;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,132(r11)
	PPC_STORE_U32(r11.u32 + 132, ctx.r10.u32);
loc_830D8724:
	// lwz r11,132(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// ori r11,r11,3
	r11.u64 = r11.u64 | 3;
	// stw r11,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, r11.u32);
loc_830D8730:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830D8738:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8748"))) PPC_WEAK_FUNC(sub_830D8748);
PPC_FUNC_IMPL(__imp__sub_830D8748) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830d877c
	if (cr6.eq) goto loc_830D877C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830d877c
	if (cr6.eq) goto loc_830D877C;
	// lwz r11,132(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r4,r11,30,30,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3;
	// bl 0x8310b140
	sub_8310B140(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d8784
	goto loc_830D8784;
loc_830D877C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D8784:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8798"))) PPC_WEAK_FUNC(sub_830D8798);
PPC_FUNC_IMPL(__imp__sub_830D8798) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830d87cc
	if (cr6.eq) goto loc_830D87CC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830d87cc
	if (cr6.eq) goto loc_830D87CC;
	// lwz r11,132(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r4,r11,28,30,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
	// bl 0x8310b140
	sub_8310B140(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d87d4
	goto loc_830D87D4;
loc_830D87CC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D87D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D87E8"))) PPC_WEAK_FUNC(sub_830D87E8);
PPC_FUNC_IMPL(__imp__sub_830D87E8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830d881c
	if (cr6.eq) goto loc_830D881C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830d881c
	if (cr6.eq) goto loc_830D881C;
	// lwz r11,132(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r4,r11,30,26,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x30;
	// bl 0x8310b140
	sub_8310B140(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d8824
	goto loc_830D8824;
loc_830D881C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D8824:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8838"))) PPC_WEAK_FUNC(sub_830D8838);
PPC_FUNC_IMPL(__imp__sub_830D8838) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830d886c
	if (cr6.eq) goto loc_830D886C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830d886c
	if (cr6.eq) goto loc_830D886C;
	// lwz r11,132(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r4,r11,24,30,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x3;
	// bl 0x8310b140
	sub_8310B140(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d8874
	goto loc_830D8874;
loc_830D886C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D8874:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8888"))) PPC_WEAK_FUNC(sub_830D8888);
PPC_FUNC_IMPL(__imp__sub_830D8888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d891c
	if (cr0.lt) goto loc_830D891C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x830d8914
	if (!cr6.eq) goto loc_830D8914;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x830d88f4
	if (cr6.eq) goto loc_830D88F4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x830d88e0
	if (!cr6.eq) goto loc_830D88E0;
loc_830D88D0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// b 0x830d8900
	goto loc_830D8900;
loc_830D88E0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830d8914
	if (!cr6.eq) goto loc_830D8914;
	// bl 0x830e80e0
	sub_830E80E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830d88d0
	if (!cr0.eq) goto loc_830D88D0;
loc_830D88F4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_830D8900:
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
	// b 0x830d891c
	goto loc_830D891C;
loc_830D8914:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D891C:
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

__attribute__((alias("__imp__sub_830D8930"))) PPC_WEAK_FUNC(sub_830D8930);
PPC_FUNC_IMPL(__imp__sub_830D8930) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,2051
	cr6.compare<uint32_t>(r11.u32, 2051, xer);
	// beq cr6,0x830d89b4
	if (cr6.eq) goto loc_830D89B4;
	// cmplwi cr6,r11,2052
	cr6.compare<uint32_t>(r11.u32, 2052, xer);
	// bne cr6,0x830d89e4
	if (!cr6.eq) goto loc_830D89E4;
	// li r11,1
	r11.s64 = 1;
	// lwz r30,16(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d89e4
	if (cr0.lt) goto loc_830D89E4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// beq cr6,0x830d8998
	if (cr6.eq) goto loc_830D8998;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// b 0x830d899c
	goto loc_830D899C;
loc_830D8998:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_830D899C:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x830d89e4
	goto loc_830D89E4;
loc_830D89B4:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_830D89E4:
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

__attribute__((alias("__imp__sub_830D8A00"))) PPC_WEAK_FUNC(sub_830D8A00);
PPC_FUNC_IMPL(__imp__sub_830D8A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d8a50
	if (cr0.lt) goto loc_830D8A50;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d8a48
	if (cr6.eq) goto loc_830D8A48;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x830d8a48
	if (!cr6.eq) goto loc_830D8A48;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x830d81c8
	sub_830D81C8(ctx, base);
	// b 0x830d8a50
	goto loc_830D8A50;
loc_830D8A48:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D8A50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8A60"))) PPC_WEAK_FUNC(sub_830D8A60);
PPC_FUNC_IMPL(__imp__sub_830D8A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d8ab0
	if (cr0.lt) goto loc_830D8AB0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d8aa8
	if (cr6.eq) goto loc_830D8AA8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x830d8aa8
	if (!cr6.eq) goto loc_830D8AA8;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lfs f1,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830d61d0
	sub_830D61D0(ctx, base);
	// b 0x830d8ab0
	goto loc_830D8AB0;
loc_830D8AA8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D8AB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8AC0"))) PPC_WEAK_FUNC(sub_830D8AC0);
PPC_FUNC_IMPL(__imp__sub_830D8AC0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,30,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830d8b20
	if (cr0.eq) goto loc_830D8B20;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// addi r29,r30,-4
	r29.s64 = r30.s64 + -4;
	// mulli r11,r10,12
	r11.s64 = ctx.r10.s64 * 12;
	// addic. r31,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// blt 0x830d8b08
	if (cr0.lt) goto loc_830D8B08;
loc_830D8AF4:
	// addi r30,r30,-12
	r30.s64 = r30.s64 + -12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310bda8
	sub_8310BDA8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x830d8af4
	if (!cr0.lt) goto loc_830D8AF4;
loc_830D8B08:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830d8b18
	if (cr0.eq) goto loc_830D8B18;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830D8B18:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x830d8b3c
	goto loc_830D8B3C;
loc_830D8B20:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310bda8
	sub_8310BDA8(ctx, base);
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830d8b38
	if (cr0.eq) goto loc_830D8B38;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830D8B38:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830D8B3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830D8B48"))) PPC_WEAK_FUNC(sub_830D8B48);
PPC_FUNC_IMPL(__imp__sub_830D8B48) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,30,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830d8ba8
	if (cr0.eq) goto loc_830D8BA8;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// addi r29,r30,-4
	r29.s64 = r30.s64 + -4;
	// mulli r11,r10,20
	r11.s64 = ctx.r10.s64 * 20;
	// addic. r31,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// blt 0x830d8b90
	if (cr0.lt) goto loc_830D8B90;
loc_830D8B7C:
	// addi r30,r30,-20
	r30.s64 = r30.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310b5c8
	sub_8310B5C8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x830d8b7c
	if (!cr0.lt) goto loc_830D8B7C;
loc_830D8B90:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830d8ba0
	if (cr0.eq) goto loc_830D8BA0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830D8BA0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x830d8bc4
	goto loc_830D8BC4;
loc_830D8BA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310b5c8
	sub_8310B5C8(ctx, base);
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830d8bc0
	if (cr0.eq) goto loc_830D8BC0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830D8BC0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830D8BC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830D8BD0"))) PPC_WEAK_FUNC(sub_830D8BD0);
PPC_FUNC_IMPL(__imp__sub_830D8BD0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d8c20
	if (cr6.eq) goto loc_830D8C20;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x830d8c20
	if (!cr6.eq) goto loc_830D8C20;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bge cr6,0x830d8c20
	if (!cr6.lt) goto loc_830D8C20;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d8c28
	goto loc_830D8C28;
loc_830D8C20:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D8C28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8C38"))) PPC_WEAK_FUNC(sub_830D8C38);
PPC_FUNC_IMPL(__imp__sub_830D8C38) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d8c88
	if (cr6.eq) goto loc_830D8C88;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x830d8c88
	if (!cr6.eq) goto loc_830D8C88;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bge cr6,0x830d8c88
	if (!cr6.lt) goto loc_830D8C88;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d8c90
	goto loc_830D8C90;
loc_830D8C88:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D8C90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8CA0"))) PPC_WEAK_FUNC(sub_830D8CA0);
PPC_FUNC_IMPL(__imp__sub_830D8CA0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d8cf0
	if (cr6.eq) goto loc_830D8CF0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x830d8cf0
	if (!cr6.eq) goto loc_830D8CF0;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bge cr6,0x830d8cf0
	if (!cr6.lt) goto loc_830D8CF0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d8cf8
	goto loc_830D8CF8;
loc_830D8CF0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D8CF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8D08"))) PPC_WEAK_FUNC(sub_830D8D08);
PPC_FUNC_IMPL(__imp__sub_830D8D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r11.u32);
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r11.u32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stfs f0,144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stfs f0,148(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stfs f0,76(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// stfs f0,140(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// stw r10,232(r31)
	PPC_STORE_U32(r31.u32 + 232, ctx.r10.u32);
	// stw r10,220(r31)
	PPC_STORE_U32(r31.u32 + 220, ctx.r10.u32);
	// stw r10,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r10.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r11.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
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

__attribute__((alias("__imp__sub_830D8E28"))) PPC_WEAK_FUNC(sub_830D8E28);
PPC_FUNC_IMPL(__imp__sub_830D8E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830d8e80
	if (cr6.eq) goto loc_830D8E80;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x830d8e80
	if (!cr6.eq) goto loc_830D8E80;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d8e88
	if (cr0.lt) goto loc_830D8E88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831073a0
	sub_831073A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d8e88
	goto loc_830D8E88;
loc_830D8E80:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D8E88:
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

__attribute__((alias("__imp__sub_830D8EA0"))) PPC_WEAK_FUNC(sub_830D8EA0);
PPC_FUNC_IMPL(__imp__sub_830D8EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830d8ef8
	if (cr6.eq) goto loc_830D8EF8;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x830d8ef8
	if (!cr6.eq) goto loc_830D8EF8;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d8f00
	if (cr0.lt) goto loc_830D8F00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831073a0
	sub_831073A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d8f00
	goto loc_830D8F00;
loc_830D8EF8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D8F00:
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

__attribute__((alias("__imp__sub_830D8F18"))) PPC_WEAK_FUNC(sub_830D8F18);
PPC_FUNC_IMPL(__imp__sub_830D8F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830d8f70
	if (cr6.eq) goto loc_830D8F70;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x830d8f70
	if (!cr6.eq) goto loc_830D8F70;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d8f78
	if (cr0.lt) goto loc_830D8F78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831073a0
	sub_831073A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d8f78
	goto loc_830D8F78;
loc_830D8F70:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D8F78:
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

__attribute__((alias("__imp__sub_830D8F90"))) PPC_WEAK_FUNC(sub_830D8F90);
PPC_FUNC_IMPL(__imp__sub_830D8F90) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x830d8fc0
	if (cr6.eq) goto loc_830D8FC0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830d8fd0
	goto loc_830D8FD0;
loc_830D8FC0:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
loc_830D8FD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8FE0"))) PPC_WEAK_FUNC(sub_830D8FE0);
PPC_FUNC_IMPL(__imp__sub_830D8FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,20704
	r31.s64 = r11.s64 + 20704;
	// lwz r11,-12792(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12792);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830d90c4
	if (!cr0.eq) goto loc_830D90C4;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-27432
	ctx.r9.s64 = ctx.r10.s64 + -27432;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-12792(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12792, r11.u32);
	// li r11,16
	r11.s64 = 16;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-28784
	ctx.r9.s64 = ctx.r9.s64 + -28784;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-27472
	ctx.r9.s64 = r11.s64 + -27472;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,28
	ctx.r9.s64 = 28;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
loc_830D90C4:
	// li r11,2
	r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830D90D8"))) PPC_WEAK_FUNC(sub_830D90D8);
PPC_FUNC_IMPL(__imp__sub_830D90D8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d9118
	if (cr6.eq) goto loc_830D9118;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x830d9118
	if (!cr6.eq) goto loc_830D9118;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x830d9120
	goto loc_830D9120;
loc_830D9118:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9120:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9130"))) PPC_WEAK_FUNC(sub_830D9130);
PPC_FUNC_IMPL(__imp__sub_830D9130) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d9170
	if (cr6.eq) goto loc_830D9170;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x830d9170
	if (!cr6.eq) goto loc_830D9170;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x830d9178
	goto loc_830D9178;
loc_830D9170:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9178:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9188"))) PPC_WEAK_FUNC(sub_830D9188);
PPC_FUNC_IMPL(__imp__sub_830D9188) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d91c8
	if (cr6.eq) goto loc_830D91C8;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x830d91c8
	if (!cr6.eq) goto loc_830D91C8;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x830fc918
	sub_830FC918(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d91d0
	goto loc_830D91D0;
loc_830D91C8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D91D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D91E0"))) PPC_WEAK_FUNC(sub_830D91E0);
PPC_FUNC_IMPL(__imp__sub_830D91E0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d9220
	if (cr6.eq) goto loc_830D9220;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x830d9220
	if (!cr6.eq) goto loc_830D9220;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// b 0x830d9228
	goto loc_830D9228;
loc_830D9220:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9228:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9238"))) PPC_WEAK_FUNC(sub_830D9238);
PPC_FUNC_IMPL(__imp__sub_830D9238) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d9278
	if (cr6.eq) goto loc_830D9278;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x830d9278
	if (!cr6.eq) goto loc_830D9278;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// b 0x830d9280
	goto loc_830D9280;
loc_830D9278:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9280:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9290"))) PPC_WEAK_FUNC(sub_830D9290);
PPC_FUNC_IMPL(__imp__sub_830D9290) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d92d0
	if (cr6.eq) goto loc_830D92D0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x830d92d0
	if (!cr6.eq) goto loc_830D92D0;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x830fcaf0
	sub_830FCAF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d92d8
	goto loc_830D92D8;
loc_830D92D0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D92D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D92E8"))) PPC_WEAK_FUNC(sub_830D92E8);
PPC_FUNC_IMPL(__imp__sub_830D92E8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d9328
	if (cr6.eq) goto loc_830D9328;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x830d9328
	if (!cr6.eq) goto loc_830D9328;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// b 0x830d9330
	goto loc_830D9330;
loc_830D9328:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9330:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9340"))) PPC_WEAK_FUNC(sub_830D9340);
PPC_FUNC_IMPL(__imp__sub_830D9340) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d9398
	if (cr6.eq) goto loc_830D9398;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x830d9398
	if (!cr6.eq) goto loc_830D9398;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r10.u32);
	// b 0x830d93a0
	goto loc_830D93A0;
loc_830D9398:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D93A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D93B0"))) PPC_WEAK_FUNC(sub_830D93B0);
PPC_FUNC_IMPL(__imp__sub_830D93B0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// clrlwi r4,r11,31
	ctx.r4.u64 = r11.u32 & 0x1;
	// bl 0x8310b0b0
	sub_8310B0B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D93F0"))) PPC_WEAK_FUNC(sub_830D93F0);
PPC_FUNC_IMPL(__imp__sub_830D93F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// ori r9,r5,65534
	ctx.r9.u64 = ctx.r5.u64 | 65534;
	// stb r10,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r10.u8);
	// lfs f13,-21220(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -21220);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// lfs f12,-9488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -9488);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// lfs f11,-24676(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -24676);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stb r10,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r10.u8);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stb r10,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r10.u8);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, r11.u32);
	// stfs f0,156(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, r11.u32);
	// stfs f0,164(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f0,168(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f13,172(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f12,176(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f11,180(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// stfs f0,192(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r11.u32);
	// stfs f0,196(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// stfs f0,200(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// stfs f0,204(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// stw r9,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r9.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, r11.u32);
	// stb r11,188(r3)
	PPC_STORE_U8(ctx.r3.u32 + 188, r11.u8);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D94F0"))) PPC_WEAK_FUNC(sub_830D94F0);
PPC_FUNC_IMPL(__imp__sub_830D94F0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x830d6008
	sub_830D6008(ctx, base);
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

__attribute__((alias("__imp__sub_830D9548"))) PPC_WEAK_FUNC(sub_830D9548);
PPC_FUNC_IMPL(__imp__sub_830D9548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d958c
	if (cr0.lt) goto loc_830D958C;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x830d9580
	if (cr6.eq) goto loc_830D9580;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830d958c
	goto loc_830D958C;
loc_830D9580:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x831007a0
	sub_831007A0(ctx, base);
loc_830D958C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D95A0"))) PPC_WEAK_FUNC(sub_830D95A0);
PPC_FUNC_IMPL(__imp__sub_830D95A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d95e4
	if (cr0.lt) goto loc_830D95E4;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x830d95d8
	if (cr6.eq) goto loc_830D95D8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830d95e4
	goto loc_830D95E4;
loc_830D95D8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x830eedd0
	sub_830EEDD0(ctx, base);
loc_830D95E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D95F8"))) PPC_WEAK_FUNC(sub_830D95F8);
PPC_FUNC_IMPL(__imp__sub_830D95F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d963c
	if (cr0.lt) goto loc_830D963C;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x830d9630
	if (cr6.eq) goto loc_830D9630;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830d963c
	goto loc_830D963C;
loc_830D9630:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x83100730
	sub_83100730(ctx, base);
loc_830D963C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9650"))) PPC_WEAK_FUNC(sub_830D9650);
PPC_FUNC_IMPL(__imp__sub_830D9650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d9694
	if (cr0.lt) goto loc_830D9694;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x830d9688
	if (cr6.eq) goto loc_830D9688;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830d9694
	goto loc_830D9694;
loc_830D9688:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x830f68a8
	sub_830F68A8(ctx, base);
loc_830D9694:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D96A8"))) PPC_WEAK_FUNC(sub_830D96A8);
PPC_FUNC_IMPL(__imp__sub_830D96A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d96ec
	if (cr0.lt) goto loc_830D96EC;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x830d96e0
	if (cr6.eq) goto loc_830D96E0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830d96ec
	goto loc_830D96EC;
loc_830D96E0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x83100610
	sub_83100610(ctx, base);
loc_830D96EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9700"))) PPC_WEAK_FUNC(sub_830D9700);
PPC_FUNC_IMPL(__imp__sub_830D9700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d9744
	if (cr0.lt) goto loc_830D9744;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x830d9738
	if (cr6.eq) goto loc_830D9738;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830d9744
	goto loc_830D9744;
loc_830D9738:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x831006c8
	sub_831006C8(ctx, base);
loc_830D9744:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9758"))) PPC_WEAK_FUNC(sub_830D9758);
PPC_FUNC_IMPL(__imp__sub_830D9758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d97b0
	if (cr0.lt) goto loc_830D97B0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d97a8
	if (cr6.eq) goto loc_830D97A8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830d97a8
	if (!cr6.eq) goto loc_830D97A8;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r9,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r9.u8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x830d97b0
	goto loc_830D97B0;
loc_830D97A8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D97B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D97C0"))) PPC_WEAK_FUNC(sub_830D97C0);
PPC_FUNC_IMPL(__imp__sub_830D97C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d9808
	if (cr0.lt) goto loc_830D9808;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x830d97f8
	if (cr6.eq) goto loc_830D97F8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830d9808
	goto loc_830D9808;
loc_830D97F8:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, r11.u32);
loc_830D9808:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9818"))) PPC_WEAK_FUNC(sub_830D9818);
PPC_FUNC_IMPL(__imp__sub_830D9818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-12784
	r31.s64 = r11.s64 + -12784;
	// lwz r11,-12640(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12640);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830d9950
	if (!cr0.eq) goto loc_830D9950;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-27348
	ctx.r9.s64 = ctx.r10.s64 + -27348;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-12640(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12640, r11.u32);
	// li r11,8
	r11.s64 = 8;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-26792
	ctx.r9.s64 = ctx.r9.s64 + -26792;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-27380
	ctx.r9.s64 = r11.s64 + -27380;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,144
	ctx.r9.s64 = 144;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r9,r11,-27404
	ctx.r9.s64 = r11.s64 + -27404;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r11,r31,76
	r11.s64 = r31.s64 + 76;
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r9,-26688
	r11.s64 = ctx.r9.s64 + -26688;
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// std r30,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r30.u64);
loc_830D9950:
	// li r11,3
	r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830D9968"))) PPC_WEAK_FUNC(sub_830D9968);
PPC_FUNC_IMPL(__imp__sub_830D9968) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830d99a4
	if (!cr6.eq) goto loc_830D99A4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830d999c
	if (!cr6.eq) goto loc_830D999C;
loc_830D9994:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d99d8
	goto loc_830D99D8;
loc_830D999C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d99bc
	if (cr6.eq) goto loc_830D99BC;
loc_830D99A4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830d99bc
	if (cr6.eq) goto loc_830D99BC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830d9994
	if (cr0.eq) goto loc_830D9994;
loc_830D99BC:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,12(r29)
	PPC_STORE_U8(r29.u32 + 12, r11.u8);
	// bl 0x830eef78
	sub_830EEF78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
loc_830D99D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830D99E0"))) PPC_WEAK_FUNC(sub_830D99E0);
PPC_FUNC_IMPL(__imp__sub_830D99E0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d9a3c
	if (cr6.eq) goto loc_830D9A3C;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x830d9a3c
	if (!cr6.eq) goto loc_830D9A3C;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x830d9a3c
	if (cr6.lt) goto loc_830D9A3C;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x830d9a3c
	if (cr6.gt) goto loc_830D9A3C;
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d9a44
	goto loc_830D9A44;
loc_830D9A3C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9A44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9A58"))) PPC_WEAK_FUNC(sub_830D9A58);
PPC_FUNC_IMPL(__imp__sub_830D9A58) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d9aac
	if (cr6.eq) goto loc_830D9AAC;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x830d9aac
	if (!cr6.eq) goto loc_830D9AAC;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x830d9aac
	if (cr6.lt) goto loc_830D9AAC;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d9ab4
	goto loc_830D9AB4;
loc_830D9AAC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9AB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9AC8"))) PPC_WEAK_FUNC(sub_830D9AC8);
PPC_FUNC_IMPL(__imp__sub_830D9AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d9b24
	if (cr0.lt) goto loc_830D9B24;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d9b1c
	if (cr6.eq) goto loc_830D9B1C;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x830d9b1c
	if (!cr6.eq) goto loc_830D9B1C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// b 0x830d9b24
	goto loc_830D9B24;
loc_830D9B1C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9B24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9B38"))) PPC_WEAK_FUNC(sub_830D9B38);
PPC_FUNC_IMPL(__imp__sub_830D9B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d9b98
	if (cr0.lt) goto loc_830D9B98;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d9b90
	if (cr6.eq) goto loc_830D9B90;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830d9b90
	if (!cr6.eq) goto loc_830D9B90;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r11,r7
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x830d9b98
	goto loc_830D9B98;
loc_830D9B90:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9B98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9BA8"))) PPC_WEAK_FUNC(sub_830D9BA8);
PPC_FUNC_IMPL(__imp__sub_830D9BA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// b 0x830d9b38
	sub_830D9B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D9BB0"))) PPC_WEAK_FUNC(sub_830D9BB0);
PPC_FUNC_IMPL(__imp__sub_830D9BB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x830d9b38
	sub_830D9B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D9BB8"))) PPC_WEAK_FUNC(sub_830D9BB8);
PPC_FUNC_IMPL(__imp__sub_830D9BB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x830d9b38
	sub_830D9B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D9BC0"))) PPC_WEAK_FUNC(sub_830D9BC0);
PPC_FUNC_IMPL(__imp__sub_830D9BC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,24
	ctx.r3.s64 = 24;
	// b 0x830d9b38
	sub_830D9B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D9BC8"))) PPC_WEAK_FUNC(sub_830D9BC8);
PPC_FUNC_IMPL(__imp__sub_830D9BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830d9c24
	if (cr0.lt) goto loc_830D9C24;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d9c1c
	if (cr6.eq) goto loc_830D9C1C;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x830d9c1c
	if (!cr6.eq) goto loc_830D9C1C;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x830d9c24
	goto loc_830D9C24;
loc_830D9C1C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9C24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9C38"))) PPC_WEAK_FUNC(sub_830D9C38);
PPC_FUNC_IMPL(__imp__sub_830D9C38) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d9cb8
	if (cr6.eq) goto loc_830D9CB8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x830d9cb8
	if (!cr6.eq) goto loc_830D9CB8;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x830d9c8c
	if (!cr0.lt) goto loc_830D9C8C;
loc_830D9C84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830d9cc0
	goto loc_830D9CC0;
loc_830D9C8C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830d9c84
	if (cr0.eq) goto loc_830D9C84;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x830d9c84
	goto loc_830D9C84;
loc_830D9CB8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9CC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830D9CC8"))) PPC_WEAK_FUNC(sub_830D9CC8);
PPC_FUNC_IMPL(__imp__sub_830D9CC8) {
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
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8311f908
	sub_8311F908(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r11.u32);
	// beq 0x830d9d0c
	if (cr0.eq) goto loc_830D9D0C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_830D9D0C:
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

__attribute__((alias("__imp__sub_830D9D28"))) PPC_WEAK_FUNC(sub_830D9D28);
PPC_FUNC_IMPL(__imp__sub_830D9D28) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830d9d84
	if (cr6.eq) goto loc_830D9D84;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x830d9d84
	if (!cr6.eq) goto loc_830D9D84;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x830d6b68
	sub_830D6B68(ctx, base);
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// b 0x830d9d8c
	goto loc_830D9D8C;
loc_830D9D84:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9D8C:
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

__attribute__((alias("__imp__sub_830D9DA8"))) PPC_WEAK_FUNC(sub_830D9DA8);
PPC_FUNC_IMPL(__imp__sub_830D9DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d9e04
	if (cr6.eq) goto loc_830D9E04;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x830d9e04
	if (!cr6.eq) goto loc_830D9E04;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,184(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 184, temp.u32);
	// stfs f13,188(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 188, temp.u32);
	// stfs f12,192(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 192, temp.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x830d9e0c
	goto loc_830D9E0C;
loc_830D9E04:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9E0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9E20"))) PPC_WEAK_FUNC(sub_830D9E20);
PPC_FUNC_IMPL(__imp__sub_830D9E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d9e7c
	if (cr6.eq) goto loc_830D9E7C;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x830d9e7c
	if (!cr6.eq) goto loc_830D9E7C;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,200(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 200, temp.u32);
	// stfs f13,204(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 204, temp.u32);
	// stfs f12,208(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 208, temp.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x830d9e84
	goto loc_830D9E84;
loc_830D9E7C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9E84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9E98"))) PPC_WEAK_FUNC(sub_830D9E98);
PPC_FUNC_IMPL(__imp__sub_830D9E98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d9ee4
	if (cr6.eq) goto loc_830D9EE4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x830d9ee4
	if (!cr6.eq) goto loc_830D9EE4;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,196(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 196, temp.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x830d9eec
	goto loc_830D9EEC;
loc_830D9EE4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9EEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9F00"))) PPC_WEAK_FUNC(sub_830D9F00);
PPC_FUNC_IMPL(__imp__sub_830D9F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d9f64
	if (cr6.eq) goto loc_830D9F64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bne cr6,0x830d9f64
	if (!cr6.eq) goto loc_830D9F64;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,212(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 212, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,216(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 216, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,220(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 220, temp.u32);
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,224(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 224, temp.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x830d9f6c
	goto loc_830D9F6C;
loc_830D9F64:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9F6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9F80"))) PPC_WEAK_FUNC(sub_830D9F80);
PPC_FUNC_IMPL(__imp__sub_830D9F80) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830d9fd0
	if (cr6.eq) goto loc_830D9FD0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830d9fd0
	if (!cr6.eq) goto loc_830D9FD0;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r10,232(r11)
	PPC_STORE_U32(r11.u32 + 232, ctx.r10.u32);
	// bl 0x830d6b68
	sub_830D6B68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d9fd8
	goto loc_830D9FD8;
loc_830D9FD0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830D9FD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D9FE8"))) PPC_WEAK_FUNC(sub_830D9FE8);
PPC_FUNC_IMPL(__imp__sub_830D9FE8) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830da038
	if (cr6.eq) goto loc_830DA038;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830da038
	if (!cr6.eq) goto loc_830DA038;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r10,236(r11)
	PPC_STORE_U32(r11.u32 + 236, ctx.r10.u32);
	// bl 0x830d6b68
	sub_830D6B68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830da040
	goto loc_830DA040;
loc_830DA038:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830DA040:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DA050"))) PPC_WEAK_FUNC(sub_830DA050);
PPC_FUNC_IMPL(__imp__sub_830DA050) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830da094
	if (cr6.eq) goto loc_830DA094;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830da094
	if (cr6.eq) goto loc_830DA094;
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// clrlwi r4,r11,30
	ctx.r4.u64 = r11.u32 & 0x3;
	// bl 0x8310b140
	sub_8310B140(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830da09c
	goto loc_830DA09C;
loc_830DA094:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830DA09C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DA0B0"))) PPC_WEAK_FUNC(sub_830DA0B0);
PPC_FUNC_IMPL(__imp__sub_830DA0B0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830da110
	if (cr6.eq) goto loc_830DA110;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830da110
	if (!cr6.eq) goto loc_830DA110;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x830da110
	if (cr6.gt) goto loc_830DA110;
	// lwz r9,240(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x830da118
	goto loc_830DA118;
loc_830DA110:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830DA118:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DA128"))) PPC_WEAK_FUNC(sub_830DA128);
PPC_FUNC_IMPL(__imp__sub_830DA128) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830da16c
	if (cr6.eq) goto loc_830DA16C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830da16c
	if (cr6.eq) goto loc_830DA16C;
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r4,r11,30,30,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3;
	// bl 0x8310b140
	sub_8310B140(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830da174
	goto loc_830DA174;
loc_830DA16C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830DA174:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DA188"))) PPC_WEAK_FUNC(sub_830DA188);
PPC_FUNC_IMPL(__imp__sub_830DA188) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830da1ec
	if (cr6.eq) goto loc_830DA1EC;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830da1ec
	if (!cr6.eq) goto loc_830DA1EC;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x830da1ec
	if (cr6.gt) goto loc_830DA1EC;
	// lwz r9,240(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r9,0,30,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x830da1f4
	goto loc_830DA1F4;
loc_830DA1EC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830DA1F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DA208"))) PPC_WEAK_FUNC(sub_830DA208);
PPC_FUNC_IMPL(__imp__sub_830DA208) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830da24c
	if (cr6.eq) goto loc_830DA24C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830da24c
	if (cr6.eq) goto loc_830DA24C;
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r4,r11,0,26,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	// bl 0x8310b140
	sub_8310B140(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830da254
	goto loc_830DA254;
loc_830DA24C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830DA254:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DA268"))) PPC_WEAK_FUNC(sub_830DA268);
PPC_FUNC_IMPL(__imp__sub_830DA268) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830da2c0
	if (cr6.eq) goto loc_830DA2C0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830da2c0
	if (!cr6.eq) goto loc_830DA2C0;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x830da2c8
	goto loc_830DA2C8;
loc_830DA2C0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830DA2C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DA2D8"))) PPC_WEAK_FUNC(sub_830DA2D8);
PPC_FUNC_IMPL(__imp__sub_830DA2D8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83120350
	sub_83120350(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r11.u32);
	// beq 0x830da318
	if (cr0.eq) goto loc_830DA318;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_830DA318:
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

__attribute__((alias("__imp__sub_830DA338"))) PPC_WEAK_FUNC(sub_830DA338);
PPC_FUNC_IMPL(__imp__sub_830DA338) {
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12636
	r31.s64 = r11.s64 + -12636;
	// lwz r11,-12588(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12588);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830da3cc
	if (!cr0.eq) goto loc_830DA3CC;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r10,-27328
	ctx.r9.s64 = ctx.r10.s64 + -27328;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-12588(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12588, r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r11,168
	r11.s64 = 168;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830eb8a8
	sub_830EB8A8(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// li r11,0
	r11.s64 = 0;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-23152
	ctx.r9.s64 = ctx.r9.s64 + -23152;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// std r8,40(r31)
	PPC_STORE_U64(r31.u32 + 40, ctx.r8.u64);
loc_830DA3CC:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_830DA3F0"))) PPC_WEAK_FUNC(sub_830DA3F0);
PPC_FUNC_IMPL(__imp__sub_830DA3F0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831203b0
	sub_831203B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r11.u32);
	// beq 0x830da430
	if (cr0.eq) goto loc_830DA430;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_830DA430:
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

__attribute__((alias("__imp__sub_830DA450"))) PPC_WEAK_FUNC(sub_830DA450);
PPC_FUNC_IMPL(__imp__sub_830DA450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830da4b4
	if (cr6.eq) goto loc_830DA4B4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bne cr6,0x830da4b4
	if (!cr6.eq) goto loc_830DA4B4;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,168(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 168, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,172(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 172, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 176, temp.u32);
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,180(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 180, temp.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x830da4bc
	goto loc_830DA4BC;
loc_830DA4B4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830DA4BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DA4D0"))) PPC_WEAK_FUNC(sub_830DA4D0);
PPC_FUNC_IMPL(__imp__sub_830DA4D0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83120420
	sub_83120420(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r11.u32);
	// beq 0x830da510
	if (cr0.eq) goto loc_830DA510;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_830DA510:
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

__attribute__((alias("__imp__sub_830DA530"))) PPC_WEAK_FUNC(sub_830DA530);
PPC_FUNC_IMPL(__imp__sub_830DA530) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83120480
	sub_83120480(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
	// beq 0x830da570
	if (cr0.eq) goto loc_830DA570;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_830DA570:
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

__attribute__((alias("__imp__sub_830DA590"))) PPC_WEAK_FUNC(sub_830DA590);
PPC_FUNC_IMPL(__imp__sub_830DA590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830da5dc
	if (cr6.eq) goto loc_830DA5DC;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x830da5dc
	if (!cr6.eq) goto loc_830DA5DC;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,168(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 168, temp.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x830da5e4
	goto loc_830DA5E4;
loc_830DA5DC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830DA5E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DA5F8"))) PPC_WEAK_FUNC(sub_830DA5F8);
PPC_FUNC_IMPL(__imp__sub_830DA5F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-12584
	r31.s64 = r11.s64 + -12584;
	// lwz r11,-12488(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12488);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830da6e0
	if (!cr0.eq) goto loc_830DA6E0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-27280
	ctx.r9.s64 = ctx.r10.s64 + -27280;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-12488(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12488, r11.u32);
	// li r11,168
	r11.s64 = 168;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830eb8a8
	sub_830EB8A8(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-23152
	ctx.r9.s64 = ctx.r9.s64 + -23152;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-27304
	ctx.r9.s64 = r11.s64 + -27304;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,172
	ctx.r9.s64 = 172;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830eb840
	sub_830EB840(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-22696
	ctx.r9.s64 = ctx.r9.s64 + -22696;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
loc_830DA6E0:
	// li r11,2
	r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DA6F8"))) PPC_WEAK_FUNC(sub_830DA6F8);
PPC_FUNC_IMPL(__imp__sub_830DA6F8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831204d8
	sub_831204D8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// beq 0x830da738
	if (cr0.eq) goto loc_830DA738;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_830DA738:
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

__attribute__((alias("__imp__sub_830DA758"))) PPC_WEAK_FUNC(sub_830DA758);
PPC_FUNC_IMPL(__imp__sub_830DA758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830da7a4
	if (cr6.eq) goto loc_830DA7A4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x830da7a4
	if (!cr6.eq) goto loc_830DA7A4;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,172(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 172, temp.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x830da7ac
	goto loc_830DA7AC;
loc_830DA7A4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830DA7AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DA7C0"))) PPC_WEAK_FUNC(sub_830DA7C0);
PPC_FUNC_IMPL(__imp__sub_830DA7C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-12480
	r31.s64 = r11.s64 + -12480;
	// lwz r11,-12384(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12384);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830da8a8
	if (!cr0.eq) goto loc_830DA8A8;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-27280
	ctx.r9.s64 = ctx.r10.s64 + -27280;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-12384(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12384, r11.u32);
	// li r11,168
	r11.s64 = 168;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830eb8a8
	sub_830EB8A8(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-23152
	ctx.r9.s64 = ctx.r9.s64 + -23152;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-27304
	ctx.r9.s64 = r11.s64 + -27304;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,172
	ctx.r9.s64 = 172;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830eb840
	sub_830EB840(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-22696
	ctx.r9.s64 = ctx.r9.s64 + -22696;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
loc_830DA8A8:
	// li r11,2
	r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DA8C0"))) PPC_WEAK_FUNC(sub_830DA8C0);
PPC_FUNC_IMPL(__imp__sub_830DA8C0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83120550
	sub_83120550(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// beq 0x830da900
	if (cr0.eq) goto loc_830DA900;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_830DA900:
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

__attribute__((alias("__imp__sub_830DA920"))) PPC_WEAK_FUNC(sub_830DA920);
PPC_FUNC_IMPL(__imp__sub_830DA920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-12376
	r31.s64 = r11.s64 + -12376;
	// lwz r11,-12280(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12280);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830daa08
	if (!cr0.eq) goto loc_830DAA08;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-27280
	ctx.r9.s64 = ctx.r10.s64 + -27280;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-12280(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12280, r11.u32);
	// li r11,168
	r11.s64 = 168;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830eb8a8
	sub_830EB8A8(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-23152
	ctx.r9.s64 = ctx.r9.s64 + -23152;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-27304
	ctx.r9.s64 = r11.s64 + -27304;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,172
	ctx.r9.s64 = 172;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830eb840
	sub_830EB840(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-22696
	ctx.r9.s64 = ctx.r9.s64 + -22696;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
loc_830DAA08:
	// li r11,2
	r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DAA20"))) PPC_WEAK_FUNC(sub_830DAA20);
PPC_FUNC_IMPL(__imp__sub_830DAA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830daa44
	if (!cr6.eq) goto loc_830DAA44;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830dab08
	goto loc_830DAB08;
loc_830DAA44:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831089e0
	sub_831089E0(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-13616
	ctx.r3.s64 = r11.s64 + -13616;
	// bl 0x8310c158
	sub_8310C158(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830daa88
	if (cr6.eq) goto loc_830DAA88;
	// bl 0x830daa20
	sub_830DAA20(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_830DAA88:
	// addi r11,r30,52
	r11.s64 = r30.s64 + 52;
loc_830DAA8C:
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
	// bne 0x830daa8c
	if (!cr0.eq) goto loc_830DAA8C;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r11,-13720
	r30.s64 = r11.s64 + -13720;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,-13636
	r11.s64 = r11.s64 + -13636;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x830daaf4
	if (cr6.lt) goto loc_830DAAF4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x830daaf4
	if (!cr6.lt) goto loc_830DAAF4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// b 0x830daafc
	goto loc_830DAAFC;
loc_830DAAF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830DAAFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_830DAB08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DAB10"))) PPC_WEAK_FUNC(sub_830DAB10);
PPC_FUNC_IMPL(__imp__sub_830DAB10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r11,0
	r11.s64 = 0;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// clrlwi r11,r8,16
	r11.u64 = ctx.r8.u32 & 0xFFFF;
	// beq cr6,0x830dab9c
	if (cr6.eq) goto loc_830DAB9C;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r10,r10,-13616
	ctx.r10.s64 = ctx.r10.s64 + -13616;
	// lwz r9,544(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 544);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x830dab9c
	if (!cr6.lt) goto loc_830DAB9C;
	// rlwinm r7,r11,25,7,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFC;
	// clrlwi r11,r11,23
	r11.u64 = r11.u32 & 0x1FF;
	// mulli r9,r11,12
	ctx.r9.s64 = r11.s64 * 12;
	// lwzx r11,r7,r10
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x830dab9c
	if (!cr6.eq) goto loc_830DAB9C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r9,r8,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830dab9c
	if (!cr6.eq) goto loc_830DAB9C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830daba8
	if (!cr6.eq) goto loc_830DABA8;
loc_830DAB9C:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x830dabbc
	goto loc_830DABBC;
loc_830DABA8:
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x830dabd4
	if (!cr6.eq) goto loc_830DABD4;
loc_830DABB4:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
loc_830DABBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830DABD0:
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_830DABD4:
	// lwz r11,44(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x830dabf0
	if (cr6.lt) goto loc_830DABF0;
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x830dac14
	if (cr6.lt) goto loc_830DAC14;
loc_830DABF0:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r7,40(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x830d7040
	sub_830D7040(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830dabb4
	if (cr0.lt) goto loc_830DABB4;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x830dabd0
	if (!cr6.eq) goto loc_830DABD0;
	// b 0x830dabb4
	goto loc_830DABB4;
loc_830DAC14:
	// lwz r11,44(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,28(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// b 0x830dabbc
	goto loc_830DABBC;
}

__attribute__((alias("__imp__sub_830DAC38"))) PPC_WEAK_FUNC(sub_830DAC38);
PPC_FUNC_IMPL(__imp__sub_830DAC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830dad84
	if (cr6.eq) goto loc_830DAD84;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830dad84
	if (cr6.eq) goto loc_830DAD84;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dad84
	if (cr6.eq) goto loc_830DAD84;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r11,32(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830dac94
	if (cr6.eq) goto loc_830DAC94;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830dad8c
	goto loc_830DAD8C;
loc_830DAC94:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830dacac
	if (cr0.eq) goto loc_830DACAC;
loc_830DACA0:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x830dad8c
	goto loc_830DAD8C;
loc_830DACAC:
	// lwz r11,20(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// bgt cr6,0x830daca0
	if (cr6.gt) goto loc_830DACA0;
	// lis r12,-32231
	r12.s64 = -2112290816;
	// addi r12,r12,-27152
	r12.s64 = r12.s64 + -27152;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-31986
	r12.s64 = -2096234496;
	// addi r12,r12,-21344
	r12.s64 = r12.s64 + -21344;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_830DACE4;
	case 1:
		goto loc_830DAD18;
	case 2:
		goto loc_830DAD24;
	case 3:
		goto loc_830DAD30;
	case 4:
		goto loc_830DAD48;
	case 5:
		goto loc_830DAD3C;
	case 6:
		goto loc_830DAD5C;
	case 7:
		goto loc_830DAD64;
	case 8:
		goto loc_830DAD6C;
	case 9:
		goto loc_830DAD74;
	default:
		__builtin_unreachable();
	}
loc_830DACE4:
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830dacf8
	if (!cr6.eq) goto loc_830DACF8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x830dad10
	goto loc_830DAD10;
loc_830DACF8:
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_830DAD10:
	// bl 0x8310b0b0
	sub_8310B0B0(ctx, base);
	// b 0x830dad7c
	goto loc_830DAD7C;
loc_830DAD18:
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8310b0f8
	sub_8310B0F8(ctx, base);
	// b 0x830dad7c
	goto loc_830DAD7C;
loc_830DAD24:
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8310b140
	sub_8310B140(ctx, base);
	// b 0x830dad7c
	goto loc_830DAD7C;
loc_830DAD30:
	// lfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8310b188
	sub_8310B188(ctx, base);
	// b 0x830dad7c
	goto loc_830DAD7C;
loc_830DAD3C:
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8310b1d0
	sub_8310B1D0(ctx, base);
	// b 0x830dad7c
	goto loc_830DAD7C;
loc_830DAD48:
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8310b218
	sub_8310B218(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x830dad7c
	if (!cr0.lt) goto loc_830DAD7C;
	// b 0x830dad8c
	goto loc_830DAD8C;
loc_830DAD5C:
	// bl 0x8310b2a8
	sub_8310B2A8(ctx, base);
	// b 0x830dad7c
	goto loc_830DAD7C;
loc_830DAD64:
	// bl 0x8310b600
	sub_8310B600(ctx, base);
	// b 0x830dad7c
	goto loc_830DAD7C;
loc_830DAD6C:
	// bl 0x8310b360
	sub_8310B360(ctx, base);
	// b 0x830dad7c
	goto loc_830DAD7C;
loc_830DAD74:
	// lwz r5,28(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// bl 0x8310b3a8
	sub_8310B3A8(ctx, base);
loc_830DAD7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830dad8c
	goto loc_830DAD8C;
loc_830DAD84:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830DAD8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DADA0"))) PPC_WEAK_FUNC(sub_830DADA0);
PPC_FUNC_IMPL(__imp__sub_830DADA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830daee4
	if (cr6.eq) goto loc_830DAEE4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830daee4
	if (cr6.eq) goto loc_830DAEE4;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830daee4
	if (cr6.eq) goto loc_830DAEE4;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,36(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830dade4
	if (cr6.eq) goto loc_830DADE4;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_830DADE4:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830dadfc
	if (cr0.eq) goto loc_830DADFC;
loc_830DADF0:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
loc_830DADFC:
	// lwz r10,20(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x830dae18
	if (cr6.eq) goto loc_830DAE18;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// blr 
	return;
loc_830DAE18:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bgt cr6,0x830dadf0
	if (cr6.gt) goto loc_830DADF0;
	// lis r12,-32231
	r12.s64 = -2112290816;
	// addi r12,r12,-27136
	r12.s64 = r12.s64 + -27136;
	// lbzx r0,r12,r10
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r10.u32);
	// lis r12,-31986
	r12.s64 = -2096234496;
	// addi r12,r12,-21008
	r12.s64 = r12.s64 + -21008;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_830DAE4C;
	case 1:
		goto loc_830DAE7C;
	case 2:
		goto loc_830DAE7C;
	case 3:
		goto loc_830DAE84;
	case 4:
		goto loc_830DAE90;
	case 5:
		goto loc_830DAE7C;
	case 6:
		goto loc_830DAE9C;
	case 7:
		goto loc_830DAEB8;
	default:
		__builtin_unreachable();
	}
loc_830DAE4C:
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830dae7c
	if (cr6.eq) goto loc_830DAE7C;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// beq cr6,0x830dae70
	if (cr6.eq) goto loc_830DAE70;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x830dae74
	goto loc_830DAE74;
loc_830DAE70:
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_830DAE74:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x830daedc
	goto loc_830DAEDC;
loc_830DAE7C:
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x830dae74
	goto loc_830DAE74;
loc_830DAE84:
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// b 0x830daedc
	goto loc_830DAEDC;
loc_830DAE90:
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x830d77b0
	sub_830D77B0(ctx, base);
	return;
loc_830DAE9C:
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x830daedc
	goto loc_830DAEDC;
loc_830DAEB8:
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_830DAEDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830DAEE4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DAEF0"))) PPC_WEAK_FUNC(sub_830DAEF0);
PPC_FUNC_IMPL(__imp__sub_830DAEF0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// bgt cr6,0x830daf20
	if (cr6.gt) goto loc_830DAF20;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830daf74
	goto loc_830DAF74;
loc_830DAF20:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830daf74
	if (cr0.lt) goto loc_830DAF74;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r30,-2
	ctx.r9.s64 = r30.s64 + -2;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r30,-3
	ctx.r10.s64 = r30.s64 + -3;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,115
	ctx.r8.s64 = 115;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,117
	ctx.r7.s64 = 117;
	// sth r8,-2(r11)
	PPC_STORE_U16(r11.u32 + -2, ctx.r8.u16);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,120
	ctx.r8.s64 = 120;
	// sthx r7,r9,r11
	PPC_STORE_U16(ctx.r9.u32 + r11.u32, ctx.r7.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// sthx r8,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + r11.u32, ctx.r8.u16);
loc_830DAF74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DAF80"))) PPC_WEAK_FUNC(sub_830DAF80);
PPC_FUNC_IMPL(__imp__sub_830DAF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bne cr6,0x830daf94
	if (!cr6.eq) goto loc_830DAF94;
loc_830DAF8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_830DAF94:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dafb4
	if (cr6.eq) goto loc_830DAFB4;
	// b 0x830dafac
	goto loc_830DAFAC;
loc_830DAFA0:
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x830daf8c
	if (cr6.eq) goto loc_830DAF8C;
loc_830DAFAC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830dafa0
	if (!cr6.eq) goto loc_830DAFA0;
loc_830DAFB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DAFC0"))) PPC_WEAK_FUNC(sub_830DAFC0);
PPC_FUNC_IMPL(__imp__sub_830DAFC0) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r11,r8,16
	r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830db038
	if (cr6.eq) goto loc_830DB038;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r10,r10,-13616
	ctx.r10.s64 = ctx.r10.s64 + -13616;
	// lwz r9,544(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 544);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x830db038
	if (!cr6.lt) goto loc_830DB038;
	// rlwinm r6,r11,25,7,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFC;
	// clrlwi r11,r11,23
	r11.u64 = r11.u32 & 0x1FF;
	// mulli r9,r11,12
	ctx.r9.s64 = r11.s64 * 12;
	// lwzx r11,r6,r10
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x830db038
	if (!cr6.eq) goto loc_830DB038;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r9,r8,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830db038
	if (!cr6.eq) goto loc_830DB038;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_830DB038:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830db050
	if (!cr6.eq) goto loc_830DB050;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x830db0bc
	goto loc_830DB0BC;
loc_830DB050:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_830DB058:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x830db074
	if (cr6.lt) goto loc_830DB074;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x830db090
	if (cr6.lt) goto loc_830DB090;
loc_830DB074:
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830db0b4
	if (cr6.eq) goto loc_830DB0B4;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// b 0x830db058
	goto loc_830DB058;
loc_830DB090:
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// subf r11,r9,r4
	r11.s64 = ctx.r4.s64 - ctx.r9.s64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x830dac38
	sub_830DAC38(ctx, base);
	// b 0x830db0bc
	goto loc_830DB0BC;
loc_830DB0B4:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
loc_830DB0BC:
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

__attribute__((alias("__imp__sub_830DB0D0"))) PPC_WEAK_FUNC(sub_830DB0D0);
PPC_FUNC_IMPL(__imp__sub_830DB0D0) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r11,r8,16
	r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830db148
	if (cr6.eq) goto loc_830DB148;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r10,r10,-13616
	ctx.r10.s64 = ctx.r10.s64 + -13616;
	// lwz r9,544(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 544);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x830db148
	if (!cr6.lt) goto loc_830DB148;
	// rlwinm r6,r11,25,7,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFC;
	// clrlwi r11,r11,23
	r11.u64 = r11.u32 & 0x1FF;
	// mulli r9,r11,12
	ctx.r9.s64 = r11.s64 * 12;
	// lwzx r11,r6,r10
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x830db148
	if (!cr6.eq) goto loc_830DB148;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r9,r8,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830db148
	if (!cr6.eq) goto loc_830DB148;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_830DB148:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830db160
	if (!cr6.eq) goto loc_830DB160;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x830db1cc
	goto loc_830DB1CC;
loc_830DB160:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_830DB168:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x830db184
	if (cr6.lt) goto loc_830DB184;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x830db1a0
	if (cr6.lt) goto loc_830DB1A0;
loc_830DB184:
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830db1c4
	if (cr6.eq) goto loc_830DB1C4;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// b 0x830db168
	goto loc_830DB168;
loc_830DB1A0:
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// subf r11,r9,r4
	r11.s64 = ctx.r4.s64 - ctx.r9.s64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x830dada0
	sub_830DADA0(ctx, base);
	// b 0x830db1cc
	goto loc_830DB1CC;
loc_830DB1C4:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
loc_830DB1CC:
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

__attribute__((alias("__imp__sub_830DB1E0"))) PPC_WEAK_FUNC(sub_830DB1E0);
PPC_FUNC_IMPL(__imp__sub_830DB1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830db208
	if (!cr6.eq) goto loc_830DB208;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830db270
	goto loc_830DB270;
loc_830DB208:
	// li r29,0
	r29.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830dab10
	sub_830DAB10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830db270
	if (cr0.lt) goto loc_830DB270;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,44(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830db244
	if (!cr6.eq) goto loc_830DB244;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x830db270
	goto loc_830DB270;
loc_830DB244:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830db270
	if (cr0.lt) goto loc_830DB270;
	// lwz r11,44(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830DB270:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DB278"))) PPC_WEAK_FUNC(sub_830DB278);
PPC_FUNC_IMPL(__imp__sub_830DB278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x830db44c
	if (cr6.gt) goto loc_830DB44C;
	// lis r12,-32231
	r12.s64 = -2112290816;
	// addi r12,r12,-27128
	r12.s64 = r12.s64 + -27128;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31986
	r12.s64 = -2096234496;
	// addi r12,r12,-19768
	r12.s64 = r12.s64 + -19768;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_830DB2C8;
	case 1:
		goto loc_830DB31C;
	case 2:
		goto loc_830DB34C;
	case 3:
		goto loc_830DB378;
	case 4:
		goto loc_830DB3A4;
	case 5:
		goto loc_830DB3B4;
	case 6:
		goto loc_830DB3E0;
	case 7:
		goto loc_830DB414;
	default:
		__builtin_unreachable();
	}
loc_830DB2C8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-27244
	ctx.r4.s64 = r11.s64 + -27244;
	// bl 0x831ba4e0
	sub_831BA4E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830db2e8
	if (!cr0.eq) goto loc_830DB2E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x830db304
	goto loc_830DB304;
loc_830DB2E8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-27256
	ctx.r4.s64 = r11.s64 + -27256;
	// bl 0x831ba4e0
	sub_831BA4E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830db310
	if (!cr0.eq) goto loc_830DB310;
	// li r4,0
	ctx.r4.s64 = 0;
loc_830DB304:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310b0b0
	sub_8310B0B0(ctx, base);
	// b 0x830db344
	goto loc_830DB344;
loc_830DB310:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// b 0x830db454
	goto loc_830DB454;
loc_830DB31C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24336
	ctx.r4.s64 = r11.s64 + -24336;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831baa78
	sub_831BAA78(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x830db310
	if (cr6.lt) goto loc_830DB310;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8310b0f8
	sub_8310B0F8(ctx, base);
loc_830DB344:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830db454
	goto loc_830DB454;
loc_830DB34C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27232
	ctx.r4.s64 = r11.s64 + -27232;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831baa78
	sub_831BAA78(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x830db310
	if (cr6.lt) goto loc_830DB310;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8310b140
	sub_8310B140(ctx, base);
	// b 0x830db344
	goto loc_830DB344;
loc_830DB378:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27224
	ctx.r4.s64 = r11.s64 + -27224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831baa78
	sub_831BAA78(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x830db310
	if (cr6.lt) goto loc_830DB310;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8310b188
	sub_8310B188(ctx, base);
	// b 0x830db344
	goto loc_830DB344;
loc_830DB3A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310b218
	sub_8310B218(ctx, base);
	// b 0x830db454
	goto loc_830DB454;
loc_830DB3B4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27216
	ctx.r4.s64 = r11.s64 + -27216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831baa78
	sub_831BAA78(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x830db310
	if (cr6.lt) goto loc_830DB310;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8310b1d0
	sub_8310B1D0(ctx, base);
	// b 0x830db344
	goto loc_830DB344;
loc_830DB3E0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27200
	ctx.r4.s64 = r11.s64 + -27200;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831baa78
	sub_831BAA78(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// blt cr6,0x830db310
	if (cr6.lt) goto loc_830DB310;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310b2a8
	sub_8310B2A8(ctx, base);
	// b 0x830db344
	goto loc_830DB344;
loc_830DB414:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// addi r4,r11,-27180
	ctx.r4.s64 = r11.s64 + -27180;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831baa78
	sub_831BAA78(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// blt cr6,0x830db310
	if (cr6.lt) goto loc_830DB310;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310b600
	sub_8310B600(ctx, base);
	// b 0x830db344
	goto loc_830DB344;
loc_830DB44C:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_830DB454:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_830DB470"))) PPC_WEAK_FUNC(sub_830DB470);
PPC_FUNC_IMPL(__imp__sub_830DB470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bgt cr6,0x830db63c
	if (cr6.gt) goto loc_830DB63C;
	// lis r12,-32231
	r12.s64 = -2112290816;
	// addi r12,r12,-27120
	r12.s64 = r12.s64 + -27120;
	// lbzx r0,r12,r10
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31986
	r12.s64 = -2096234496;
	// addi r12,r12,-19260
	r12.s64 = r12.s64 + -19260;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_830DB4C4;
	case 1:
		goto loc_830DB4F8;
	case 2:
		goto loc_830DB514;
	case 3:
		goto loc_830DB52C;
	case 4:
		goto loc_830DB54C;
	case 5:
		goto loc_830DB5AC;
	case 6:
		goto loc_830DB5C4;
	case 7:
		goto loc_830DB5F8;
	default:
		__builtin_unreachable();
	}
loc_830DB4C4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bge cr6,0x830db4dc
	if (!cr6.lt) goto loc_830DB4DC;
loc_830DB4D0:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,15
	ctx.r3.u64 = ctx.r3.u64 | 15;
	// b 0x830db644
	goto loc_830DB644;
loc_830DB4DC:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x8310b0b0
	sub_8310B0B0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// b 0x830db630
	goto loc_830DB630;
loc_830DB4F8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x830db4d0
	if (cr6.lt) goto loc_830DB4D0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8310b0f8
	sub_8310B0F8(ctx, base);
loc_830DB50C:
	// li r11,4
	r11.s64 = 4;
	// b 0x830db630
	goto loc_830DB630;
loc_830DB514:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x830db4d0
	if (cr6.lt) goto loc_830DB4D0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8310b140
	sub_8310B140(ctx, base);
	// b 0x830db50c
	goto loc_830DB50C;
loc_830DB52C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x830db4d0
	if (cr6.lt) goto loc_830DB4D0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8310b188
	sub_8310B188(ctx, base);
	// b 0x830db50c
	goto loc_830DB50C;
loc_830DB54C:
	// lhz r31,0(r11)
	r31.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x830db4d0
	if (!cr6.lt) goto loc_830DB4D0;
	// rlwinm. r8,r31,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// beq 0x830db58c
	if (cr0.eq) goto loc_830DB58C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_830DB56C:
	// lhz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// sth r6,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r6.u16);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// blt cr6,0x830db56c
	if (cr6.lt) goto loc_830DB56C;
loc_830DB58C:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// bl 0x8310b218
	sub_8310B218(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830db644
	if (cr0.lt) goto loc_830DB644;
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// b 0x830db630
	goto loc_830DB630;
loc_830DB5AC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x830db4d0
	if (cr6.lt) goto loc_830DB4D0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8310b1d0
	sub_8310B1D0(ctx, base);
	// b 0x830db50c
	goto loc_830DB50C;
loc_830DB5C4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x830db4d0
	if (cr6.lt) goto loc_830DB4D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x8310b2a8
	sub_8310B2A8(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// b 0x830db630
	goto loc_830DB630;
loc_830DB5F8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830db4d0
	if (cr6.lt) goto loc_830DB4D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// bl 0x8310b300
	sub_8310B300(ctx, base);
	// li r11,16
	r11.s64 = 16;
loc_830DB630:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830db644
	goto loc_830DB644;
loc_830DB63C:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_830DB644:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_830DB660"))) PPC_WEAK_FUNC(sub_830DB660);
PPC_FUNC_IMPL(__imp__sub_830DB660) {
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
	// li r3,288
	ctx.r3.s64 = 288;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830db698
	if (cr0.eq) goto loc_830DB698;
	// bl 0x830fe490
	sub_830FE490(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830db69c
	goto loc_830DB69C;
loc_830DB698:
	// li r11,0
	r11.s64 = 0;
loc_830DB69C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830db6b0
	if (!cr6.eq) goto loc_830DB6B0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830db6bc
	goto loc_830DB6BC;
loc_830DB6B0:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DB6BC:
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

__attribute__((alias("__imp__sub_830DB6D8"))) PPC_WEAK_FUNC(sub_830DB6D8);
PPC_FUNC_IMPL(__imp__sub_830DB6D8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830db700
	if (cr6.eq) goto loc_830DB700;
	// bl 0x83101ba8
	sub_83101BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830DB700:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_830DB718"))) PPC_WEAK_FUNC(sub_830DB718);
PPC_FUNC_IMPL(__imp__sub_830DB718) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830db758
	if (cr0.eq) goto loc_830DB758;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x830db75c
	goto loc_830DB75C;
loc_830DB758:
	// li r11,0
	r11.s64 = 0;
loc_830DB75C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830db770
	if (!cr6.eq) goto loc_830DB770;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830db77c
	goto loc_830DB77C;
loc_830DB770:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DB77C:
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

__attribute__((alias("__imp__sub_830DB798"))) PPC_WEAK_FUNC(sub_830DB798);
PPC_FUNC_IMPL(__imp__sub_830DB798) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830db7cc
	if (cr6.eq) goto loc_830DB7CC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830DB7CC:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_830DB7E8"))) PPC_WEAK_FUNC(sub_830DB7E8);
PPC_FUNC_IMPL(__imp__sub_830DB7E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830db804
	if (cr6.eq) goto loc_830DB804;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830d7b90
	sub_830D7B90(ctx, base);
loc_830DB804:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DB818"))) PPC_WEAK_FUNC(sub_830DB818);
PPC_FUNC_IMPL(__imp__sub_830DB818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830db8a0
	if (cr0.eq) goto loc_830DB8A0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r7,255
	ctx.r7.s64 = 255;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lfs f0,-24780(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24780);
	f0.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stb r7,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r7.u8);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// b 0x830db8a4
	goto loc_830DB8A4;
loc_830DB8A0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830DB8A4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830db8b8
	if (!cr6.eq) goto loc_830DB8B8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830db8c4
	goto loc_830DB8C4;
loc_830DB8B8:
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_830DB8C4:
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

__attribute__((alias("__imp__sub_830DB8E0"))) PPC_WEAK_FUNC(sub_830DB8E0);
PPC_FUNC_IMPL(__imp__sub_830DB8E0) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830db908
	if (cr6.eq) goto loc_830DB908;
	// bl 0x830d6928
	sub_830D6928(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830DB908:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_830DB920"))) PPC_WEAK_FUNC(sub_830DB920);
PPC_FUNC_IMPL(__imp__sub_830DB920) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830db94c
	if (cr6.eq) goto loc_830DB94C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830DB94C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_830DB968"))) PPC_WEAK_FUNC(sub_830DB968);
PPC_FUNC_IMPL(__imp__sub_830DB968) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x830db9a8
	if (cr0.eq) goto loc_830DB9A8;
	// li r10,22592
	ctx.r10.s64 = 22592;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_830DB9A8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830db9bc
	if (!cr6.eq) goto loc_830DB9BC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830db9c8
	goto loc_830DB9C8;
loc_830DB9BC:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DB9C8:
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

__attribute__((alias("__imp__sub_830DB9E0"))) PPC_WEAK_FUNC(sub_830DB9E0);
PPC_FUNC_IMPL(__imp__sub_830DB9E0) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830dba28
	if (cr0.eq) goto loc_830DBA28;
	// li r11,0
	r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// b 0x830dba2c
	goto loc_830DBA2C;
loc_830DBA28:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830DBA2C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830dba40
	if (!cr6.eq) goto loc_830DBA40;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830dba4c
	goto loc_830DBA4C;
loc_830DBA40:
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_830DBA4C:
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

__attribute__((alias("__imp__sub_830DBA68"))) PPC_WEAK_FUNC(sub_830DBA68);
PPC_FUNC_IMPL(__imp__sub_830DBA68) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x830d8930
	sub_830D8930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DBA70"))) PPC_WEAK_FUNC(sub_830DBA70);
PPC_FUNC_IMPL(__imp__sub_830DBA70) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830dbaa8
	if (cr0.eq) goto loc_830DBAA8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x830dbaac
	goto loc_830DBAAC;
loc_830DBAA8:
	// li r11,0
	r11.s64 = 0;
loc_830DBAAC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830dbac0
	if (!cr6.eq) goto loc_830DBAC0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830dbacc
	goto loc_830DBACC;
loc_830DBAC0:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DBACC:
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

__attribute__((alias("__imp__sub_830DBAE8"))) PPC_WEAK_FUNC(sub_830DBAE8);
PPC_FUNC_IMPL(__imp__sub_830DBAE8) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830dbb20
	if (cr0.eq) goto loc_830DBB20;
	// bl 0x8310ad80
	sub_8310AD80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830dbb24
	goto loc_830DBB24;
loc_830DBB20:
	// li r11,0
	r11.s64 = 0;
loc_830DBB24:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830dbb38
	if (!cr6.eq) goto loc_830DBB38;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830dbb44
	goto loc_830DBB44;
loc_830DBB38:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DBB44:
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

__attribute__((alias("__imp__sub_830DBB60"))) PPC_WEAK_FUNC(sub_830DBB60);
PPC_FUNC_IMPL(__imp__sub_830DBB60) {
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
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830dbbc0
	if (cr0.eq) goto loc_830DBBC0;
	// li r11,0
	r11.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830dbbc4
	goto loc_830DBBC4;
loc_830DBBC0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830DBBC4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830dbbd8
	if (!cr6.eq) goto loc_830DBBD8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830dbbe4
	goto loc_830DBBE4;
loc_830DBBD8:
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_830DBBE4:
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

__attribute__((alias("__imp__sub_830DBC00"))) PPC_WEAK_FUNC(sub_830DBC00);
PPC_FUNC_IMPL(__imp__sub_830DBC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dbc18
	if (cr6.eq) goto loc_830DBC18;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830DBC18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DBC30"))) PPC_WEAK_FUNC(sub_830DBC30);
PPC_FUNC_IMPL(__imp__sub_830DBC30) {
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
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830dbc68
	if (cr0.eq) goto loc_830DBC68;
	// bl 0x830f8450
	sub_830F8450(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830dbc6c
	goto loc_830DBC6C;
loc_830DBC68:
	// li r11,0
	r11.s64 = 0;
loc_830DBC6C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830dbc80
	if (!cr6.eq) goto loc_830DBC80;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830dbc8c
	goto loc_830DBC8C;
loc_830DBC80:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DBC8C:
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

__attribute__((alias("__imp__sub_830DBCA8"))) PPC_WEAK_FUNC(sub_830DBCA8);
PPC_FUNC_IMPL(__imp__sub_830DBCA8) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830dbce0
	if (cr0.eq) goto loc_830DBCE0;
	// bl 0x822dab18
	sub_822DAB18(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830dbce4
	goto loc_830DBCE4;
loc_830DBCE0:
	// li r11,0
	r11.s64 = 0;
loc_830DBCE4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830dbcf8
	if (!cr6.eq) goto loc_830DBCF8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830dbd04
	goto loc_830DBD04;
loc_830DBCF8:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DBD04:
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

__attribute__((alias("__imp__sub_830DBD20"))) PPC_WEAK_FUNC(sub_830DBD20);
PPC_FUNC_IMPL(__imp__sub_830DBD20) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830dbd48
	if (cr6.eq) goto loc_830DBD48;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830DBD48:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_830DBD60"))) PPC_WEAK_FUNC(sub_830DBD60);
PPC_FUNC_IMPL(__imp__sub_830DBD60) {
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
	// li r3,44
	ctx.r3.s64 = 44;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830dbd98
	if (cr0.eq) goto loc_830DBD98;
	// bl 0x830f6588
	sub_830F6588(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830dbd9c
	goto loc_830DBD9C;
loc_830DBD98:
	// li r11,0
	r11.s64 = 0;
loc_830DBD9C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830dbdb0
	if (!cr6.eq) goto loc_830DBDB0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830dbdbc
	goto loc_830DBDBC;
loc_830DBDB0:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DBDBC:
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

__attribute__((alias("__imp__sub_830DBDD8"))) PPC_WEAK_FUNC(sub_830DBDD8);
PPC_FUNC_IMPL(__imp__sub_830DBDD8) {
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
	// li r3,76
	ctx.r3.s64 = 76;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830dbe10
	if (cr0.eq) goto loc_830DBE10;
	// bl 0x830f6660
	sub_830F6660(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830dbe14
	goto loc_830DBE14;
loc_830DBE10:
	// li r11,0
	r11.s64 = 0;
loc_830DBE14:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830dbe28
	if (!cr6.eq) goto loc_830DBE28;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830dbe34
	goto loc_830DBE34;
loc_830DBE28:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DBE34:
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

__attribute__((alias("__imp__sub_830DBE50"))) PPC_WEAK_FUNC(sub_830DBE50);
PPC_FUNC_IMPL(__imp__sub_830DBE50) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x830dbea0
	if (cr0.eq) goto loc_830DBEA0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
loc_830DBEA0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830dbeb4
	if (!cr6.eq) goto loc_830DBEB4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830dbec0
	goto loc_830DBEC0;
loc_830DBEB4:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DBEC0:
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

__attribute__((alias("__imp__sub_830DBED8"))) PPC_WEAK_FUNC(sub_830DBED8);
PPC_FUNC_IMPL(__imp__sub_830DBED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dbef4
	if (cr6.eq) goto loc_830DBEF4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830d7bf8
	sub_830D7BF8(ctx, base);
loc_830DBEF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DBF08"))) PPC_WEAK_FUNC(sub_830DBF08);
PPC_FUNC_IMPL(__imp__sub_830DBF08) {
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
	// li r3,252
	ctx.r3.s64 = 252;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830dbf40
	if (cr0.eq) goto loc_830DBF40;
	// bl 0x830d9cc8
	sub_830D9CC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830dbf44
	goto loc_830DBF44;
loc_830DBF40:
	// li r11,0
	r11.s64 = 0;
loc_830DBF44:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830dbf58
	if (!cr6.eq) goto loc_830DBF58;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830dbf64
	goto loc_830DBF64;
loc_830DBF58:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DBF64:
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

__attribute__((alias("__imp__sub_830DBF80"))) PPC_WEAK_FUNC(sub_830DBF80);
PPC_FUNC_IMPL(__imp__sub_830DBF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dbf9c
	if (cr6.eq) goto loc_830DBF9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830d7c58
	sub_830D7C58(ctx, base);
loc_830DBF9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DBFB0"))) PPC_WEAK_FUNC(sub_830DBFB0);
PPC_FUNC_IMPL(__imp__sub_830DBFB0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r9,27
	ctx.r9.s64 = 27;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// divwu r9,r10,r9
	ctx.r9.u32 = ctx.r10.u32 / ctx.r9.u32;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mulli r9,r9,27
	ctx.r9.s64 = ctx.r9.s64 * 27;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq cr6,0x830dbff0
	if (cr6.eq) goto loc_830DBFF0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x830dbffc
	goto loc_830DBFFC;
loc_830DBFF0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
loc_830DBFFC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830dc010
	if (cr6.eq) goto loc_830DC010;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_830DC010:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
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

__attribute__((alias("__imp__sub_830DC038"))) PPC_WEAK_FUNC(sub_830DC038);
PPC_FUNC_IMPL(__imp__sub_830DC038) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-12276
	r31.s64 = r11.s64 + -12276;
	// lwz r11,-12256(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12256);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dc07c
	if (!cr0.eq) goto loc_830DC07C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-12256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12256, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21224
	ctx.r3.s64 = r11.s64 + -21224;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DC07C:
	// li r11,6
	r11.s64 = 6;
	// lis r10,-256
	ctx.r10.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830DC0A8"))) PPC_WEAK_FUNC(sub_830DC0A8);
PPC_FUNC_IMPL(__imp__sub_830DC0A8) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-12252
	r31.s64 = r11.s64 + -12252;
	// lwz r11,-12232(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12232);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dc0ec
	if (!cr0.eq) goto loc_830DC0EC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-12232(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12232, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21240
	ctx.r3.s64 = r11.s64 + -21240;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DC0EC:
	// li r11,6
	r11.s64 = 6;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830DC118"))) PPC_WEAK_FUNC(sub_830DC118);
PPC_FUNC_IMPL(__imp__sub_830DC118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-12228
	r31.s64 = r11.s64 + -12228;
	// lwz r11,-12208(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12208);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dc164
	if (!cr0.eq) goto loc_830DC164;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,-12208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12208, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,8616(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8616);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8310b028
	sub_8310B028(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21256
	ctx.r3.s64 = r11.s64 + -21256;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DC164:
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

__attribute__((alias("__imp__sub_830DC180"))) PPC_WEAK_FUNC(sub_830DC180);
PPC_FUNC_IMPL(__imp__sub_830DC180) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-12204
	r31.s64 = r11.s64 + -12204;
	// lwz r11,-12184(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12184);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dc1c8
	if (!cr0.eq) goto loc_830DC1C8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-12184(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12184, r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8310b018
	sub_8310B018(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21272
	ctx.r3.s64 = r11.s64 + -21272;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DC1C8:
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

__attribute__((alias("__imp__sub_830DC1E0"))) PPC_WEAK_FUNC(sub_830DC1E0);
PPC_FUNC_IMPL(__imp__sub_830DC1E0) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-12180
	r31.s64 = r11.s64 + -12180;
	// lwz r11,-12160(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12160);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dc228
	if (!cr0.eq) goto loc_830DC228;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-12160(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12160, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8310b008
	sub_8310B008(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21288
	ctx.r3.s64 = r11.s64 + -21288;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DC228:
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

__attribute__((alias("__imp__sub_830DC240"))) PPC_WEAK_FUNC(sub_830DC240);
PPC_FUNC_IMPL(__imp__sub_830DC240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// bl 0x830dc038
	sub_830DC038(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830dc0a8
	sub_830DC0A8(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x830dc118
	sub_830DC118(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x830dc180
	sub_830DC180(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bl 0x830dc1e0
	sub_830DC1E0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
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

__attribute__((alias("__imp__sub_830DC2B0"))) PPC_WEAK_FUNC(sub_830DC2B0);
PPC_FUNC_IMPL(__imp__sub_830DC2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830dc328
	if (cr6.lt) goto loc_830DC328;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,-44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -44);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bgt cr6,0x830dc328
	if (cr6.gt) goto loc_830DC328;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r5,r11,r3
	ctx.r5.u64 = r11.u64 + ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830dac38
	sub_830DAC38(ctx, base);
	// b 0x830dc330
	goto loc_830DC330;
loc_830DC328:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
loc_830DC330:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830DC338"))) PPC_WEAK_FUNC(sub_830DC338);
PPC_FUNC_IMPL(__imp__sub_830DC338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830dc3b0
	if (cr6.lt) goto loc_830DC3B0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,-44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -44);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bgt cr6,0x830dc3b0
	if (cr6.gt) goto loc_830DC3B0;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r5,r11,r3
	ctx.r5.u64 = r11.u64 + ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830dada0
	sub_830DADA0(ctx, base);
	// b 0x830dc3b8
	goto loc_830DC3B8;
loc_830DC3B0:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
loc_830DC3B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830DC3C0"))) PPC_WEAK_FUNC(sub_830DC3C0);
PPC_FUNC_IMPL(__imp__sub_830DC3C0) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-12156
	r31.s64 = r11.s64 + -12156;
	// lwz r11,-12136(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dc404
	if (!cr0.eq) goto loc_830DC404;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-12136(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12136, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21192
	ctx.r3.s64 = r11.s64 + -21192;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DC404:
	// lis r10,-241
	ctx.r10.s64 = -15794176;
	// li r11,6
	r11.s64 = 6;
	// ori r10,r10,4075
	ctx.r10.u64 = ctx.r10.u64 | 4075;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830DC430"))) PPC_WEAK_FUNC(sub_830DC430);
PPC_FUNC_IMPL(__imp__sub_830DC430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-12132
	r31.s64 = r11.s64 + -12132;
	// lwz r11,-12112(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12112);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dc47c
	if (!cr0.eq) goto loc_830DC47C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,-12112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12112, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8310b028
	sub_8310B028(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21208
	ctx.r3.s64 = r11.s64 + -21208;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DC47C:
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

__attribute__((alias("__imp__sub_830DC498"))) PPC_WEAK_FUNC(sub_830DC498);
PPC_FUNC_IMPL(__imp__sub_830DC498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r11,r11,-28568
	r11.s64 = r11.s64 + -28568;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830dc430
	sub_830DC430(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x830dc3c0
	sub_830DC3C0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_830DC4F8"))) PPC_WEAK_FUNC(sub_830DC4F8);
PPC_FUNC_IMPL(__imp__sub_830DC4F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-12104
	r31.s64 = r11.s64 + -12104;
	// lwz r11,-12008(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12008);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830dc5e0
	if (!cr0.eq) goto loc_830DC5E0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-27088
	ctx.r9.s64 = ctx.r10.s64 + -27088;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-12008(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12008, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830dc430
	sub_830DC430(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,26344
	ctx.r9.s64 = ctx.r9.s64 + 26344;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-27112
	ctx.r9.s64 = r11.s64 + -27112;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830dc3c0
	sub_830DC3C0(ctx, base);
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,26408
	ctx.r9.s64 = ctx.r9.s64 + 26408;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
loc_830DC5E0:
	// li r11,2
	r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DC5F8"))) PPC_WEAK_FUNC(sub_830DC5F8);
PPC_FUNC_IMPL(__imp__sub_830DC5F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830dc630
	if (cr6.eq) goto loc_830DC630;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x830dc630
	if (!cr6.eq) goto loc_830DC630;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830dc624
	if (cr6.eq) goto loc_830DC624;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,132(r11)
	PPC_STORE_U32(r11.u32 + 132, ctx.r10.u32);
loc_830DC624:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x830d84d0
	sub_830D84D0(ctx, base);
	return;
loc_830DC630:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DC640"))) PPC_WEAK_FUNC(sub_830DC640);
PPC_FUNC_IMPL(__imp__sub_830DC640) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-12004
	r31.s64 = r11.s64 + -12004;
	// lwz r11,-11984(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11984);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dc684
	if (!cr0.eq) goto loc_830DC684;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11984, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21160
	ctx.r3.s64 = r11.s64 + -21160;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DC684:
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830DC6B0"))) PPC_WEAK_FUNC(sub_830DC6B0);
PPC_FUNC_IMPL(__imp__sub_830DC6B0) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11980
	r31.s64 = r11.s64 + -11980;
	// lwz r11,-11960(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11960);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dc6f8
	if (!cr0.eq) goto loc_830DC6F8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11960, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8310b008
	sub_8310B008(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21176
	ctx.r3.s64 = r11.s64 + -21176;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DC6F8:
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

__attribute__((alias("__imp__sub_830DC710"))) PPC_WEAK_FUNC(sub_830DC710);
PPC_FUNC_IMPL(__imp__sub_830DC710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-11952
	r31.s64 = r11.s64 + -11952;
	// lwz r11,-11760(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11760);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830dc8d0
	if (!cr0.eq) goto loc_830DC8D0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-27008
	ctx.r9.s64 = ctx.r10.s64 + -27008;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-11760(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11760, r11.u32);
	// li r11,12
	r11.s64 = 12;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830dc640
	sub_830DC640(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-32072
	ctx.r9.s64 = ctx.r9.s64 + -32072;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-27028
	ctx.r9.s64 = r11.s64 + -27028;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// li r11,10
	r11.s64 = 10;
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830dc6b0
	sub_830DC6B0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-14856
	ctx.r9.s64 = ctx.r9.s64 + -14856;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r11,-27048
	ctx.r10.s64 = r11.s64 + -27048;
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
	// li r11,1
	r11.s64 = 1;
	// stw r10,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// lis r3,-31986
	ctx.r3.s64 = -2096234496;
	// addi r9,r7,-27064
	ctx.r9.s64 = ctx.r7.s64 + -27064;
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r11,r3,-31744
	r11.s64 = ctx.r3.s64 + -31744;
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// lis r4,-31986
	ctx.r4.s64 = -2096234496;
	// stw r8,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r8.u32);
	// lis r5,-31987
	ctx.r5.s64 = -2096300032;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lis r6,-31986
	ctx.r6.s64 = -2096234496;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// stw r10,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r10.u32);
	// lis r8,-31987
	ctx.r8.s64 = -2096300032;
	// addi r9,r4,-31976
	ctx.r9.s64 = ctx.r4.s64 + -31976;
	// addi r11,r5,26472
	r11.s64 = ctx.r5.s64 + 26472;
	// stw r10,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// li r11,8
	r11.s64 = 8;
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// addi r10,r6,-31640
	ctx.r10.s64 = ctx.r6.s64 + -31640;
	// stw r9,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
	// addi r11,r7,-31864
	r11.s64 = ctx.r7.s64 + -31864;
	// stw r10,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// addi r10,r8,26472
	ctx.r10.s64 = ctx.r8.s64 + 26472;
	// stw r9,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// stw r9,172(r31)
	PPC_STORE_U32(r31.u32 + 172, ctx.r9.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// stw r9,184(r31)
	PPC_STORE_U32(r31.u32 + 184, ctx.r9.u32);
	// stw r10,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r10.u32);
loc_830DC8D0:
	// li r11,4
	r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DC8E8"))) PPC_WEAK_FUNC(sub_830DC8E8);
PPC_FUNC_IMPL(__imp__sub_830DC8E8) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11756
	r31.s64 = r11.s64 + -11756;
	// lwz r11,-11736(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11736);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dc930
	if (!cr0.eq) goto loc_830DC930;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11736, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8310b018
	sub_8310B018(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21096
	ctx.r3.s64 = r11.s64 + -21096;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DC930:
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

__attribute__((alias("__imp__sub_830DC948"))) PPC_WEAK_FUNC(sub_830DC948);
PPC_FUNC_IMPL(__imp__sub_830DC948) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11732
	r31.s64 = r11.s64 + -11732;
	// lwz r11,-11712(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11712);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dc98c
	if (!cr0.eq) goto loc_830DC98C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11712, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21112
	ctx.r3.s64 = r11.s64 + -21112;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DC98C:
	// lis r10,-241
	ctx.r10.s64 = -15794176;
	// li r11,6
	r11.s64 = 6;
	// ori r10,r10,3968
	ctx.r10.u64 = ctx.r10.u64 | 3968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830DC9B8"))) PPC_WEAK_FUNC(sub_830DC9B8);
PPC_FUNC_IMPL(__imp__sub_830DC9B8) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11708
	r31.s64 = r11.s64 + -11708;
	// lwz r11,-11688(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11688);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dc9fc
	if (!cr0.eq) goto loc_830DC9FC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11688, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21128
	ctx.r3.s64 = r11.s64 + -21128;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DC9FC:
	// li r11,5
	r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830DCA28"))) PPC_WEAK_FUNC(sub_830DCA28);
PPC_FUNC_IMPL(__imp__sub_830DCA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,-26992
	r11.s64 = r11.s64 + -26992;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r10,-27500
	ctx.r10.s64 = ctx.r10.s64 + -27500;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// bl 0x830dc948
	sub_830DC948(ctx, base);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r31,68
	r11.s64 = r31.s64 + 68;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r31,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r31.u32);
	// vupkd3d128 v60,v63,4
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v60 = vTemp;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,8
	ctx.r6.s64 = 8;
	// lvsr v0,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// li r10,12
	ctx.r10.s64 = 12;
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x15));
	// lfs f13,2244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x45));
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x51));
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x54));
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,32
	ctx.r3.s64 = 32;
	// stvewx128 v63,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r30,36
	r30.s64 = 36;
	// stvewx128 v63,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvewx128 v63,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r7,40
	ctx.r7.s64 = 40;
	// stvewx128 v63,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r6,44
	ctx.r6.s64 = 44;
	// stvewx128 v62,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r29,48
	r29.s64 = 48;
	// stvewx128 v62,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r9,52
	ctx.r9.s64 = 52;
	// stvewx128 v62,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r8,56
	ctx.r8.s64 = 56;
	// stvewx128 v62,r11,r4
	ea = (r11.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r5,60
	ctx.r5.s64 = 60;
	// stvewx128 v61,r11,r3
	ea = (r11.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r10,1
	ctx.r10.s64 = 1;
	// stvewx128 v61,r11,r30
	ea = (r11.u32 + r30.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvewx128 v61,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r29
	ea = (r11.u32 + r29.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stw r10,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r10.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DCB70"))) PPC_WEAK_FUNC(sub_830DCB70);
PPC_FUNC_IMPL(__imp__sub_830DCB70) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r11,r11,-26992
	r11.s64 = r11.s64 + -26992;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dcbb4
	if (cr6.eq) goto loc_830DCBB4;
	// bl 0x83119068
	sub_83119068(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_830DCBB4:
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// addi r11,r10,-27500
	r11.s64 = ctx.r10.s64 + -27500;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
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

__attribute__((alias("__imp__sub_830DCBF0"))) PPC_WEAK_FUNC(sub_830DCBF0);
PPC_FUNC_IMPL(__imp__sub_830DCBF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11684
	r31.s64 = r11.s64 + -11684;
	// lwz r11,-11664(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11664);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dcc3c
	if (!cr0.eq) goto loc_830DCC3C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,-11664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11664, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8310b028
	sub_8310B028(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21144
	ctx.r3.s64 = r11.s64 + -21144;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DCC3C:
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

__attribute__((alias("__imp__sub_830DCC58"))) PPC_WEAK_FUNC(sub_830DCC58);
PPC_FUNC_IMPL(__imp__sub_830DCC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,20800
	r31.s64 = r11.s64 + 20800;
	// lwz r11,-11660(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11660);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830dd09c
	if (!cr0.eq) goto loc_830DD09C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-26776
	ctx.r9.s64 = ctx.r10.s64 + -26776;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-11660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11660, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r11,136
	r11.s64 = 136;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830dc8e8
	sub_830DC8E8(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-31048
	ctx.r9.s64 = ctx.r9.s64 + -31048;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-26796
	ctx.r9.s64 = r11.s64 + -26796;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// li r11,2
	r11.s64 = 2;
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830dc948
	sub_830DC948(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,26512
	ctx.r9.s64 = ctx.r9.s64 + 26512;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-26828
	ctx.r9.s64 = r11.s64 + -26828;
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
	// li r11,2
	r11.s64 = 2;
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x830dc9b8
	sub_830DC9B8(ctx, base);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// addi r11,r31,188
	r11.s64 = r31.s64 + 188;
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r9,-31272
	r11.s64 = ctx.r9.s64 + -31272;
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// li r11,2
	r11.s64 = 2;
	// std r30,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r30.u64);
	// addi r9,r9,-26848
	ctx.r9.s64 = ctx.r9.s64 + -26848;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// stw r9,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// addi r11,r8,-14576
	r11.s64 = ctx.r8.s64 + -14576;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r9.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r9,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// addi r8,r8,-26872
	ctx.r8.s64 = ctx.r8.s64 + -26872;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// stw r9,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// stw r8,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r8.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// bl 0x830eb910
	sub_830EB910(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-31208
	ctx.r9.s64 = ctx.r9.s64 + -31208;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r10.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,-26884
	ctx.r9.s64 = r11.s64 + -26884;
	// std r30,232(r31)
	PPC_STORE_U64(r31.u32 + 232, r30.u64);
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// stw r9,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,52
	ctx.r9.s64 = 52;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// addi r11,r31,232
	r11.s64 = r31.s64 + 232;
	// stw r9,248(r31)
	PPC_STORE_U32(r31.u32 + 248, ctx.r9.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// bl 0x830eb988
	sub_830EB988(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// addi r9,r9,-31128
	ctx.r9.s64 = ctx.r9.s64 + -31128;
	// addi r11,r31,280
	r11.s64 = r31.s64 + 280;
	// stw r10,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r10.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,276(r31)
	PPC_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r11,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r11.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r8,-26904
	ctx.r9.s64 = ctx.r8.s64 + -26904;
	// std r30,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r30.u64);
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// stw r9,304(r31)
	PPC_STORE_U32(r31.u32 + 304, ctx.r9.u32);
	// li r11,64
	r11.s64 = 64;
	// stw r10,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// stw r9,300(r31)
	PPC_STORE_U32(r31.u32 + 300, ctx.r9.u32);
	// stw r10,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// bl 0x830dcbf0
	sub_830DCBF0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r3,312(r31)
	PPC_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,26576
	ctx.r9.s64 = ctx.r9.s64 + 26576;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,320(r31)
	PPC_STORE_U32(r31.u32 + 320, ctx.r10.u32);
	// stw r9,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r9.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r11,-26916
	ctx.r9.s64 = r11.s64 + -26916;
	// std r30,328(r31)
	PPC_STORE_U64(r31.u32 + 328, r30.u64);
	// stw r10,340(r31)
	PPC_STORE_U32(r31.u32 + 340, ctx.r10.u32);
	// stw r9,352(r31)
	PPC_STORE_U32(r31.u32 + 352, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,132
	ctx.r9.s64 = 132;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r11.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r11.u32);
	// addi r11,r31,328
	r11.s64 = r31.s64 + 328;
	// stw r9,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r9.u32);
	// stw r10,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// stw r3,360(r31)
	PPC_STORE_U32(r31.u32 + 360, ctx.r3.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// stw r11,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r11.u32);
	// addi r9,r9,26640
	ctx.r9.s64 = ctx.r9.s64 + 26640;
	// addi r10,r10,-30904
	ctx.r10.s64 = ctx.r10.s64 + -30904;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r9,372(r31)
	PPC_STORE_U32(r31.u32 + 372, ctx.r9.u32);
	// stw r10,368(r31)
	PPC_STORE_U32(r31.u32 + 368, ctx.r10.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r11,-26928
	ctx.r9.s64 = r11.s64 + -26928;
	// std r30,376(r31)
	PPC_STORE_U64(r31.u32 + 376, r30.u64);
	// stw r10,388(r31)
	PPC_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// stw r9,400(r31)
	PPC_STORE_U32(r31.u32 + 400, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,132
	ctx.r9.s64 = 132;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,384(r31)
	PPC_STORE_U32(r31.u32 + 384, r11.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(r31.u32 + 396, r11.u32);
	// addi r11,r31,376
	r11.s64 = r31.s64 + 376;
	// stw r9,392(r31)
	PPC_STORE_U32(r31.u32 + 392, ctx.r9.u32);
	// stw r10,404(r31)
	PPC_STORE_U32(r31.u32 + 404, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// stw r3,408(r31)
	PPC_STORE_U32(r31.u32 + 408, ctx.r3.u32);
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// stw r11,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r11.u32);
	// addi r10,r10,-30824
	ctx.r10.s64 = ctx.r10.s64 + -30824;
	// addi r9,r9,26712
	ctx.r9.s64 = ctx.r9.s64 + 26712;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,416(r31)
	PPC_STORE_U32(r31.u32 + 416, ctx.r10.u32);
	// stw r9,420(r31)
	PPC_STORE_U32(r31.u32 + 420, ctx.r9.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r9,r11,-27404
	ctx.r9.s64 = r11.s64 + -27404;
	// std r30,424(r31)
	PPC_STORE_U64(r31.u32 + 424, r30.u64);
	// stw r10,436(r31)
	PPC_STORE_U32(r31.u32 + 436, ctx.r10.u32);
	// stw r9,448(r31)
	PPC_STORE_U32(r31.u32 + 448, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,132
	ctx.r9.s64 = 132;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r11.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(r31.u32 + 444, r11.u32);
	// addi r11,r31,424
	r11.s64 = r31.s64 + 424;
	// stw r9,440(r31)
	PPC_STORE_U32(r31.u32 + 440, ctx.r9.u32);
	// stw r10,452(r31)
	PPC_STORE_U32(r31.u32 + 452, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// stw r11,460(r31)
	PPC_STORE_U32(r31.u32 + 460, r11.u32);
	// addi r9,r9,26784
	ctx.r9.s64 = ctx.r9.s64 + 26784;
	// addi r10,r10,-30744
	ctx.r10.s64 = ctx.r10.s64 + -30744;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r9,468(r31)
	PPC_STORE_U32(r31.u32 + 468, ctx.r9.u32);
	// addi r9,r11,-26964
	ctx.r9.s64 = r11.s64 + -26964;
	// stw r10,464(r31)
	PPC_STORE_U32(r31.u32 + 464, ctx.r10.u32);
	// li r11,10
	r11.s64 = 10;
	// stw r3,456(r31)
	PPC_STORE_U32(r31.u32 + 456, ctx.r3.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// std r30,472(r31)
	PPC_STORE_U64(r31.u32 + 472, r30.u64);
	// stw r11,480(r31)
	PPC_STORE_U32(r31.u32 + 480, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,496(r31)
	PPC_STORE_U32(r31.u32 + 496, ctx.r9.u32);
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r10,484(r31)
	PPC_STORE_U32(r31.u32 + 484, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,492(r31)
	PPC_STORE_U32(r31.u32 + 492, r11.u32);
	// addi r11,r31,472
	r11.s64 = r31.s64 + 472;
	// stw r9,488(r31)
	PPC_STORE_U32(r31.u32 + 488, ctx.r9.u32);
	// stw r10,500(r31)
	PPC_STORE_U32(r31.u32 + 500, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// stw r3,504(r31)
	PPC_STORE_U32(r31.u32 + 504, ctx.r3.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,-30664
	ctx.r10.s64 = ctx.r10.s64 + -30664;
	// addi r9,r9,26848
	ctx.r9.s64 = ctx.r9.s64 + 26848;
	// stw r11,508(r31)
	PPC_STORE_U32(r31.u32 + 508, r11.u32);
	// stw r10,512(r31)
	PPC_STORE_U32(r31.u32 + 512, ctx.r10.u32);
	// addi r11,r31,520
	r11.s64 = r31.s64 + 520;
	// stw r9,516(r31)
	PPC_STORE_U32(r31.u32 + 516, ctx.r9.u32);
	// std r30,520(r31)
	PPC_STORE_U64(r31.u32 + 520, r30.u64);
loc_830DD09C:
	// li r11,11
	r11.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DD0B0"))) PPC_WEAK_FUNC(sub_830DD0B0);
PPC_FUNC_IMPL(__imp__sub_830DD0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r5,-31942
	ctx.r5.s64 = -2093350912;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,21328
	ctx.r3.s64 = r11.s64 + 21328;
	// lwz r6,-11656(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11656);
	// clrlwi. r11,r6,31
	r11.u64 = ctx.r6.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830dd21c
	if (!cr0.eq) goto loc_830DD21C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-26712
	ctx.r9.s64 = ctx.r10.s64 + -26712;
	// li r10,160
	ctx.r10.s64 = 160;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// addi r10,r7,-15112
	ctx.r10.s64 = ctx.r7.s64 + -15112;
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// addi r9,r9,-26724
	ctx.r9.s64 = ctx.r9.s64 + -26724;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// addi r8,r8,-13224
	ctx.r8.s64 = ctx.r8.s64 + -13224;
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// addi r8,r10,-26740
	ctx.r8.s64 = ctx.r10.s64 + -26740;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// li r8,200
	ctx.r8.s64 = 200;
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// addi r10,r3,92
	ctx.r10.s64 = ctx.r3.s64 + 92;
	// stw r9,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
	// stw r8,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// addi r10,r3,124
	ctx.r10.s64 = ctx.r3.s64 + 124;
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, r11.u32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, r11.u32);
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, r11.u32);
	// addi r9,r10,-26756
	ctx.r9.s64 = ctx.r10.s64 + -26756;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, r11.u32);
	// addi r8,r8,24412
	ctx.r8.s64 = ctx.r8.s64 + 24412;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// stw r9,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r9.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r9,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r9.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stw r8,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r8.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r9.u32);
	// ori r9,r6,1
	ctx.r9.u64 = ctx.r6.u64 | 1;
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// stw r8,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r8.u32);
	// addi r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 + 176;
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, r11.u32);
	// std r11,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, r11.u64);
	// std r11,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, r11.u64);
	// stw r9,-11656(r5)
	PPC_STORE_U32(ctx.r5.u32 + -11656, ctx.r9.u32);
loc_830DD21C:
	// li r11,4
	r11.s64 = 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DD228"))) PPC_WEAK_FUNC(sub_830DD228);
PPC_FUNC_IMPL(__imp__sub_830DD228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11652
	r31.s64 = r11.s64 + -11652;
	// lwz r11,-11632(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11632);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dd274
	if (!cr0.eq) goto loc_830DD274;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,-11632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11632, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,-24780(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24780);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8310b028
	sub_8310B028(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21080
	ctx.r3.s64 = r11.s64 + -21080;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DD274:
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

__attribute__((alias("__imp__sub_830DD290"))) PPC_WEAK_FUNC(sub_830DD290);
PPC_FUNC_IMPL(__imp__sub_830DD290) {
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
	// li r30,0
	r30.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// bl 0x830e80e0
	sub_830E80E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830dd304
	if (cr0.eq) goto loc_830DD304;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_830DD304:
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
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

__attribute__((alias("__imp__sub_830DD330"))) PPC_WEAK_FUNC(sub_830DD330);
PPC_FUNC_IMPL(__imp__sub_830DD330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x830dc240
	sub_830DC240(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lfs f0,-24780(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24780);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
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

__attribute__((alias("__imp__sub_830DD380"))) PPC_WEAK_FUNC(sub_830DD380);
PPC_FUNC_IMPL(__imp__sub_830DD380) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11628
	r31.s64 = r11.s64 + -11628;
	// lwz r11,-11608(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11608);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dd3c8
	if (!cr0.eq) goto loc_830DD3C8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11608, r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8310b018
	sub_8310B018(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21048
	ctx.r3.s64 = r11.s64 + -21048;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DD3C8:
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

__attribute__((alias("__imp__sub_830DD3E0"))) PPC_WEAK_FUNC(sub_830DD3E0);
PPC_FUNC_IMPL(__imp__sub_830DD3E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11604
	r31.s64 = r11.s64 + -11604;
	// lwz r11,-11584(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11584);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dd42c
	if (!cr0.eq) goto loc_830DD42C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r11,-11584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11584, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,-3016(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3016);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8310b028
	sub_8310B028(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21064
	ctx.r3.s64 = r11.s64 + -21064;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DD42C:
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

__attribute__((alias("__imp__sub_830DD448"))) PPC_WEAK_FUNC(sub_830DD448);
PPC_FUNC_IMPL(__imp__sub_830DD448) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dd470
	if (cr6.eq) goto loc_830DD470;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x830d8ac0
	sub_830D8AC0(ctx, base);
loc_830DD470:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dd48c
	if (cr6.eq) goto loc_830DD48C;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x830d8b48
	sub_830D8B48(ctx, base);
loc_830DD48C:
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

__attribute__((alias("__imp__sub_830DD4A0"))) PPC_WEAK_FUNC(sub_830DD4A0);
PPC_FUNC_IMPL(__imp__sub_830DD4A0) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11580
	r31.s64 = r11.s64 + -11580;
	// lwz r11,-11560(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11560);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dd4e8
	if (!cr0.eq) goto loc_830DD4E8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11560, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8310b018
	sub_8310B018(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20984
	ctx.r3.s64 = r11.s64 + -20984;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DD4E8:
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

__attribute__((alias("__imp__sub_830DD500"))) PPC_WEAK_FUNC(sub_830DD500);
PPC_FUNC_IMPL(__imp__sub_830DD500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11556
	r31.s64 = r11.s64 + -11556;
	// lwz r11,-11536(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11536);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dd54c
	if (!cr0.eq) goto loc_830DD54C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,-11536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11536, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,-9184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8310b028
	sub_8310B028(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21000
	ctx.r3.s64 = r11.s64 + -21000;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DD54C:
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

__attribute__((alias("__imp__sub_830DD568"))) PPC_WEAK_FUNC(sub_830DD568);
PPC_FUNC_IMPL(__imp__sub_830DD568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11532
	r31.s64 = r11.s64 + -11532;
	// lwz r11,-11512(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11512);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dd5b4
	if (!cr0.eq) goto loc_830DD5B4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,-11512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11512, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,29188(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29188);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8310b028
	sub_8310B028(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21016
	ctx.r3.s64 = r11.s64 + -21016;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DD5B4:
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

__attribute__((alias("__imp__sub_830DD5D0"))) PPC_WEAK_FUNC(sub_830DD5D0);
PPC_FUNC_IMPL(__imp__sub_830DD5D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11508
	r31.s64 = r11.s64 + -11508;
	// lwz r11,-11488(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11488);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dd61c
	if (!cr0.eq) goto loc_830DD61C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,-11488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11488, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,-21220(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21220);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8310b028
	sub_8310B028(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21032
	ctx.r3.s64 = r11.s64 + -21032;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DD61C:
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

__attribute__((alias("__imp__sub_830DD638"))) PPC_WEAK_FUNC(sub_830DD638);
PPC_FUNC_IMPL(__imp__sub_830DD638) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11484
	r31.s64 = r11.s64 + -11484;
	// lwz r11,-11464(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11464);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dd680
	if (!cr0.eq) goto loc_830DD680;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11464, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8310b018
	sub_8310B018(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20968
	ctx.r3.s64 = r11.s64 + -20968;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DD680:
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

__attribute__((alias("__imp__sub_830DD698"))) PPC_WEAK_FUNC(sub_830DD698);
PPC_FUNC_IMPL(__imp__sub_830DD698) {
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-11460
	r31.s64 = r11.s64 + -11460;
	// lwz r11,-11412(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11412);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830dd72c
	if (!cr0.eq) goto loc_830DD72C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r10,-26696
	ctx.r9.s64 = ctx.r10.s64 + -26696;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-11412(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11412, r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830dd638
	sub_830DD638(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// li r11,0
	r11.s64 = 0;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-29640
	ctx.r9.s64 = ctx.r9.s64 + -29640;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// std r8,40(r31)
	PPC_STORE_U64(r31.u32 + 40, ctx.r8.u64);
loc_830DD72C:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_830DD750"))) PPC_WEAK_FUNC(sub_830DD750);
PPC_FUNC_IMPL(__imp__sub_830DD750) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11408
	r31.s64 = r11.s64 + -11408;
	// lwz r11,-11388(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11388);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dd798
	if (!cr0.eq) goto loc_830DD798;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11388, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8310b018
	sub_8310B018(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20936
	ctx.r3.s64 = r11.s64 + -20936;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DD798:
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

__attribute__((alias("__imp__sub_830DD7B0"))) PPC_WEAK_FUNC(sub_830DD7B0);
PPC_FUNC_IMPL(__imp__sub_830DD7B0) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11384
	r31.s64 = r11.s64 + -11384;
	// lwz r11,-11364(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11364);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dd7f8
	if (!cr0.eq) goto loc_830DD7F8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11364, r11.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x8310b018
	sub_8310B018(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20952
	ctx.r3.s64 = r11.s64 + -20952;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DD7F8:
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

__attribute__((alias("__imp__sub_830DD810"))) PPC_WEAK_FUNC(sub_830DD810);
PPC_FUNC_IMPL(__imp__sub_830DD810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-11360
	r31.s64 = r11.s64 + -11360;
	// lwz r11,-11264(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11264);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830dd8f4
	if (!cr0.eq) goto loc_830DD8F4;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-26696
	ctx.r9.s64 = ctx.r10.s64 + -26696;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-11264(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11264, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830dd750
	sub_830DD750(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-29536
	ctx.r9.s64 = ctx.r9.s64 + -29536;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-26676
	ctx.r9.s64 = r11.s64 + -26676;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,36
	ctx.r9.s64 = 36;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830dd7b0
	sub_830DD7B0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
loc_830DD8F4:
	// li r11,2
	r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DD908"))) PPC_WEAK_FUNC(sub_830DD908);
PPC_FUNC_IMPL(__imp__sub_830DD908) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11260
	r31.s64 = r11.s64 + -11260;
	// lwz r11,-11240(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11240);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dd94c
	if (!cr0.eq) goto loc_830DD94C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11240, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20920
	ctx.r3.s64 = r11.s64 + -20920;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DD94C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x8310b0f8
	sub_8310B0F8(ctx, base);
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

__attribute__((alias("__imp__sub_830DD970"))) PPC_WEAK_FUNC(sub_830DD970);
PPC_FUNC_IMPL(__imp__sub_830DD970) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11236
	r31.s64 = r11.s64 + -11236;
	// lwz r11,-11216(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11216);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dd9b4
	if (!cr0.eq) goto loc_830DD9B4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11216(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11216, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20888
	ctx.r3.s64 = r11.s64 + -20888;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DD9B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x8310b0f8
	sub_8310B0F8(ctx, base);
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

__attribute__((alias("__imp__sub_830DD9D8"))) PPC_WEAK_FUNC(sub_830DD9D8);
PPC_FUNC_IMPL(__imp__sub_830DD9D8) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11212
	r31.s64 = r11.s64 + -11212;
	// lwz r11,-11192(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11192);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dda1c
	if (!cr0.eq) goto loc_830DDA1C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11192(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11192, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20904
	ctx.r3.s64 = r11.s64 + -20904;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DDA1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8310b0f8
	sub_8310B0F8(ctx, base);
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

__attribute__((alias("__imp__sub_830DDA40"))) PPC_WEAK_FUNC(sub_830DDA40);
PPC_FUNC_IMPL(__imp__sub_830DDA40) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11188
	r31.s64 = r11.s64 + -11188;
	// lwz r11,-11168(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11168);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dda84
	if (!cr0.eq) goto loc_830DDA84;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11168(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11168, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20872
	ctx.r3.s64 = r11.s64 + -20872;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DDA84:
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,65534
	ctx.r4.u64 = ctx.r4.u64 | 65534;
	// bl 0x8310b140
	sub_8310B140(ctx, base);
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

__attribute__((alias("__imp__sub_830DDAB0"))) PPC_WEAK_FUNC(sub_830DDAB0);
PPC_FUNC_IMPL(__imp__sub_830DDAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r3,152
	r11.s64 = ctx.r3.s64 + 152;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// vupkd3d128 v60,v63,4
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v60 = vTemp;
	// li r7,8
	ctx.r7.s64 = 8;
	// lvsr v0,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r10,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x15));
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x45));
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x51));
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x54));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r10,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r9,28
	ctx.r9.s64 = 28;
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r31,32
	r31.s64 = 32;
	// li r30,36
	r30.s64 = 36;
	// stvewx128 v63,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r29,40
	r29.s64 = 40;
	// stvewx128 v63,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r8,44
	ctx.r8.s64 = 44;
	// stvewx128 v63,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r7,48
	ctx.r7.s64 = 48;
	// stvewx128 v63,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r6,52
	ctx.r6.s64 = 52;
	// stvewx128 v62,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r5,56
	ctx.r5.s64 = 56;
	// stvewx128 v62,r11,r4
	ea = (r11.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r10,60
	ctx.r10.s64 = 60;
	// stvewx128 v62,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r31
	ea = (r11.u32 + r31.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r30
	ea = (r11.u32 + r30.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r29
	ea = (r11.u32 + r29.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DDBA0"))) PPC_WEAK_FUNC(sub_830DDBA0);
PPC_FUNC_IMPL(__imp__sub_830DDBA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830ddbec
	if (cr0.lt) goto loc_830DDBEC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ddbe4
	if (cr6.eq) goto loc_830DDBE4;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x830ddbe4
	if (!cr6.eq) goto loc_830DDBE4;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x830d9968
	sub_830D9968(ctx, base);
	// b 0x830ddbec
	goto loc_830DDBEC;
loc_830DDBE4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830DDBEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DDC00"))) PPC_WEAK_FUNC(sub_830DDC00);
PPC_FUNC_IMPL(__imp__sub_830DDC00) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11164
	r31.s64 = r11.s64 + -11164;
	// lwz r11,-11144(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11144);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830ddc48
	if (!cr0.eq) goto loc_830DDC48;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11144(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11144, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8310b018
	sub_8310B018(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20840
	ctx.r3.s64 = r11.s64 + -20840;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DDC48:
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

__attribute__((alias("__imp__sub_830DDC60"))) PPC_WEAK_FUNC(sub_830DDC60);
PPC_FUNC_IMPL(__imp__sub_830DDC60) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11140
	r31.s64 = r11.s64 + -11140;
	// lwz r11,-11120(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11120);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830ddca8
	if (!cr0.eq) goto loc_830DDCA8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11120(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11120, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8310b018
	sub_8310B018(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20856
	ctx.r3.s64 = r11.s64 + -20856;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DDCA8:
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

__attribute__((alias("__imp__sub_830DDCC0"))) PPC_WEAK_FUNC(sub_830DDCC0);
PPC_FUNC_IMPL(__imp__sub_830DDCC0) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11116
	r31.s64 = r11.s64 + -11116;
	// lwz r11,-11096(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11096);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830ddd04
	if (!cr0.eq) goto loc_830DDD04;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11096(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11096, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20744
	ctx.r3.s64 = r11.s64 + -20744;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DDD04:
	// li r11,5
	r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830DDD30"))) PPC_WEAK_FUNC(sub_830DDD30);
PPC_FUNC_IMPL(__imp__sub_830DDD30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11092
	r31.s64 = r11.s64 + -11092;
	// lwz r11,-11072(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11072);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830ddd74
	if (!cr0.eq) goto loc_830DDD74;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11072(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11072, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20760
	ctx.r3.s64 = r11.s64 + -20760;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DDD74:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,8
	r11.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lfs f0,2244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
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

__attribute__((alias("__imp__sub_830DDDB0"))) PPC_WEAK_FUNC(sub_830DDDB0);
PPC_FUNC_IMPL(__imp__sub_830DDDB0) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11068
	r31.s64 = r11.s64 + -11068;
	// lwz r11,-11048(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11048);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dddf4
	if (!cr0.eq) goto loc_830DDDF4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11048, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20776
	ctx.r3.s64 = r11.s64 + -20776;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DDDF4:
	// li r11,3
	r11.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830DDE20"))) PPC_WEAK_FUNC(sub_830DDE20);
PPC_FUNC_IMPL(__imp__sub_830DDE20) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11044
	r31.s64 = r11.s64 + -11044;
	// lwz r11,-11024(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11024);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dde64
	if (!cr0.eq) goto loc_830DDE64;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11024, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20792
	ctx.r3.s64 = r11.s64 + -20792;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DDE64:
	// li r11,3
	r11.s64 = 3;
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830DDE90"))) PPC_WEAK_FUNC(sub_830DDE90);
PPC_FUNC_IMPL(__imp__sub_830DDE90) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-11020
	r31.s64 = r11.s64 + -11020;
	// lwz r11,-11000(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11000);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dded4
	if (!cr0.eq) goto loc_830DDED4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-11000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11000, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20808
	ctx.r3.s64 = r11.s64 + -20808;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DDED4:
	// li r11,3
	r11.s64 = 3;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830DDF00"))) PPC_WEAK_FUNC(sub_830DDF00);
PPC_FUNC_IMPL(__imp__sub_830DDF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-10996
	r31.s64 = r11.s64 + -10996;
	// lwz r11,-10976(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10976);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830ddf4c
	if (!cr0.eq) goto loc_830DDF4C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,-10976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10976, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8310b028
	sub_8310B028(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20824
	ctx.r3.s64 = r11.s64 + -20824;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DDF4C:
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

__attribute__((alias("__imp__sub_830DDF68"))) PPC_WEAK_FUNC(sub_830DDF68);
PPC_FUNC_IMPL(__imp__sub_830DDF68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,21520
	r31.s64 = r11.s64 + 21520;
	// lwz r11,-10972(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10972);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830de344
	if (!cr0.eq) goto loc_830DE344;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-26828
	ctx.r9.s64 = ctx.r10.s64 + -26828;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-10972(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10972, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r11,248
	r11.s64 = 248;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830ddcc0
	sub_830DDCC0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-25304
	ctx.r9.s64 = ctx.r9.s64 + -25304;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-26872
	ctx.r9.s64 = r11.s64 + -26872;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,184
	ctx.r9.s64 = 184;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830eb910
	sub_830EB910(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-25176
	ctx.r9.s64 = ctx.r9.s64 + -25176;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-26884
	ctx.r9.s64 = r11.s64 + -26884;
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,200
	ctx.r9.s64 = 200;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x830eb988
	sub_830EB988(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// addi r11,r9,-25056
	r11.s64 = ctx.r9.s64 + -25056;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r9,r10,-26904
	ctx.r9.s64 = ctx.r10.s64 + -26904;
	// std r30,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r30.u64);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// li r11,196
	r11.s64 = 196;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x830ddf00
	sub_830DDF00(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r9,r9,-24936
	ctx.r9.s64 = ctx.r9.s64 + -24936;
	// stw r10,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// std r30,184(r31)
	PPC_STORE_U64(r31.u32 + 184, r30.u64);
	// stw r10,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// li r9,212
	ctx.r9.s64 = 212;
	// addi r8,r8,-26584
	ctx.r8.s64 = ctx.r8.s64 + -26584;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// stw r9,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// addi r11,r31,184
	r11.s64 = r31.s64 + 184;
	// stw r8,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r8.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// bl 0x830ddd30
	sub_830DDD30(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-24832
	ctx.r9.s64 = ctx.r9.s64 + -24832;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r10.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,-26616
	ctx.r9.s64 = r11.s64 + -26616;
	// std r30,232(r31)
	PPC_STORE_U64(r31.u32 + 232, r30.u64);
	// li r11,8
	r11.s64 = 8;
	// stw r9,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// li r9,232
	ctx.r9.s64 = 232;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// addi r11,r31,232
	r11.s64 = r31.s64 + 232;
	// stw r9,248(r31)
	PPC_STORE_U32(r31.u32 + 248, ctx.r9.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// bl 0x830dddb0
	sub_830DDDB0(ctx, base);
	// addi r11,r31,280
	r11.s64 = r31.s64 + 280;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r3,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r11,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r9,-24704
	r11.s64 = ctx.r9.s64 + -24704;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r10,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r10.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
	// li r11,8
	r11.s64 = 8;
	// addi r9,r9,-26648
	ctx.r9.s64 = ctx.r9.s64 + -26648;
	// std r30,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r30.u64);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r9,304(r31)
	PPC_STORE_U32(r31.u32 + 304, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// li r11,236
	r11.s64 = 236;
	// stw r10,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,300(r31)
	PPC_STORE_U32(r31.u32 + 300, ctx.r9.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// stw r10,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// bl 0x830dde20
	sub_830DDE20(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,312(r31)
	PPC_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// addi r9,r9,-24600
	ctx.r9.s64 = ctx.r9.s64 + -24600;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,320(r31)
	PPC_STORE_U32(r31.u32 + 320, ctx.r10.u32);
	// stw r9,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r9.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r11,-26916
	ctx.r9.s64 = r11.s64 + -26916;
	// std r30,328(r31)
	PPC_STORE_U64(r31.u32 + 328, r30.u64);
	// stw r10,340(r31)
	PPC_STORE_U32(r31.u32 + 340, ctx.r10.u32);
	// stw r9,352(r31)
	PPC_STORE_U32(r31.u32 + 352, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,240
	ctx.r9.s64 = 240;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r11.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r11.u32);
	// addi r11,r31,328
	r11.s64 = r31.s64 + 328;
	// stw r9,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r9.u32);
	// stw r10,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r10.u32);
	// bl 0x830dde90
	sub_830DDE90(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,360(r31)
	PPC_STORE_U32(r31.u32 + 360, ctx.r3.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// stw r11,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r11.u32);
	// addi r9,r9,-24400
	ctx.r9.s64 = ctx.r9.s64 + -24400;
	// addi r10,r10,-24496
	ctx.r10.s64 = ctx.r10.s64 + -24496;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r9,372(r31)
	PPC_STORE_U32(r31.u32 + 372, ctx.r9.u32);
	// stw r10,368(r31)
	PPC_STORE_U32(r31.u32 + 368, ctx.r10.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r11,-26928
	ctx.r9.s64 = r11.s64 + -26928;
	// std r30,376(r31)
	PPC_STORE_U64(r31.u32 + 376, r30.u64);
	// stw r10,388(r31)
	PPC_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// stw r9,400(r31)
	PPC_STORE_U32(r31.u32 + 400, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,240
	ctx.r9.s64 = 240;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,384(r31)
	PPC_STORE_U32(r31.u32 + 384, r11.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(r31.u32 + 396, r11.u32);
	// addi r11,r31,376
	r11.s64 = r31.s64 + 376;
	// stw r9,392(r31)
	PPC_STORE_U32(r31.u32 + 392, ctx.r9.u32);
	// stw r10,404(r31)
	PPC_STORE_U32(r31.u32 + 404, ctx.r10.u32);
	// bl 0x830dde90
	sub_830DDE90(ctx, base);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,408(r31)
	PPC_STORE_U32(r31.u32 + 408, ctx.r3.u32);
	// addi r10,r10,-24280
	ctx.r10.s64 = ctx.r10.s64 + -24280;
	// addi r9,r9,-24184
	ctx.r9.s64 = ctx.r9.s64 + -24184;
	// addi r11,r31,424
	r11.s64 = r31.s64 + 424;
	// stw r10,416(r31)
	PPC_STORE_U32(r31.u32 + 416, ctx.r10.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,420(r31)
	PPC_STORE_U32(r31.u32 + 420, ctx.r9.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r11,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r11.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r9,r8,-27404
	ctx.r9.s64 = ctx.r8.s64 + -27404;
	// std r30,424(r31)
	PPC_STORE_U64(r31.u32 + 424, r30.u64);
	// stw r11,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r11.u32);
	// stw r9,448(r31)
	PPC_STORE_U32(r31.u32 + 448, ctx.r9.u32);
	// li r11,240
	r11.s64 = 240;
	// stw r10,436(r31)
	PPC_STORE_U32(r31.u32 + 436, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,440(r31)
	PPC_STORE_U32(r31.u32 + 440, r11.u32);
	// stw r9,444(r31)
	PPC_STORE_U32(r31.u32 + 444, ctx.r9.u32);
	// stw r10,452(r31)
	PPC_STORE_U32(r31.u32 + 452, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,456(r31)
	PPC_STORE_U32(r31.u32 + 456, ctx.r3.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,-24056
	ctx.r10.s64 = ctx.r10.s64 + -24056;
	// stw r11,460(r31)
	PPC_STORE_U32(r31.u32 + 460, r11.u32);
	// addi r9,r9,-23960
	ctx.r9.s64 = ctx.r9.s64 + -23960;
	// stw r10,464(r31)
	PPC_STORE_U32(r31.u32 + 464, ctx.r10.u32);
	// stw r9,468(r31)
	PPC_STORE_U32(r31.u32 + 468, ctx.r9.u32);
	// addi r11,r31,472
	r11.s64 = r31.s64 + 472;
	// std r30,472(r31)
	PPC_STORE_U64(r31.u32 + 472, r30.u64);
loc_830DE344:
	// li r11,10
	r11.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DE358"))) PPC_WEAK_FUNC(sub_830DE358);
PPC_FUNC_IMPL(__imp__sub_830DE358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-10968
	r31.s64 = r11.s64 + -10968;
	// lwz r11,-10948(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10948);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830de39c
	if (!cr0.eq) goto loc_830DE39C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-10948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10948, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20728
	ctx.r3.s64 = r11.s64 + -20728;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DE39C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,8
	r11.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lfs f0,2244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
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

__attribute__((alias("__imp__sub_830DE3D8"))) PPC_WEAK_FUNC(sub_830DE3D8);
PPC_FUNC_IMPL(__imp__sub_830DE3D8) {
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-10944
	r31.s64 = r11.s64 + -10944;
	// lwz r11,-10896(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10896);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830de46c
	if (!cr0.eq) goto loc_830DE46C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r10,-26584
	ctx.r9.s64 = ctx.r10.s64 + -26584;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-10896(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10896, r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r11,168
	r11.s64 = 168;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830de358
	sub_830DE358(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// li r11,0
	r11.s64 = 0;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-23472
	ctx.r9.s64 = ctx.r9.s64 + -23472;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// std r8,40(r31)
	PPC_STORE_U64(r31.u32 + 40, ctx.r8.u64);
loc_830DE46C:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_830DE490"))) PPC_WEAK_FUNC(sub_830DE490);
PPC_FUNC_IMPL(__imp__sub_830DE490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-10892
	r31.s64 = r11.s64 + -10892;
	// lwz r11,-10872(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10872);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830de4d4
	if (!cr0.eq) goto loc_830DE4D4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-10872(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10872, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20712
	ctx.r3.s64 = r11.s64 + -20712;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DE4D4:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,4
	r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lfs f0,-23212(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23212);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
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

__attribute__((alias("__imp__sub_830DE500"))) PPC_WEAK_FUNC(sub_830DE500);
PPC_FUNC_IMPL(__imp__sub_830DE500) {
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-10868
	r31.s64 = r11.s64 + -10868;
	// lwz r11,-10820(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10820);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830de594
	if (!cr0.eq) goto loc_830DE594;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r10,-26560
	ctx.r9.s64 = ctx.r10.s64 + -26560;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-10820(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10820, r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r11,168
	r11.s64 = 168;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830de490
	sub_830DE490(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// li r11,0
	r11.s64 = 0;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-23152
	ctx.r9.s64 = ctx.r9.s64 + -23152;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// std r8,40(r31)
	PPC_STORE_U64(r31.u32 + 40, ctx.r8.u64);
loc_830DE594:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_830DE5B8"))) PPC_WEAK_FUNC(sub_830DE5B8);
PPC_FUNC_IMPL(__imp__sub_830DE5B8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831205c0
	sub_831205C0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// beq 0x830de5f8
	if (cr0.eq) goto loc_830DE5F8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_830DE5F8:
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

__attribute__((alias("__imp__sub_830DE618"))) PPC_WEAK_FUNC(sub_830DE618);
PPC_FUNC_IMPL(__imp__sub_830DE618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830de68c
	if (cr0.eq) goto loc_830DE68C;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r10,r10,-13616
	ctx.r10.s64 = ctx.r10.s64 + -13616;
	// lwz r9,544(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 544);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x830de68c
	if (!cr6.lt) goto loc_830DE68C;
	// rlwinm r8,r11,25,7,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFC;
	// clrlwi r11,r11,23
	r11.u64 = r11.u32 & 0x1FF;
	// mulli r9,r11,12
	ctx.r9.s64 = r11.s64 * 12;
	// lwzx r11,r8,r10
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x830de68c
	if (!cr6.eq) goto loc_830DE68C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830de68c
	if (!cr6.eq) goto loc_830DE68C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830de698
	if (!cr6.eq) goto loc_830DE698;
loc_830DE68C:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x830de6bc
	goto loc_830DE6BC;
loc_830DE698:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830de6b8
	if (cr0.eq) goto loc_830DE6B8;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830de6b8
	if (!cr6.eq) goto loc_830DE6B8;
	// bl 0x830daa20
	sub_830DAA20(ctx, base);
	// b 0x830de6bc
	goto loc_830DE6BC;
loc_830DE6B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DE6BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DE6D0"))) PPC_WEAK_FUNC(sub_830DE6D0);
PPC_FUNC_IMPL(__imp__sub_830DE6D0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-13776
	r30.s64 = r11.s64 + -13776;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-13056
	ctx.r3.s64 = r11.s64 + -13056;
	// bl 0x830d7a70
	sub_830D7A70(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r31,0
	r31.s64 = 0;
	// beq 0x830de718
	if (cr0.eq) goto loc_830DE718;
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_830DE718:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_830DE740"))) PPC_WEAK_FUNC(sub_830DE740);
PPC_FUNC_IMPL(__imp__sub_830DE740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830de74c
	if (!cr6.eq) goto loc_830DE74C;
	// blr 
	return;
loc_830DE74C:
	// b 0x830de6d0
	sub_830DE6D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DE750"))) PPC_WEAK_FUNC(sub_830DE750);
PPC_FUNC_IMPL(__imp__sub_830DE750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r8.u32);
	// beq cr6,0x830de7c4
	if (cr6.eq) goto loc_830DE7C4;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r10,r10,-13616
	ctx.r10.s64 = ctx.r10.s64 + -13616;
	// lwz r9,544(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 544);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x830de7c4
	if (!cr6.lt) goto loc_830DE7C4;
	// rlwinm r7,r11,25,7,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFC;
	// clrlwi r11,r11,23
	r11.u64 = r11.u32 & 0x1FF;
	// mulli r9,r11,12
	ctx.r9.s64 = r11.s64 * 12;
	// lwzx r11,r7,r10
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x830de7c4
	if (!cr6.eq) goto loc_830DE7C4;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830de7c4
	if (!cr6.eq) goto loc_830DE7C4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_830DE7C4:
	// lwz r30,12(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mr r31,r30
	r31.u64 = r30.u64;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
loc_830DE7D0:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r28
	reserved.u32 = *(uint32_t*)(base + r28.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r28
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r28.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x830de7d0
	if (!cr0.eq) goto loc_830DE7D0;
	// lis r29,-31942
	r29.s64 = -2093350912;
loc_830DE7F0:
	// lwz r11,-13784(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -13784);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830de824
	if (cr6.eq) goto loc_830DE824;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830de85c
	if (cr0.lt) goto loc_830DE85C;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830de85c
	if (!cr6.eq) goto loc_830DE85C;
loc_830DE824:
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830de85c
	if (!cr6.eq) goto loc_830DE85C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830de85c
	if (cr6.eq) goto loc_830DE85C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x830de7f0
	if (!cr6.lt) goto loc_830DE7F0;
loc_830DE85C:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r28
	reserved.u32 = *(uint32_t*)(base + r28.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r28
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r28.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x830de85c
	if (!cr0.eq) goto loc_830DE85C;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830de898
	if (cr0.eq) goto loc_830DE898;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830de898
	if (!cr6.eq) goto loc_830DE898;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x830de618
	sub_830DE618(ctx, base);
loc_830DE898:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830DE8A0"))) PPC_WEAK_FUNC(sub_830DE8A0);
PPC_FUNC_IMPL(__imp__sub_830DE8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x830de8c4
	if (!cr6.eq) goto loc_830DE8C4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830dea28
	goto loc_830DEA28;
loc_830DE8C4:
	// li r31,0
	r31.s64 = 0;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
	// beq cr6,0x830de928
	if (cr6.eq) goto loc_830DE928;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r10,r10,-13616
	ctx.r10.s64 = ctx.r10.s64 + -13616;
	// lwz r9,544(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 544);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x830de928
	if (!cr6.lt) goto loc_830DE928;
	// rlwinm r8,r11,25,7,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFC;
	// clrlwi r11,r11,23
	r11.u64 = r11.u32 & 0x1FF;
	// mulli r9,r11,12
	ctx.r9.s64 = r11.s64 * 12;
	// lwzx r11,r8,r10
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x830de928
	if (!cr6.eq) goto loc_830DE928;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830de928
	if (!cr6.eq) goto loc_830DE928;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_830DE928:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830de93c
	if (!cr6.eq) goto loc_830DE93C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x830dea28
	goto loc_830DEA28;
loc_830DE93C:
	// lwz r26,12(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r27,r26,16
	r27.s64 = r26.s64 + 16;
loc_830DE944:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r27
	reserved.u32 = *(uint32_t*)(base + r27.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r27
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r27.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x830de944
	if (!cr0.eq) goto loc_830DE944;
	// lis r29,-31942
	r29.s64 = -2093350912;
loc_830DE964:
	// lwz r11,-13784(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -13784);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830de9a4
	if (cr6.eq) goto loc_830DE9A4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830de9e8
	if (cr0.lt) goto loc_830DE9E8;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830de9a4
	if (cr6.eq) goto loc_830DE9A4;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x830de9e8
	if (!cr6.eq) goto loc_830DE9E8;
loc_830DE9A4:
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830de9e8
	if (cr0.lt) goto loc_830DE9E8;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830de9dc
	if (cr6.eq) goto loc_830DE9DC;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x830de9e8
	if (!cr6.eq) goto loc_830DE9E8;
loc_830DE9DC:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830de964
	if (!cr6.eq) goto loc_830DE964;
loc_830DE9E8:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r27
	reserved.u32 = *(uint32_t*)(base + r27.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r27
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r27.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x830de9e8
	if (!cr0.eq) goto loc_830DE9E8;
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830dea24
	if (cr0.eq) goto loc_830DEA24;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830dea24
	if (!cr6.eq) goto loc_830DEA24;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x830de618
	sub_830DE618(ctx, base);
loc_830DEA24:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830DEA28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830DEA30"))) PPC_WEAK_FUNC(sub_830DEA30);
PPC_FUNC_IMPL(__imp__sub_830DEA30) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830dea58
	if (!cr6.eq) goto loc_830DEA58;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830deac4
	goto loc_830DEAC4;
loc_830DEA58:
	// li r11,0
	r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830deac0
	if (cr0.lt) goto loc_830DEAC0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830deac0
	if (!cr6.eq) goto loc_830DEAC0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x830deaac
	goto loc_830DEAAC;
loc_830DEA8C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830deac0
	if (cr0.lt) goto loc_830DEAC0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830deac0
	if (!cr6.eq) goto loc_830DEAC0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830DEAAC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830dea8c
	if (!cr6.eq) goto loc_830DEA8C;
loc_830DEAC0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830DEAC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DEAD0"))) PPC_WEAK_FUNC(sub_830DEAD0);
PPC_FUNC_IMPL(__imp__sub_830DEAD0) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-10816
	r31.s64 = r11.s64 + -10816;
	// lwz r11,-10796(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10796);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830deb14
	if (!cr0.eq) goto loc_830DEB14;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-10796(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10796, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20688
	ctx.r3.s64 = r11.s64 + -20688;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DEB14:
	// li r11,5
	r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830DEB40"))) PPC_WEAK_FUNC(sub_830DEB40);
PPC_FUNC_IMPL(__imp__sub_830DEB40) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-10792
	r31.s64 = r11.s64 + -10792;
	// lwz r11,-10772(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10772);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830deb84
	if (!cr0.eq) goto loc_830DEB84;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-10772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10772, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20672
	ctx.r3.s64 = r11.s64 + -20672;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DEB84:
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830DEBB0"))) PPC_WEAK_FUNC(sub_830DEBB0);
PPC_FUNC_IMPL(__imp__sub_830DEBB0) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-10768
	r31.s64 = r11.s64 + -10768;
	// lwz r11,-10748(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10748);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830debf4
	if (!cr0.eq) goto loc_830DEBF4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-10748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10748, r11.u32);
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20656
	ctx.r3.s64 = r11.s64 + -20656;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DEBF4:
	// li r11,1
	r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830DEC20"))) PPC_WEAK_FUNC(sub_830DEC20);
PPC_FUNC_IMPL(__imp__sub_830DEC20) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-10744
	r31.s64 = r11.s64 + -10744;
	// lwz r11,-10724(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10724);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830dec68
	if (!cr0.eq) goto loc_830DEC68;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-10724(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10724, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8310b008
	sub_8310B008(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20640
	ctx.r3.s64 = r11.s64 + -20640;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_830DEC68:
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

__attribute__((alias("__imp__sub_830DEC80"))) PPC_WEAK_FUNC(sub_830DEC80);
PPC_FUNC_IMPL(__imp__sub_830DEC80) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,27
	r28.s64 = 27;
loc_830DEC94:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830decc0
	if (cr6.eq) goto loc_830DECC0;
loc_830DECA0:
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x830deca0
	if (!cr6.eq) goto loc_830DECA0;
loc_830DECC0:
	// li r11,0
	r11.s64 = 0;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x830dec94
	if (!cr0.eq) goto loc_830DEC94;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830DECE0"))) PPC_WEAK_FUNC(sub_830DECE0);
PPC_FUNC_IMPL(__imp__sub_830DECE0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// mr r30,r28
	r30.u64 = r28.u64;
	// b 0x830ded1c
	goto loc_830DED1C;
loc_830DED0C:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// mulli r9,r30,33
	ctx.r9.s64 = r30.s64 * 33;
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_830DED1C:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x830ded0c
	if (!cr0.eq) goto loc_830DED0C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830ded50
	if (cr0.eq) goto loc_830DED50;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x830ded54
	goto loc_830DED54;
loc_830DED50:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_830DED54:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830ded64
	if (!cr6.eq) goto loc_830DED64;
loc_830DED5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830dedc4
	goto loc_830DEDC4;
loc_830DED64:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7b08
	sub_830D7B08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830ded8c
	if (!cr0.eq) goto loc_830DED8C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// b 0x830ded5c
	goto loc_830DED5C;
loc_830DED8C:
	// li r11,27
	r11.s64 = 27;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// divwu r11,r30,r11
	r11.u32 = r30.u32 / r11.u32;
	// mulli r11,r11,27
	r11.s64 = r11.s64 * 27;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830dedbc
	if (cr6.eq) goto loc_830DEDBC;
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r31.u32);
loc_830DEDBC:
	// stwx r31,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_830DEDC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830DEDD0"))) PPC_WEAK_FUNC(sub_830DEDD0);
PPC_FUNC_IMPL(__imp__sub_830DEDD0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x830dee08
	if (cr0.eq) goto loc_830DEE08;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// bl 0x830dc240
	sub_830DC240(ctx, base);
	// b 0x830dee0c
	goto loc_830DEE0C;
loc_830DEE08:
	// li r31,0
	r31.s64 = 0;
loc_830DEE0C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830dee20
	if (!cr6.eq) goto loc_830DEE20;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830dee2c
	goto loc_830DEE2C;
loc_830DEE20:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
loc_830DEE2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DEE38"))) PPC_WEAK_FUNC(sub_830DEE38);
PPC_FUNC_IMPL(__imp__sub_830DEE38) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830dee74
	if (!cr6.eq) goto loc_830DEE74;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830dee80
	goto loc_830DEE80;
loc_830DEE74:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DEE80:
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

__attribute__((alias("__imp__sub_830DEE98"))) PPC_WEAK_FUNC(sub_830DEE98);
PPC_FUNC_IMPL(__imp__sub_830DEE98) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830deedc
	if (cr0.eq) goto loc_830DEEDC;
	// li r11,22592
	r11.s64 = 22592;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x830deee0
	goto loc_830DEEE0;
loc_830DEEDC:
	// li r11,0
	r11.s64 = 0;
loc_830DEEE0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830deef4
	if (!cr6.eq) goto loc_830DEEF4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830def00
	goto loc_830DEF00;
loc_830DEEF4:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DEF00:
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

__attribute__((alias("__imp__sub_830DEF18"))) PPC_WEAK_FUNC(sub_830DEF18);
PPC_FUNC_IMPL(__imp__sub_830DEF18) {
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
	// li r3,44
	ctx.r3.s64 = 44;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830def50
	if (cr0.eq) goto loc_830DEF50;
	// bl 0x830dd330
	sub_830DD330(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830def54
	goto loc_830DEF54;
loc_830DEF50:
	// li r11,0
	r11.s64 = 0;
loc_830DEF54:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830def68
	if (!cr6.eq) goto loc_830DEF68;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830def74
	goto loc_830DEF74;
loc_830DEF68:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DEF74:
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

__attribute__((alias("__imp__sub_830DEF90"))) PPC_WEAK_FUNC(sub_830DEF90);
PPC_FUNC_IMPL(__imp__sub_830DEF90) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830defb8
	if (cr6.eq) goto loc_830DEFB8;
	// bl 0x830d7cb8
	sub_830D7CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830DEFB8:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_830DEFD0"))) PPC_WEAK_FUNC(sub_830DEFD0);
PPC_FUNC_IMPL(__imp__sub_830DEFD0) {
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
	// li r3,248
	ctx.r3.s64 = 248;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830df008
	if (cr0.eq) goto loc_830DF008;
	// bl 0x830d8d08
	sub_830D8D08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830df00c
	goto loc_830DF00C;
loc_830DF008:
	// li r11,0
	r11.s64 = 0;
loc_830DF00C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830df020
	if (!cr6.eq) goto loc_830DF020;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830df02c
	goto loc_830DF02C;
loc_830DF020:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DF02C:
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

__attribute__((alias("__imp__sub_830DF048"))) PPC_WEAK_FUNC(sub_830DF048);
PPC_FUNC_IMPL(__imp__sub_830DF048) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830df07c
	if (cr6.eq) goto loc_830DF07C;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830DF07C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_830DF098"))) PPC_WEAK_FUNC(sub_830DF098);
PPC_FUNC_IMPL(__imp__sub_830DF098) {
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
	// li r3,208
	ctx.r3.s64 = 208;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830df0d0
	if (cr0.eq) goto loc_830DF0D0;
	// bl 0x830d93f0
	sub_830D93F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830df0d4
	goto loc_830DF0D4;
loc_830DF0D0:
	// li r11,0
	r11.s64 = 0;
loc_830DF0D4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830df0e8
	if (!cr6.eq) goto loc_830DF0E8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830df0f4
	goto loc_830DF0F4;
loc_830DF0E8:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DF0F4:
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

__attribute__((alias("__imp__sub_830DF110"))) PPC_WEAK_FUNC(sub_830DF110);
PPC_FUNC_IMPL(__imp__sub_830DF110) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830df138
	if (cr6.eq) goto loc_830DF138;
	// bl 0x830d94f0
	sub_830D94F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830DF138:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_830DF150"))) PPC_WEAK_FUNC(sub_830DF150);
PPC_FUNC_IMPL(__imp__sub_830DF150) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830df18c
	if (!cr6.eq) goto loc_830DF18C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830df198
	goto loc_830DF198;
loc_830DF18C:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DF198:
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

__attribute__((alias("__imp__sub_830DF1B0"))) PPC_WEAK_FUNC(sub_830DF1B0);
PPC_FUNC_IMPL(__imp__sub_830DF1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,216
	ctx.r3.s64 = 216;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830df1e0
	if (cr0.eq) goto loc_830DF1E0;
	// bl 0x830ddab0
	sub_830DDAB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x830df1e4
	goto loc_830DF1E4;
loc_830DF1E0:
	// li r31,0
	r31.s64 = 0;
loc_830DF1E4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830df1f8
	if (!cr6.eq) goto loc_830DF1F8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830df234
	goto loc_830DF234;
loc_830DF1F8:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef080
	sub_830EF080(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x830df22c
	if (!cr0.lt) goto loc_830DF22C;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x830eef78
	sub_830EEF78(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830df234
	goto loc_830DF234;
loc_830DF22C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DF234:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DF240"))) PPC_WEAK_FUNC(sub_830DF240);
PPC_FUNC_IMPL(__imp__sub_830DF240) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830df274
	if (cr6.eq) goto loc_830DF274;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x830eef78
	sub_830EEF78(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830DF274:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_830DF290"))) PPC_WEAK_FUNC(sub_830DF290);
PPC_FUNC_IMPL(__imp__sub_830DF290) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,140
	ctx.r3.s64 = 140;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830df2e4
	if (cr0.eq) goto loc_830DF2E4;
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// b 0x830df2e8
	goto loc_830DF2E8;
loc_830DF2E4:
	// li r31,0
	r31.s64 = 0;
loc_830DF2E8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830df2fc
	if (!cr6.eq) goto loc_830DF2FC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830df338
	goto loc_830DF338;
loc_830DF2FC:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ef080
	sub_830EF080(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x830df330
	if (!cr0.lt) goto loc_830DF330;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x830eef78
	sub_830EEF78(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830df338
	goto loc_830DF338;
loc_830DF330:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DF338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DF340"))) PPC_WEAK_FUNC(sub_830DF340);
PPC_FUNC_IMPL(__imp__sub_830DF340) {
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
	// li r3,484
	ctx.r3.s64 = 484;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830df39c
	if (cr0.eq) goto loc_830DF39C;
	// li r11,0
	r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// b 0x830df3a0
	goto loc_830DF3A0;
loc_830DF39C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830DF3A0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830df3b4
	if (!cr6.eq) goto loc_830DF3B4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830df3c0
	goto loc_830DF3C0;
loc_830DF3B4:
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_830DF3C0:
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

__attribute__((alias("__imp__sub_830DF3D8"))) PPC_WEAK_FUNC(sub_830DF3D8);
PPC_FUNC_IMPL(__imp__sub_830DF3D8) {
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
	// li r3,176
	ctx.r3.s64 = 176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830df410
	if (cr0.eq) goto loc_830DF410;
	// bl 0x830da2d8
	sub_830DA2D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830df414
	goto loc_830DF414;
loc_830DF410:
	// li r11,0
	r11.s64 = 0;
loc_830DF414:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830df428
	if (!cr6.eq) goto loc_830DF428;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830df434
	goto loc_830DF434;
loc_830DF428:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DF434:
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

__attribute__((alias("__imp__sub_830DF450"))) PPC_WEAK_FUNC(sub_830DF450);
PPC_FUNC_IMPL(__imp__sub_830DF450) {
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
	// li r3,188
	ctx.r3.s64 = 188;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830df488
	if (cr0.eq) goto loc_830DF488;
	// bl 0x830da3f0
	sub_830DA3F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830df48c
	goto loc_830DF48C;
loc_830DF488:
	// li r11,0
	r11.s64 = 0;
loc_830DF48C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830df4a0
	if (!cr6.eq) goto loc_830DF4A0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830df4ac
	goto loc_830DF4AC;
loc_830DF4A0:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DF4AC:
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

__attribute__((alias("__imp__sub_830DF4C8"))) PPC_WEAK_FUNC(sub_830DF4C8);
PPC_FUNC_IMPL(__imp__sub_830DF4C8) {
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
	// li r3,176
	ctx.r3.s64 = 176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830df500
	if (cr0.eq) goto loc_830DF500;
	// bl 0x830da4d0
	sub_830DA4D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830df504
	goto loc_830DF504;
loc_830DF500:
	// li r11,0
	r11.s64 = 0;
loc_830DF504:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830df518
	if (!cr6.eq) goto loc_830DF518;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830df524
	goto loc_830DF524;
loc_830DF518:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DF524:
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

__attribute__((alias("__imp__sub_830DF540"))) PPC_WEAK_FUNC(sub_830DF540);
PPC_FUNC_IMPL(__imp__sub_830DF540) {
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
	// li r3,172
	ctx.r3.s64 = 172;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830df578
	if (cr0.eq) goto loc_830DF578;
	// bl 0x830da530
	sub_830DA530(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830df57c
	goto loc_830DF57C;
loc_830DF578:
	// li r11,0
	r11.s64 = 0;
loc_830DF57C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830df590
	if (!cr6.eq) goto loc_830DF590;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830df59c
	goto loc_830DF59C;
loc_830DF590:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DF59C:
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

__attribute__((alias("__imp__sub_830DF5B8"))) PPC_WEAK_FUNC(sub_830DF5B8);
PPC_FUNC_IMPL(__imp__sub_830DF5B8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830df5e4
	if (cr6.eq) goto loc_830DF5E4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8311f7b0
	sub_8311F7B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830DF5E4:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_830DF600"))) PPC_WEAK_FUNC(sub_830DF600);
PPC_FUNC_IMPL(__imp__sub_830DF600) {
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
	// li r3,184
	ctx.r3.s64 = 184;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830df638
	if (cr0.eq) goto loc_830DF638;
	// bl 0x830da6f8
	sub_830DA6F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830df63c
	goto loc_830DF63C;
loc_830DF638:
	// li r11,0
	r11.s64 = 0;
loc_830DF63C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830df650
	if (!cr6.eq) goto loc_830DF650;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830df65c
	goto loc_830DF65C;
loc_830DF650:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DF65C:
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

__attribute__((alias("__imp__sub_830DF678"))) PPC_WEAK_FUNC(sub_830DF678);
PPC_FUNC_IMPL(__imp__sub_830DF678) {
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
	// li r3,184
	ctx.r3.s64 = 184;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830df6b0
	if (cr0.eq) goto loc_830DF6B0;
	// bl 0x830da8c0
	sub_830DA8C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830df6b4
	goto loc_830DF6B4;
loc_830DF6B0:
	// li r11,0
	r11.s64 = 0;
loc_830DF6B4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830df6c8
	if (!cr6.eq) goto loc_830DF6C8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830df6d4
	goto loc_830DF6D4;
loc_830DF6C8:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830DF6D4:
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

__attribute__((alias("__imp__sub_830DF6F0"))) PPC_WEAK_FUNC(sub_830DF6F0);
PPC_FUNC_IMPL(__imp__sub_830DF6F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7eb0
	sub_830D7EB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830dea30
	sub_830DEA30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt 0x830df730
	if (cr0.lt) goto loc_830DF730;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830DF730:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DF748"))) PPC_WEAK_FUNC(sub_830DF748);
PPC_FUNC_IMPL(__imp__sub_830DF748) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830e9318
	sub_830E9318(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_830DF7A0"))) PPC_WEAK_FUNC(sub_830DF7A0);
PPC_FUNC_IMPL(__imp__sub_830DF7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7e60
	sub_830D7E60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DF7E8"))) PPC_WEAK_FUNC(sub_830DF7E8);
PPC_FUNC_IMPL(__imp__sub_830DF7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7ef8
	sub_830D7EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DF840"))) PPC_WEAK_FUNC(sub_830DF840);
PPC_FUNC_IMPL(__imp__sub_830DF840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7f50
	sub_830D7F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DF898"))) PPC_WEAK_FUNC(sub_830DF898);
PPC_FUNC_IMPL(__imp__sub_830DF898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x830df8d4
	if (!cr6.lt) goto loc_830DF8D4;
	// fmr f30,f0
	f30.f64 = f0.f64;
loc_830DF8D4:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x830df8e0
	if (!cr6.lt) goto loc_830DF8E0;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_830DF8E0:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830df938
	if (cr6.eq) goto loc_830DF938;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bne cr6,0x830df938
	if (!cr6.eq) goto loc_830DF938;
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// andi. r9,r10,5
	ctx.r9.u64 = ctx.r10.u64 & 5;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bne cr6,0x830df91c
	if (!cr6.eq) goto loc_830DF91C;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,260(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fmuls f30,f0,f30
	f30.f64 = double(float(f0.f64 * f30.f64));
loc_830DF91C:
	// andi. r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 & 10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x830df938
	if (!cr6.eq) goto loc_830DF938;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,264(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fmuls f31,f0,f31
	f31.f64 = double(float(f0.f64 * f31.f64));
loc_830DF938:
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// ori r9,r11,16
	ctx.r9.u64 = r11.u64 | 16;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// rlwinm r30,r11,28,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// stw r9,240(r31)
	PPC_STORE_U32(r31.u32 + 240, ctx.r9.u32);
	// beq cr6,0x830df958
	if (cr6.eq) goto loc_830DF958;
	// lfs f30,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f30.f64 = double(temp.f32);
loc_830DF958:
	// rlwinm r11,r6,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x830df968
	if (cr6.eq) goto loc_830DF968;
	// lfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f31.f64 = double(temp.f32);
loc_830DF968:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f2,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// bl 0x830d7df0
	sub_830D7DF0(ctx, base);
	// stfs f30,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x830df9b0
	if (!cr6.eq) goto loc_830DF9B0;
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
loc_830DF9B0:
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830df9e8
	if (cr6.eq) goto loc_830DF9E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f2,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// bl 0x830d7d80
	sub_830D7D80(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
loc_830DF9E8:
	// li r4,2061
	ctx.r4.s64 = 2061;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DFA28"))) PPC_WEAK_FUNC(sub_830DFA28);
PPC_FUNC_IMPL(__imp__sub_830DFA28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830ee050
	sub_830EE050(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x830dfaa8
	if (cr0.eq) goto loc_830DFAA8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x830dfaa8
	if (!cr6.eq) goto loc_830DFAA8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f31.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x830dfa78
	if (!cr6.lt) goto loc_830DFA78;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_830DFA78:
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f2,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x830df898
	sub_830DF898(ctx, base);
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x830f2048
	sub_830F2048(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830dfab0
	goto loc_830DFAB0;
loc_830DFAA8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830DFAB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DFAD0"))) PPC_WEAK_FUNC(sub_830DFAD0);
PPC_FUNC_IMPL(__imp__sub_830DFAD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830ee050
	sub_830EE050(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x830dfb50
	if (cr0.eq) goto loc_830DFB50;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x830dfb50
	if (!cr6.eq) goto loc_830DFB50;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f31.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x830dfb20
	if (!cr6.lt) goto loc_830DFB20;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_830DFB20:
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x830df898
	sub_830DF898(ctx, base);
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x830f2048
	sub_830F2048(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830dfb58
	goto loc_830DFB58;
loc_830DFB50:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830DFB58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DFB78"))) PPC_WEAK_FUNC(sub_830DFB78);
PPC_FUNC_IMPL(__imp__sub_830DFB78) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ee050
	sub_830EE050(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830dfc4c
	if (cr0.eq) goto loc_830DFC4C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x830dfc4c
	if (!cr6.eq) goto loc_830DFC4C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// beq cr6,0x830dfc3c
	if (cr6.eq) goto loc_830DFC3C;
	// oris r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 65536;
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
	// b 0x830dfc28
	goto loc_830DFC28;
loc_830DFBCC:
	// bl 0x830e7b30
	sub_830E7B30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7fa0
	sub_830D7FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830dfc1c
	if (cr6.eq) goto loc_830DFC1C;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830dfc20
	if (cr6.eq) goto loc_830DFC20;
loc_830DFC1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DFC20:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830eb7c8
	sub_830EB7C8(ctx, base);
loc_830DFC28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ea058
	sub_830EA058(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830dfbcc
	if (!cr0.eq) goto loc_830DFBCC;
	// b 0x830dfc44
	goto loc_830DFC44;
loc_830DFC3C:
	// rlwinm r10,r10,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
loc_830DFC44:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830dfc54
	goto loc_830DFC54;
loc_830DFC4C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830DFC54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_830DFC70"))) PPC_WEAK_FUNC(sub_830DFC70);
PPC_FUNC_IMPL(__imp__sub_830DFC70) {
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
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x830dfc94
	if (cr6.eq) goto loc_830DFC94;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830dfca4
	goto loc_830DFCA4;
loc_830DFC94:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830df7a0
	sub_830DF7A0(ctx, base);
loc_830DFCA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DFCB8"))) PPC_WEAK_FUNC(sub_830DFCB8);
PPC_FUNC_IMPL(__imp__sub_830DFCB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,22000
	r31.s64 = r11.s64 + 22000;
	// lwz r11,-10720(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10720);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830dff44
	if (!cr0.eq) goto loc_830DFF44;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-26400
	ctx.r9.s64 = ctx.r10.s64 + -26400;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-10720(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10720, r11.u32);
	// li r11,32
	r11.s64 = 32;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r9,r11,-26420
	ctx.r9.s64 = r11.s64 + -26420;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830dc038
	sub_830DC038(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r9,r11,-26452
	ctx.r9.s64 = r11.s64 + -26452;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r11,r31,76
	r11.s64 = r31.s64 + 76;
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x830dc0a8
	sub_830DC0A8(ctx, base);
	// addi r11,r31,124
	r11.s64 = r31.s64 + 124;
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r30.u32);
	// addi r9,r11,-26472
	ctx.r9.s64 = r11.s64 + -26472;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// li r11,12
	r11.s64 = 12;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r9.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x830dc118
	sub_830DC118(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// addi r9,r9,-30112
	ctx.r9.s64 = ctx.r9.s64 + -30112;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r9,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,-26484
	ctx.r9.s64 = r11.s64 + -26484;
	// std r30,184(r31)
	PPC_STORE_U64(r31.u32 + 184, r30.u64);
	// stw r10,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// addi r11,r31,184
	r11.s64 = r31.s64 + 184;
	// stw r9,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-30208
	ctx.r9.s64 = ctx.r9.s64 + -30208;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r10.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,-26504
	ctx.r9.s64 = r11.s64 + -26504;
	// std r30,232(r31)
	PPC_STORE_U64(r31.u32 + 232, r30.u64);
	// li r11,8
	r11.s64 = 8;
	// stw r9,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// addi r11,r31,232
	r11.s64 = r31.s64 + 232;
	// stw r9,248(r31)
	PPC_STORE_U32(r31.u32 + 248, ctx.r9.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// bl 0x830dc180
	sub_830DC180(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-32168
	ctx.r9.s64 = ctx.r9.s64 + -32168;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r10.u32);
	// stw r9,276(r31)
	PPC_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r11,-26540
	ctx.r9.s64 = r11.s64 + -26540;
	// std r30,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r30.u64);
	// stw r10,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// stw r9,304(r31)
	PPC_STORE_U32(r31.u32 + 304, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,28
	ctx.r9.s64 = 28;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r11.u32);
	// addi r11,r31,280
	r11.s64 = r31.s64 + 280;
	// stw r9,296(r31)
	PPC_STORE_U32(r31.u32 + 296, ctx.r9.u32);
	// stw r10,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// bl 0x830dc1e0
	sub_830DC1E0(ctx, base);
	// stw r3,312(r31)
	PPC_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// addi r11,r31,316
	r11.s64 = r31.s64 + 316;
	// stw r30,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
loc_830DFF44:
	// li r11,7
	r11.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830DFF58"))) PPC_WEAK_FUNC(sub_830DFF58);
PPC_FUNC_IMPL(__imp__sub_830DFF58) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x830dc4f8
	sub_830DC4F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DFF60"))) PPC_WEAK_FUNC(sub_830DFF60);
PPC_FUNC_IMPL(__imp__sub_830DFF60) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x830dc710
	sub_830DC710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DFF68"))) PPC_WEAK_FUNC(sub_830DFF68);
PPC_FUNC_IMPL(__imp__sub_830DFF68) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x830dcc58
	sub_830DCC58(ctx, base);
	return;
}

