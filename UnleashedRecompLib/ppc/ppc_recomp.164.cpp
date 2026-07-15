#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82DE8038"))) PPC_WEAK_FUNC(sub_82DE8038);
PPC_FUNC_IMPL(__imp__sub_82DE8038) {
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
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r11,-32239
	r11.s64 = -2112815104;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,31616
	r11.s64 = r11.s64 + 31616;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// ori r11,r11,24
	r11.u64 = r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 2736);
	// bl 0x82dc6e90
	sub_82DC6E90(ctx, base);
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

__attribute__((alias("__imp__sub_82DE80A8"))) PPC_WEAK_FUNC(sub_82DE80A8);
PPC_FUNC_IMPL(__imp__sub_82DE80A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r3,r11,31720
	ctx.r3.s64 = r11.s64 + 31720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE80B8"))) PPC_WEAK_FUNC(sub_82DE80B8);
PPC_FUNC_IMPL(__imp__sub_82DE80B8) {
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
	// li r4,126
	ctx.r4.s64 = 126;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,31728
	ctx.r10.s64 = ctx.r10.s64 + 31728;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
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

__attribute__((alias("__imp__sub_82DE8100"))) PPC_WEAK_FUNC(sub_82DE8100);
PPC_FUNC_IMPL(__imp__sub_82DE8100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r3,r11,31832
	ctx.r3.s64 = r11.s64 + 31832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE8110"))) PPC_WEAK_FUNC(sub_82DE8110);
PPC_FUNC_IMPL(__imp__sub_82DE8110) {
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
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,31848
	ctx.r10.s64 = ctx.r10.s64 + 31848;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
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

__attribute__((alias("__imp__sub_82DE8160"))) PPC_WEAK_FUNC(sub_82DE8160);
PPC_FUNC_IMPL(__imp__sub_82DE8160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r3,r11,32056
	ctx.r3.s64 = r11.s64 + 32056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE8170"))) PPC_WEAK_FUNC(sub_82DE8170);
PPC_FUNC_IMPL(__imp__sub_82DE8170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r3,r11,32176
	ctx.r3.s64 = r11.s64 + 32176;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE8180"))) PPC_WEAK_FUNC(sub_82DE8180);
PPC_FUNC_IMPL(__imp__sub_82DE8180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r3,r11,32296
	ctx.r3.s64 = r11.s64 + 32296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE8190"))) PPC_WEAK_FUNC(sub_82DE8190);
PPC_FUNC_IMPL(__imp__sub_82DE8190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r3,r11,32416
	ctx.r3.s64 = r11.s64 + 32416;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE81A0"))) PPC_WEAK_FUNC(sub_82DE81A0);
PPC_FUNC_IMPL(__imp__sub_82DE81A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r3,r11,-15332
	ctx.r3.s64 = r11.s64 + -15332;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE81B0"))) PPC_WEAK_FUNC(sub_82DE81B0);
PPC_FUNC_IMPL(__imp__sub_82DE81B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// blt cr6,0x82de81e4
	if (cr6.lt) goto loc_82DE81E4;
	// cmpwi cr6,r6,5
	cr6.compare<int32_t>(ctx.r6.s32, 5, xer);
	// bgt cr6,0x82de81e4
	if (cr6.gt) goto loc_82DE81E4;
	// lis r11,-32239
	r11.s64 = -2112815104;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,9688
	ctx.r6.s64 = r11.s64 + 9688;
	// addi r5,r10,-21684
	ctx.r5.s64 = ctx.r10.s64 + -21684;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,1712
	ctx.r7.s64 = 1712;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	return;
loc_82DE81E4:
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// stbx r6,r11,r3
	PPC_STORE_U8(r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE81F8"))) PPC_WEAK_FUNC(sub_82DE81F8);
PPC_FUNC_IMPL(__imp__sub_82DE81F8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r29,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r29.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r8,32432
	ctx.r8.s64 = ctx.r8.s64 + 32432;
	// stb r11,176(r31)
	PPC_STORE_U8(r31.u32 + 176, r11.u8);
	// lwz r10,29620(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29620);
	// li r7,30
	ctx.r7.s64 = 30;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r7,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r7.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE8268"))) PPC_WEAK_FUNC(sub_82DE8268);
PPC_FUNC_IMPL(__imp__sub_82DE8268) {
	PPC_FUNC_PROLOGUE();
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r11,-32239
	r11.s64 = -2112815104;
	// li r31,0
	r31.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// addi r11,r11,32536
	r11.s64 = r11.s64 + 32536;
	// stw r31,172(r29)
	PPC_STORE_U32(r29.u32 + 172, r31.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// stw r30,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r30.u32);
	// stw r10,176(r29)
	PPC_STORE_U32(r29.u32 + 176, ctx.r10.u32);
	// stw r31,80(r29)
	PPC_STORE_U32(r29.u32 + 80, r31.u32);
	// stw r31,84(r29)
	PPC_STORE_U32(r29.u32 + 84, r31.u32);
	// stw r31,108(r29)
	PPC_STORE_U32(r29.u32 + 108, r31.u32);
	// stw r31,104(r29)
	PPC_STORE_U32(r29.u32 + 104, r31.u32);
	// lwz r3,1452(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1452);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// li r10,7
	ctx.r10.s64 = 7;
	// sth r30,14(r28)
	PPC_STORE_U16(r28.u32 + 14, r30.u16);
	// sth r11,0(r28)
	PPC_STORE_U16(r28.u32 + 0, r11.u16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r11,2(r28)
	PPC_STORE_U16(r28.u32 + 2, r11.u16);
	// sth r11,4(r28)
	PPC_STORE_U16(r28.u32 + 4, r11.u16);
	// sth r10,6(r28)
	PPC_STORE_U16(r28.u32 + 6, ctx.r10.u16);
	// sth r10,8(r28)
	PPC_STORE_U16(r28.u32 + 8, ctx.r10.u16);
	// sth r11,10(r28)
	PPC_STORE_U16(r28.u32 + 10, r11.u16);
	// sth r11,12(r28)
	PPC_STORE_U16(r28.u32 + 12, r11.u16);
	// sth r31,16(r28)
	PPC_STORE_U16(r28.u32 + 16, r31.u16);
	// sth r30,18(r28)
	PPC_STORE_U16(r28.u32 + 18, r30.u16);
	// sth r31,22(r28)
	PPC_STORE_U16(r28.u32 + 22, r31.u16);
	// sth r31,24(r28)
	PPC_STORE_U16(r28.u32 + 24, r31.u16);
	// sth r31,26(r28)
	PPC_STORE_U16(r28.u32 + 26, r31.u16);
	// sth r31,28(r28)
	PPC_STORE_U16(r28.u32 + 28, r31.u16);
	// sth r31,20(r28)
	PPC_STORE_U16(r28.u32 + 20, r31.u16);
	// stw r28,184(r29)
	PPC_STORE_U32(r29.u32 + 184, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DE8328"))) PPC_WEAK_FUNC(sub_82DE8328);
PPC_FUNC_IMPL(__imp__sub_82DE8328) {
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
	// bl 0x82de7bb8
	sub_82DE7BB8(ctx, base);
	// lis r11,-32239
	r11.s64 = -2112815104;
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r11,32640
	r11.s64 = r11.s64 + 32640;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82DE8378"))) PPC_WEAK_FUNC(sub_82DE8378);
PPC_FUNC_IMPL(__imp__sub_82DE8378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r3,r11,32744
	ctx.r3.s64 = r11.s64 + 32744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE8388"))) PPC_WEAK_FUNC(sub_82DE8388);
PPC_FUNC_IMPL(__imp__sub_82DE8388) {
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
	// li r4,134
	ctx.r4.s64 = 134;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,-32768
	r11.s64 = r11.s64 + -32768;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,29628(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29628);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// ori r11,r11,24
	r11.u64 = r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 2736);
	// bl 0x82dc6e90
	sub_82DC6E90(ctx, base);
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

__attribute__((alias("__imp__sub_82DE8410"))) PPC_WEAK_FUNC(sub_82DE8410);
PPC_FUNC_IMPL(__imp__sub_82DE8410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-32664
	ctx.r3.s64 = r11.s64 + -32664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE8420"))) PPC_WEAK_FUNC(sub_82DE8420);
PPC_FUNC_IMPL(__imp__sub_82DE8420) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r10,r10,-32656
	ctx.r10.s64 = ctx.r10.s64 + -32656;
	// stw r9,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// ori r11,r11,24
	r11.u64 = r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 2736);
	// bl 0x82dc6e90
	sub_82DC6E90(ctx, base);
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

__attribute__((alias("__imp__sub_82DE8498"))) PPC_WEAK_FUNC(sub_82DE8498);
PPC_FUNC_IMPL(__imp__sub_82DE8498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-32552
	ctx.r3.s64 = r11.s64 + -32552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE84A8"))) PPC_WEAK_FUNC(sub_82DE84A8);
PPC_FUNC_IMPL(__imp__sub_82DE84A8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-32544
	r11.s64 = r11.s64 + -32544;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r10.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// ori r11,r11,24
	r11.u64 = r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 2736);
	// bl 0x82dc6e90
	sub_82DC6E90(ctx, base);
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

__attribute__((alias("__imp__sub_82DE8520"))) PPC_WEAK_FUNC(sub_82DE8520);
PPC_FUNC_IMPL(__imp__sub_82DE8520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-32440
	ctx.r3.s64 = r11.s64 + -32440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE8530"))) PPC_WEAK_FUNC(sub_82DE8530);
PPC_FUNC_IMPL(__imp__sub_82DE8530) {
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
	// li r4,136
	ctx.r4.s64 = 136;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32424
	r11.s64 = r11.s64 + -32424;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// ori r11,r11,24
	r11.u64 = r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 2736);
	// bl 0x82dc6e90
	sub_82DC6E90(ctx, base);
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

__attribute__((alias("__imp__sub_82DE85A8"))) PPC_WEAK_FUNC(sub_82DE85A8);
PPC_FUNC_IMPL(__imp__sub_82DE85A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-32320
	ctx.r3.s64 = r11.s64 + -32320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE85B8"))) PPC_WEAK_FUNC(sub_82DE85B8);
PPC_FUNC_IMPL(__imp__sub_82DE85B8) {
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
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32304
	r11.s64 = r11.s64 + -32304;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// ori r11,r11,24
	r11.u64 = r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 2736);
	// bl 0x82dc6e90
	sub_82DC6E90(ctx, base);
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

__attribute__((alias("__imp__sub_82DE8630"))) PPC_WEAK_FUNC(sub_82DE8630);
PPC_FUNC_IMPL(__imp__sub_82DE8630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-32200
	ctx.r3.s64 = r11.s64 + -32200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE8640"))) PPC_WEAK_FUNC(sub_82DE8640);
PPC_FUNC_IMPL(__imp__sub_82DE8640) {
	PPC_FUNC_PROLOGUE();
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
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,139
	ctx.r4.s64 = 139;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// addi r11,r11,-32184
	r11.s64 = r11.s64 + -32184;
	// stw r29,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r29.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE8698"))) PPC_WEAK_FUNC(sub_82DE8698);
PPC_FUNC_IMPL(__imp__sub_82DE8698) {
	PPC_FUNC_PROLOGUE();
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
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,138
	ctx.r4.s64 = 138;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// addi r11,r11,-32080
	r11.s64 = r11.s64 + -32080;
	// stw r29,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r29.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE86F0"))) PPC_WEAK_FUNC(sub_82DE86F0);
PPC_FUNC_IMPL(__imp__sub_82DE86F0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,141
	ctx.r4.s64 = 141;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31976
	r11.s64 = r11.s64 + -31976;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
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

__attribute__((alias("__imp__sub_82DE8748"))) PPC_WEAK_FUNC(sub_82DE8748);
PPC_FUNC_IMPL(__imp__sub_82DE8748) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,140
	ctx.r4.s64 = 140;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31872
	r11.s64 = r11.s64 + -31872;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
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

__attribute__((alias("__imp__sub_82DE87A0"))) PPC_WEAK_FUNC(sub_82DE87A0);
PPC_FUNC_IMPL(__imp__sub_82DE87A0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de87fc
	if (cr0.eq) goto loc_82DE87FC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,30152
	ctx.r10.s64 = ctx.r10.s64 + 30152;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// b 0x82de8800
	goto loc_82DE8800;
loc_82DE87FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8800:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE8808"))) PPC_WEAK_FUNC(sub_82DE8808);
PPC_FUNC_IMPL(__imp__sub_82DE8808) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de884c
	if (cr0.eq) goto loc_82DE884C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de7a50
	sub_82DE7A50(ctx, base);
	// b 0x82de8850
	goto loc_82DE8850;
loc_82DE884C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8850:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE8858"))) PPC_WEAK_FUNC(sub_82DE8858);
PPC_FUNC_IMPL(__imp__sub_82DE8858) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de889c
	if (cr0.eq) goto loc_82DE889C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de7b00
	sub_82DE7B00(ctx, base);
	// b 0x82de88a0
	goto loc_82DE88A0;
loc_82DE889C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE88A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE88A8"))) PPC_WEAK_FUNC(sub_82DE88A8);
PPC_FUNC_IMPL(__imp__sub_82DE88A8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de8908
	if (cr0.eq) goto loc_82DE8908;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32239
	r11.s64 = -2112815104;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,30256
	r11.s64 = r11.s64 + 30256;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82de890c
	goto loc_82DE890C;
loc_82DE8908:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE890C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE8918"))) PPC_WEAK_FUNC(sub_82DE8918);
PPC_FUNC_IMPL(__imp__sub_82DE8918) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de895c
	if (cr0.eq) goto loc_82DE895C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de8420
	sub_82DE8420(ctx, base);
	// b 0x82de8960
	goto loc_82DE8960;
loc_82DE895C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8960:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE8968"))) PPC_WEAK_FUNC(sub_82DE8968);
PPC_FUNC_IMPL(__imp__sub_82DE8968) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de89ac
	if (cr0.eq) goto loc_82DE89AC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de84a8
	sub_82DE84A8(ctx, base);
	// b 0x82de89b0
	goto loc_82DE89B0;
loc_82DE89AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE89B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE89B8"))) PPC_WEAK_FUNC(sub_82DE89B8);
PPC_FUNC_IMPL(__imp__sub_82DE89B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de89fc
	if (cr0.eq) goto loc_82DE89FC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de8388
	sub_82DE8388(ctx, base);
	// b 0x82de8a00
	goto loc_82DE8A00;
loc_82DE89FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8A00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE8A08"))) PPC_WEAK_FUNC(sub_82DE8A08);
PPC_FUNC_IMPL(__imp__sub_82DE8A08) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de8a4c
	if (cr0.eq) goto loc_82DE8A4C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de8530
	sub_82DE8530(ctx, base);
	// b 0x82de8a50
	goto loc_82DE8A50;
loc_82DE8A4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8A50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE8A58"))) PPC_WEAK_FUNC(sub_82DE8A58);
PPC_FUNC_IMPL(__imp__sub_82DE8A58) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de8a9c
	if (cr0.eq) goto loc_82DE8A9C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de85b8
	sub_82DE85B8(ctx, base);
	// b 0x82de8aa0
	goto loc_82DE8AA0;
loc_82DE8A9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8AA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE8AA8"))) PPC_WEAK_FUNC(sub_82DE8AA8);
PPC_FUNC_IMPL(__imp__sub_82DE8AA8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de8aec
	if (cr0.eq) goto loc_82DE8AEC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de8268
	sub_82DE8268(ctx, base);
	// b 0x82de8af0
	goto loc_82DE8AF0;
loc_82DE8AEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8AF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE8AF8"))) PPC_WEAK_FUNC(sub_82DE8AF8);
PPC_FUNC_IMPL(__imp__sub_82DE8AF8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82de8b58
	if (cr0.eq) goto loc_82DE8B58;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,31384
	ctx.r10.s64 = ctx.r10.s64 + 31384;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// b 0x82de8b5c
	goto loc_82DE8B5C;
loc_82DE8B58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8B5C:
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

__attribute__((alias("__imp__sub_82DE8B78"))) PPC_WEAK_FUNC(sub_82DE8B78);
PPC_FUNC_IMPL(__imp__sub_82DE8B78) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de8bbc
	if (cr0.eq) goto loc_82DE8BBC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de8038
	sub_82DE8038(ctx, base);
	// b 0x82de8bc0
	goto loc_82DE8BC0;
loc_82DE8BBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8BC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE8BC8"))) PPC_WEAK_FUNC(sub_82DE8BC8);
PPC_FUNC_IMPL(__imp__sub_82DE8BC8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82de8c28
	if (cr0.eq) goto loc_82DE8C28;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,126
	ctx.r4.s64 = 126;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,31728
	ctx.r10.s64 = ctx.r10.s64 + 31728;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// b 0x82de8c2c
	goto loc_82DE8C2C;
loc_82DE8C28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8C2C:
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

__attribute__((alias("__imp__sub_82DE8C48"))) PPC_WEAK_FUNC(sub_82DE8C48);
PPC_FUNC_IMPL(__imp__sub_82DE8C48) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82de8c9c
	if (cr0.eq) goto loc_82DE8C9C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,142
	ctx.r4.s64 = 142;
	// bl 0x82de8110
	sub_82DE8110(ctx, base);
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r11,r11,32072
	r11.s64 = r11.s64 + 32072;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82de8ca0
	goto loc_82DE8CA0;
loc_82DE8C9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8CA0:
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

__attribute__((alias("__imp__sub_82DE8CB8"))) PPC_WEAK_FUNC(sub_82DE8CB8);
PPC_FUNC_IMPL(__imp__sub_82DE8CB8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82de8d0c
	if (cr0.eq) goto loc_82DE8D0C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,143
	ctx.r4.s64 = 143;
	// bl 0x82de8110
	sub_82DE8110(ctx, base);
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r11,r11,32192
	r11.s64 = r11.s64 + 32192;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82de8d10
	goto loc_82DE8D10;
loc_82DE8D0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8D10:
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

__attribute__((alias("__imp__sub_82DE8D28"))) PPC_WEAK_FUNC(sub_82DE8D28);
PPC_FUNC_IMPL(__imp__sub_82DE8D28) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82de8d7c
	if (cr0.eq) goto loc_82DE8D7C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,144
	ctx.r4.s64 = 144;
	// bl 0x82de8110
	sub_82DE8110(ctx, base);
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r11,r11,32312
	r11.s64 = r11.s64 + 32312;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82de8d80
	goto loc_82DE8D80;
loc_82DE8D7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8D80:
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

__attribute__((alias("__imp__sub_82DE8D98"))) PPC_WEAK_FUNC(sub_82DE8D98);
PPC_FUNC_IMPL(__imp__sub_82DE8D98) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82de8dec
	if (cr0.eq) goto loc_82DE8DEC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x82de8110
	sub_82DE8110(ctx, base);
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r11,r11,31952
	r11.s64 = r11.s64 + 31952;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82de8df0
	goto loc_82DE8DF0;
loc_82DE8DEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8DF0:
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

__attribute__((alias("__imp__sub_82DE8E08"))) PPC_WEAK_FUNC(sub_82DE8E08);
PPC_FUNC_IMPL(__imp__sub_82DE8E08) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de8e68
	if (cr0.eq) goto loc_82DE8E68;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32239
	r11.s64 = -2112815104;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,30048
	r11.s64 = r11.s64 + 30048;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82de8e6c
	goto loc_82DE8E6C;
loc_82DE8E68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8E6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE8E78"))) PPC_WEAK_FUNC(sub_82DE8E78);
PPC_FUNC_IMPL(__imp__sub_82DE8E78) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de8ed8
	if (cr0.eq) goto loc_82DE8ED8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32239
	r11.s64 = -2112815104;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,16864
	r11.s64 = r11.s64 + 16864;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82de8edc
	goto loc_82DE8EDC;
loc_82DE8ED8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8EDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE8EE8"))) PPC_WEAK_FUNC(sub_82DE8EE8);
PPC_FUNC_IMPL(__imp__sub_82DE8EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r27,1452(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// beq 0x82de8f3c
	if (cr0.eq) goto loc_82DE8F3C;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de81f8
	sub_82DE81F8(ctx, base);
	// b 0x82de8f40
	goto loc_82DE8F40;
loc_82DE8F3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8F40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82DE8F48"))) PPC_WEAK_FUNC(sub_82DE8F48);
PPC_FUNC_IMPL(__imp__sub_82DE8F48) {
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
	// bl 0x82de7878
	sub_82DE7878(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,30048
	ctx.r10.s64 = ctx.r10.s64 + 30048;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,29628(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29628);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82DE8FA0"))) PPC_WEAK_FUNC(sub_82DE8FA0);
PPC_FUNC_IMPL(__imp__sub_82DE8FA0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de8fe4
	if (cr0.eq) goto loc_82DE8FE4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de8f48
	sub_82DE8F48(ctx, base);
	// b 0x82de8fe8
	goto loc_82DE8FE8;
loc_82DE8FE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE8FE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE8FF0"))) PPC_WEAK_FUNC(sub_82DE8FF0);
PPC_FUNC_IMPL(__imp__sub_82DE8FF0) {
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
	// addi r3,r4,128
	ctx.r3.s64 = ctx.r4.s64 + 128;
	// stw r4,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r4.u32);
	// bl 0x82de42e8
	sub_82DE42E8(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// rlwinm r30,r10,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82DE90E0"))) PPC_WEAK_FUNC(sub_82DE90E0);
PPC_FUNC_IMPL(__imp__sub_82DE90E0) {
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
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// b 0x82de9134
	goto loc_82DE9134;
loc_82DE90FC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82de9144
	if (cr6.eq) goto loc_82DE9144;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// beq 0x82de912c
	if (cr0.eq) goto loc_82DE912C;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
loc_82DE912C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stwx r29,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r29.u32);
loc_82DE9134:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82de90fc
	if (!cr6.eq) goto loc_82DE90FC;
loc_82DE9144:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82de9160
	if (cr6.eq) goto loc_82DE9160;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
loc_82DE9160:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// ble cr6,0x82de9134
	if (!cr6.gt) goto loc_82DE9134;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DE91F8"))) PPC_WEAK_FUNC(sub_82DE91F8);
PPC_FUNC_IMPL(__imp__sub_82DE91F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b0c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r3,32(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 32);
	// bl 0x82dca888
	sub_82DCA888(ctx, base);
	// lwz r11,28(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 28);
	// li r21,1
	r21.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82de9354
	if (cr6.lt) goto loc_82DE9354;
	// addi r22,r3,4
	r22.s64 = ctx.r3.s64 + 4;
loc_82DE9224:
	// lwz r25,0(r22)
	r25.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// lwz r24,72(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 72);
loc_82DE9238:
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x82de9250
	if (!cr6.gt) goto loc_82DE9250;
	// li r11,0
	r11.s64 = 0;
	// b 0x82de925c
	goto loc_82DE925C;
loc_82DE9250:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwzx r31,r10,r30
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
loc_82DE925C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82de9294
	if (cr0.eq) goto loc_82DE9294;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// beq cr6,0x82de9288
	if (cr6.eq) goto loc_82DE9288;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82de9f70
	sub_82DE9F70(ctx, base);
loc_82DE9288:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x82de9238
	goto loc_82DE9238;
loc_82DE9294:
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r26,1
	r26.s64 = 1;
loc_82DE92A0:
	// lwz r11,88(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// ble cr6,0x82de92b8
	if (!cr6.gt) goto loc_82DE92B8;
	// li r11,0
	r11.s64 = 0;
	// b 0x82de92c4
	goto loc_82DE92C4;
loc_82DE92B8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwzx r27,r10,r28
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
loc_82DE92C4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82de9340
	if (cr0.eq) goto loc_82DE9340;
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
loc_82DE92D8:
	// lwz r11,92(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x82de92f0
	if (!cr6.gt) goto loc_82DE92F0;
	// li r11,0
	r11.s64 = 0;
	// b 0x82de92fc
	goto loc_82DE92FC;
loc_82DE92F0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwzx r31,r10,r30
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
loc_82DE92FC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82de9334
	if (cr0.eq) goto loc_82DE9334;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// beq cr6,0x82de9328
	if (cr6.eq) goto loc_82DE9328;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82de9f70
	sub_82DE9F70(ctx, base);
loc_82DE9328:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x82de92d8
	goto loc_82DE92D8;
loc_82DE9334:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// b 0x82de92a0
	goto loc_82DE92A0;
loc_82DE9340:
	// lwz r11,28(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 28);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// ble cr6,0x82de9224
	if (!cr6.gt) goto loc_82DE9224;
loc_82DE9354:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82DE9360"))) PPC_WEAK_FUNC(sub_82DE9360);
PPC_FUNC_IMPL(__imp__sub_82DE9360) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r30,1456(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x82de93a8
	if (cr0.eq) goto loc_82DE93A8;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// b 0x82de93ac
	goto loc_82DE93AC;
loc_82DE93A8:
	// li r29,0
	r29.s64 = 0;
loc_82DE93AC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// b 0x82de93cc
	goto loc_82DE93CC;
loc_82DE93B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r28,r11,r30
	r28.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
loc_82DE93CC:
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82de93b4
	if (!cr6.eq) goto loc_82DE93B4;
	// b 0x82de943c
	goto loc_82DE943C;
loc_82DE93E8:
	// bl 0x82dce120
	sub_82DCE120(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x82de9430
	if (!cr6.lt) goto loc_82DE9430;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r8.u32);
loc_82DE9430:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
loc_82DE943C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82de93e8
	if (!cr6.eq) goto loc_82DE93E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ddc958
	sub_82DDC958(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DE9460"))) PPC_WEAK_FUNC(sub_82DE9460);
PPC_FUNC_IMPL(__imp__sub_82DE9460) {
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
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82de9490
	if (cr6.eq) goto loc_82DE9490;
	// bl 0x82de9360
	sub_82DE9360(ctx, base);
loc_82DE9490:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
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

__attribute__((alias("__imp__sub_82DE94B0"))) PPC_WEAK_FUNC(sub_82DE94B0);
PPC_FUNC_IMPL(__imp__sub_82DE94B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,2148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2148);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,2148(r11)
	PPC_STORE_U32(r11.u32 + 2148, ctx.r10.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r30,1456(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r28,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r28.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x82de9508
	if (cr0.eq) goto loc_82DE9508;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// b 0x82de950c
	goto loc_82DE950C;
loc_82DE9508:
	// li r28,0
	r28.s64 = 0;
loc_82DE950C:
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r27,2
	r27.s64 = 2;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r11.u32);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 72);
loc_82DE9558:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
loc_82DE9564:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,2148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2148);
	// bl 0x82de9e60
	sub_82DE9E60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82de95dc
	if (cr0.eq) goto loc_82DE95DC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r27,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r27.u32);
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,2148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	// stw r10,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r11.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// b 0x82de9558
	goto loc_82DE9558;
loc_82DE95DC:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82de95f8
	if (cr6.eq) goto loc_82DE95F8;
	// bl 0x82dce120
	sub_82DCE120(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82de9564
	goto loc_82DE9564;
loc_82DE95F8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ddc958
	sub_82DDC958(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82DE9608"))) PPC_WEAK_FUNC(sub_82DE9608);
PPC_FUNC_IMPL(__imp__sub_82DE9608) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r22,164(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// lwz r10,72(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82de964c
	if (!cr6.eq) goto loc_82DE964C;
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// b 0x82de9640
	goto loc_82DE9640;
loc_82DE9634:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82DE9640:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82de9634
	if (!cr6.eq) goto loc_82DE9634;
loc_82DE964C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82de94b0
	sub_82DE94B0(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82dc70f8
	sub_82DC70F8(ctx, base);
	// li r23,0
	r23.s64 = 0;
	// lwz r24,28(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(r24.u32, 1, xer);
	// ble cr6,0x82de97dc
	if (!cr6.gt) goto loc_82DE97DC;
	// rlwinm r29,r24,2,0,29
	r29.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DE967C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// li r26,1
	r26.s64 = 1;
	// lwzx r25,r29,r11
	r25.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
loc_82DE9690:
	// lwz r11,60(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 60);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// ble cr6,0x82de96a8
	if (!cr6.gt) goto loc_82DE96A8;
	// mr r11,r23
	r11.u64 = r23.u64;
	// b 0x82de96b4
	goto loc_82DE96B4;
loc_82DE96A8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwzx r28,r10,r27
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
loc_82DE96B4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82de96f0
	if (cr0.eq) goto loc_82DE96F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// bl 0x82de9460
	sub_82DE9460(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82de96e4
	if (!cr6.lt) goto loc_82DE96E4;
	// stwx r11,r29,r30
	PPC_STORE_U32(r29.u32 + r30.u32, r11.u32);
loc_82DE96E4:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// b 0x82de9690
	goto loc_82DE9690;
loc_82DE96F0:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r30,1456(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x82de971c
	if (cr0.eq) goto loc_82DE971C;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r23.u32);
	// b 0x82de9720
	goto loc_82DE9720;
loc_82DE971C:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82DE9720:
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stwx r11,r29,r10
	PPC_STORE_U32(r29.u32 + ctx.r10.u32, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	r30.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// b 0x82de97c4
	goto loc_82DE97C4;
loc_82DE9778:
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82de9460
	sub_82DE9460(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x82de97b8
	if (!cr6.eq) goto loc_82DE97B8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// b 0x82de97c0
	goto loc_82DE97C0;
loc_82DE97B8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r3.u32);
loc_82DE97C0:
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_82DE97C4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82de9778
	if (!cr6.eq) goto loc_82DE9778;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(r24.u32, 1, xer);
	// bgt cr6,0x82de967c
	if (cr6.gt) goto loc_82DE967C;
loc_82DE97DC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r23,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r23.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x82de9838
	if (cr6.lt) goto loc_82DE9838;
	// li r11,8
	r11.s64 = 8;
loc_82DE97F8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82de9824
	if (cr6.eq) goto loc_82DE9824;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r8,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r8.u32);
loc_82DE9824:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x82de97f8
	if (!cr6.gt) goto loc_82DE97F8;
loc_82DE9838:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82de989c
	if (cr6.lt) goto loc_82DE989C;
loc_82DE9848:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// bne cr6,0x82de9858
	if (!cr6.eq) goto loc_82DE9858;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// b 0x82de9870
	goto loc_82DE9870;
loc_82DE9858:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
loc_82DE9870:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r3,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r3.u32);
	// beq cr6,0x82de988c
	if (cr6.eq) goto loc_82DE988C;
	// bl 0x82de9f38
	sub_82DE9F38(ctx, base);
loc_82DE988C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82de9848
	if (!cr6.gt) goto loc_82DE9848;
loc_82DE989C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82de91f8
	sub_82DE91F8(ctx, base);
	// lwz r11,76(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82de98d4
	if (!cr6.eq) goto loc_82DE98D4;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// b 0x82de98c8
	goto loc_82DE98C8;
loc_82DE98BC:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r10,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r10.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82DE98C8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82de98bc
	if (!cr6.eq) goto loc_82DE98BC;
loc_82DE98D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82DE98E0"))) PPC_WEAK_FUNC(sub_82DE98E0);
PPC_FUNC_IMPL(__imp__sub_82DE98E0) {
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
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r30,1456(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82de992c
	if (cr0.eq) goto loc_82DE992C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de8ff0
	sub_82DE8FF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82de9930
	goto loc_82DE9930;
loc_82DE992C:
	// li r31,0
	r31.s64 = 0;
loc_82DE9930:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82de9608
	sub_82DE9608(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82de9954
	if (cr6.eq) goto loc_82DE9954;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82de90e0
	sub_82DE90E0(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
loc_82DE9954:
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

__attribute__((alias("__imp__sub_82DE9970"))) PPC_WEAK_FUNC(sub_82DE9970);
PPC_FUNC_IMPL(__imp__sub_82DE9970) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x82de4250
	sub_82DE4250(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r31.u32);
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

__attribute__((alias("__imp__sub_82DE99B8"))) PPC_WEAK_FUNC(sub_82DE99B8);
PPC_FUNC_IMPL(__imp__sub_82DE99B8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82de4270
	sub_82DE4270(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r31.u32);
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

__attribute__((alias("__imp__sub_82DE9A00"))) PPC_WEAK_FUNC(sub_82DE9A00);
PPC_FUNC_IMPL(__imp__sub_82DE9A00) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82de9a48
	if (!cr6.eq) goto loc_82DE9A48;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-31736
	ctx.r6.s64 = r11.s64 + -31736;
	// addi r5,r10,-31768
	ctx.r5.s64 = ctx.r10.s64 + -31768;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,181
	ctx.r7.s64 = 181;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DE9A48:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de4270
	sub_82DE4270(ctx, base);
	// stw r29,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE9A60"))) PPC_WEAK_FUNC(sub_82DE9A60);
PPC_FUNC_IMPL(__imp__sub_82DE9A60) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82de9aa8
	if (!cr6.eq) goto loc_82DE9AA8;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-31736
	ctx.r6.s64 = r11.s64 + -31736;
	// addi r5,r10,-31656
	ctx.r5.s64 = ctx.r10.s64 + -31656;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,193
	ctx.r7.s64 = 193;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DE9AA8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de4250
	sub_82DE4250(ctx, base);
	// stw r29,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DE9AC0"))) PPC_WEAK_FUNC(sub_82DE9AC0);
PPC_FUNC_IMPL(__imp__sub_82DE9AC0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x82de4270
	sub_82DE4270(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r31,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r31.u32);
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

__attribute__((alias("__imp__sub_82DE9B08"))) PPC_WEAK_FUNC(sub_82DE9B08);
PPC_FUNC_IMPL(__imp__sub_82DE9B08) {
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
	// lwz r31,28(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// b 0x82de9b60
	goto loc_82DE9B60;
loc_82DE9B28:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82de9b5c
	if (cr0.eq) goto loc_82DE9B5C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x82de9b5c
	if (!cr6.eq) goto loc_82DE9B5C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82de9b88
	if (cr0.eq) goto loc_82DE9B88;
loc_82DE9B5C:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82DE9B60:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82de9b28
	if (!cr6.eq) goto loc_82DE9B28;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82DE9B70:
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
loc_82DE9B88:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82de9b70
	goto loc_82DE9B70;
}

__attribute__((alias("__imp__sub_82DE9B90"))) PPC_WEAK_FUNC(sub_82DE9B90);
PPC_FUNC_IMPL(__imp__sub_82DE9B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-31628
	r11.s64 = r11.s64 + -31628;
	// addi r28,r31,20
	r28.s64 = r31.s64 + 20;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x82de42b0
	sub_82DE42B0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r10,1388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1388);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// lwz r10,1388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1388);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1388(r11)
	PPC_STORE_U32(r11.u32 + 1388, ctx.r10.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r9.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// stb r30,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r30.u8);
	// stw r8,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r8.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r27,1452(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82de9c54
	if (cr0.eq) goto loc_82DE9C54;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// b 0x82de9c58
	goto loc_82DE9C58;
loc_82DE9C54:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82DE9C58:
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r27,1452(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82de9c90
	if (cr0.eq) goto loc_82DE9C90;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// b 0x82de9c94
	goto loc_82DE9C94;
loc_82DE9C90:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82DE9C94:
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r27,1452(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82de9ccc
	if (cr0.eq) goto loc_82DE9CCC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// b 0x82de9cd0
	goto loc_82DE9CD0;
loc_82DE9CCC:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82DE9CD0:
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r27,1452(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82de9d08
	if (cr0.eq) goto loc_82DE9D08;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// b 0x82de9d0c
	goto loc_82DE9D0C;
loc_82DE9D08:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82DE9D0C:
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r27,1452(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82de9d44
	if (cr0.eq) goto loc_82DE9D44;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// b 0x82de9d48
	goto loc_82DE9D48;
loc_82DE9D44:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82DE9D48:
	// stw r29,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r29.u32);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r29,1452(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de9d7c
	if (cr0.eq) goto loc_82DE9D7C;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de7cb0
	sub_82DE7CB0(ctx, base);
	// b 0x82de9d80
	goto loc_82DE9D80;
loc_82DE9D7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82DE9D80:
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r29,1452(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82de9db4
	if (cr0.eq) goto loc_82DE9DB4;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de7d08
	sub_82DE7D08(ctx, base);
	// b 0x82de9db8
	goto loc_82DE9DB8;
loc_82DE9DB4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82DE9DB8:
	// stw r3,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82de4338
	sub_82DE4338(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,948(r11)
	PPC_STORE_U32(r11.u32 + 948, r31.u32);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// stw r31,948(r11)
	PPC_STORE_U32(r11.u32 + 948, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82DE9DF0"))) PPC_WEAK_FUNC(sub_82DE9DF0);
PPC_FUNC_IMPL(__imp__sub_82DE9DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-31580
	ctx.r3.s64 = r11.s64 + -31580;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE9E00"))) PPC_WEAK_FUNC(sub_82DE9E00);
PPC_FUNC_IMPL(__imp__sub_82DE9E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82DE9E18:
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// ble cr6,0x82de9e28
	if (!cr6.gt) goto loc_82DE9E28;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82de9e34
	goto loc_82DE9E34;
loc_82DE9E28:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
loc_82DE9E34:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82de9e54
	if (cr0.eq) goto loc_82DE9E54;
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x82de9e18
	goto loc_82DE9E18;
loc_82DE9E54:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE9E60"))) PPC_WEAK_FUNC(sub_82DE9E60);
PPC_FUNC_IMPL(__imp__sub_82DE9E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_82DE9E74:
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// ble cr6,0x82de9e84
	if (!cr6.gt) goto loc_82DE9E84;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82de9e90
	goto loc_82DE9E90;
loc_82DE9E84:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r3,r6,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
loc_82DE9E90:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82de9eb0
	if (cr0.eq) goto loc_82DE9EB0;
	// lwz r9,128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x82de9e74
	goto loc_82DE9E74;
loc_82DE9EB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE9EB8"))) PPC_WEAK_FUNC(sub_82DE9EB8);
PPC_FUNC_IMPL(__imp__sub_82DE9EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subfic r11,r11,1
	xer.ca = r11.u32 <= 1;
	r11.s64 = 1 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE9ED0"))) PPC_WEAK_FUNC(sub_82DE9ED0);
PPC_FUNC_IMPL(__imp__sub_82DE9ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subfic r11,r11,1
	xer.ca = r11.u32 <= 1;
	r11.s64 = 1 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE9EE8"))) PPC_WEAK_FUNC(sub_82DE9EE8);
PPC_FUNC_IMPL(__imp__sub_82DE9EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE9EF8"))) PPC_WEAK_FUNC(sub_82DE9EF8);
PPC_FUNC_IMPL(__imp__sub_82DE9EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE9F08"))) PPC_WEAK_FUNC(sub_82DE9F08);
PPC_FUNC_IMPL(__imp__sub_82DE9F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE9F20"))) PPC_WEAK_FUNC(sub_82DE9F20);
PPC_FUNC_IMPL(__imp__sub_82DE9F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,88(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE9F38"))) PPC_WEAK_FUNC(sub_82DE9F38);
PPC_FUNC_IMPL(__imp__sub_82DE9F38) {
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
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
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

__attribute__((alias("__imp__sub_82DE9F70"))) PPC_WEAK_FUNC(sub_82DE9F70);
PPC_FUNC_IMPL(__imp__sub_82DE9F70) {
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
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
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

__attribute__((alias("__imp__sub_82DE9FA8"))) PPC_WEAK_FUNC(sub_82DE9FA8);
PPC_FUNC_IMPL(__imp__sub_82DE9FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r31,144(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// b 0x82dea070
	goto loc_82DEA070;
loc_82DE9FC0:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82dea078
	if (!cr6.gt) goto loc_82DEA078;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82dea078
	if (!cr0.eq) goto loc_82DEA078;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82dea078
	if (!cr0.eq) goto loc_82DEA078;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dea02c
	if (cr0.eq) goto loc_82DEA02C;
	// lwz r31,156(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// b 0x82dea070
	goto loc_82DEA070;
loc_82DEA02C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dea050
	if (cr0.eq) goto loc_82DEA050;
	// lwz r31,152(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x82dea070
	goto loc_82DEA070;
loc_82DEA050:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82dea068
	if (!cr6.gt) goto loc_82DEA068;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82dea06c
	goto loc_82DEA06C;
loc_82DEA068:
	// li r11,0
	r11.s64 = 0;
loc_82DEA06C:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82DEA070:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82de9fc0
	if (!cr6.eq) goto loc_82DE9FC0;
loc_82DEA078:
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

__attribute__((alias("__imp__sub_82DEA090"))) PPC_WEAK_FUNC(sub_82DEA090);
PPC_FUNC_IMPL(__imp__sub_82DEA090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r31,148(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82dea168
	if (cr6.eq) goto loc_82DEA168;
loc_82DEA0AC:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82dea164
	if (!cr6.gt) goto loc_82DEA164;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82dea164
	if (!cr0.eq) goto loc_82DEA164;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82dea164
	if (!cr0.eq) goto loc_82DEA164;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dea118
	if (cr0.eq) goto loc_82DEA118;
	// lwz r31,156(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// b 0x82dea15c
	goto loc_82DEA15C;
loc_82DEA118:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dea13c
	if (cr0.eq) goto loc_82DEA13C;
	// lwz r31,152(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x82dea15c
	goto loc_82DEA15C;
loc_82DEA13C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82dea154
	if (!cr6.gt) goto loc_82DEA154;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82dea158
	goto loc_82DEA158;
loc_82DEA154:
	// li r11,0
	r11.s64 = 0;
loc_82DEA158:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82DEA15C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82dea0ac
	if (!cr6.eq) goto loc_82DEA0AC;
loc_82DEA164:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82DEA168:
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

__attribute__((alias("__imp__sub_82DEA180"))) PPC_WEAK_FUNC(sub_82DEA180);
PPC_FUNC_IMPL(__imp__sub_82DEA180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b0c
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r26,r10,28456
	r26.s64 = ctx.r10.s64 + 28456;
	// lwz r21,164(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + 164);
	// addi r25,r9,-21684
	r25.s64 = ctx.r9.s64 + -21684;
	// addi r24,r11,-31736
	r24.s64 = r11.s64 + -31736;
loc_82DEA1AC:
	// lwz r28,136(r22)
	r28.u64 = PPC_LOAD_U32(r22.u32 + 136);
	// li r23,0
	r23.s64 = 0;
	// lwz r27,8(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// b 0x82dea294
	goto loc_82DEA294;
loc_82DEA1BC:
	// cmplw cr6,r28,r21
	cr6.compare<uint32_t>(r28.u32, r21.u32, xer);
	// beq cr6,0x82dea28c
	if (cr6.eq) goto loc_82DEA28C;
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82dea28c
	if (!cr6.eq) goto loc_82DEA28C;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,559
	ctx.r7.s64 = 559;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r29,1
	r29.s64 = 1;
loc_82DEA1F8:
	// lwz r11,56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x82dea210
	if (!cr6.gt) goto loc_82DEA210;
	// li r11,0
	r11.s64 = 0;
	// b 0x82dea21c
	goto loc_82DEA21C;
loc_82DEA210:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwzx r30,r10,r31
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
loc_82DEA21C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dea284
	if (cr0.eq) goto loc_82DEA284;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// bl 0x82de44c0
	sub_82DE44C0(ctx, base);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82dea26c
	if (!cr6.eq) goto loc_82DEA26C;
	// li r23,1
	r23.s64 = 1;
loc_82DEA26C:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x82dea1f8
	goto loc_82DEA1F8;
loc_82DEA284:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82de4220
	sub_82DE4220(ctx, base);
loc_82DEA28C:
	// mr r28,r27
	r28.u64 = r27.u64;
	// lwz r27,8(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 8);
loc_82DEA294:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82dea1bc
	if (!cr6.eq) goto loc_82DEA1BC;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82dea1ac
	if (!cr0.eq) goto loc_82DEA1AC;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82DEA2B0"))) PPC_WEAK_FUNC(sub_82DEA2B0);
PPC_FUNC_IMPL(__imp__sub_82DEA2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82dea2fc
	if (!cr6.gt) goto loc_82DEA2FC;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	r11.s64 = 0;
loc_82DEA2C8:
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82dea2dc
	if (!cr6.lt) goto loc_82DEA2DC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82dea2e0
	goto loc_82DEA2E0;
loc_82DEA2DC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82DEA2E0:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beq cr6,0x82dea304
	if (cr6.eq) goto loc_82DEA304;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82dea2c8
	if (cr6.lt) goto loc_82DEA2C8;
loc_82DEA2FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82DEA304:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEA310"))) PPC_WEAK_FUNC(sub_82DEA310);
PPC_FUNC_IMPL(__imp__sub_82DEA310) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82dea33c
	if (cr6.eq) goto loc_82DEA33C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82dea360
	if (!cr6.eq) goto loc_82DEA360;
loc_82DEA33C:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-31736
	ctx.r6.s64 = r11.s64 + -31736;
	// addi r5,r10,-31572
	ctx.r5.s64 = ctx.r10.s64 + -31572;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEA360:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
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

__attribute__((alias("__imp__sub_82DEA398"))) PPC_WEAK_FUNC(sub_82DEA398);
PPC_FUNC_IMPL(__imp__sub_82DEA398) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-31628
	r11.s64 = r11.s64 + -31628;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dea3cc
	if (cr6.eq) goto loc_82DEA3CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ddc958
	sub_82DDC958(ctx, base);
loc_82DEA3CC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dea3e0
	if (cr6.eq) goto loc_82DEA3E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ddc958
	sub_82DDC958(ctx, base);
loc_82DEA3E0:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dea3f4
	if (cr6.eq) goto loc_82DEA3F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ddc958
	sub_82DDC958(ctx, base);
loc_82DEA3F4:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dea408
	if (cr6.eq) goto loc_82DEA408;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ddc958
	sub_82DDC958(ctx, base);
loc_82DEA408:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dea41c
	if (cr6.eq) goto loc_82DEA41C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ddc958
	sub_82DDC958(ctx, base);
loc_82DEA41C:
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82de4358
	sub_82DE4358(ctx, base);
	// lis r11,-32239
	r11.s64 = -2112815104;
	// addi r11,r11,9656
	r11.s64 = r11.s64 + 9656;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
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

__attribute__((alias("__imp__sub_82DEA450"))) PPC_WEAK_FUNC(sub_82DEA450);
PPC_FUNC_IMPL(__imp__sub_82DEA450) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82DEA480:
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// ble cr6,0x82dea490
	if (!cr6.gt) goto loc_82DEA490;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82dea49c
	goto loc_82DEA49C;
loc_82DEA490:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
loc_82DEA49C:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82dea4e0
	if (cr0.eq) goto loc_82DEA4E0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x82dea4bc
	if (cr6.eq) goto loc_82DEA4BC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x82dea480
	goto loc_82DEA480;
loc_82DEA4BC:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82dea4d8
	if (!cr6.lt) goto loc_82DEA4D8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82dea4dc
	goto loc_82DEA4DC;
loc_82DEA4D8:
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DEA4DC:
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_82DEA4E0:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82DEA4F8:
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// ble cr6,0x82dea508
	if (!cr6.gt) goto loc_82DEA508;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82dea514
	goto loc_82DEA514;
loc_82DEA508:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
loc_82DEA514:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82dea538
	if (cr0.eq) goto loc_82DEA538;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x82dea534
	if (cr6.eq) goto loc_82DEA534;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x82dea4f8
	goto loc_82DEA4F8;
loc_82DEA534:
	// bl 0x82de4488
	sub_82DE4488(ctx, base);
loc_82DEA538:
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DEA550"))) PPC_WEAK_FUNC(sub_82DEA550);
PPC_FUNC_IMPL(__imp__sub_82DEA550) {
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
	// b 0x82dea570
	goto loc_82DEA570;
loc_82DEA568:
	// bl 0x82dce120
	sub_82DCE120(ctx, base);
	// bl 0x82de4d48
	sub_82DE4D48(ctx, base);
loc_82DEA570:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82dea568
	if (!cr6.eq) goto loc_82DEA568;
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

__attribute__((alias("__imp__sub_82DEA598"))) PPC_WEAK_FUNC(sub_82DEA598);
PPC_FUNC_IMPL(__imp__sub_82DEA598) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r29.u32);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r31,44(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dea2b0
	sub_82DEA2B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82dea5dc
	if (!cr0.eq) goto loc_82DEA5DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_82DEA5DC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82de4d70
	sub_82DE4D70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DEA5F8"))) PPC_WEAK_FUNC(sub_82DEA5F8);
PPC_FUNC_IMPL(__imp__sub_82DEA5F8) {
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
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-31544
	r11.s64 = r11.s64 + -31544;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
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

__attribute__((alias("__imp__sub_82DEA640"))) PPC_WEAK_FUNC(sub_82DEA640);
PPC_FUNC_IMPL(__imp__sub_82DEA640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-31496
	ctx.r3.s64 = r11.s64 + -31496;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEA650"))) PPC_WEAK_FUNC(sub_82DEA650);
PPC_FUNC_IMPL(__imp__sub_82DEA650) {
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
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-31488
	r11.s64 = r11.s64 + -31488;
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

__attribute__((alias("__imp__sub_82DEA690"))) PPC_WEAK_FUNC(sub_82DEA690);
PPC_FUNC_IMPL(__imp__sub_82DEA690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-31440
	ctx.r3.s64 = r11.s64 + -31440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEA6A0"))) PPC_WEAK_FUNC(sub_82DEA6A0);
PPC_FUNC_IMPL(__imp__sub_82DEA6A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-31432
	r11.s64 = r11.s64 + -31432;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// stb r10,140(r31)
	PPC_STORE_U8(r31.u32 + 140, ctx.r10.u8);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r30.u32);
	// lwz r28,1452(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82dea710
	if (cr0.eq) goto loc_82DEA710;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82dea714
	goto loc_82DEA714;
loc_82DEA710:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82DEA714:
	// stw r4,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DEA730"))) PPC_WEAK_FUNC(sub_82DEA730);
PPC_FUNC_IMPL(__imp__sub_82DEA730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-31380
	ctx.r3.s64 = r11.s64 + -31380;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEA740"))) PPC_WEAK_FUNC(sub_82DEA740);
PPC_FUNC_IMPL(__imp__sub_82DEA740) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-31368
	r11.s64 = r11.s64 + -31368;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82DEA790"))) PPC_WEAK_FUNC(sub_82DEA790);
PPC_FUNC_IMPL(__imp__sub_82DEA790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-31320
	ctx.r3.s64 = r11.s64 + -31320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEA7A0"))) PPC_WEAK_FUNC(sub_82DEA7A0);
PPC_FUNC_IMPL(__imp__sub_82DEA7A0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-31312
	r11.s64 = r11.s64 + -31312;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82DEA7F0"))) PPC_WEAK_FUNC(sub_82DEA7F0);
PPC_FUNC_IMPL(__imp__sub_82DEA7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-31264
	ctx.r3.s64 = r11.s64 + -31264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEA800"))) PPC_WEAK_FUNC(sub_82DEA800);
PPC_FUNC_IMPL(__imp__sub_82DEA800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-31204
	ctx.r3.s64 = r11.s64 + -31204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEA810"))) PPC_WEAK_FUNC(sub_82DEA810);
PPC_FUNC_IMPL(__imp__sub_82DEA810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-31144
	ctx.r3.s64 = r11.s64 + -31144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEA820"))) PPC_WEAK_FUNC(sub_82DEA820);
PPC_FUNC_IMPL(__imp__sub_82DEA820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-31076
	ctx.r3.s64 = r11.s64 + -31076;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEA830"))) PPC_WEAK_FUNC(sub_82DEA830);
PPC_FUNC_IMPL(__imp__sub_82DEA830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-31016
	ctx.r3.s64 = r11.s64 + -31016;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEA840"))) PPC_WEAK_FUNC(sub_82DEA840);
PPC_FUNC_IMPL(__imp__sub_82DEA840) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82dea450
	sub_82DEA450(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
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

__attribute__((alias("__imp__sub_82DEA888"))) PPC_WEAK_FUNC(sub_82DEA888);
PPC_FUNC_IMPL(__imp__sub_82DEA888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r27,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r27.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// addi r11,r11,-31004
	r11.s64 = r11.s64 + -31004;
	// stb r28,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r28.u8);
	// li r4,144
	ctx.r4.s64 = 144;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stb r28,141(r31)
	PPC_STORE_U8(r31.u32 + 141, r28.u8);
	// lwz r27,1452(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82dea90c
	if (cr0.eq) goto loc_82DEA90C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r31,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r31.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,-31252
	ctx.r10.s64 = ctx.r10.s64 + -31252;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x82dea910
	goto loc_82DEA910;
loc_82DEA90C:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82DEA910:
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r27,1452(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82dea954
	if (cr0.eq) goto loc_82DEA954;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r31,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r31.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,-31192
	ctx.r10.s64 = ctx.r10.s64 + -31192;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x82dea958
	goto loc_82DEA958;
loc_82DEA954:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82DEA958:
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// li r10,39
	ctx.r10.s64 = 39;
	// stw r3,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r3.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r30,144(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de4250
	sub_82DE4250(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r31.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82DEA9A8"))) PPC_WEAK_FUNC(sub_82DEA9A8);
PPC_FUNC_IMPL(__imp__sub_82DEA9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-30956
	ctx.r3.s64 = r11.s64 + -30956;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEA9B8"))) PPC_WEAK_FUNC(sub_82DEA9B8);
PPC_FUNC_IMPL(__imp__sub_82DEA9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r27,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r27.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// addi r11,r11,-31432
	r11.s64 = r11.s64 + -31432;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// stb r10,140(r31)
	PPC_STORE_U8(r31.u32 + 140, ctx.r10.u8);
	// stw r28,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r28.u32);
	// lwz r30,1452(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82deaa34
	if (cr0.eq) goto loc_82DEAA34;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82deaa38
	goto loc_82DEAA38;
loc_82DEAA34:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82DEAA38:
	// stw r4,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r30,136(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de4250
	sub_82DE4250(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r31.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r27,1452(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82deaa98
	if (cr0.eq) goto loc_82DEAA98;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r31,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r31.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,-31124
	ctx.r10.s64 = ctx.r10.s64 + -31124;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x82deaa9c
	goto loc_82DEAA9C;
loc_82DEAA98:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82DEAA9C:
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82DEAAB0"))) PPC_WEAK_FUNC(sub_82DEAAB0);
PPC_FUNC_IMPL(__imp__sub_82DEAAB0) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82dea6a0
	sub_82DEA6A0(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r11,r11,-30944
	r11.s64 = r11.s64 + -30944;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82de4250
	sub_82DE4250(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r31.u32);
	// stw r28,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r28.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r28,1452(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x82deab38
	if (cr0.eq) goto loc_82DEAB38;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r31,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r31.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,-31064
	ctx.r10.s64 = ctx.r10.s64 + -31064;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x82deab3c
	goto loc_82DEAB3C;
loc_82DEAB38:
	// li r11,0
	r11.s64 = 0;
loc_82DEAB3C:
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DEAB50"))) PPC_WEAK_FUNC(sub_82DEAB50);
PPC_FUNC_IMPL(__imp__sub_82DEAB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-30892
	ctx.r3.s64 = r11.s64 + -30892;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEAB60"))) PPC_WEAK_FUNC(sub_82DEAB60);
PPC_FUNC_IMPL(__imp__sub_82DEAB60) {
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
	// bl 0x82dea398
	sub_82DEA398(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82deab9c
	if (cr0.eq) goto loc_82DEAB9C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82deab9c
	if (cr6.eq) goto loc_82DEAB9C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
loc_82DEAB9C:
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

__attribute__((alias("__imp__sub_82DEABB8"))) PPC_WEAK_FUNC(sub_82DEABB8);
PPC_FUNC_IMPL(__imp__sub_82DEABB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// addi r28,r11,28456
	r28.s64 = r11.s64 + 28456;
	// addi r27,r10,-21184
	r27.s64 = ctx.r10.s64 + -21184;
	// blt cr6,0x82deabec
	if (cr6.lt) goto loc_82DEABEC;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(r31.s32, 136, xer);
	// blt cr6,0x82deac08
	if (cr6.lt) goto loc_82DEAC08;
loc_82DEABEC:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-21236
	ctx.r5.s64 = r11.s64 + -21236;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,68
	ctx.r7.s64 = 68;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEAC08:
	// lis r11,-31950
	r11.s64 = -2093875200;
	// mulli r30,r31,36
	r30.s64 = r31.s64 * 36;
	// addi r31,r11,6408
	r31.s64 = r11.s64 + 6408;
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// lwzx r29,r30,r11
	r29.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82deac40
	if (!cr6.eq) goto loc_82DEAC40;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-21248
	ctx.r5.s64 = r11.s64 + -21248;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,71
	ctx.r7.s64 = 71;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEAC40:
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82DEAC58"))) PPC_WEAK_FUNC(sub_82DEAC58);
PPC_FUNC_IMPL(__imp__sub_82DEAC58) {
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
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// addi r31,r11,-48
	r31.s64 = r11.s64 + -48;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// ble cr6,0x82deac8c
	if (!cr6.gt) goto loc_82DEAC8C;
	// cmpwi cr6,r11,95
	cr6.compare<int32_t>(r11.s32, 95, xer);
	// bne cr6,0x82deac88
	if (!cr6.eq) goto loc_82DEAC88;
	// li r31,2
	r31.s64 = 2;
	// b 0x82deacc0
	goto loc_82DEACC0;
loc_82DEAC88:
	// addi r31,r11,-116
	r31.s64 = r11.s64 + -116;
loc_82DEAC8C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82deac9c
	if (cr6.lt) goto loc_82DEAC9C;
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(r31.s32, 6, xer);
	// ble cr6,0x82deacc0
	if (!cr6.gt) goto loc_82DEACC0;
loc_82DEAC9C:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-21184
	ctx.r6.s64 = r11.s64 + -21184;
	// addi r5,r10,-21100
	ctx.r5.s64 = ctx.r10.s64 + -21100;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,1015
	ctx.r7.s64 = 1015;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEACC0:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-30816
	r11.s64 = r11.s64 + -30816;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

__attribute__((alias("__imp__sub_82DEACE8"))) PPC_WEAK_FUNC(sub_82DEACE8);
PPC_FUNC_IMPL(__imp__sub_82DEACE8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82dead30
	if (!cr6.eq) goto loc_82DEAD30;
	// lis r11,-32239
	r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,9688
	ctx.r6.s64 = r11.s64 + 9688;
	// addi r5,r10,9768
	ctx.r5.s64 = ctx.r10.s64 + 9768;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,1932
	ctx.r7.s64 = 1932;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEAD30:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// stw r4,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
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

__attribute__((alias("__imp__sub_82DEAD60"))) PPC_WEAK_FUNC(sub_82DEAD60);
PPC_FUNC_IMPL(__imp__sub_82DEAD60) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82dead84
	if (cr6.lt) goto loc_82DEAD84;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(r31.s32, 136, xer);
	// blt cr6,0x82deada8
	if (cr6.lt) goto loc_82DEADA8;
loc_82DEAD84:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-21024
	ctx.r6.s64 = r11.s64 + -21024;
	// addi r5,r10,-21080
	ctx.r5.s64 = ctx.r10.s64 + -21080;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,5226
	ctx.r7.s64 = 5226;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEADA8:
	// lis r11,-31950
	r11.s64 = -2093875200;
	// mulli r10,r31,36
	ctx.r10.s64 = r31.s64 * 36;
	// addi r11,r11,6408
	r11.s64 = r11.s64 + 6408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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

__attribute__((alias("__imp__sub_82DEADE0"))) PPC_WEAK_FUNC(sub_82DEADE0);
PPC_FUNC_IMPL(__imp__sub_82DEADE0) {
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
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82deae04
	if (cr6.lt) goto loc_82DEAE04;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(r31.s32, 136, xer);
	// blt cr6,0x82deae28
	if (cr6.lt) goto loc_82DEAE28;
loc_82DEAE04:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-21024
	ctx.r6.s64 = r11.s64 + -21024;
	// addi r5,r10,-21080
	ctx.r5.s64 = ctx.r10.s64 + -21080;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,5239
	ctx.r7.s64 = 5239;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEAE28:
	// lis r11,-31950
	r11.s64 = -2093875200;
	// mulli r10,r31,36
	ctx.r10.s64 = r31.s64 * 36;
	// addi r11,r11,6408
	r11.s64 = r11.s64 + 6408;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

__attribute__((alias("__imp__sub_82DEAE50"))) PPC_WEAK_FUNC(sub_82DEAE50);
PPC_FUNC_IMPL(__imp__sub_82DEAE50) {
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
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82deae74
	if (cr6.lt) goto loc_82DEAE74;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(r31.s32, 136, xer);
	// blt cr6,0x82deae98
	if (cr6.lt) goto loc_82DEAE98;
loc_82DEAE74:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-21024
	ctx.r6.s64 = r11.s64 + -21024;
	// addi r5,r10,-21080
	ctx.r5.s64 = ctx.r10.s64 + -21080;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,5319
	ctx.r7.s64 = 5319;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEAE98:
	// lis r11,-31950
	r11.s64 = -2093875200;
	// mulli r10,r31,36
	ctx.r10.s64 = r31.s64 * 36;
	// addi r11,r11,6408
	r11.s64 = r11.s64 + 6408;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

__attribute__((alias("__imp__sub_82DEAEC0"))) PPC_WEAK_FUNC(sub_82DEAEC0);
PPC_FUNC_IMPL(__imp__sub_82DEAEC0) {
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
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82deaee4
	if (cr6.lt) goto loc_82DEAEE4;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(r31.s32, 136, xer);
	// blt cr6,0x82deaf08
	if (cr6.lt) goto loc_82DEAF08;
loc_82DEAEE4:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-21024
	ctx.r6.s64 = r11.s64 + -21024;
	// addi r5,r10,-21080
	ctx.r5.s64 = ctx.r10.s64 + -21080;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,5351
	ctx.r7.s64 = 5351;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEAF08:
	// lis r11,-31950
	r11.s64 = -2093875200;
	// mulli r10,r31,36
	ctx.r10.s64 = r31.s64 * 36;
	// addi r11,r11,6408
	r11.s64 = r11.s64 + 6408;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

__attribute__((alias("__imp__sub_82DEAF30"))) PPC_WEAK_FUNC(sub_82DEAF30);
PPC_FUNC_IMPL(__imp__sub_82DEAF30) {
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
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82deaf54
	if (cr6.lt) goto loc_82DEAF54;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(r31.s32, 136, xer);
	// blt cr6,0x82deaf78
	if (cr6.lt) goto loc_82DEAF78;
loc_82DEAF54:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-21024
	ctx.r6.s64 = r11.s64 + -21024;
	// addi r5,r10,-21080
	ctx.r5.s64 = ctx.r10.s64 + -21080;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,5363
	ctx.r7.s64 = 5363;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEAF78:
	// lis r11,-31950
	r11.s64 = -2093875200;
	// mulli r10,r31,36
	ctx.r10.s64 = r31.s64 * 36;
	// addi r11,r11,6408
	r11.s64 = r11.s64 + 6408;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

__attribute__((alias("__imp__sub_82DEAFA0"))) PPC_WEAK_FUNC(sub_82DEAFA0);
PPC_FUNC_IMPL(__imp__sub_82DEAFA0) {
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
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82deb008
	if (cr6.lt) goto loc_82DEB008;
	// beq cr6,0x82deb000
	if (cr6.eq) goto loc_82DEB000;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x82deaff8
	if (cr6.lt) goto loc_82DEAFF8;
	// beq cr6,0x82deaff0
	if (cr6.eq) goto loc_82DEAFF0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-21024
	ctx.r6.s64 = r11.s64 + -21024;
	// addi r5,r10,-21684
	ctx.r5.s64 = ctx.r10.s64 + -21684;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,5399
	ctx.r7.s64 = 5399;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x82deb00c
	goto loc_82DEB00C;
loc_82DEAFF0:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82deb00c
	goto loc_82DEB00C;
loc_82DEAFF8:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82deb00c
	goto loc_82DEB00C;
loc_82DEB000:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82deb00c
	goto loc_82DEB00C;
loc_82DEB008:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DEB00C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEB020"))) PPC_WEAK_FUNC(sub_82DEB020);
PPC_FUNC_IMPL(__imp__sub_82DEB020) {
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
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82deb0a4
	if (cr6.lt) goto loc_82DEB0A4;
	// beq cr6,0x82deb09c
	if (cr6.eq) goto loc_82DEB09C;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x82deb094
	if (cr6.lt) goto loc_82DEB094;
	// beq cr6,0x82deb08c
	if (cr6.eq) goto loc_82DEB08C;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// blt cr6,0x82deb084
	if (cr6.lt) goto loc_82DEB084;
	// beq cr6,0x82deb07c
	if (cr6.eq) goto loc_82DEB07C;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-21024
	ctx.r6.s64 = r11.s64 + -21024;
	// addi r5,r10,-21684
	ctx.r5.s64 = ctx.r10.s64 + -21684;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,5422
	ctx.r7.s64 = 5422;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82deb0a8
	goto loc_82DEB0A8;
loc_82DEB07C:
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x82deb0a8
	goto loc_82DEB0A8;
loc_82DEB084:
	// li r3,23
	ctx.r3.s64 = 23;
	// b 0x82deb0a8
	goto loc_82DEB0A8;
loc_82DEB08C:
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82deb0a8
	goto loc_82DEB0A8;
loc_82DEB094:
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x82deb0a8
	goto loc_82DEB0A8;
loc_82DEB09C:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x82deb0a8
	goto loc_82DEB0A8;
loc_82DEB0A4:
	// li r3,5
	ctx.r3.s64 = 5;
loc_82DEB0A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEB0B8"))) PPC_WEAK_FUNC(sub_82DEB0B8);
PPC_FUNC_IMPL(__imp__sub_82DEB0B8) {
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
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82deb100
	if (cr6.lt) goto loc_82DEB100;
	// beq cr6,0x82deb11c
	if (cr6.eq) goto loc_82DEB11C;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x82deb114
	if (cr6.lt) goto loc_82DEB114;
	// beq cr6,0x82deb100
	if (cr6.eq) goto loc_82DEB100;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-21024
	ctx.r6.s64 = r11.s64 + -21024;
	// addi r5,r10,-21684
	ctx.r5.s64 = ctx.r10.s64 + -21684;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,5448
	ctx.r7.s64 = 5448;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEB100:
	// li r3,3
	ctx.r3.s64 = 3;
loc_82DEB104:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82DEB114:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82deb104
	goto loc_82DEB104;
loc_82DEB11C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82deb104
	goto loc_82DEB104;
}

__attribute__((alias("__imp__sub_82DEB128"))) PPC_WEAK_FUNC(sub_82DEB128);
PPC_FUNC_IMPL(__imp__sub_82DEB128) {
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
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
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

__attribute__((alias("__imp__sub_82DEB168"))) PPC_WEAK_FUNC(sub_82DEB168);
PPC_FUNC_IMPL(__imp__sub_82DEB168) {
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
	// lwz r31,20(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// b 0x82deb198
	goto loc_82DEB198;
loc_82DEB188:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82DEB198:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82deb188
	if (!cr6.eq) goto loc_82DEB188;
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

__attribute__((alias("__imp__sub_82DEB1C0"))) PPC_WEAK_FUNC(sub_82DEB1C0);
PPC_FUNC_IMPL(__imp__sub_82DEB1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
loc_82DEB1D8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82df7958
	sub_82DF7958(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x82deb1d8
	if (cr6.lt) goto loc_82DEB1D8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82deb230
	if (cr0.eq) goto loc_82DEB230;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r12,-17768
	r12.s64 = -17768;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// ori r11,r11,12816
	r11.u64 = r11.u64 | 12816;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_82DEB230:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DEB238"))) PPC_WEAK_FUNC(sub_82DEB238);
PPC_FUNC_IMPL(__imp__sub_82DEB238) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r27,1
	r27.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r27.u8);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x82deb28c
	if (cr6.eq) goto loc_82DEB28C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82deb2b0
	if (!cr6.eq) goto loc_82DEB2B0;
loc_82DEB28C:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-21184
	ctx.r6.s64 = r11.s64 + -21184;
	// addi r5,r10,-20940
	ctx.r5.s64 = ctx.r10.s64 + -20940;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,4319
	ctx.r7.s64 = 4319;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEB2B0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82deb388
	if (cr6.eq) goto loc_82DEB388;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82deb2ec
	if (cr0.eq) goto loc_82DEB2EC;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r11,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r9,r11,21,11,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r8,r11,25,7,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm r11,r11,29,3,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// b 0x82deb2f0
	goto loc_82DEB2F0;
loc_82DEB2EC:
	// li r11,0
	r11.s64 = 0;
loc_82DEB2F0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82deb310
	if (cr6.eq) goto loc_82DEB310;
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// addi r10,r11,152
	ctx.r10.s64 = r11.s64 + 152;
	// lbz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 152);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,152(r11)
	PPC_STORE_U8(r11.u32 + 152, ctx.r10.u8);
loc_82DEB310:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82deb328
	if (cr0.eq) goto loc_82DEB328;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,12,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x1;
	// b 0x82deb32c
	goto loc_82DEB32C;
loc_82DEB328:
	// li r11,0
	r11.s64 = 0;
loc_82DEB32C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82deb33c
	if (cr6.eq) goto loc_82DEB33C;
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// stb r27,158(r11)
	PPC_STORE_U8(r11.u32 + 158, r27.u8);
loc_82DEB33C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82df7958
	sub_82DF7958(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82df7958
	sub_82DF7958(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// bl 0x82df7958
	sub_82DF7958(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// bl 0x82df7958
	sub_82DF7958(ctx, base);
	// stb r3,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
loc_82DEB388:
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// lwz r9,88(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// extsb r6,r11
	ctx.r6.s64 = r11.s8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,85(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// extsb r6,r11
	ctx.r6.s64 = r11.s8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,86(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// extsb r6,r11
	ctx.r6.s64 = r11.s8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,87(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// extsb r6,r11
	ctx.r6.s64 = r11.s8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r11,-30788(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30788);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82DEB450"))) PPC_WEAK_FUNC(sub_82DEB450);
PPC_FUNC_IMPL(__imp__sub_82DEB450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b14
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82dc6b50
	sub_82DC6B50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// bne 0x82deb530
	if (!cr0.eq) goto loc_82DEB530;
	// lbz r11,2116(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2116);
	// addi r28,r31,184
	r28.s64 = r31.s64 + 184;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq 0x82deb4a4
	if (cr0.eq) goto loc_82DEB4A4;
	// lwz r6,2124(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 2124);
	// lwz r7,2128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 2128);
	// neg r11,r6
	r11.s64 = -ctx.r6.s64;
	// lwz r5,2120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2120);
	// stw r11,2132(r31)
	PPC_STORE_U32(r31.u32 + 2132, r11.u32);
	// bl 0x82de3028
	sub_82DE3028(ctx, base);
	// b 0x82deb4b8
	goto loc_82DEB4B8;
loc_82DEB4A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82de3028
	sub_82DE3028(ctx, base);
	// stw r30,2132(r31)
	PPC_STORE_U32(r31.u32 + 2132, r30.u32);
loc_82DEB4B8:
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// addi r29,r31,1096
	r29.s64 = r31.s64 + 1096;
	// stw r11,2084(r31)
	PPC_STORE_U32(r31.u32 + 2084, r11.u32);
loc_82DEB4C4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82deb51c
	if (cr6.eq) goto loc_82DEB51C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dd83c8
	sub_82DD83C8(ctx, base);
	// lbz r11,2116(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82deb51c
	if (cr0.eq) goto loc_82DEB51C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,2120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2120);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82deb51c
	if (!cr6.eq) goto loc_82DEB51C;
	// lwz r11,2128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2128);
	// lwz r10,2124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2124);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82deb51c
	if (!cr6.lt) goto loc_82DEB51C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dd8360
	sub_82DD8360(ctx, base);
loc_82DEB51C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(r30.s32, 16, xer);
	// blt cr6,0x82deb4c4
	if (cr6.lt) goto loc_82DEB4C4;
	// b 0x82deb774
	goto loc_82DEB774;
loc_82DEB530:
	// lbz r11,2100(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2100);
	// li r23,1
	r23.s64 = 1;
	// stw r30,2112(r31)
	PPC_STORE_U32(r31.u32 + 2112, r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r30,2132(r31)
	PPC_STORE_U32(r31.u32 + 2132, r30.u32);
	// mr r24,r23
	r24.u64 = r23.u64;
	// beq 0x82deb630
	if (cr0.eq) goto loc_82DEB630;
	// lwz r11,2104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2104);
	// lwz r9,2108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 2108);
	// subfic r8,r11,1
	xer.ca = r11.u32 <= 1;
	ctx.r8.s64 = 1 - r11.s64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
	// mr r29,r11
	r29.u64 = r11.u64;
	// stw r8,2112(r31)
	PPC_STORE_U32(r31.u32 + 2112, ctx.r8.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// addi r24,r10,1
	r24.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x82deb630
	if (!cr6.lt) goto loc_82DEB630;
loc_82DEB570:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// bl 0x82dd5d18
	sub_82DD5D18(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x82deb620
	if (cr0.eq) goto loc_82DEB620;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// mr r25,r23
	r25.u64 = r23.u64;
loc_82DEB598:
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// ble cr6,0x82deb5b0
	if (!cr6.gt) goto loc_82DEB5B0;
	// mr r11,r30
	r11.u64 = r30.u64;
	// b 0x82deb5bc
	goto loc_82DEB5BC;
loc_82DEB5B0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r11,r23
	r11.u64 = r23.u64;
	// lwzx r28,r10,r27
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
loc_82DEB5BC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82deb5f0
	if (cr0.eq) goto loc_82DEB5F0;
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82deb5e4
	if (cr0.eq) goto loc_82DEB5E4;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,228(r28)
	PPC_STORE_U32(r28.u32 + 228, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc6e90
	sub_82DC6E90(ctx, base);
loc_82DEB5E4:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// b 0x82deb598
	goto loc_82DEB598;
loc_82DEB5F0:
	// lwz r11,2112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r23,5(r26)
	PPC_STORE_U8(r26.u32 + 5, r23.u8);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,16(r26)
	PPC_STORE_U32(r26.u32 + 16, r11.u32);
	// lwz r11,2112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2112);
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x82dd83c8
	sub_82DD83C8(ctx, base);
	// lwz r11,2112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x82dd8360
	sub_82DD8360(ctx, base);
loc_82DEB620:
	// lwz r11,2108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2108);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82deb570
	if (cr6.lt) goto loc_82DEB570;
loc_82DEB630:
	// lbz r11,2116(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82deb750
	if (cr0.eq) goto loc_82DEB750;
	// lwz r11,2124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2124);
	// lwz r10,2128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2128);
	// subf r9,r11,r24
	ctx.r9.s64 = r24.s64 - r11.s64;
	// mr r29,r11
	r29.u64 = r11.u64;
	// stw r9,2132(r31)
	PPC_STORE_U32(r31.u32 + 2132, ctx.r9.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82deb750
	if (!cr6.lt) goto loc_82DEB750;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r26,-32238
	r26.s64 = -2112749568;
	// addi r25,r8,-20896
	r25.s64 = ctx.r8.s64 + -20896;
	// addi r28,r9,28456
	r28.s64 = ctx.r9.s64 + 28456;
	// addi r24,r10,-20904
	r24.s64 = ctx.r10.s64 + -20904;
	// addi r27,r11,-21184
	r27.s64 = r11.s64 + -21184;
loc_82DEB67C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,2120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 2120);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd5d18
	sub_82DD5D18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82deb740
	if (cr0.eq) goto loc_82DEB740;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,228(r11)
	PPC_STORE_U32(r11.u32 + 228, ctx.r10.u32);
	// lwz r4,-30776(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + -30776);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82deb6dc
	if (!cr0.eq) goto loc_82DEB6DC;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,4505
	ctx.r7.s64 = 4505;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEB6DC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82deb710
	if (!cr0.eq) goto loc_82DEB710;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,4506
	ctx.r7.s64 = 4506;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEB710:
	// lwz r11,2132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2132);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r23,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r23.u8);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lwz r11,2132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2132);
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x82dd83c8
	sub_82DD83C8(ctx, base);
	// lwz r11,2132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2132);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x82dd8360
	sub_82DD8360(ctx, base);
loc_82DEB740:
	// lwz r11,2128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2128);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82deb67c
	if (cr6.lt) goto loc_82DEB67C;
loc_82DEB750:
	// addi r28,r31,184
	r28.s64 = r31.s64 + 184;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82de3028
	sub_82DE3028(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// stw r11,2084(r31)
	PPC_STORE_U32(r31.u32 + 2084, r11.u32);
loc_82DEB774:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82de2590
	sub_82DE2590(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82DEB788"))) PPC_WEAK_FUNC(sub_82DEB788);
PPC_FUNC_IMPL(__imp__sub_82DEB788) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,1400(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82deb7e8
	if (!cr6.eq) goto loc_82DEB7E8;
	// lwz r27,1456(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 1456);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82deb7e0
	if (cr0.eq) goto loc_82DEB7E0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// bl 0x82de42b0
	sub_82DE42B0(ctx, base);
	// b 0x82deb7e4
	goto loc_82DEB7E4;
loc_82DEB7E0:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82DEB7E4:
	// stw r31,1400(r28)
	PPC_STORE_U32(r28.u32 + 1400, r31.u32);
loc_82DEB7E8:
	// lwz r3,1400(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1400);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82deb844
	if (cr6.eq) goto loc_82DEB844;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82DEB7F8:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82deb82c
	if (!cr6.eq) goto loc_82DEB82C;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82deb82c
	if (!cr6.eq) goto loc_82DEB82C;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82deb830
	if (cr6.eq) goto loc_82DEB830;
loc_82DEB82C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82DEB830:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82deb894
	if (!cr0.eq) goto loc_82DEB894;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82deb7f8
	if (!cr6.eq) goto loc_82DEB7F8;
loc_82DEB844:
	// lwz r27,1456(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 1456);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82deb87c
	if (cr0.eq) goto loc_82DEB87C;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// bl 0x82de42b0
	sub_82DE42B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82deb880
	goto loc_82DEB880;
loc_82DEB87C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82DEB880:
	// lwz r11,1400(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1400);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,1400(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1400);
	// stw r3,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r3.u32);
loc_82DEB894:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82DEB8A0"))) PPC_WEAK_FUNC(sub_82DEB8A0);
PPC_FUNC_IMPL(__imp__sub_82DEB8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831b1434
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// stw r5,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// stb r8,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, ctx.r8.u8);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r19,0
	r19.s64 = 0;
	// lwz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// extsh r26,r7
	r26.s64 = ctx.r7.s16;
	// addi r9,r9,-30880
	ctx.r9.s64 = ctx.r9.s64 + -30880;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// clrlwi. r23,r8,24
	r23.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// mr r20,r19
	r20.u64 = r19.u64;
	// rlwinm r24,r7,16,26,31
	r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0x3F;
	// mr r17,r19
	r17.u64 = r19.u64;
	// mr r15,r26
	r15.u64 = r26.u64;
	// addi r21,r11,28456
	r21.s64 = r11.s64 + 28456;
	// addi r14,r10,-21184
	r14.s64 = ctx.r10.s64 + -21184;
	// beq 0x82debe6c
	if (cr0.eq) goto loc_82DEBE6C;
	// clrlwi r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r18
	r11.u64 = PPC_LOAD_U32(r11.u32 + r18.u32);
	// rlwinm. r10,r11,16,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r25,r11,15,29,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x7;
	// clrlwi r27,r11,16
	r27.u64 = r11.u32 & 0xFFFF;
	// beq 0x82debc78
	if (cr0.eq) goto loc_82DEBC78;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82deb964
	if (!cr6.eq) goto loc_82DEB964;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-20056
	ctx.r5.s64 = r11.s64 + -20056;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEB964:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x82deb988
	if (cr6.eq) goto loc_82DEB988;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-20084
	ctx.r5.s64 = r11.s64 + -20084;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,385
	ctx.r7.s64 = 385;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEB988:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82deb9ac
	if (cr6.eq) goto loc_82DEB9AC;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-20100
	ctx.r5.s64 = r11.s64 + -20100;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,391
	ctx.r7.s64 = 391;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEB9AC:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82deb9cc
	if (!cr6.lt) goto loc_82DEB9CC;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82deb9d0
	goto loc_82DEB9D0;
loc_82DEB9CC:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82DEB9D0:
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r27,136(r25)
	r27.u64 = PPC_LOAD_U32(r25.u32 + 136);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// bne cr6,0x82debaa8
	if (!cr6.eq) goto loc_82DEBAA8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,29(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 29);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82debaa0
	if (!cr0.eq) goto loc_82DEBAA0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82deba4c
	if (cr0.eq) goto loc_82DEBA4C;
	// li r4,126
	ctx.r4.s64 = 126;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de80b8
	sub_82DE80B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82deba50
	goto loc_82DEBA50;
loc_82DEBA4C:
	// mr r30,r19
	r30.u64 = r19.u64;
loc_82DEBA50:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82de4f00
	sub_82DE4F00(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r11,29(r29)
	PPC_STORE_U8(r29.u32 + 29, r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82de4f50
	sub_82DE4F50(ctx, base);
loc_82DEBAA0:
	// li r24,30
	r24.s64 = 30;
	// b 0x82debe64
	goto loc_82DEBE64;
loc_82DEBAA8:
	// cmpwi cr6,r24,5
	cr6.compare<int32_t>(r24.s32, 5, xer);
	// beq cr6,0x82debae4
	if (cr6.eq) goto loc_82DEBAE4;
	// cmpwi cr6,r24,15
	cr6.compare<int32_t>(r24.s32, 15, xer);
	// beq cr6,0x82debae4
	if (cr6.eq) goto loc_82DEBAE4;
	// cmpwi cr6,r24,17
	cr6.compare<int32_t>(r24.s32, 17, xer);
	// beq cr6,0x82debae4
	if (cr6.eq) goto loc_82DEBAE4;
	// cmpwi cr6,r24,12
	cr6.compare<int32_t>(r24.s32, 12, xer);
	// beq cr6,0x82debae4
	if (cr6.eq) goto loc_82DEBAE4;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-20248
	ctx.r5.s64 = r11.s64 + -20248;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,418
	ctx.r7.s64 = 418;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEBAE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc6b50
	sub_82DC6B50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82debb24
	if (cr0.eq) goto loc_82DEBB24;
	// cmpwi cr6,r24,5
	cr6.compare<int32_t>(r24.s32, 5, xer);
	// beq cr6,0x82debb18
	if (cr6.eq) goto loc_82DEBB18;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-20284
	ctx.r5.s64 = r11.s64 + -20284;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,422
	ctx.r7.s64 = 422;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEBB18:
	// li r11,1
	r11.s64 = 1;
	// stb r11,2100(r31)
	PPC_STORE_U8(r31.u32 + 2100, r11.u8);
	// b 0x82debbbc
	goto loc_82DEBBBC;
loc_82DEBB24:
	// lbz r11,2116(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82debb6c
	if (cr0.eq) goto loc_82DEBB6C;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,2120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 2120);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// beq cr6,0x82debbbc
	if (cr6.eq) goto loc_82DEBBBC;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-20336
	ctx.r5.s64 = r11.s64 + -20336;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,426
	ctx.r7.s64 = 426;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// b 0x82debbbc
	goto loc_82DEBBBC;
loc_82DEBB6C:
	// cmpwi cr6,r24,15
	cr6.compare<int32_t>(r24.s32, 15, xer);
	// beq cr6,0x82debba0
	if (cr6.eq) goto loc_82DEBBA0;
	// cmpwi cr6,r24,17
	cr6.compare<int32_t>(r24.s32, 17, xer);
	// beq cr6,0x82debba0
	if (cr6.eq) goto loc_82DEBBA0;
	// cmpwi cr6,r24,12
	cr6.compare<int32_t>(r24.s32, 12, xer);
	// beq cr6,0x82debba0
	if (cr6.eq) goto loc_82DEBBA0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-20448
	ctx.r5.s64 = r11.s64 + -20448;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,430
	ctx.r7.s64 = 430;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEBBA0:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stb r9,2116(r31)
	PPC_STORE_U8(r31.u32 + 2116, ctx.r9.u8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,2120(r31)
	PPC_STORE_U32(r31.u32 + 2120, r11.u32);
loc_82DEBBBC:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r4,252(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 252);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,29(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 29);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82debc6c
	if (!cr0.eq) goto loc_82DEBC6C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82debc18
	if (cr0.eq) goto loc_82DEBC18;
	// li r4,126
	ctx.r4.s64 = 126;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de80b8
	sub_82DE80B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82debc1c
	goto loc_82DEBC1C;
loc_82DEBC18:
	// mr r30,r19
	r30.u64 = r19.u64;
loc_82DEBC1C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82de4f00
	sub_82DE4F00(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r11,29(r29)
	PPC_STORE_U8(r29.u32 + 29, r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82de4f50
	sub_82DE4F50(ctx, base);
loc_82DEBC6C:
	// mr r17,r26
	r17.u64 = r26.u64;
	// li r24,31
	r24.s64 = 31;
	// b 0x82debe68
	goto loc_82DEBE68;
loc_82DEBC78:
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// beq cr6,0x82debc9c
	if (cr6.eq) goto loc_82DEBC9C;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-20488
	ctx.r5.s64 = r11.s64 + -20488;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,454
	ctx.r7.s64 = 454;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEBC9C:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// blt cr6,0x82debcac
	if (cr6.lt) goto loc_82DEBCAC;
	// cmpwi cr6,r25,6
	cr6.compare<int32_t>(r25.s32, 6, xer);
	// blt cr6,0x82debcc8
	if (cr6.lt) goto loc_82DEBCC8;
loc_82DEBCAC:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-20548
	ctx.r5.s64 = r11.s64 + -20548;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,455
	ctx.r7.s64 = 455;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEBCC8:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82debcec
	if (cr6.eq) goto loc_82DEBCEC;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-20100
	ctx.r5.s64 = r11.s64 + -20100;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,462
	ctx.r7.s64 = 462;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEBCEC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82debd24
	if (cr0.eq) goto loc_82DEBD24;
	// li r4,99
	ctx.r4.s64 = 99;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de7b00
	sub_82DE7B00(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82debd28
	goto loc_82DEBD28;
loc_82DEBD24:
	// mr r28,r19
	r28.u64 = r19.u64;
loc_82DEBD28:
	// li r26,31
	r26.s64 = 31;
	// stw r27,60(r28)
	PPC_STORE_U32(r28.u32 + 60, r27.u32);
	// li r29,34
	r29.s64 = 34;
	// li r24,1
	r24.s64 = 1;
	// stw r26,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r26.u32);
	// stw r29,84(r28)
	PPC_STORE_U32(r28.u32 + 84, r29.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r24,56(r28)
	PPC_STORE_U32(r28.u32 + 56, r24.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82de7568
	sub_82DE7568(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82debd88
	if (cr0.eq) goto loc_82DEBD88;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de7f88
	sub_82DE7F88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82debd8c
	goto loc_82DEBD8C;
loc_82DEBD88:
	// mr r30,r19
	r30.u64 = r19.u64;
loc_82DEBD8C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r27,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r24,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r24.u32);
	// stw r26,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r26.u32);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r29,1452(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82debe00
	if (cr0.eq) goto loc_82DEBE00;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de7f88
	sub_82DE7F88(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82debe04
	goto loc_82DEBE04;
loc_82DEBE00:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_82DEBE04:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,9416
	ctx.r10.s64 = ctx.r10.s64 + 9416;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwzx r24,r9,r10
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r27,56(r29)
	PPC_STORE_U32(r29.u32 + 56, r27.u32);
	// stw r8,60(r29)
	PPC_STORE_U32(r29.u32 + 60, ctx.r8.u32);
	// stw r26,84(r29)
	PPC_STORE_U32(r29.u32 + 84, r26.u32);
	// stw r11,80(r29)
	PPC_STORE_U32(r29.u32 + 80, r11.u32);
	// stw r30,172(r28)
	PPC_STORE_U32(r28.u32 + 172, r30.u32);
	// stw r29,176(r28)
	PPC_STORE_U32(r28.u32 + 176, r29.u32);
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
loc_82DEBE64:
	// mr r17,r15
	r17.u64 = r15.u64;
loc_82DEBE68:
	// mr r26,r27
	r26.u64 = r27.u64;
loc_82DEBE6C:
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82deca68
	if (cr0.eq) goto loc_82DECA68;
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82debe9c
	if (cr0.eq) goto loc_82DEBE9C;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// andi. r11,r11,17476
	r11.u64 = r11.u64 & 17476;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82debe9c
	if (cr0.eq) goto loc_82DEBE9C;
	// li r25,1
	r25.s64 = 1;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82debea4
	goto loc_82DEBEA4;
loc_82DEBE9C:
	// mr r11,r19
	r11.u64 = r19.u64;
	// li r25,1
	r25.s64 = 1;
loc_82DEBEA4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f30,2244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f30.f64 = double(temp.f32);
	// beq 0x82dec094
	if (cr0.eq) goto loc_82DEC094;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82df7958
	sub_82DF7958(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82df7958
	sub_82DF7958(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82df7958
	sub_82DF7958(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82df7958
	sub_82DF7958(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// mr r20,r11
	r20.u64 = r11.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82debf3c
	if (cr6.eq) goto loc_82DEBF3C;
	// stw r17,204(r4)
	PPC_STORE_U32(ctx.r4.u32 + 204, r17.u32);
	// mr r23,r19
	r23.u64 = r19.u64;
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,0,9,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stb r23,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, r23.u8);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
	// b 0x82debf40
	goto loc_82DEBF40;
loc_82DEBF3C:
	// lbz r23,351(r1)
	r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
loc_82DEBF40:
	// stw r19,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, r19.u32);
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r22,88(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r20,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, r20.u32);
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// lwz r11,92(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 92);
	// lfs f31,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fmr f27,f31
	f27.f64 = f31.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r26,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, r26.u32);
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, r11.u32);
	// beq cr6,0x82debf8c
	if (cr6.eq) goto loc_82DEBF8C;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(r30.s32, 5, xer);
	// bne cr6,0x82debf94
	if (!cr6.eq) goto loc_82DEBF94;
	// fmr f27,f30
	f27.f64 = f30.f64;
loc_82DEBF8C:
	// stb r19,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r19.u8);
	// b 0x82debf9c
	goto loc_82DEBF9C;
loc_82DEBF94:
	// stb r25,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r25.u8);
	// stb r30,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, r30.u8);
loc_82DEBF9C:
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	f28.f64 = f31.f64;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// beq cr6,0x82debfb4
	if (cr6.eq) goto loc_82DEBFB4;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(r29.s32, 5, xer);
	// bne cr6,0x82debfbc
	if (!cr6.eq) goto loc_82DEBFBC;
	// fmr f28,f30
	f28.f64 = f30.f64;
loc_82DEBFB4:
	// stb r19,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, r19.u8);
	// b 0x82debfc4
	goto loc_82DEBFC4;
loc_82DEBFBC:
	// stb r25,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, r25.u8);
	// stb r29,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, r29.u8);
loc_82DEBFC4:
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	f29.f64 = f31.f64;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// beq cr6,0x82debfdc
	if (cr6.eq) goto loc_82DEBFDC;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(r28.s32, 5, xer);
	// bne cr6,0x82debfe4
	if (!cr6.eq) goto loc_82DEBFE4;
	// fmr f29,f30
	f29.f64 = f30.f64;
loc_82DEBFDC:
	// stb r19,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, r19.u8);
	// b 0x82debfec
	goto loc_82DEBFEC;
loc_82DEBFE4:
	// stb r25,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, r25.u8);
	// stb r28,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, r28.u8);
loc_82DEBFEC:
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(r27.s32, 4, xer);
	// beq cr6,0x82dec000
	if (cr6.eq) goto loc_82DEC000;
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(r27.s32, 5, xer);
	// bne cr6,0x82dec008
	if (!cr6.eq) goto loc_82DEC008;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
loc_82DEC000:
	// stb r19,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r19.u8);
	// b 0x82dec010
	goto loc_82DEC010;
loc_82DEC008:
	// stb r25,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r25.u8);
	// stb r27,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r27.u8);
loc_82DEC010:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r11,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, r11.u32);
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// stw r20,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r20.u32);
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec088
	if (cr0.eq) goto loc_82DEC088;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// li r12,-17768
	r12.s64 = -17768;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// ori r11,r11,12816
	r11.u64 = r11.u64 | 12816;
	// stw r11,4(r18)
	PPC_STORE_U32(r18.u32 + 4, r11.u32);
loc_82DEC088:
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r24,4
	r24.s64 = 4;
	// b 0x82dec09c
	goto loc_82DEC09C;
loc_82DEC094:
	// lwz r22,88(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r23,351(r1)
	r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
loc_82DEC09C:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm. r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82dec0bc
	if (cr0.eq) goto loc_82DEC0BC;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// li r12,-30584
	r12.s64 = -30584;
	// and. r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r25
	r11.u64 = r25.u64;
	// bne 0x82dec0c0
	if (!cr0.eq) goto loc_82DEC0C0;
loc_82DEC0BC:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82DEC0C0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82deca68
	if (cr0.eq) goto loc_82DECA68;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dec0dc
	if (cr6.eq) goto loc_82DEC0DC;
	// lhz r11,4(r18)
	r11.u64 = PPC_LOAD_U16(r18.u32 + 4);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// b 0x82dec0e0
	goto loc_82DEC0E0;
loc_82DEC0DC:
	// li r11,-1
	r11.s64 = -1;
loc_82DEC0E0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82dec1a0
	if (!cr6.gt) goto loc_82DEC1A0;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// bne cr6,0x82dec104
	if (!cr6.eq) goto loc_82DEC104;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// mr r20,r11
	r20.u64 = r11.u64;
loc_82DEC104:
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r15,r26
	cr6.compare<int32_t>(r15.s32, r26.s32, xer);
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// stw r20,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r20.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// stb r25,153(r30)
	PPC_STORE_U8(r30.u32 + 153, r25.u8);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bne cr6,0x82dec16c
	if (!cr6.eq) goto loc_82DEC16C;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec160
	if (cr0.eq) goto loc_82DEC160;
	// stw r17,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r17.u32);
	// mr r23,r19
	r23.u64 = r19.u64;
	// stb r23,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, r23.u8);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,0,9,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_82DEC160:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82deb1c0
	sub_82DEB1C0(ctx, base);
loc_82DEC16C:
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r24,4
	r24.s64 = 4;
loc_82DEC1A0:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec1b8
	if (cr0.eq) goto loc_82DEC1B8;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// rlwinm r11,r11,15,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x1;
	// b 0x82dec1bc
	goto loc_82DEC1BC;
loc_82DEC1B8:
	// li r11,-1
	r11.s64 = -1;
loc_82DEC1BC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82dec280
	if (!cr6.gt) goto loc_82DEC280;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// bne cr6,0x82dec1e0
	if (!cr6.eq) goto loc_82DEC1E0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// mr r20,r11
	r20.u64 = r11.u64;
loc_82DEC1E0:
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r15,r26
	cr6.compare<int32_t>(r15.s32, r26.s32, xer);
	// stw r20,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r20.u32);
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bne cr6,0x82dec244
	if (!cr6.eq) goto loc_82DEC244;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec238
	if (cr0.eq) goto loc_82DEC238;
	// stw r17,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r17.u32);
	// mr r23,r19
	r23.u64 = r19.u64;
	// stb r23,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, r23.u8);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,0,9,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_82DEC238:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82deb1c0
	sub_82DEB1C0(ctx, base);
loc_82DEC244:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f4,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// stb r25,154(r30)
	PPC_STORE_U8(r30.u32 + 154, r25.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r24,4
	r24.s64 = 4;
loc_82DEC280:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec298
	if (cr0.eq) goto loc_82DEC298;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// rlwinm r11,r11,14,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x1;
	// b 0x82dec29c
	goto loc_82DEC29C;
loc_82DEC298:
	// li r11,-1
	r11.s64 = -1;
loc_82DEC29C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82dec35c
	if (!cr6.gt) goto loc_82DEC35C;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// bne cr6,0x82dec2c0
	if (!cr6.eq) goto loc_82DEC2C0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// mr r20,r11
	r20.u64 = r11.u64;
loc_82DEC2C0:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r15,r26
	cr6.compare<int32_t>(r15.s32, r26.s32, xer);
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// stw r20,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r20.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bne cr6,0x82dec324
	if (!cr6.eq) goto loc_82DEC324;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec318
	if (cr0.eq) goto loc_82DEC318;
	// stw r17,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r17.u32);
	// mr r23,r19
	r23.u64 = r19.u64;
	// stb r23,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, r23.u8);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,0,9,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_82DEC318:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82deb1c0
	sub_82DEB1C0(ctx, base);
loc_82DEC324:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f4,-31000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r24,4
	r24.s64 = 4;
loc_82DEC35C:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec374
	if (cr0.eq) goto loc_82DEC374;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// rlwinm r11,r11,13,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x1;
	// b 0x82dec378
	goto loc_82DEC378;
loc_82DEC374:
	// li r11,-1
	r11.s64 = -1;
loc_82DEC378:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82dec4a4
	if (!cr6.gt) goto loc_82DEC4A4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,38
	ctx.r3.s64 = 38;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// stw r29,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r29.u32);
	// mr r20,r29
	r20.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// rlwinm r28,r24,3,0,28
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpw cr6,r15,r26
	cr6.compare<int32_t>(r15.s32, r26.s32, xer);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r26,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r26.u32);
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
	// bne cr6,0x82dec43c
	if (!cr6.eq) goto loc_82DEC43C;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec408
	if (cr0.eq) goto loc_82DEC408;
	// stw r17,212(r30)
	PPC_STORE_U32(r30.u32 + 212, r17.u32);
loc_82DEC408:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82dec428
	if (cr6.eq) goto loc_82DEC428;
	// stw r17,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r17.u32);
	// mr r23,r19
	r23.u64 = r19.u64;
	// stb r23,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, r23.u8);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,0,9,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_82DEC428:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82deb1c0
	sub_82DEB1C0(ctx, base);
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// stw r11,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r11.u32);
loc_82DEC43C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
	// li r3,37
	ctx.r3.s64 = 37;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stw r20,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r20.u32);
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// stw r20,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r20.u32);
	// stw r19,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r19.u32);
	// stw r20,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r20.u32);
	// stw r19,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r19.u32);
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// stb r25,155(r30)
	PPC_STORE_U8(r30.u32 + 155, r25.u8);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r24,4
	r24.s64 = 4;
loc_82DEC4A4:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec4bc
	if (cr0.eq) goto loc_82DEC4BC;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// rlwinm r30,r11,11,29,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0x7;
	// b 0x82dec4c0
	goto loc_82DEC4C0;
loc_82DEC4BC:
	// li r30,-1
	r30.s64 = -1;
loc_82DEC4C0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82dec858
	if (!cr6.gt) goto loc_82DEC858;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// ble cr6,0x82dec4f0
	if (!cr6.gt) goto loc_82DEC4F0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-20704
	ctx.r5.s64 = r11.s64 + -20704;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,674
	ctx.r7.s64 = 674;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
loc_82DEC4F0:
	// bne cr6,0x82dec670
	if (!cr6.eq) goto loc_82DEC670;
	// lwz r30,324(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// bge cr6,0x82dec510
	if (!cr6.lt) goto loc_82DEC510;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82DEC510:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x82dec520
	if (!cr0.eq) goto loc_82DEC520;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
loc_82DEC520:
	// cmpwi cr6,r10,93
	cr6.compare<int32_t>(ctx.r10.s32, 93, xer);
	// beq cr6,0x82dec590
	if (cr6.eq) goto loc_82DEC590;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// bge cr6,0x82dec538
	if (!cr6.lt) goto loc_82DEC538;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82DEC538:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x82dec548
	if (!cr0.eq) goto loc_82DEC548;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
loc_82DEC548:
	// cmpwi cr6,r10,94
	cr6.compare<int32_t>(ctx.r10.s32, 94, xer);
	// beq cr6,0x82dec590
	if (cr6.eq) goto loc_82DEC590;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// bge cr6,0x82dec560
	if (!cr6.lt) goto loc_82DEC560;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82DEC560:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82dec56c
	if (!cr0.eq) goto loc_82DEC56C;
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82DEC56C:
	// cmpwi cr6,r11,80
	cr6.compare<int32_t>(r11.s32, 80, xer);
	// beq cr6,0x82dec590
	if (cr6.eq) goto loc_82DEC590;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-20880
	ctx.r5.s64 = r11.s64 + -20880;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,680
	ctx.r7.s64 = 680;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEC590:
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// lbz r28,1(r30)
	r28.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// addi r30,r11,-8808
	r30.s64 = r11.s64 + -8808;
	// lwz r3,1488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 1488);
	// lwz r27,1536(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 1536);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82dc1e38
	sub_82DC1E38(ctx, base);
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r27,r10,-8808
	r27.s64 = ctx.r10.s64 + -8808;
	// lwz r3,1488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 1488);
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// lwz r21,1536(r29)
	r21.u64 = PPC_LOAD_U32(r29.u32 + 1536);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x82dc1f60
	sub_82DC1F60(ctx, base);
	// lwz r27,12(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r21,r10,-8808
	r21.s64 = ctx.r10.s64 + -8808;
	// lwz r3,1488(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 1488);
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// lwz r14,1536(r27)
	r14.u64 = PPC_LOAD_U32(r27.u32 + 1536);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x82dc2088
	sub_82DC2088(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x82dec694
	goto loc_82DEC694;
loc_82DEC670:
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// addi r10,r30,-2
	ctx.r10.s64 = r30.s64 + -2;
	// addi r9,r30,-3
	ctx.r9.s64 = r30.s64 + -3;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// rlwinm r29,r10,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r9,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_82DEC694:
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82dec6ac
	if (!cr0.eq) goto loc_82DEC6AC;
	// clrlwi. r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82dec6ac
	if (!cr0.eq) goto loc_82DEC6AC;
	// clrlwi. r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82dec858
	if (cr0.eq) goto loc_82DEC858;
loc_82DEC6AC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dec6c4
	if (cr6.eq) goto loc_82DEC6C4;
	// lwz r21,12(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// mr r23,r25
	r23.u64 = r25.u64;
	// lwz r22,0(r22)
	r22.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// b 0x82dec700
	goto loc_82DEC700;
loc_82DEC6C4:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82dec6dc
	if (cr0.eq) goto loc_82DEC6DC;
	// lwz r21,16(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + 16);
	// li r23,2
	r23.s64 = 2;
	// lwz r22,4(r22)
	r22.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// b 0x82dec700
	goto loc_82DEC700;
loc_82DEC6DC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec6f4
	if (cr0.eq) goto loc_82DEC6F4;
	// lwz r21,20(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + 20);
	// li r23,3
	r23.s64 = 3;
	// lwz r22,8(r22)
	r22.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// b 0x82dec700
	goto loc_82DEC700;
loc_82DEC6F4:
	// lbz r23,80(r1)
	r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r22,92(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r21,92(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82DEC700:
	// li r3,62
	ctx.r3.s64 = 62;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r25,r24,3,0,28
	r25.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r27,r11,-1
	r27.s64 = r11.s64 + -1;
	// stw r27,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r27.u32);
	// mr r20,r27
	r20.u64 = r27.u64;
	// stw r19,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r19.u32);
	// stw r27,56(r28)
	PPC_STORE_U32(r28.u32 + 56, r27.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r11,r25,r11
	r11.u64 = r25.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,84(r28)
	PPC_STORE_U32(r28.u32 + 84, r11.u32);
	// stw r26,60(r28)
	PPC_STORE_U32(r28.u32 + 60, r26.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r27,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r27.u32);
	// li r3,49
	ctx.r3.s64 = 49;
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r11,r25,r11
	r11.u64 = r25.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r27,56(r29)
	PPC_STORE_U32(r29.u32 + 56, r27.u32);
	// cmpw cr6,r15,r26
	cr6.compare<int32_t>(r15.s32, r26.s32, xer);
	// stw r19,80(r29)
	PPC_STORE_U32(r29.u32 + 80, r19.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r11,r25,r11
	r11.u64 = r25.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r26,60(r29)
	PPC_STORE_U32(r29.u32 + 60, r26.u32);
	// stw r11,84(r29)
	PPC_STORE_U32(r29.u32 + 84, r11.u32);
	// bne cr6,0x82dec7e8
	if (!cr6.eq) goto loc_82DEC7E8;
	// lbz r11,351(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82dec7b8
	if (cr0.eq) goto loc_82DEC7B8;
	// stw r17,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r17.u32);
	// stw r17,204(r29)
	PPC_STORE_U32(r29.u32 + 204, r17.u32);
loc_82DEC7B8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82dec7d4
	if (cr6.eq) goto loc_82DEC7D4;
	// stw r17,204(r28)
	PPC_STORE_U32(r28.u32 + 204, r17.u32);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,0,9,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stb r19,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, r19.u8);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_82DEC7D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82deb1c0
	sub_82DEB1C0(ctx, base);
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
loc_82DEC7E8:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// clrlwi r10,r23,24
	ctx.r10.u64 = r23.u32 & 0xFF;
	// stw r20,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r20.u32);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// stw r19,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r19.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// lbzx r11,r10,r9
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lwzx r11,r11,r8
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// stw r11,132(r28)
	PPC_STORE_U32(r28.u32 + 132, r11.u32);
	// stw r22,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r22.u32);
	// stw r21,128(r29)
	PPC_STORE_U32(r29.u32 + 128, r21.u32);
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
	// lwz r22,88(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r23,351(r1)
	r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r24,4
	r24.s64 = 4;
	// li r25,1
	r25.s64 = 1;
loc_82DEC858:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec890
	if (cr0.eq) goto loc_82DEC890;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82dec888
	if (!cr0.eq) goto loc_82DEC888;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82dec888
	if (!cr0.eq) goto loc_82DEC888;
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82dec888
	if (!cr0.eq) goto loc_82DEC888;
	// rlwinm. r11,r11,0,16,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec890
	if (cr0.eq) goto loc_82DEC890;
loc_82DEC888:
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82dec894
	goto loc_82DEC894;
loc_82DEC890:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82DEC894:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82deca68
	if (cr0.eq) goto loc_82DECA68;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82df79f0
	sub_82DF79F0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82deca68
	if (cr0.eq) goto loc_82DECA68;
	// cmplwi cr6,r28,34952
	cr6.compare<uint32_t>(r28.u32, 34952, xer);
	// beq cr6,0x82deca68
	if (cr6.eq) goto loc_82DECA68;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// bne cr6,0x82dec8d0
	if (!cr6.eq) goto loc_82DEC8D0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// mr r20,r11
	r20.u64 = r11.u64;
loc_82DEC8D0:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r29,r24,3,0,28
	r29.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r15,r26
	cr6.compare<int32_t>(r15.s32, r26.s32, xer);
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// stw r20,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r20.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bne cr6,0x82dec92c
	if (!cr6.eq) goto loc_82DEC92C;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec920
	if (cr0.eq) goto loc_82DEC920;
	// stw r17,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r17.u32);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,0,9,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_82DEC920:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82deb1c0
	sub_82DEB1C0(ctx, base);
loc_82DEC92C:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec944
	if (cr0.eq) goto loc_82DEC944;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// rlwinm r11,r11,12,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x1;
	// b 0x82dec948
	goto loc_82DEC948;
loc_82DEC944:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82DEC948:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82dec954
	if (cr6.eq) goto loc_82DEC954;
	// stb r25,159(r30)
	PPC_STORE_U8(r30.u32 + 159, r25.u8);
loc_82DEC954:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r30,132(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r15,r26
	cr6.compare<int32_t>(r15.s32, r26.s32, xer);
	// stw r20,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, r20.u32);
	// stw r19,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, r19.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r26,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, r26.u32);
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, r11.u32);
	// bne cr6,0x82dec9b4
	if (!cr6.eq) goto loc_82DEC9B4;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec9b0
	if (cr0.eq) goto loc_82DEC9B0;
	// stw r17,204(r4)
	PPC_STORE_U32(ctx.r4.u32 + 204, r17.u32);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,0,9,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_82DEC9B0:
	// stw r30,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, r30.u32);
loc_82DEC9B4:
	// stb r25,153(r4)
	PPC_STORE_U8(ctx.r4.u32 + 153, r25.u8);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec9d0
	if (cr0.eq) goto loc_82DEC9D0;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// rlwinm r11,r11,12,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x1;
	// b 0x82dec9d4
	goto loc_82DEC9D4;
loc_82DEC9D0:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82DEC9D4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82dec9f8
	if (cr6.eq) goto loc_82DEC9F8;
	// stb r25,159(r4)
	PPC_STORE_U8(ctx.r4.u32 + 159, r25.u8);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dec9f8
	if (cr0.eq) goto loc_82DEC9F8;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// rlwinm r11,r11,0,12,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r11,4(r18)
	PPC_STORE_U32(r18.u32 + 4, r11.u32);
loc_82DEC9F8:
	// lwz r11,100(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 100);
	// not r10,r28
	ctx.r10.u64 = ~r28.u64;
	// not r8,r28
	ctx.r8.u64 = ~r28.u64;
	// rlwinm r10,r10,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// not r7,r28
	ctx.r7.u64 = ~r28.u64;
	// not r9,r28
	ctx.r9.u64 = ~r28.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// rlwinm r11,r8,17,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x1;
	// stb r10,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r10.u8);
	// rlwinm r9,r9,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1;
	// rlwinm r10,r7,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r11.u8);
	// stb r9,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r9.u8);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, r11.u32);
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82deca60
	if (cr0.eq) goto loc_82DECA60;
	// lis r12,-1
	r12.s64 = -65536;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// ori r12,r12,30583
	r12.u64 = r12.u64 | 30583;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// stw r11,4(r18)
	PPC_STORE_U32(r18.u32 + 4, r11.u32);
loc_82DECA60:
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r24,4
	r24.s64 = 4;
loc_82DECA68:
	// sth r26,2(r18)
	PPC_STORE_U16(r18.u32 + 2, r26.u16);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwimi r11,r24,16,10,15
	r11.u64 = (__builtin_rotateleft32(r24.u32, 16) & 0x3F0000) | (r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831b1480
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82DECA88"))) PPC_WEAK_FUNC(sub_82DECA88);
PPC_FUNC_IMPL(__imp__sub_82DECA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0afc
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r23,0
	r23.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r31,r23
	r31.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// rlwinm. r9,r11,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// extsh r18,r11
	r18.s64 = r11.s16;
	// rlwinm r19,r11,16,26,31
	r19.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x3F;
	// beq 0x82decad0
	if (cr0.eq) goto loc_82DECAD0;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// rlwinm r28,r11,23,28,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0xF;
	// b 0x82decad4
	goto loc_82DECAD4;
loc_82DECAD0:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_82DECAD4:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r20,1
	r20.s64 = 1;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// addi r22,r11,28456
	r22.s64 = r11.s64 + 28456;
	// addi r21,r10,-21184
	r21.s64 = ctx.r10.s64 + -21184;
	// ble cr6,0x82decb90
	if (!cr6.gt) goto loc_82DECB90;
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(r28.s32, 6, xer);
	// ble cr6,0x82decb14
	if (!cr6.gt) goto loc_82DECB14;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,-19800
	ctx.r5.s64 = r11.s64 + -19800;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,871
	ctx.r7.s64 = 871;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DECB14:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// stw r30,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r30.u32);
	// mr r27,r30
	r27.u64 = r30.u64;
	// sth r30,2(r26)
	PPC_STORE_U16(r26.u32 + 2, r30.u16);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwimi r11,r20,18,10,15
	r11.u64 = (__builtin_rotateleft32(r20.u32, 18) & 0x3F0000) | (r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// addi r11,r11,-30840
	r11.s64 = r11.s64 + -30840;
	// stw r23,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r23.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f1,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
loc_82DECB90:
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82DECB98:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82df78f8
	sub_82DF78F8(ctx, base);
	// addi r11,r3,-2
	r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// or r28,r11,r28
	r28.u64 = r11.u64 | r28.u64;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x82decb98
	if (cr6.lt) goto loc_82DECB98;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// addi r25,r11,-19820
	r25.s64 = r11.s64 + -19820;
	// beq cr6,0x82decca4
	if (cr6.eq) goto loc_82DECCA4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82decc20
	if (!cr6.eq) goto loc_82DECC20;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82decbfc
	if (cr6.eq) goto loc_82DECBFC;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,895
	ctx.r7.s64 = 895;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DECBFC:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// mr r27,r11
	r27.u64 = r11.u64;
	// sth r11,2(r26)
	PPC_STORE_U16(r26.u32 + 2, r11.u16);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwimi r11,r20,18,10,15
	r11.u64 = (__builtin_rotateleft32(r20.u32, 18) & 0x3F0000) | (r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_82DECC20:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r27,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r27.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// lfs f4,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82DECC5C:
	// sraw r11,r28,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r28.s32 < 0) & (((r28.s32 >> temp.u32) << temp.u32) != r28.s32);
	r11.s64 = r28.s32 >> temp.u32;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bne 0x82decc84
	if (!cr0.eq) goto loc_82DECC84;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82DECC84:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x82decc5c
	if (cr6.lt) goto loc_82DECC5C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
loc_82DECCA4:
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82DECCAC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82df78f8
	sub_82DF78F8(ctx, base);
	// addi r11,r3,-3
	r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// or r28,r11,r28
	r28.u64 = r11.u64 | r28.u64;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x82deccac
	if (cr6.lt) goto loc_82DECCAC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82decdb0
	if (cr6.eq) goto loc_82DECDB0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82decd2c
	if (!cr6.eq) goto loc_82DECD2C;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82decd08
	if (cr6.eq) goto loc_82DECD08;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,922
	ctx.r7.s64 = 922;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DECD08:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// mr r27,r11
	r27.u64 = r11.u64;
	// sth r11,2(r26)
	PPC_STORE_U16(r26.u32 + 2, r11.u16);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwimi r11,r20,18,10,15
	r11.u64 = (__builtin_rotateleft32(r20.u32, 18) & 0x3F0000) | (r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_82DECD2C:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r27,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r27.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// lfs f4,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82DECD68:
	// sraw r11,r28,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r28.s32 < 0) & (((r28.s32 >> temp.u32) << temp.u32) != r28.s32);
	r11.s64 = r28.s32 >> temp.u32;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bne 0x82decd90
	if (!cr0.eq) goto loc_82DECD90;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82DECD90:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x82decd68
	if (cr6.lt) goto loc_82DECD68;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
loc_82DECDB0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82df7a10
	sub_82DF7A10(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dece18
	if (cr0.eq) goto loc_82DECE18;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82decdd0
	if (cr6.eq) goto loc_82DECDD0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x82decdec
	if (!cr6.eq) goto loc_82DECDEC;
loc_82DECDD0:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,-19852
	ctx.r5.s64 = r11.s64 + -19852;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,944
	ctx.r7.s64 = 944;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DECDEC:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r27,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r27.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// stw r27,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r27.u32);
	// stw r23,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r23.u32);
	// bl 0x82de4310
	sub_82DE4310(ctx, base);
loc_82DECE18:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ded01c
	if (cr6.eq) goto loc_82DED01C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,9,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82decf60
	if (cr0.eq) goto loc_82DECF60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dc6b50
	sub_82DC6B50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82dece58
	if (!cr0.eq) goto loc_82DECE58;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,-19872
	ctx.r5.s64 = r11.s64 + -19872;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,956
	ctx.r7.s64 = 956;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DECE58:
	// cmpwi cr6,r19,15
	cr6.compare<int32_t>(r19.s32, 15, xer);
	// beq cr6,0x82dece8c
	if (cr6.eq) goto loc_82DECE8C;
	// cmpwi cr6,r19,17
	cr6.compare<int32_t>(r19.s32, 17, xer);
	// beq cr6,0x82dece8c
	if (cr6.eq) goto loc_82DECE8C;
	// cmpwi cr6,r19,11
	cr6.compare<int32_t>(r19.s32, 11, xer);
	// beq cr6,0x82dece8c
	if (cr6.eq) goto loc_82DECE8C;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,-19984
	ctx.r5.s64 = r11.s64 + -19984;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,959
	ctx.r7.s64 = 959;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DECE8C:
	// lbz r11,2116(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 2116);
	// rlwinm r10,r19,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,92(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// bne 0x82deceb4
	if (!cr0.eq) goto loc_82DECEB4;
	// stb r20,2116(r29)
	PPC_STORE_U8(r29.u32 + 2116, r20.u8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,2120(r29)
	PPC_STORE_U32(r29.u32 + 2120, r11.u32);
	// b 0x82decee0
	goto loc_82DECEE0;
loc_82DECEB4:
	// lwz r9,2120(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 2120);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// beq cr6,0x82decee0
	if (cr6.eq) goto loc_82DECEE0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,-20036
	ctx.r5.s64 = r11.s64 + -20036;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,964
	ctx.r7.s64 = 964;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DECEE0:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r18,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r18.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// li r19,32
	r19.s64 = 32;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// bl 0x82dc6e90
	sub_82DC6E90(ctx, base);
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82decf28
	if (!cr6.eq) goto loc_82DECF28;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,-20056
	ctx.r5.s64 = r11.s64 + -20056;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,971
	ctx.r7.s64 = 971;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DECF28:
	// lwz r10,4(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82decf48
	if (!cr6.lt) goto loc_82DECF48;
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82decf4c
	goto loc_82DECF4C;
loc_82DECF48:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82DECF4C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r10,0,9,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// lwz r18,136(r11)
	r18.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82DECF60:
	// lwz r11,92(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// rlwinm r10,r19,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r18,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r18.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82decf90
	if (cr0.eq) goto loc_82DECF90;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// rlwinm r11,r11,24,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1;
	// b 0x82decf94
	goto loc_82DECF94;
loc_82DECF90:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82DECF94:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82decfa0
	if (cr6.eq) goto loc_82DECFA0;
	// stb r20,164(r31)
	PPC_STORE_U8(r31.u32 + 164, r20.u8);
loc_82DECFA0:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82decfb8
	if (cr0.eq) goto loc_82DECFB8;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_82DECFB8:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82DECFBC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82df78f8
	sub_82DF78F8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// li r6,1
	ctx.r6.s64 = 1;
	// beq 0x82decfec
	if (cr0.eq) goto loc_82DECFEC;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82DECFEC:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x82decfbc
	if (cr6.lt) goto loc_82DECFBC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ded01c
	if (cr0.eq) goto loc_82DED01C;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r10,85
	ctx.r10.s64 = 85;
	// rlwimi r11,r10,0,24,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFF) | (r11.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_82DED01C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_82DED028"))) PPC_WEAK_FUNC(sub_82DED028);
PPC_FUNC_IMPL(__imp__sub_82DED028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af8
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r17,r9
	r17.u64 = ctx.r9.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bne cr6,0x82ded094
	if (!cr6.eq) goto loc_82DED094;
	// lwz r11,2104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2104);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x82ded07c
	if (cr6.lt) goto loc_82DED07C;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_82DED07C:
	// stw r11,2104(r31)
	PPC_STORE_U32(r31.u32 + 2104, r11.u32);
	// lwz r11,2108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2108);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// bgt cr6,0x82ded090
	if (cr6.gt) goto loc_82DED090;
	// addi r11,r5,1
	r11.s64 = ctx.r5.s64 + 1;
loc_82DED090:
	// stw r11,2108(r31)
	PPC_STORE_U32(r31.u32 + 2108, r11.u32);
loc_82DED094:
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// clrlwi. r20,r30,24
	r20.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// beq 0x82ded0b8
	if (cr0.eq) goto loc_82DED0B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x82ded0d0
	goto loc_82DED0D0;
loc_82DED0B8:
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_82DED0D0:
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r7,r10,-8808
	ctx.r7.s64 = ctx.r10.s64 + -8808;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r6,1384(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 1384);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82dc3d38
	sub_82DC3D38(ctx, base);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r23,r11,28456
	r23.s64 = r11.s64 + 28456;
	// addi r21,r10,-19752
	r21.s64 = ctx.r10.s64 + -19752;
	// addi r22,r9,-21184
	r22.s64 = ctx.r9.s64 + -21184;
	// beq cr6,0x82ded134
	if (cr6.eq) goto loc_82DED134;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1077
	ctx.r7.s64 = 1077;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DED134:
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// beq cr6,0x82ded2a8
	if (cr6.eq) goto loc_82DED2A8;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r29,r11,-8808
	r29.s64 = r11.s64 + -8808;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82dc31c0
	sub_82DC31C0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82ded2a8
	if (!cr6.eq) goto loc_82DED2A8;
	// lis r11,-32037
	r11.s64 = -2099576832;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82dc4bb0
	sub_82DC4BB0(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// stw r29,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r25,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r25.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ded240
	if (!cr0.eq) goto loc_82DED240;
	// lis r11,-32239
	r11.s64 = -2112815104;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r11,9948
	ctx.r5.s64 = r11.s64 + 9948;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1102
	ctx.r7.s64 = 1102;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DED240:
	// li r3,21
	ctx.r3.s64 = 21;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r25,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r25.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r25,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r25.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ded2a4
	if (!cr0.eq) goto loc_82DED2A4;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r11,-19772
	ctx.r5.s64 = r11.s64 + -19772;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1113
	ctx.r7.s64 = 1113;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DED2A4:
	// lwz r26,28(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 28);
loc_82DED2A8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ded418
	if (!cr6.gt) goto loc_82DED418;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r27,r11,-30752
	r27.s64 = r11.s64 + -30752;
loc_82DED2C0:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82de8ee8
	sub_82DE8EE8(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x82ded320
	if (!cr6.eq) goto loc_82DED320;
	// lwz r11,-36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -36);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82deb238
	sub_82DEB238(ctx, base);
	// b 0x82ded328
	goto loc_82DED328;
loc_82DED320:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
loc_82DED328:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r8,r10,-8808
	ctx.r8.s64 = ctx.r10.s64 + -8808;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,1536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1536);
	// lwz r7,1384(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 1384);
	// bl 0x82dc3968
	sub_82DC3968(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82ded370
	if (cr6.eq) goto loc_82DED370;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1146
	ctx.r7.s64 = 1146;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DED370:
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82DED378:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U8(r29.u32 + r11.u32);
	// bl 0x82deac58
	sub_82DEAC58(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stbx r3,r29,r11
	PPC_STORE_U8(r29.u32 + r11.u32, ctx.r3.u8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x82ded378
	if (cr6.lt) goto loc_82DED378;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82DED39C:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82ded3dc
	if (cr6.lt) goto loc_82DED3DC;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bgt cr6,0x82ded3dc
	if (cr6.gt) goto loc_82DED3DC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -4);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82ded3d0
	if (cr6.lt) goto loc_82DED3D0;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// ble cr6,0x82ded3d8
	if (!cr6.gt) goto loc_82DED3D8;
loc_82DED3D0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
loc_82DED3D8:
	// stbx r10,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r10.u8);
loc_82DED3DC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82ded39c
	if (cr6.lt) goto loc_82DED39C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82ded2c0
	if (cr6.lt) goto loc_82DED2C0;
loc_82DED418:
	// li r11,1
	r11.s64 = 1;
	// stb r11,29(r26)
	PPC_STORE_U8(r26.u32 + 29, r11.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b48
	return;
}

__attribute__((alias("__imp__sub_82DED428"))) PPC_WEAK_FUNC(sub_82DED428);
PPC_FUNC_IMPL(__imp__sub_82DED428) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r25,1456(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82DED498"))) PPC_WEAK_FUNC(sub_82DED498);
PPC_FUNC_IMPL(__imp__sub_82DED498) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r29,r11,28456
	r29.s64 = r11.s64 + 28456;
	// addi r28,r10,-21184
	r28.s64 = ctx.r10.s64 + -21184;
	// bne cr6,0x82ded4dc
	if (!cr6.eq) goto loc_82DED4DC;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82ded4f8
	if (!cr6.eq) goto loc_82DED4F8;
loc_82DED4DC:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-19568
	ctx.r5.s64 = r11.s64 + -19568;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,4355
	ctx.r7.s64 = 4355;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DED4F8:
	// li r31,0
	r31.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r31.u8);
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r31.u8);
	// stb r31,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r31.u8);
	// beq cr6,0x82ded6d8
	if (cr6.eq) goto loc_82DED6D8;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm. r11,r11,9,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ded648
	if (cr0.eq) goto loc_82DED648;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82dc6b50
	sub_82DC6B50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ded550
	if (!cr0.eq) goto loc_82DED550;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-19872
	ctx.r5.s64 = r11.s64 + -19872;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,4366
	ctx.r7.s64 = 4366;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DED550:
	// lwz r30,80(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 80);
	// cmpwi cr6,r30,19
	cr6.compare<int32_t>(r30.s32, 19, xer);
	// beq cr6,0x82ded588
	if (cr6.eq) goto loc_82DED588;
	// cmpwi cr6,r30,20
	cr6.compare<int32_t>(r30.s32, 20, xer);
	// beq cr6,0x82ded588
	if (cr6.eq) goto loc_82DED588;
	// cmpwi cr6,r30,33
	cr6.compare<int32_t>(r30.s32, 33, xer);
	// beq cr6,0x82ded588
	if (cr6.eq) goto loc_82DED588;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-19688
	ctx.r5.s64 = r11.s64 + -19688;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,4370
	ctx.r7.s64 = 4370;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DED588:
	// lbz r11,2116(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ded5a0
	if (!cr0.eq) goto loc_82DED5A0;
	// stw r30,2120(r26)
	PPC_STORE_U32(r26.u32 + 2120, r30.u32);
	// stb r22,2116(r26)
	PPC_STORE_U8(r26.u32 + 2116, r22.u8);
	// b 0x82ded5c8
	goto loc_82DED5C8;
loc_82DED5A0:
	// lwz r11,2120(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 2120);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// beq cr6,0x82ded5c8
	if (cr6.eq) goto loc_82DED5C8;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-19728
	ctx.r5.s64 = r11.s64 + -19728;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,4375
	ctx.r7.s64 = 4375;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DED5C8:
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 56);
	// stw r11,200(r25)
	PPC_STORE_U32(r25.u32 + 200, r11.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ded5f8
	if (!cr6.eq) goto loc_82DED5F8;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-20056
	ctx.r5.s64 = r11.s64 + -20056;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,4380
	ctx.r7.s64 = 4380;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DED5F8:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ded618
	if (!cr6.lt) goto loc_82DED618;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82ded61c
	goto loc_82DED61C;
loc_82DED618:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82DED61C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r10,42
	ctx.r10.s64 = 42;
	// lwz r9,228(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 228);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// stw r10,80(r25)
	PPC_STORE_U32(r25.u32 + 80, ctx.r10.u32);
	// stw r9,228(r25)
	PPC_STORE_U32(r25.u32 + 228, ctx.r9.u32);
	// stw r11,56(r25)
	PPC_STORE_U32(r25.u32 + 56, r11.u32);
	// bl 0x82dc6e90
	sub_82DC6E90(ctx, base);
loc_82DED648:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ded660
	if (cr0.eq) goto loc_82DED660;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// rlwinm r11,r11,24,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1;
	// b 0x82ded664
	goto loc_82DED664;
loc_82DED660:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82DED664:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ded670
	if (cr6.eq) goto loc_82DED670;
	// stb r22,164(r25)
	PPC_STORE_U8(r25.u32 + 164, r22.u8);
loc_82DED670:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82df78f8
	sub_82DF78F8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-21504
	r30.s64 = r11.s64 + -21504;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82df78f8
	sub_82DF78F8(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// bl 0x82df78f8
	sub_82DF78F8(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// bl 0x82df78f8
	sub_82DF78F8(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
loc_82DED6D8:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ded730
	if (cr0.eq) goto loc_82DED730;
loc_82DED6E0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x82dd9428
	sub_82DD9428(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ded704
	if (!cr6.eq) goto loc_82DED704;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
loc_82DED704:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x82ded6e0
	if (cr6.lt) goto loc_82DED6E0;
	// b 0x82ded778
	goto loc_82DED778;
loc_82DED730:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x82dd9428
	sub_82DD9428(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82ded750
	if (!cr0.eq) goto loc_82DED750;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// extsb r6,r11
	ctx.r6.s64 = r11.s8;
loc_82DED750:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x82ded730
	if (cr6.lt) goto loc_82DED730;
loc_82DED778:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82DED780"))) PPC_WEAK_FUNC(sub_82DED780);
PPC_FUNC_IMPL(__imp__sub_82DED780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b14
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// rlwinm r8,r4,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-30736
	r11.s64 = r11.s64 + -30736;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + r11.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r3,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r3.u32);
	// stw r4,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
	// lbz r11,100(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// bne cr6,0x82ded840
	if (!cr6.eq) goto loc_82DED840;
	// rlwinm. r8,r11,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ded840
	if (cr0.eq) goto loc_82DED840;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r5,r11,3,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x7;
	// lwz r31,92(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// rlwinm r11,r9,3,29,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7;
	// lbz r9,295(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 295);
	// mulli r5,r5,6
	ctx.r5.s64 = ctx.r5.s64 * 6;
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r6,r11,r6
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r10,19,23,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1F8;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,56(r25)
	PPC_STORE_U32(r25.u32 + 56, ctx.r10.u32);
	// stw r11,80(r25)
	PPC_STORE_U32(r25.u32 + 80, r11.u32);
	// bl 0x82ded498
	sub_82DED498(ctx, base);
	// b 0x82deda1c
	goto loc_82DEDA1C;
loc_82DED840:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r8,r8,3,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x7;
	// rlwinm r10,r11,3,29,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r10,6
	r11.s64 = ctx.r10.s64 * 6;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq 0x82ded8a4
	if (cr0.eq) goto loc_82DED8A4;
	// lwzx r6,r11,r6
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r7,r7,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// lhz r11,2(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// or r7,r11,r7
	ctx.r7.u64 = r11.u64 | ctx.r7.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwimi r11,r7,0,16,9
	r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFFFFC0FFFF) | (r11.u64 & 0x3F0000);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwimi r7,r11,0,9,7
	ctx.r7.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r7.u64 & 0x800000);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// b 0x82ded8ac
	goto loc_82DED8AC;
loc_82DED8A4:
	// lwzx r30,r11,r7
	r30.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_82DED8AC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// rlwinm. r6,r11,9,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// rlwinm r31,r11,16,26,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x3F;
	// extsh r26,r11
	r26.s64 = r11.s16;
	// beq 0x82ded8e0
	if (cr0.eq) goto loc_82DED8E0;
	// add r11,r8,r9
	r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,300(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// li r27,1
	r27.s64 = 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// add r24,r11,r10
	r24.u64 = r11.u64 + ctx.r10.u64;
loc_82DED8E0:
	// rlwinm. r11,r4,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ded9d4
	if (!cr0.eq) goto loc_82DED9D4;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bne cr6,0x82ded9d4
	if (!cr6.eq) goto loc_82DED9D4;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// stw r28,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r28.u32);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r28,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r28.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,92(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r26,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r26.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// beq 0x82ded944
	if (cr0.eq) goto loc_82DED944;
	// stw r24,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r24.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,9,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82DED944:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82deb238
	sub_82DEB238(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ded9a8
	if (!cr0.eq) goto loc_82DED9A8;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-21184
	ctx.r6.s64 = r11.s64 + -21184;
	// addi r5,r10,9912
	ctx.r5.s64 = ctx.r10.s64 + 9912;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,1261
	ctx.r7.s64 = 1261;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DED9A8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r31,4
	r31.s64 = 4;
	// rlwinm r11,r11,0,10,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// mr r26,r28
	r26.u64 = r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// sth r28,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r28.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwimi r11,r9,18,10,15
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 18) & 0x3F0000) | (r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82ded9e8
	goto loc_82DED9E8;
loc_82DED9D4:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82deb238
	sub_82DEB238(ctx, base);
loc_82DED9E8:
	// addi r11,r23,50
	r11.s64 = r23.s64 + 50;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r23,14
	ctx.r9.s64 = r23.s64 + 14;
	// addi r8,r23,20
	ctx.r8.s64 = r23.s64 + 20;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r11,r25
	PPC_STORE_U32(r11.u32 + r25.u32, r24.u32);
	// lwz r11,92(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stwx r26,r9,r25
	PPC_STORE_U32(ctx.r9.u32 + r25.u32, r26.u32);
	// stwx r11,r8,r25
	PPC_STORE_U32(ctx.r8.u32 + r25.u32, r11.u32);
loc_82DEDA1C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82DEDA28"))) PPC_WEAK_FUNC(sub_82DEDA28);
PPC_FUNC_IMPL(__imp__sub_82DEDA28) {
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
	// bl 0x831b0af0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831b1430
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r28,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, r28.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,1360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1360);
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x82dc7828
	sub_82DC7828(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// stw r26,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r26.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,96
	ctx.r4.s64 = 96;
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,96
	ctx.r4.s64 = 96;
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,288
	ctx.r4.s64 = 288;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,96
	ctx.r4.s64 = 96;
	// stw r3,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,288
	ctx.r4.s64 = 288;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r3,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r3.u32);
	// lwz r27,1456(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82dedb18
	if (cr0.eq) goto loc_82DEDB18;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// mr r25,r30
	r25.u64 = r30.u64;
	// b 0x82dedb1c
	goto loc_82DEDB1C;
loc_82DEDB18:
	// mr r25,r29
	r25.u64 = r29.u64;
loc_82DEDB1C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r25.u32);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r29.u32);
	// lwz r27,1456(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82dedb5c
	if (cr0.eq) goto loc_82DEDB5C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// mr r27,r30
	r27.u64 = r30.u64;
	// b 0x82dedb60
	goto loc_82DEDB60;
loc_82DEDB5C:
	// mr r27,r29
	r27.u64 = r29.u64;
loc_82DEDB60:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,164(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// stw r27,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r27.u32);
	// lwz r24,1452(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// beq 0x82dedb9c
	if (cr0.eq) goto loc_82DEDB9C;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// b 0x82dedba0
	goto loc_82DEDBA0;
loc_82DEDB9C:
	// mr r14,r29
	r14.u64 = r29.u64;
loc_82DEDBA0:
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// stw r14,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r14.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc6af0
	sub_82DC6AF0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r14.u32);
	// bl 0x82de42b0
	sub_82DE42B0(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82de42b0
	sub_82DE42B0(ctx, base);
	// stb r29,2100(r31)
	PPC_STORE_U8(r31.u32 + 2100, r29.u8);
	// stb r29,2116(r31)
	PPC_STORE_U8(r31.u32 + 2116, r29.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r29,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, r29.u8);
	// bl 0x82dce1f8
	sub_82DCE1F8(ctx, base);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r11,r11,28456
	r11.s64 = r11.s64 + 28456;
	// addi r10,r10,-21184
	ctx.r10.s64 = ctx.r10.s64 + -21184;
	// clrlwi. r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// beq 0x82df3cc4
	if (cr0.eq) goto loc_82DF3CC4;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r8,r11,-29468
	ctx.r8.s64 = r11.s64 + -29468;
	// lis r11,-32239
	r11.s64 = -2112815104;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r7,r11,9964
	ctx.r7.s64 = r11.s64 + 9964;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stw r7,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r7.u32);
	// addi r6,r11,-18680
	ctx.r6.s64 = r11.s64 + -18680;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r6,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r6.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// addi r11,r11,-18716
	r11.s64 = r11.s64 + -18716;
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r11.u32);
	// addi r11,r8,-18656
	r11.s64 = ctx.r8.s64 + -18656;
	// lis r5,-32238
	ctx.r5.s64 = -2112749568;
	// addi r17,r10,6408
	r17.s64 = ctx.r10.s64 + 6408;
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r11.u32);
	// addi r18,r9,9656
	r18.s64 = ctx.r9.s64 + 9656;
	// addi r10,r7,-18736
	ctx.r10.s64 = ctx.r7.s64 + -18736;
	// stw r17,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, r17.u32);
	// addi r9,r6,-18772
	ctx.r9.s64 = ctx.r6.s64 + -18772;
	// stw r18,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r18.u32);
	// addi r11,r5,-18792
	r11.s64 = ctx.r5.s64 + -18792;
	// stw r10,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r10.u32);
	// lis r3,-32238
	ctx.r3.s64 = -2112749568;
	// stw r9,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r9.u32);
	// lis r4,-32238
	ctx.r4.s64 = -2112749568;
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r11.u32);
	// lis r30,-32238
	r30.s64 = -2112749568;
	// addi r9,r3,-18808
	ctx.r9.s64 = ctx.r3.s64 + -18808;
	// addi r10,r4,-18828
	ctx.r10.s64 = ctx.r4.s64 + -18828;
	// addi r11,r30,-18844
	r11.s64 = r30.s64 + -18844;
	// stw r9,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r9.u32);
	// lis r29,-32238
	r29.s64 = -2112749568;
	// stw r10,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r10.u32);
	// lis r28,-31950
	r28.s64 = -2093875200;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r11.u32);
	// lis r27,-32238
	r27.s64 = -2112749568;
	// addi r10,r29,-18872
	ctx.r10.s64 = r29.s64 + -18872;
	// addi r9,r28,19008
	ctx.r9.s64 = r28.s64 + 19008;
	// addi r11,r27,-18892
	r11.s64 = r27.s64 + -18892;
	// stw r10,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// lis r26,-32238
	r26.s64 = -2112749568;
	// stw r9,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// lis r25,-32238
	r25.s64 = -2112749568;
	// stw r11,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, r11.u32);
	// lis r24,-32239
	r24.s64 = -2112815104;
	// addi r10,r26,-18924
	ctx.r10.s64 = r26.s64 + -18924;
	// addi r9,r25,-18940
	ctx.r9.s64 = r25.s64 + -18940;
	// addi r11,r24,9888
	r11.s64 = r24.s64 + 9888;
	// stw r10,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r10.u32);
	// lis r23,-32238
	r23.s64 = -2112749568;
	// stw r9,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r9.u32);
	// lis r22,-32238
	r22.s64 = -2112749568;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r11.u32);
	// lis r21,-32239
	r21.s64 = -2112815104;
	// addi r10,r23,-18964
	ctx.r10.s64 = r23.s64 + -18964;
	// addi r9,r22,-18980
	ctx.r9.s64 = r22.s64 + -18980;
	// addi r11,r21,10408
	r11.s64 = r21.s64 + 10408;
	// stw r10,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r10.u32);
	// lis r20,-32239
	r20.s64 = -2112815104;
	// stw r9,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r9.u32);
	// lis r19,-32239
	r19.s64 = -2112815104;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r11.u32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r10,r20,10180
	ctx.r10.s64 = r20.s64 + 10180;
	// addi r9,r19,10164
	ctx.r9.s64 = r19.s64 + 10164;
	// lis r11,-32239
	r11.s64 = -2112815104;
	// stw r10,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// stw r9,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r9.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lfs f26,-30364(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -30364);
	f26.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r11,10304
	ctx.r3.s64 = r11.s64 + 10304;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lfs f30,2240(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2240);
	f30.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f31,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f31.f64 = double(temp.f32);
	// addi r6,r11,-19028
	ctx.r6.s64 = r11.s64 + -19028;
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lfs f28,-18984(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18984);
	f28.f64 = double(temp.f32);
	// addi r10,r4,-21684
	ctx.r10.s64 = ctx.r4.s64 + -21684;
	// lfs f27,-22120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -22120);
	f27.f64 = double(temp.f32);
	// addi r5,r11,-19052
	ctx.r5.s64 = r11.s64 + -19052;
	// lfs f29,-18988(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18988);
	f29.f64 = double(temp.f32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r6,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r6.u32);
	// addi r4,r11,-19068
	ctx.r4.s64 = r11.s64 + -19068;
	// stw r5,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r5.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r23,280(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stw r4,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r4.u32);
	// addi r10,r10,-19124
	ctx.r10.s64 = ctx.r10.s64 + -19124;
	// addi r30,r11,-19140
	r30.s64 = r11.s64 + -19140;
	// lwz r25,304(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r10,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r10.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r19,940(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// addi r29,r11,-19164
	r29.s64 = r11.s64 + -19164;
	// lwz r20,224(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lis r11,-32239
	r11.s64 = -2112815104;
	// lwz r16,220(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r10,r9,-19196
	ctx.r10.s64 = ctx.r9.s64 + -19196;
	// lwz r21,164(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r3,r11,29448
	ctx.r3.s64 = r11.s64 + 29448;
	// lwz r22,264(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stw r10,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r10.u32);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lwz r27,132(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r24,r11,11416
	r24.s64 = r11.s64 + 11416;
	// lwz r26,128(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r30,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, r30.u32);
	// addi r10,r8,-19224
	ctx.r10.s64 = ctx.r8.s64 + -19224;
	// stw r29,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, r29.u32);
	// addi r4,r11,-19232
	ctx.r4.s64 = r11.s64 + -19232;
	// stw r3,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r3.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r10,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r10.u32);
	// stw r4,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r4.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// addi r4,r11,-19252
	ctx.r4.s64 = r11.s64 + -19252;
	// stw r24,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, r24.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r7,-19280
	ctx.r10.s64 = ctx.r7.s64 + -19280;
	// stw r4,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r4.u32);
	// addi r9,r11,-19340
	ctx.r9.s64 = r11.s64 + -19340;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r10,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r10.u32);
	// stw r9,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r9.u32);
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// addi r9,r11,-19372
	ctx.r9.s64 = r11.s64 + -19372;
	// lis r5,-32238
	ctx.r5.s64 = -2112749568;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r9,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r9.u32);
	// addi r9,r6,-19392
	ctx.r9.s64 = ctx.r6.s64 + -19392;
	// addi r11,r11,-19516
	r11.s64 = r11.s64 + -19516;
	// addi r10,r5,-19472
	ctx.r10.s64 = ctx.r5.s64 + -19472;
	// stw r9,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r9.u32);
	// rotlwi r14,r14,0
	r14.u64 = __builtin_rotateleft32(r14.u32, 0);
	// stw r11,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, r11.u32);
	// stw r10,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r10.u32);
	// b 0x82dedea0
	goto loc_82DEDEA0;
loc_82DEDE74:
	// lwz r22,264(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r17,476(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lwz r21,164(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r18,544(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// lwz r27,132(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r26,128(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r24,460(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r23,280(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r25,304(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r20,224(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r16,220(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
loc_82DEDEA0:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// lwz r28,196(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r15,r11
	r15.u64 = r11.u64;
	// stw r15,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r15.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// bge cr6,0x82dedecc
	if (!cr6.lt) goto loc_82DEDECC;
	// li r11,1
	r11.s64 = 1;
loc_82DEDECC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bne 0x82dededc
	if (!cr0.eq) goto loc_82DEDEDC;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82DEDEDC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r30.u32);
	// stb r29,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, r29.u8);
	// bl 0x82deaf30
	sub_82DEAF30(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82df2c80
	if (cr6.lt) goto loc_82DF2C80;
	// beq cr6,0x82df2ca4
	if (cr6.eq) goto loc_82DF2CA4;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x82df2c78
	if (cr6.lt) goto loc_82DF2C78;
	// beq cr6,0x82df2c70
	if (cr6.eq) goto loc_82DF2C70;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// blt cr6,0x82df28fc
	if (cr6.lt) goto loc_82DF28FC;
	// beq cr6,0x82dedf30
	if (cr6.eq) goto loc_82DEDF30;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// blt cr6,0x82dedf20
	if (cr6.lt) goto loc_82DEDF20;
	// li r7,4278
	ctx.r7.s64 = 4278;
	// b 0x82df3808
	goto loc_82DF3808;
loc_82DEDF20:
	// lhz r11,0(r15)
	r11.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// clrlwi r11,r11,19
	r11.u64 = r11.u32 & 0x1FFF;
	// addi r30,r11,116
	r30.s64 = r11.s64 + 116;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r30.u32);
loc_82DEDF30:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// stw r29,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r29.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r29.u32);
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// rlwinm. r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82dedf5c
	if (cr0.eq) goto loc_82DEDF5C;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r11,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r11.u32);
	// stw r10,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r10.u32);
loc_82DEDF5C:
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// rlwinm. r11,r11,2,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dedf78
	if (cr0.eq) goto loc_82DEDF78;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r10,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r10.u32);
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r11.u32);
loc_82DEDF78:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dead60
	sub_82DEAD60(ctx, base);
	// mr. r18,r3
	r18.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r18.s32, 0, xer);
	// mr r28,r29
	r28.u64 = r29.u64;
	// stw r18,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r18.u32);
	// ble 0x82dee0e8
	if (!cr0.gt) goto loc_82DEE0E8;
	// mulli r9,r30,36
	ctx.r9.s64 = r30.s64 * 36;
	// addi r11,r17,28
	r11.s64 = r17.s64 + 28;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// subf r26,r23,r20
	r26.s64 = r20.s64 - r23.s64;
	// subf r4,r16,r23
	ctx.r4.s64 = r23.s64 - r16.s64;
	// add r27,r9,r11
	r27.u64 = ctx.r9.u64 + r11.u64;
loc_82DEDFAC:
	// lwz r9,20(r19)
	ctx.r9.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// add r11,r10,r4
	r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stwx r9,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, ctx.r9.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// stwx r11,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, r11.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r11,r11,10,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dee000
	if (cr0.eq) goto loc_82DEE000;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
loc_82DEE000:
	// lbzx r11,r28,r27
	r11.u64 = PPC_LOAD_U8(r28.u32 + r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82dee088
	if (cr0.eq) goto loc_82DEE088;
	// clrlwi r30,r3,24
	r30.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r10,24
	r11.s64 = ctx.r10.s64 + 24;
	// addi r9,r8,72
	ctx.r9.s64 = ctx.r8.s64 + 72;
	// subf r5,r16,r20
	ctx.r5.s64 = r20.s64 - r16.s64;
loc_82DEE020:
	// lwz r6,20(r19)
	ctx.r6.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// beq cr6,0x82dee040
	if (cr6.eq) goto loc_82DEE040;
	// lwz r6,20(r19)
	ctx.r6.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
loc_82DEE040:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// sth r6,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r6.u16);
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// stwx r6,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + r11.u32, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lhz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// clrlwi r6,r6,26
	ctx.r6.u64 = ctx.r6.u32 & 0x3F;
	// stwx r6,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + r11.u32, ctx.r6.u32);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// lbzx r6,r28,r27
	ctx.r6.u64 = PPC_LOAD_U8(r28.u32 + r27.u32);
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// blt cr6,0x82dee020
	if (cr6.lt) goto loc_82DEE020;
loc_82DEE088:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dee09c
	if (cr0.eq) goto loc_82DEE09C;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_82DEE09C:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r11,r11,9,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dee0c4
	if (cr0.eq) goto loc_82DEE0C4;
	// lwz r9,20(r19)
	ctx.r9.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r9.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r9,r11,r25
	PPC_STORE_U32(r11.u32 + r25.u32, ctx.r9.u32);
loc_82DEE0C4:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r28,r18
	cr6.compare<int32_t>(r28.s32, r18.s32, xer);
	// blt cr6,0x82dedfac
	if (cr6.lt) goto loc_82DEDFAC;
loc_82DEE0E8:
	// lwz r30,192(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82deade0
	sub_82DEADE0(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// add r11,r21,r18
	r11.u64 = r21.u64 + r18.u64;
	// subf. r22,r18,r11
	r22.s64 = r11.s64 - r18.s64;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// ble 0x82dee2cc
	if (!cr0.gt) goto loc_82DEE2CC;
	// mulli r11,r30,36
	r11.s64 = r30.s64 * 36;
	// lwz r15,264(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// add r9,r11,r18
	ctx.r9.u64 = r11.u64 + r18.u64;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r17,28
	r11.s64 = r17.s64 + 28;
	// li r28,0
	r28.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// add r29,r10,r23
	r29.u64 = ctx.r10.u64 + r23.u64;
	// subf r26,r23,r20
	r26.s64 = r20.s64 - r23.s64;
	// add r25,r9,r11
	r25.u64 = ctx.r9.u64 + r11.u64;
loc_82DEE134:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// stwx r11,r26,r29
	PPC_STORE_U32(r26.u32 + r29.u32, r11.u32);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r11,r9,10,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r9,r9,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	// mr r27,r11
	r27.u64 = r11.u64;
	// beq 0x82dee18c
	if (cr0.eq) goto loc_82DEE18C;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
loc_82DEE18C:
	// clrlwi. r23,r9,24
	r23.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// beq 0x82dee1b4
	if (cr0.eq) goto loc_82DEE1B4;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r7,20(r19)
	ctx.r7.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// add r11,r10,r28
	r11.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stwx r10,r11,r15
	PPC_STORE_U32(r11.u32 + r15.u32, ctx.r10.u32);
loc_82DEE1B4:
	// lbzx r11,r24,r25
	r11.u64 = PPC_LOAD_U8(r24.u32 + r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82dee27c
	if (cr0.eq) goto loc_82DEE27C;
	// addi r3,r28,18
	ctx.r3.s64 = r28.s64 + 18;
	// addi r10,r8,24
	ctx.r10.s64 = ctx.r8.s64 + 24;
	// addi r11,r4,72
	r11.s64 = ctx.r4.s64 + 72;
	// addi r6,r29,24
	ctx.r6.s64 = r29.s64 + 24;
loc_82DEE1D4:
	// lwz r5,20(r19)
	ctx.r5.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// sth r5,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r5.u16);
	// beq cr6,0x82dee218
	if (cr6.eq) goto loc_82DEE218;
	// lwz r30,20(r19)
	r30.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
loc_82DEE218:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82dee248
	if (cr6.eq) goto loc_82DEE248;
	// lwz r30,20(r19)
	r30.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r20,r9,1
	r20.s64 = ctx.r9.s64 + 1;
	// rlwinm r20,r20,2,0,29
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// add r30,r3,r9
	r30.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,156(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwzx r30,r20,r30
	r30.u64 = PPC_LOAD_U32(r20.u32 + r30.u32);
	// stwx r30,r9,r15
	PPC_STORE_U32(ctx.r9.u32 + r15.u32, r30.u32);
loc_82DEE248:
	// stwx r5,r6,r26
	PPC_STORE_U32(ctx.r6.u32 + r26.u32, ctx.r5.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,72
	r11.s64 = r11.s64 + 72;
	// addi r3,r3,18
	ctx.r3.s64 = ctx.r3.s64 + 18;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lhz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// lbzx r9,r24,r25
	ctx.r9.u64 = PPC_LOAD_U8(r24.u32 + r25.u32);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// blt cr6,0x82dee1d4
	if (cr6.lt) goto loc_82DEE1D4;
loc_82DEE27C:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// beq cr6,0x82dee298
	if (cr6.eq) goto loc_82DEE298;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_82DEE298:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82dee2ac
	if (cr6.eq) goto loc_82DEE2AC;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_82DEE2AC:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,3
	r28.s64 = r28.s64 + 3;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r24,r22
	cr6.compare<int32_t>(r24.s32, r22.s32, xer);
	// blt cr6,0x82dee134
	if (cr6.lt) goto loc_82DEE134;
	// lwz r30,192(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82DEE2CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82deaec0
	sub_82DEAEC0(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lwz r10,-1320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -1320);
	// lwz r11,-1312(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1312);
	// lwz r29,1456(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r11.u32);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x82dee324
	if (cr0.eq) goto loc_82DEE324;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// b 0x82dee32c
	goto loc_82DEE32C;
loc_82DEE324:
	// li r11,0
	r11.s64 = 0;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
loc_82DEE32C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,1456(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x82dee364
	if (cr0.eq) goto loc_82DEE364;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// b 0x82dee36c
	goto loc_82DEE36C;
loc_82DEE364:
	// li r11,0
	r11.s64 = 0;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
loc_82DEE36C:
	// li r15,0
	r15.s64 = 0;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// stw r15,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, r15.u32);
	// mr r28,r15
	r28.u64 = r15.u64;
	// stw r15,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, r15.u32);
	// stw r15,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, r15.u32);
	// stw r15,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, r15.u32);
	// stw r15,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r15.u32);
	// stw r15,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, r15.u32);
	// stw r15,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, r15.u32);
	// stw r15,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, r15.u32);
	// stw r15,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r15.u32);
	// stb r15,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, r15.u8);
	// ble cr6,0x82dee404
	if (!cr6.gt) goto loc_82DEE404;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r11,r17,28
	r11.s64 = r17.s64 + 28;
	// mr r26,r16
	r26.u64 = r16.u64;
	// mulli r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 * 36;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + r11.u64;
loc_82DEE3B8:
	// lbzx r11,r28,r27
	r11.u64 = PPC_LOAD_U8(r28.u32 + r27.u32);
	// mr r30,r15
	r30.u64 = r15.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// blt cr6,0x82dee3f4
	if (cr6.lt) goto loc_82DEE3F4;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82DEE3CC:
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82deca88
	sub_82DECA88(ctx, base);
	// lbzx r11,r28,r27
	r11.u64 = PPC_LOAD_U8(r28.u32 + r27.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x82dee3cc
	if (!cr6.gt) goto loc_82DEE3CC;
loc_82DEE3F4:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r28,r18
	cr6.compare<int32_t>(r28.s32, r18.s32, xer);
	// blt cr6,0x82dee3b8
	if (cr6.lt) goto loc_82DEE3B8;
loc_82DEE404:
	// stb r15,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, r15.u8);
	// mr r27,r15
	r27.u64 = r15.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x82dee4a0
	if (!cr6.gt) goto loc_82DEE4A0;
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r26,180(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mulli r11,r11,36
	r11.s64 = r11.s64 * 36;
	// add r10,r11,r18
	ctx.r10.u64 = r11.u64 + r18.u64;
	// addi r11,r17,28
	r11.s64 = r17.s64 + 28;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + r11.u64;
loc_82DEE42C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r25,r11,10,31,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x82dee444
	if (cr0.eq) goto loc_82DEE444;
	// li r11,1
	r11.s64 = 1;
	// stb r11,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, r11.u8);
loc_82DEE444:
	// lbzx r11,r27,r28
	r11.u64 = PPC_LOAD_U8(r27.u32 + r28.u32);
	// mr r30,r15
	r30.u64 = r15.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// blt cr6,0x82dee490
	if (cr6.lt) goto loc_82DEE490;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82DEE458:
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r8,r11,9,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	// bl 0x82deb8a0
	sub_82DEB8A0(ctx, base);
	// lbzx r11,r27,r28
	r11.u64 = PPC_LOAD_U8(r27.u32 + r28.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x82dee458
	if (!cr6.gt) goto loc_82DEE458;
loc_82DEE490:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r27,r21
	cr6.compare<int32_t>(r27.s32, r21.s32, xer);
	// blt cr6,0x82dee42c
	if (cr6.lt) goto loc_82DEE42C;
loc_82DEE4A0:
	// lwz r30,664(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 664);
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x82dee4fc
	goto loc_82DEE4FC;
loc_82DEE4AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de4290
	sub_82DE4290(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82dee4f4
	if (!cr0.eq) goto loc_82DEE4F4;
	// li r7,2243
	ctx.r7.s64 = 2243;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEE4F4:
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_82DEE4FC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82dee4ac
	if (!cr6.eq) goto loc_82DEE4AC;
loc_82DEE504:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplwi cr6,r10,87
	cr6.compare<uint32_t>(ctx.r10.u32, 87, xer);
	// bgt cr6,0x82df27a4
	if (cr6.gt) goto loc_82DF27A4;
	// lis r12,-32238
	r12.s64 = -2112749568;
	// addi r12,r12,-21424
	r12.s64 = r12.s64 + -21424;
	// rlwinm r0,r10,1,0,30
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32033
	r12.s64 = -2099314688;
	// addi r12,r12,-6836
	r12.s64 = r12.s64 + -6836;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82DF279C;
	case 1:
		goto loc_82DF1504;
	case 2:
		goto loc_82DF1504;
	case 3:
		goto loc_82DF1504;
	case 4:
		goto loc_82DF1504;
	case 5:
		goto loc_82DF1504;
	case 6:
		goto loc_82DF1504;
	case 7:
		goto loc_82DF1504;
	case 8:
		goto loc_82DF1504;
	case 9:
		goto loc_82DF1504;
	case 10:
		goto loc_82DF1504;
	case 11:
		goto loc_82DF1504;
	case 12:
		goto loc_82DF1504;
	case 13:
		goto loc_82DF1504;
	case 14:
		goto loc_82DF1504;
	case 15:
		goto loc_82DF1504;
	case 16:
		goto loc_82DF155C;
	case 17:
		goto loc_82DF16F8;
	case 18:
		goto loc_82DF27C4;
	case 19:
		goto loc_82DF1470;
	case 20:
		goto loc_82DF1470;
	case 21:
		goto loc_82DF1470;
	case 22:
		goto loc_82DF22EC;
	case 23:
		goto loc_82DF27A4;
	case 24:
		goto loc_82DF27A4;
	case 25:
		goto loc_82DF27A4;
	case 26:
		goto loc_82DF27A4;
	case 27:
		goto loc_82DF27A4;
	case 28:
		goto loc_82DF27A4;
	case 29:
		goto loc_82DF27A4;
	case 30:
		goto loc_82DF0FB0;
	case 31:
		goto loc_82DF0F84;
	case 32:
		goto loc_82DF123C;
	case 33:
		goto loc_82DF12D8;
	case 34:
		goto loc_82DF23F4;
	case 35:
		goto loc_82DF27A4;
	case 36:
		goto loc_82DF26C0;
	case 37:
		goto loc_82DF2088;
	case 38:
		goto loc_82DF272C;
	case 39:
		goto loc_82DF2124;
	case 40:
		goto loc_82DF274C;
	case 41:
		goto loc_82DF27A4;
	case 42:
		goto loc_82DEE54C;
	case 43:
		goto loc_82DF1660;
	case 44:
		goto loc_82DF24F8;
	case 45:
		goto loc_82DF1CAC;
	case 46:
		goto loc_82DF1A54;
	case 47:
		goto loc_82DF1630;
	case 48:
		goto loc_82DF18B4;
	case 49:
		goto loc_82DF1704;
	case 50:
		goto loc_82DF14DC;
	case 51:
		goto loc_82DF0FA4;
	case 52:
		goto loc_82DF27C4;
	case 53:
		goto loc_82DF1590;
	case 54:
		goto loc_82DF27C4;
	case 55:
		goto loc_82DF116C;
	case 56:
		goto loc_82DF1570;
	case 57:
		goto loc_82DF1130;
	case 58:
		goto loc_82DF27C4;
	case 59:
		goto loc_82DF2784;
	case 60:
		goto loc_82DF27A4;
	case 61:
		goto loc_82DF16B0;
	case 62:
		goto loc_82DF14B0;
	case 63:
		goto loc_82DF14B0;
	case 64:
		goto loc_82DF14B0;
	case 65:
		goto loc_82DF14B0;
	case 66:
		goto loc_82DF14B0;
	case 67:
		goto loc_82DF14B0;
	case 68:
		goto loc_82DF14B0;
	case 69:
		goto loc_82DF1180;
	case 70:
		goto loc_82DF27C4;
	case 71:
		goto loc_82DF0F6C;
	case 72:
		goto loc_82DF11A0;
	case 73:
		goto loc_82DF1100;
	case 74:
		goto loc_82DF1100;
	case 75:
		goto loc_82DF0FD0;
	case 76:
		goto loc_82DF10E0;
	case 77:
		goto loc_82DF16EC;
	case 78:
		goto loc_82DF159C;
	case 79:
		goto loc_82DF159C;
	case 80:
		goto loc_82DF159C;
	case 81:
		goto loc_82DF159C;
	case 82:
		goto loc_82DF159C;
	case 83:
		goto loc_82DF159C;
	case 84:
		goto loc_82DF159C;
	case 85:
		goto loc_82DF1C20;
	case 86:
		goto loc_82DF27A4;
	case 87:
		goto loc_82DF264C;
	default:
		__builtin_unreachable();
	}
loc_82DEE54C:
	// lwz r28,176(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lbz r25,1(r28)
	r25.u64 = PPC_LOAD_U8(r28.u32 + 1);
	// rlwinm r11,r25,27,5,31
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r25,27
	ctx.r9.u64 = r25.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82dee590
	if (!cr0.eq) goto loc_82DEE590;
	// li r7,2263
	ctx.r7.s64 = 2263;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,528(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEE590:
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r29,0
	r29.s64 = 0;
	// mr r22,r29
	r22.u64 = r29.u64;
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(r11.s32, 93, xer);
	// beq cr6,0x82dee5fc
	if (cr6.eq) goto loc_82DEE5FC;
	// cmpwi cr6,r11,94
	cr6.compare<int32_t>(r11.s32, 94, xer);
	// beq cr6,0x82dee5f8
	if (cr6.eq) goto loc_82DEE5F8;
	// cmpwi cr6,r11,95
	cr6.compare<int32_t>(r11.s32, 95, xer);
	// beq cr6,0x82dee5f0
	if (cr6.eq) goto loc_82DEE5F0;
	// cmpwi cr6,r11,96
	cr6.compare<int32_t>(r11.s32, 96, xer);
	// beq cr6,0x82dee5e8
	if (cr6.eq) goto loc_82DEE5E8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// beq cr6,0x82dee5e0
	if (cr6.eq) goto loc_82DEE5E0;
	// li r7,2293
	ctx.r7.s64 = 2293;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// b 0x82dee5fc
	goto loc_82DEE5FC;
loc_82DEE5E0:
	// li r22,32
	r22.s64 = 32;
	// b 0x82dee5fc
	goto loc_82DEE5FC;
loc_82DEE5E8:
	// li r22,18
	r22.s64 = 18;
	// b 0x82dee5fc
	goto loc_82DEE5FC;
loc_82DEE5F0:
	// li r22,9
	r22.s64 = 9;
	// b 0x82dee5fc
	goto loc_82DEE5FC;
loc_82DEE5F8:
	// li r22,5
	r22.s64 = 5;
loc_82DEE5FC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r3,1452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lwz r30,332(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r27,1
	r27.s64 = 1;
	// sth r11,0(r23)
	PPC_STORE_U16(r23.u32 + 0, r11.u16);
	// sth r11,2(r23)
	PPC_STORE_U16(r23.u32 + 2, r11.u16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// sth r11,4(r23)
	PPC_STORE_U16(r23.u32 + 4, r11.u16);
	// sth r10,6(r23)
	PPC_STORE_U16(r23.u32 + 6, ctx.r10.u16);
	// sth r10,8(r23)
	PPC_STORE_U16(r23.u32 + 8, ctx.r10.u16);
	// sth r11,10(r23)
	PPC_STORE_U16(r23.u32 + 10, r11.u16);
	// sth r11,12(r23)
	PPC_STORE_U16(r23.u32 + 12, r11.u16);
	// sth r27,14(r23)
	PPC_STORE_U16(r23.u32 + 14, r27.u16);
	// sth r29,16(r23)
	PPC_STORE_U16(r23.u32 + 16, r29.u16);
	// sth r27,18(r23)
	PPC_STORE_U16(r23.u32 + 18, r27.u16);
	// sth r29,22(r23)
	PPC_STORE_U16(r23.u32 + 22, r29.u16);
	// sth r29,24(r23)
	PPC_STORE_U16(r23.u32 + 24, r29.u16);
	// sth r29,26(r23)
	PPC_STORE_U16(r23.u32 + 26, r29.u16);
	// sth r29,28(r23)
	PPC_STORE_U16(r23.u32 + 28, r29.u16);
	// sth r29,20(r23)
	PPC_STORE_U16(r23.u32 + 20, r29.u16);
	// beq cr6,0x82dee6f4
	if (cr6.eq) goto loc_82DEE6F4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// bl 0x82deb0b8
	sub_82DEB0B8(ctx, base);
	// sth r3,0(r23)
	PPC_STORE_U16(r23.u32 + 0, ctx.r3.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r3,r11,29,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x7;
	// bl 0x82deb0b8
	sub_82DEB0B8(ctx, base);
	// sth r3,2(r23)
	PPC_STORE_U16(r23.u32 + 2, ctx.r3.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r3,r11,20,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	// bl 0x82deb0b8
	sub_82DEB0B8(ctx, base);
	// sth r3,4(r23)
	PPC_STORE_U16(r23.u32 + 4, ctx.r3.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r3,r11,26,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x7;
	// bl 0x82deb0b8
	sub_82DEB0B8(ctx, base);
	// sth r3,10(r23)
	PPC_STORE_U16(r23.u32 + 10, ctx.r3.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r3,r11,23,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x7;
	// bl 0x82deb0b8
	sub_82DEB0B8(ctx, base);
	// sth r3,12(r23)
	PPC_STORE_U16(r23.u32 + 12, ctx.r3.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r3,r11,17,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x7;
	// bl 0x82deb0b8
	sub_82DEB0B8(ctx, base);
	// sth r3,6(r23)
	PPC_STORE_U16(r23.u32 + 6, ctx.r3.u16);
	// rlwinm. r10,r22,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,14,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x7F;
	// sth r11,22(r23)
	PPC_STORE_U16(r23.u32 + 22, r11.u16);
	// beq 0x82dee6f4
	if (cr0.eq) goto loc_82DEE6F4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,7,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,16(r23)
	PPC_STORE_U16(r23.u32 + 16, r11.u16);
loc_82DEE6F4:
	// lwz r30,256(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82dee774
	if (cr6.eq) goto loc_82DEE774;
	// lbz r11,3(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 3);
	// rlwinm. r10,r22,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r11,24(r23)
	PPC_STORE_U16(r23.u32 + 24, r11.u16);
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// sth r11,26(r23)
	PPC_STORE_U16(r23.u32 + 26, r11.u16);
	// beq 0x82dee76c
	if (cr0.eq) goto loc_82DEE76C;
	// lwz r26,12(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r24,r11,-8808
	r24.s64 = r11.s64 + -8808;
	// lwz r3,1488(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x82de0888
	sub_82DE0888(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82dee764
	if (!cr6.eq) goto loc_82DEE764;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// b 0x82dee770
	goto loc_82DEE770;
loc_82DEE764:
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x82dee770
	goto loc_82DEE770;
loc_82DEE76C:
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
loc_82DEE770:
	// sth r11,28(r23)
	PPC_STORE_U16(r23.u32 + 28, r11.u16);
loc_82DEE774:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// clrlwi. r16,r22,31
	r16.u64 = r22.u32 & 0x1;
	cr0.compare<int32_t>(r16.s32, 0, xer);
	// rlwinm r20,r11,8,31,31
	r20.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0x1;
	// rlwinm r21,r11,6,30,31
	r21.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x3;
	// cntlzw r11,r20
	r11.u64 = r20.u32 == 0 ? 32 : __builtin_clz(r20.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// sth r11,18(r23)
	PPC_STORE_U16(r23.u32 + 18, r11.u16);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r28,r11,7,31,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// cntlzw r11,r28
	r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// sth r11,14(r23)
	PPC_STORE_U16(r23.u32 + 14, r11.u16);
	// beq 0x82dee7bc
	if (cr0.eq) goto loc_82DEE7BC;
	// rlwinm. r11,r22,0,28,28
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82dee7b8
	if (cr0.eq) goto loc_82DEE7B8;
	// sth r27,20(r23)
	PPC_STORE_U16(r23.u32 + 20, r27.u16);
	// b 0x82dee7bc
	goto loc_82DEE7BC;
loc_82DEE7B8:
	// sth r27,16(r23)
	PPC_STORE_U16(r23.u32 + 16, r27.u16);
loc_82DEE7BC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1508);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// lwz r30,-1312(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1312);
	// stw r5,1508(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1508, ctx.r5.u32);
	// lwz r10,-1320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1320);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r30.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r17,224(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r29,164(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r11,r1,152
	r11.s64 = ctx.r1.s64 + 152;
	// lwz r26,180(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// lwz r24,220(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r17.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stb r27,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r27.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ded780
	sub_82DED780(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82dee8b8
	if (!cr0.eq) goto loc_82DEE8B8;
	// li r7,2397
	ctx.r7.s64 = 2397;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEE8B8:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x82dee980
	if (cr6.eq) goto loc_82DEE980;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// addi r11,r1,152
	r11.s64 = ctx.r1.s64 + 152;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r17.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// stb r7,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r7.u8);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ded780
	sub_82DED780(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82dee980
	if (!cr0.eq) goto loc_82DEE980;
	// li r7,2413
	ctx.r7.s64 = 2413;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEE980:
	// rlwinm. r24,r22,0,28,28
	r24.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// li r26,0
	r26.s64 = 0;
	// beq 0x82deea48
	if (cr0.eq) goto loc_82DEEA48;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// addi r11,r1,152
	r11.s64 = ctx.r1.s64 + 152;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stb r3,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r3.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r17.u32);
	// bl 0x82ded780
	sub_82DED780(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82deea48
	if (!cr0.eq) goto loc_82DEEA48;
	// li r7,2430
	ctx.r7.s64 = 2430;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEEA48:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// rlwinm r17,r25,3,0,28
	r17.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r17
	r11.u64 = r11.u64 + r17.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82deeaa8
	if (cr6.eq) goto loc_82DEEAA8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82deee44
	if (!cr6.eq) goto loc_82DEEE44;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r29,r11,-8808
	r29.s64 = r11.s64 + -8808;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82dc1138
	sub_82DC1138(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82deee44
	if (!cr6.eq) goto loc_82DEEE44;
loc_82DEEAA8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,212(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// li r29,2
	r29.s64 = 2;
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r11,0
	r11.s64 = 0;
	// li r15,1
	r15.s64 = 1;
	// stb r29,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, r29.u8);
	// stb r11,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, r11.u8);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r29,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, r29.u8);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stb r15,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, r15.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r11,0
	r11.s64 = 0;
	// stb r15,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, r15.u8);
	// stb r29,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, r29.u8);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stb r11,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r29,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, r29.u8);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, r11.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// lwz r11,212(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82deeba8
	if (!cr0.eq) goto loc_82DEEBA8;
	// li r7,2467
	ctx.r7.s64 = 2467;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEEBA8:
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r29,136(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,-1296(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -1296);
	// stw r11,128(r19)
	PPC_STORE_U32(r19.u32 + 128, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1276(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -1276);
	// stb r15,159(r19)
	PPC_STORE_U8(r19.u32 + 159, r15.u8);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r19)
	PPC_STORE_U32(r19.u32 + 132, r11.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// lwz r19,184(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82deec30
	if (!cr0.eq) goto loc_82DEEC30;
	// li r7,2478
	ctx.r7.s64 = 2478;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEEC30:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1276(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -1276);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// fmr f4,f26
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f26.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// stw r11,136(r15)
	PPC_STORE_U32(r15.u32 + 136, r11.u32);
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82deed54
	if (!cr0.eq) goto loc_82DEED54;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,2493
	ctx.r7.s64 = 2493;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEED54:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82deee40
	if (!cr0.eq) goto loc_82DEEE40;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,2504
	ctx.r7.s64 = 2504;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEEE40:
	// mr r19,r30
	r19.u64 = r30.u64;
loc_82DEEE44:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// addi r6,r10,-8808
	ctx.r6.s64 = ctx.r10.s64 + -8808;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,1536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1536);
	// bl 0x82dc4e50
	sub_82DC4E50(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// lhz r3,22(r23)
	ctx.r3.u64 = PPC_LOAD_U16(r23.u32 + 22);
	// bl 0x82de66c8
	sub_82DE66C8(ctx, base);
	// lfs f0,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f0,204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r29,r11,-8808
	r29.s64 = r11.s64 + -8808;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82dc1090
	sub_82DC1090(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82def524
	if (!cr6.eq) goto loc_82DEF524;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// addi r6,r10,-8808
	ctx.r6.s64 = ctx.r10.s64 + -8808;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,1536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1536);
	// bl 0x82dc4ef0
	sub_82DC4EF0(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,292
	ctx.r5.s64 = ctx.r1.s64 + 292;
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// lwz r3,1536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1536);
	// bl 0x82dc4fa0
	sub_82DC4FA0(ctx, base);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// beq cr6,0x82def278
	if (cr6.eq) goto loc_82DEF278;
	// bl 0x82dc61b0
	sub_82DC61B0(ctx, base);
	// sth r3,22(r23)
	PPC_STORE_U16(r23.u32 + 22, ctx.r3.u16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,-1272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1272);
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// lfs f4,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82deefd4
	if (!cr0.eq) goto loc_82DEEFD4;
	// li r7,2562
	ctx.r7.s64 = 2562;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEEFD4:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82def108
	if (!cr6.eq) goto loc_82DEF108;
	// li r3,110
	ctx.r3.s64 = 110;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r28,136(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-1292(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -1292);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82dad4c8
	sub_82DAD4C8(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82def054
	if (cr6.lt) goto loc_82DEF054;
	// beq cr6,0x82def04c
	if (cr6.eq) goto loc_82DEF04C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82def054
	if (!cr6.lt) goto loc_82DEF054;
	// li r11,1
	r11.s64 = 1;
	// b 0x82def058
	goto loc_82DEF058;
loc_82DEF04C:
	// li r11,0
	r11.s64 = 0;
	// b 0x82def058
	goto loc_82DEF058;
loc_82DEF054:
	// li r11,2
	r11.s64 = 2;
loc_82DEF058:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1272(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -1272);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1284(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -1284);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r11.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82def108
	if (!cr0.eq) goto loc_82DEF108;
	// li r7,2588
	ctx.r7.s64 = 2588;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEF108:
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,14(r23)
	PPC_STORE_U16(r23.u32 + 14, r11.u16);
	// li r3,25
	ctx.r3.s64 = 25;
	// sth r10,16(r23)
	PPC_STORE_U16(r23.u32 + 16, ctx.r10.u16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lfs f4,284(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82def1a4
	if (!cr0.eq) goto loc_82DEF1A4;
	// li r7,2603
	ctx.r7.s64 = 2603;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,348(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEF1A4:
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lfs f4,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82def230
	if (!cr0.eq) goto loc_82DEF230;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r7,2612
	ctx.r7.s64 = 2612;
loc_82DEF220:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,300(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEF230:
	// li r3,113
	ctx.r3.s64 = 113;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r5,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r5.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// b 0x82def59c
	goto loc_82DEF59C;
loc_82DEF278:
	// bl 0x82dc61b0
	sub_82DC61B0(ctx, base);
	// sth r3,22(r23)
	PPC_STORE_U16(r23.u32 + 22, ctx.r3.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// sth r11,14(r23)
	PPC_STORE_U16(r23.u32 + 14, r11.u16);
	// sth r10,16(r23)
	PPC_STORE_U16(r23.u32 + 16, ctx.r10.u16);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82def4f4
	if (!cr6.eq) goto loc_82DEF4F4;
	// li r3,110
	ctx.r3.s64 = 110;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82dad4c8
	sub_82DAD4C8(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82def324
	if (cr6.lt) goto loc_82DEF324;
	// beq cr6,0x82def31c
	if (cr6.eq) goto loc_82DEF31C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82def324
	if (!cr6.lt) goto loc_82DEF324;
	// li r11,1
	r11.s64 = 1;
	// b 0x82def328
	goto loc_82DEF328;
loc_82DEF31C:
	// li r11,0
	r11.s64 = 0;
	// b 0x82def328
	goto loc_82DEF328;
loc_82DEF324:
	// li r11,2
	r11.s64 = 2;
loc_82DEF328:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,-1272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1272);
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// lfs f4,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// lwz r30,132(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82def3e8
	if (!cr0.eq) goto loc_82DEF3E8;
	// li r7,2668
	ctx.r7.s64 = 2668;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEF3E8:
	// li r3,25
	ctx.r3.s64 = 25;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lfs f4,284(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82def474
	if (!cr0.eq) goto loc_82DEF474;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,2677
	ctx.r7.s64 = 2677;
	// lwz r5,348(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEF474:
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lfs f4,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82def230
	if (!cr0.eq) goto loc_82DEF230;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,2686
	ctx.r7.s64 = 2686;
	// b 0x82def220
	goto loc_82DEF220;
loc_82DEF4F4:
	// lfs f1,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82def50c
	if (!cr6.gt) goto loc_82DEF50C;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// stfs f1,204(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
loc_82DEF50C:
	// lfs f0,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x82def60c
	if (!cr6.lt) goto loc_82DEF60C;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// stfs f1,204(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// b 0x82def60c
	goto loc_82DEF60C;
loc_82DEF524:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x82def608
	if (cr6.eq) goto loc_82DEF608;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x82def608
	if (!cr6.eq) goto loc_82DEF608;
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f1,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82dc61b0
	sub_82DC61B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,113
	ctx.r3.s64 = 113;
	// sth r11,22(r23)
	PPC_STORE_U16(r23.u32 + 22, r11.u16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r5,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r5.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,-1272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1272);
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
loc_82DEF59C:
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82dad4c8
	sub_82DAD4C8(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82def5dc
	if (cr6.lt) goto loc_82DEF5DC;
	// beq cr6,0x82def5d4
	if (cr6.eq) goto loc_82DEF5D4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82def5dc
	if (!cr6.lt) goto loc_82DEF5DC;
	// li r11,1
	r11.s64 = 1;
	// b 0x82def5e0
	goto loc_82DEF5E0;
loc_82DEF5D4:
	// li r11,0
	r11.s64 = 0;
	// b 0x82def5e0
	goto loc_82DEF5E0;
loc_82DEF5DC:
	// li r11,2
	r11.s64 = 2;
loc_82DEF5E0:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// b 0x82def61c
	goto loc_82DEF61C;
loc_82DEF608:
	// lfs f1,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
loc_82DEF60C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82dc61b0
	sub_82DC61B0(ctx, base);
	// sth r3,22(r23)
	PPC_STORE_U16(r23.u32 + 22, ctx.r3.u16);
loc_82DEF61C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82def6c0
	if (cr6.eq) goto loc_82DEF6C0;
	// li r3,114
	ctx.r3.s64 = 114;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r30,r25,1,0,30
	r30.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// li r29,29
	r29.s64 = 29;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,56(r28)
	PPC_STORE_U32(r28.u32 + 56, r30.u32);
	// stw r29,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r29.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// stw r23,184(r28)
	PPC_STORE_U32(r28.u32 + 184, r23.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// li r3,115
	ctx.r3.s64 = 115;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,56(r28)
	PPC_STORE_U32(r28.u32 + 56, r11.u32);
	// stw r29,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r29.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// stw r23,184(r28)
	PPC_STORE_U32(r28.u32 + 184, r23.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
loc_82DEF6C0:
	// rlwinm. r11,r22,0,27,27
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r29,105
	r29.s64 = 105;
	// beq 0x82def6d0
	if (cr0.eq) goto loc_82DEF6D0;
	// li r29,108
	r29.s64 = 108;
loc_82DEF6D0:
	// rlwinm. r11,r22,0,26,26
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82def6dc
	if (cr0.eq) goto loc_82DEF6DC;
	// li r29,112
	r29.s64 = 112;
loc_82DEF6DC:
	// cmpwi cr6,r21,1
	cr6.compare<int32_t>(r21.s32, 1, xer);
	// beq cr6,0x82defc80
	if (cr6.eq) goto loc_82DEFC80;
	// cmpwi cr6,r21,2
	cr6.compare<int32_t>(r21.s32, 2, xer);
	// bne cr6,0x82def72c
	if (!cr6.eq) goto loc_82DEF72C;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r28,r11,-8808
	r28.s64 = r11.s64 + -8808;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82dc3408
	sub_82DC3408(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82defc80
	if (cr6.eq) goto loc_82DEFC80;
loc_82DEF72C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82def78c
	if (cr6.lt) goto loc_82DEF78C;
	// beq cr6,0x82def784
	if (cr6.eq) goto loc_82DEF784;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82def78c
	if (!cr6.lt) goto loc_82DEF78C;
	// li r11,1
	r11.s64 = 1;
	// b 0x82def790
	goto loc_82DEF790;
loc_82DEF784:
	// li r11,0
	r11.s64 = 0;
	// b 0x82def790
	goto loc_82DEF790;
loc_82DEF78C:
	// li r11,2
	r11.s64 = 2;
loc_82DEF790:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82dad4c8
	sub_82DAD4C8(ctx, base);
	// lwz r11,184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// sth r20,18(r11)
	PPC_STORE_U16(r11.u32 + 18, r20.u16);
	// beq cr6,0x82def7f8
	if (cr6.eq) goto loc_82DEF7F8;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82defc6c
	if (cr6.eq) goto loc_82DEFC6C;
	// rlwinm r29,r25,1,0,30
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82deace8
	sub_82DEACE8(ctx, base);
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82deace8
	sub_82DEACE8(ctx, base);
loc_82DEF7F8:
	// lwz r21,208(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
loc_82DEF7FC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// lwz r22,128(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r24,132(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82def844
	if (!cr0.eq) goto loc_82DEF844;
	// li r7,3070
	ctx.r7.s64 = 3070;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEF844:
	// lwz r27,136(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_82DEF848:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r29,r11,-8808
	r29.s64 = r11.s64 + -8808;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82dc22c8
	sub_82DC22C8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82df09f4
	if (!cr6.eq) goto loc_82DF09F4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,548
	ctx.r5.s64 = ctx.r1.s64 + 548;
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82dc4a10
	sub_82DC4A10(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,412
	ctx.r5.s64 = ctx.r1.s64 + 412;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4a28
	sub_82DC4A28(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,492
	ctx.r5.s64 = ctx.r1.s64 + 492;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4a40
	sub_82DC4A40(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,404
	ctx.r5.s64 = ctx.r1.s64 + 404;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4a58
	sub_82DC4A58(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,484
	ctx.r5.s64 = ctx.r1.s64 + 484;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4a70
	sub_82DC4A70(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,388
	ctx.r5.s64 = ctx.r1.s64 + 388;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4a70
	sub_82DC4A70(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,532
	ctx.r5.s64 = ctx.r1.s64 + 532;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4a70
	sub_82DC4A70(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,396
	ctx.r5.s64 = ctx.r1.s64 + 396;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4a88
	sub_82DC4A88(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,552
	ctx.r5.s64 = ctx.r1.s64 + 552;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4a88
	sub_82DC4A88(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,420
	ctx.r5.s64 = ctx.r1.s64 + 420;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4aa0
	sub_82DC4AA0(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,428
	ctx.r5.s64 = ctx.r1.s64 + 428;
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4ab8
	sub_82DC4AB8(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,500
	ctx.r5.s64 = ctx.r1.s64 + 500;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4a88
	sub_82DC4A88(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,436
	ctx.r5.s64 = ctx.r1.s64 + 436;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4ad0
	sub_82DC4AD0(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,508
	ctx.r5.s64 = ctx.r1.s64 + 508;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4ae8
	sub_82DC4AE8(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4a88
	sub_82DC4A88(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,444
	ctx.r5.s64 = ctx.r1.s64 + 444;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4a88
	sub_82DC4A88(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1280(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1280);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// lfs f2,388(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,532(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f4,404(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f3,492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,548(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// lwz r28,184(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82defb20
	if (!cr0.eq) goto loc_82DEFB20;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,3161
	ctx.r7.s64 = 3161;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEFB20:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1276(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1276);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// lfs f2,420(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,500(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,552(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82defbc4
	if (!cr0.eq) goto loc_82DEFBC4;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3171
	ctx.r7.s64 = 3171;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEFBC4:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1284);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,132(r15)
	PPC_STORE_U32(r15.u32 + 132, r11.u32);
	// lfs f1,436(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,508(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,444(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df09f8
	if (!cr0.eq) goto loc_82DF09F8;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3181
	ctx.r7.s64 = 3181;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// b 0x82df09f8
	goto loc_82DF09F8;
loc_82DEFC6C:
	// lwz r21,208(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82deace8
	sub_82DEACE8(ctx, base);
	// b 0x82def7fc
	goto loc_82DEF7FC;
loc_82DEFC80:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r27,r11,-8808
	r27.s64 = r11.s64 + -8808;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82dc24b0
	sub_82DC24B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne cr6,0x82df00c8
	if (!cr6.eq) goto loc_82DF00C8;
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// bl 0x82dc61b0
	sub_82DC61B0(ctx, base);
	// sth r3,24(r23)
	PPC_STORE_U16(r23.u32 + 24, ctx.r3.u16);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r26,184(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82dc61b0
	sub_82DC61B0(ctx, base);
	// lwz r27,136(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r11,24(r26)
	PPC_STORE_U16(r26.u32 + 24, r11.u16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-1304(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1304);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82defd80
	if (cr6.lt) goto loc_82DEFD80;
	// beq cr6,0x82defd78
	if (cr6.eq) goto loc_82DEFD78;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82defd80
	if (!cr6.lt) goto loc_82DEFD80;
	// li r11,1
	r11.s64 = 1;
	// b 0x82defd84
	goto loc_82DEFD84;
loc_82DEFD78:
	// li r11,0
	r11.s64 = 0;
	// b 0x82defd84
	goto loc_82DEFD84;
loc_82DEFD80:
	// li r11,2
	r11.s64 = 2;
loc_82DEFD84:
	// lwz r21,208(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// beq cr6,0x82defda0
	if (cr6.eq) goto loc_82DEFDA0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82deace8
	sub_82DEACE8(ctx, base);
loc_82DEFDA0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// lwz r22,128(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r26,272(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r24,132(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bne 0x82defdec
	if (!cr0.eq) goto loc_82DEFDEC;
	// li r7,2812
	ctx.r7.s64 = 2812;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEFDEC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// bl 0x82dc61b0
	sub_82DC61B0(ctx, base);
	// sth r3,24(r23)
	PPC_STORE_U16(r23.u32 + 24, ctx.r3.u16);
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r20,184(r30)
	r20.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// bl 0x82dc61b0
	sub_82DC61B0(ctx, base);
	// lwz r11,-1300(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1300);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r10,24(r20)
	PPC_STORE_U16(r20.u32 + 24, ctx.r10.u16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82defe88
	if (cr6.lt) goto loc_82DEFE88;
	// beq cr6,0x82defe80
	if (cr6.eq) goto loc_82DEFE80;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82defe88
	if (!cr6.lt) goto loc_82DEFE88;
	// li r11,1
	r11.s64 = 1;
	// b 0x82defe8c
	goto loc_82DEFE8C;
loc_82DEFE80:
	// li r11,0
	r11.s64 = 0;
	// b 0x82defe8c
	goto loc_82DEFE8C;
loc_82DEFE88:
	// li r11,2
	r11.s64 = 2;
loc_82DEFE8C:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x82defea4
	if (cr6.eq) goto loc_82DEFEA4;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82deace8
	sub_82DEACE8(ctx, base);
loc_82DEFEA4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82defee4
	if (!cr0.eq) goto loc_82DEFEE4;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,2829
	ctx.r7.s64 = 2829;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEFEE4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// bl 0x82dc61b0
	sub_82DC61B0(ctx, base);
	// sth r3,24(r23)
	PPC_STORE_U16(r23.u32 + 24, ctx.r3.u16);
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r20,184(r30)
	r20.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// bl 0x82dc61b0
	sub_82DC61B0(ctx, base);
	// lwz r11,-1296(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1296);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r10,24(r20)
	PPC_STORE_U16(r20.u32 + 24, ctx.r10.u16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82deff80
	if (cr6.lt) goto loc_82DEFF80;
	// beq cr6,0x82deff78
	if (cr6.eq) goto loc_82DEFF78;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82deff80
	if (!cr6.lt) goto loc_82DEFF80;
	// li r11,1
	r11.s64 = 1;
	// b 0x82deff84
	goto loc_82DEFF84;
loc_82DEFF78:
	// li r11,0
	r11.s64 = 0;
	// b 0x82deff84
	goto loc_82DEFF84;
loc_82DEFF80:
	// li r11,2
	r11.s64 = 2;
loc_82DEFF84:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x82deff9c
	if (cr6.eq) goto loc_82DEFF9C;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82deace8
	sub_82DEACE8(ctx, base);
loc_82DEFF9C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82deffdc
	if (!cr0.eq) goto loc_82DEFFDC;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,2846
	ctx.r7.s64 = 2846;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DEFFDC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// bl 0x82dc61b0
	sub_82DC61B0(ctx, base);
	// sth r3,24(r23)
	PPC_STORE_U16(r23.u32 + 24, ctx.r3.u16);
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r29,184(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// bl 0x82dc61b0
	sub_82DC61B0(ctx, base);
	// lwz r11,-1292(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1292);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r10,24(r29)
	PPC_STORE_U16(r29.u32 + 24, ctx.r10.u16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82df0078
	if (cr6.lt) goto loc_82DF0078;
	// beq cr6,0x82df0070
	if (cr6.eq) goto loc_82DF0070;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82df0078
	if (!cr6.lt) goto loc_82DF0078;
	// li r11,1
	r11.s64 = 1;
	// b 0x82df007c
	goto loc_82DF007C;
loc_82DF0070:
	// li r11,0
	r11.s64 = 0;
	// b 0x82df007c
	goto loc_82DF007C;
loc_82DF0078:
	// li r11,2
	r11.s64 = 2;
loc_82DF007C:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x82df0094
	if (cr6.eq) goto loc_82DF0094;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82deace8
	sub_82DEACE8(ctx, base);
loc_82DF0094:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df01a4
	if (!cr0.eq) goto loc_82DF01A4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r7,2863
	ctx.r7.s64 = 2863;
	// b 0x82df0194
	goto loc_82DF0194;
loc_82DF00C8:
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// lwz r27,136(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-1304(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1304);
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82df012c
	if (cr6.lt) goto loc_82DF012C;
	// beq cr6,0x82df0124
	if (cr6.eq) goto loc_82DF0124;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82df012c
	if (!cr6.lt) goto loc_82DF012C;
	// li r11,1
	r11.s64 = 1;
	// b 0x82df0130
	goto loc_82DF0130;
loc_82DF0124:
	// li r11,0
	r11.s64 = 0;
	// b 0x82df0130
	goto loc_82DF0130;
loc_82DF012C:
	// li r11,2
	r11.s64 = 2;
loc_82DF0130:
	// lwz r21,208(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// beq cr6,0x82df014c
	if (cr6.eq) goto loc_82DF014C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82deace8
	sub_82DEACE8(ctx, base);
loc_82DF014C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82dad4c8
	sub_82DAD4C8(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// lwz r22,128(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r24,132(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df01a4
	if (!cr0.eq) goto loc_82DF01A4;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r7,2880
	ctx.r7.s64 = 2880;
loc_82DF0194:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF01A4:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r29,r11,-8808
	r29.s64 = r11.s64 + -8808;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82dc25f0
	sub_82DC25F0(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82df0258
	if (!cr6.eq) goto loc_82DF0258;
	// li r3,41
	ctx.r3.s64 = 41;
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1276(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1276);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df02d8
	if (!cr0.eq) goto loc_82DF02D8;
	// li r7,2894
	ctx.r7.s64 = 2894;
	// b 0x82df02c4
	goto loc_82DF02C4;
loc_82DF0258:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1276(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1276);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r11.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df02d8
	if (!cr0.eq) goto loc_82DF02D8;
	// li r7,2903
	ctx.r7.s64 = 2903;
loc_82DF02C4:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r5,364(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF02D8:
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1284);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,380
	ctx.r5.s64 = ctx.r1.s64 + 380;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4b00
	sub_82DC4B00(ctx, base);
	// lfs f4,380(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df0388
	if (!cr0.eq) goto loc_82DF0388;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r5,300(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,2918
	ctx.r7.s64 = 2918;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF0388:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r29,r11,-8808
	r29.s64 = r11.s64 + -8808;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82dc24b0
	sub_82DC24B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82df06c8
	if (!cr6.eq) goto loc_82DF06C8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82df0460
	if (cr6.lt) goto loc_82DF0460;
	// beq cr6,0x82df0458
	if (cr6.eq) goto loc_82DF0458;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82df0460
	if (!cr6.lt) goto loc_82DF0460;
	// li r11,1
	r11.s64 = 1;
	// b 0x82df0464
	goto loc_82DF0464;
loc_82DF0458:
	// li r11,0
	r11.s64 = 0;
	// b 0x82df0464
	goto loc_82DF0464;
loc_82DF0460:
	// li r11,2
	r11.s64 = 2;
loc_82DF0464:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x82df047c
	if (cr6.eq) goto loc_82DF047C;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82deace8
	sub_82DEACE8(ctx, base);
loc_82DF047C:
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df04c0
	if (!cr0.eq) goto loc_82DF04C0;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r5,540(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,2944
	ctx.r7.s64 = 2944;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF04C0:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1304(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1304);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1284);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1284);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1280(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1280);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r11.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// lwz r30,240(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df0570
	if (!cr0.eq) goto loc_82DF0570;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,2957
	ctx.r7.s64 = 2957;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF0570:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1300(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1300);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,128(r26)
	PPC_STORE_U32(r26.u32 + 128, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1284);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,132(r26)
	PPC_STORE_U32(r26.u32 + 132, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1276(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1276);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,136(r26)
	PPC_STORE_U32(r26.u32 + 136, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1272(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1272);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,140(r26)
	PPC_STORE_U32(r26.u32 + 140, r11.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df061c
	if (!cr0.eq) goto loc_82DF061C;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,2970
	ctx.r7.s64 = 2970;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF061C:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1300(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1300);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,128(r26)
	PPC_STORE_U32(r26.u32 + 128, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1280(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1280);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,132(r26)
	PPC_STORE_U32(r26.u32 + 132, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1284);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,136(r26)
	PPC_STORE_U32(r26.u32 + 136, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1280(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1280);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,140(r26)
	PPC_STORE_U32(r26.u32 + 140, r11.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df06c8
	if (!cr0.eq) goto loc_82DF06C8;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,2983
	ctx.r7.s64 = 2983;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF06C8:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r29,r11,-8808
	r29.s64 = r11.s64 + -8808;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82dc2838
	sub_82DC2838(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82df07f0
	if (!cr6.eq) goto loc_82DF07F0;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1284);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df077c
	if (!cr0.eq) goto loc_82DF077C;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,2996
	ctx.r7.s64 = 2996;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF077C:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1292(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1292);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82def848
	if (!cr0.eq) goto loc_82DEF848;
	// li r7,3004
	ctx.r7.s64 = 3004;
	// b 0x82df09d0
	goto loc_82DF09D0;
loc_82DF07F0:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r29,r11,-8808
	r29.s64 = r11.s64 + -8808;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82dc2960
	sub_82DC2960(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82df0894
	if (!cr6.eq) goto loc_82DF0894;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1284);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82def848
	if (!cr0.eq) goto loc_82DEF848;
	// li r7,3017
	ctx.r7.s64 = 3017;
	// b 0x82df09d0
	goto loc_82DF09D0;
loc_82DF0894:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r29,r11,-8808
	r29.s64 = r11.s64 + -8808;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82dc2a88
	sub_82DC2A88(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82df09e8
	if (!cr6.eq) goto loc_82DF09E8;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1284);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df0948
	if (!cr0.eq) goto loc_82DF0948;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3029
	ctx.r7.s64 = 3029;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF0948:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82def848
	if (!cr0.eq) goto loc_82DEF848;
	// li r7,3037
	ctx.r7.s64 = 3037;
loc_82DF09D0:
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
loc_82DF09D4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// b 0x82def848
	goto loc_82DEF848;
loc_82DF09E8:
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r7,3039
	ctx.r7.s64 = 3039;
	// b 0x82df09d4
	goto loc_82DF09D4;
loc_82DF09F4:
	// lwz r28,184(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_82DF09F8:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r29,r11,-8808
	r29.s64 = r11.s64 + -8808;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82dc3118
	sub_82DC3118(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82df0c20
	if (!cr6.eq) goto loc_82DF0C20;
	// li r3,30
	ctx.r3.s64 = 30;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,1
	r26.s64 = 1;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r26,164(r30)
	PPC_STORE_U8(r30.u32 + 164, r26.u8);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1296(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1296);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// stb r26,154(r30)
	PPC_STORE_U8(r30.u32 + 154, r26.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// lwz r30,320(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df0aec
	if (!cr0.eq) goto loc_82DF0AEC;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,3201
	ctx.r7.s64 = 3201;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF0AEC:
	// li r3,38
	ctx.r3.s64 = 38;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1296(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1296);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,128(r29)
	PPC_STORE_U32(r29.u32 + 128, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1276(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1276);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1276(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1276);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stw r11,136(r29)
	PPC_STORE_U32(r29.u32 + 136, r11.u32);
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df0ba0
	if (!cr0.eq) goto loc_82DF0BA0;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3214
	ctx.r7.s64 = 3214;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF0BA0:
	// li r3,68
	ctx.r3.s64 = 68;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1296(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1296);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,128(r29)
	PPC_STORE_U32(r29.u32 + 128, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1276(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1276);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df0c24
	if (!cr0.eq) goto loc_82DF0C24;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3224
	ctx.r7.s64 = 3224;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// b 0x82df0c24
	goto loc_82DF0C24;
loc_82DF0C20:
	// li r26,1
	r26.s64 = 1;
loc_82DF0C24:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r29,r11,-8808
	r29.s64 = r11.s64 + -8808;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82dc1010
	sub_82DC1010(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82df0eb4
	if (!cr6.eq) goto loc_82DF0EB4;
	// lis r11,-32037
	r11.s64 = -2099576832;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc43a8
	sub_82DC43A8(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,328
	ctx.r5.s64 = ctx.r1.s64 + 328;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4458
	sub_82DC4458(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc4508
	sub_82DC4508(ctx, base);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r5,r1,356
	ctx.r5.s64 = ctx.r1.s64 + 356;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-8808
	ctx.r6.s64 = r11.s64 + -8808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82dc45b8
	sub_82DC45B8(ctx, base);
	// lfs f0,360(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	f0.f64 = double(temp.f32);
	// lfs f13,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// lfs f12,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f11.f64 = double(temp.f32);
	// bne cr6,0x82df0d04
	if (!cr6.eq) goto loc_82DF0D04;
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// bne cr6,0x82df0d04
	if (!cr6.eq) goto loc_82DF0D04;
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, f31.f64);
	// bne cr6,0x82df0d04
	if (!cr6.eq) goto loc_82DF0D04;
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, f31.f64);
	// beq cr6,0x82df27c4
	if (cr6.eq) goto loc_82DF27C4;
loc_82DF0D04:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x82df0d24
	if (!cr6.eq) goto loc_82DF0D24;
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, f30.f64);
	// bne cr6,0x82df0d24
	if (!cr6.eq) goto loc_82DF0D24;
	// fcmpu cr6,f12,f30
	cr6.compare(ctx.f12.f64, f30.f64);
	// bne cr6,0x82df0d24
	if (!cr6.eq) goto loc_82DF0D24;
	// fcmpu cr6,f11,f30
	cr6.compare(ctx.f11.f64, f30.f64);
	// beq cr6,0x82df27c4
	if (cr6.eq) goto loc_82DF27C4;
loc_82DF0D24:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,109
	ctx.r3.s64 = 109;
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lwz r11,-1288(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1288);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x82df0d8c
	if (cr6.eq) goto loc_82DF0D8C;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82deace8
	sub_82DEACE8(ctx, base);
loc_82DF0D8C:
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82dad4c8
	sub_82DAD4C8(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82df0dcc
	if (cr6.lt) goto loc_82DF0DCC;
	// beq cr6,0x82df0dc4
	if (cr6.eq) goto loc_82DF0DC4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82df0dcc
	if (!cr6.lt) goto loc_82DF0DCC;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x82df0dd0
	goto loc_82DF0DD0;
loc_82DF0DC4:
	// li r11,0
	r11.s64 = 0;
	// b 0x82df0dd0
	goto loc_82DF0DD0;
loc_82DF0DCC:
	// li r11,2
	r11.s64 = 2;
loc_82DF0DD0:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df0e18
	if (!cr0.eq) goto loc_82DF0E18;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3283
	ctx.r7.s64 = 3283;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF0E18:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f4,356(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f3,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df0eb4
	if (!cr0.eq) goto loc_82DF0EB4;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3293
	ctx.r7.s64 = 3293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF0EB4:
	// lwz r11,-1320(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1320);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r30,-1312(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + -1312);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r30.u32);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r29,r1,152
	r29.s64 = ctx.r1.s64 + 152;
	// lwz r11,224(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r26,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r26.u8);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x82ded780
	sub_82DED780(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df27c4
	if (!cr0.eq) goto loc_82DF27C4;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3309
	ctx.r7.s64 = 3309;
loc_82DF0F60:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF0F6C:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,184(r15)
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + 184);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// sth r11,18(r10)
	PPC_STORE_U16(ctx.r10.u32 + 18, r11.u16);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF0F84:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lwbrx r11,r9,r10
	r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32));
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r11.u32);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF0FA4:
	// li r11,1
	r11.s64 = 1;
	// stb r11,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, r11.u8);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF0FB0:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lwbrx r11,r9,r10
	r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32));
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF0FD0:
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r28,r11,-8808
	r28.s64 = r11.s64 + -8808;
	// lwz r3,1488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 1488);
	// lwz r27,1536(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 1536);
	// lbz r30,1(r10)
	r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82dc1090
	sub_82DC1090(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82df105c
	if (!cr6.eq) goto loc_82DF105C;
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// addi r11,r11,14
	r11.s64 = r11.s64 + 14;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r15
	PPC_STORE_U32(ctx.r9.u32 + r15.u32, ctx.r10.u32);
	// stwx r30,r11,r15
	PPC_STORE_U32(r11.u32 + r15.u32, r30.u32);
	// lwz r11,20(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r15)
	PPC_STORE_U32(r15.u32 + 20, r11.u32);
loc_82DF105C:
	// rlwinm r11,r30,27,5,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// clrlwi r9,r30,27
	ctx.r9.u64 = r30.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df1090
	if (!cr0.eq) goto loc_82DF1090;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,452(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82DF1090:
	// stw r30,176(r15)
	PPC_STORE_U32(r15.u32 + 176, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82dad4c8
	sub_82DAD4C8(ctx, base);
	// stw r3,172(r15)
	PPC_STORE_U32(r15.u32 + 172, ctx.r3.u32);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82df10d4
	if (cr6.lt) goto loc_82DF10D4;
	// beq cr6,0x82df10cc
	if (cr6.eq) goto loc_82DF10CC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82df10d4
	if (!cr6.lt) goto loc_82DF10D4;
	// li r11,1
	r11.s64 = 1;
	// b 0x82df10d8
	goto loc_82DF10D8;
loc_82DF10CC:
	// li r11,0
	r11.s64 = 0;
	// b 0x82df10d8
	goto loc_82DF10D8;
loc_82DF10D4:
	// li r11,2
	r11.s64 = 2;
loc_82DF10D8:
	// stw r11,180(r15)
	PPC_STORE_U32(r15.u32 + 180, r11.u32);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF10E0:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stw r10,176(r15)
	PPC_STORE_U32(r15.u32 + 176, ctx.r10.u32);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82dad4c8
	sub_82DAD4C8(ctx, base);
	// stw r3,172(r15)
	PPC_STORE_U32(r15.u32 + 172, ctx.r3.u32);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF1100:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r30,184(r15)
	r30.u64 = PPC_LOAD_U32(r15.u32 + 184);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lfsx f1,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82dc61b0
	sub_82DC61B0(ctx, base);
	// sth r3,24(r30)
	PPC_STORE_U16(r30.u32 + 24, ctx.r3.u16);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF1130:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi. r11,r11,19
	r11.u64 = r11.u32 & 0x1FFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r7,r11,4916
	ctx.r7.s64 = r11.s64 + 4916;
	// beq 0x82df114c
	if (cr0.eq) goto loc_82DF114C;
	// addi r7,r11,4868
	ctx.r7.s64 = r11.s64 + 4868;
loc_82DF114C:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
loc_82DF1150:
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82ded428
	sub_82DED428(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF116C:
	// li r7,3389
	ctx.r7.s64 = 3389;
loc_82DF1170:
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
loc_82DF1174:
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x82df0f60
	goto loc_82DF0F60;
loc_82DF1180:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r7,r11,6708
	ctx.r7.s64 = r11.s64 + 6708;
	// bne 0x82df114c
	if (!cr0.eq) goto loc_82DF114C;
	// addi r7,r11,6852
	ctx.r7.s64 = r11.s64 + 6852;
	// b 0x82df114c
	goto loc_82DF114C;
loc_82DF11A0:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82df1228
	if (cr6.lt) goto loc_82DF1228;
	// beq cr6,0x82df121c
	if (cr6.eq) goto loc_82DF121C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82df1210
	if (cr6.lt) goto loc_82DF1210;
	// beq cr6,0x82df1204
	if (cr6.eq) goto loc_82DF1204;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// blt cr6,0x82df11f8
	if (cr6.lt) goto loc_82DF11F8;
	// beq cr6,0x82df11ec
	if (cr6.eq) goto loc_82DF11EC;
	// li r7,3424
	ctx.r7.s64 = 3424;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// b 0x82df1234
	goto loc_82DF1234;
loc_82DF11EC:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1568
	r11.s64 = r11.s64 + 1568;
	// b 0x82df1230
	goto loc_82DF1230;
loc_82DF11F8:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1596
	r11.s64 = r11.s64 + 1596;
	// b 0x82df1230
	goto loc_82DF1230;
loc_82DF1204:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1540
	r11.s64 = r11.s64 + 1540;
	// b 0x82df1230
	goto loc_82DF1230;
loc_82DF1210:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1512
	r11.s64 = r11.s64 + 1512;
	// b 0x82df1230
	goto loc_82DF1230;
loc_82DF121C:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1456
	r11.s64 = r11.s64 + 1456;
	// b 0x82df1230
	goto loc_82DF1230;
loc_82DF1228:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1484
	r11.s64 = r11.s64 + 1484;
loc_82DF1230:
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r11.u32);
loc_82DF1234:
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// b 0x82df114c
	goto loc_82DF114C;
loc_82DF123C:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82df12c4
	if (cr6.lt) goto loc_82DF12C4;
	// beq cr6,0x82df12b8
	if (cr6.eq) goto loc_82DF12B8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82df12ac
	if (cr6.lt) goto loc_82DF12AC;
	// beq cr6,0x82df12a0
	if (cr6.eq) goto loc_82DF12A0;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// blt cr6,0x82df1294
	if (cr6.lt) goto loc_82DF1294;
	// beq cr6,0x82df1288
	if (cr6.eq) goto loc_82DF1288;
	// li r7,3455
	ctx.r7.s64 = 3455;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// b 0x82df12d0
	goto loc_82DF12D0;
loc_82DF1288:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1408
	r11.s64 = r11.s64 + 1408;
	// b 0x82df12cc
	goto loc_82DF12CC;
loc_82DF1294:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1372
	r11.s64 = r11.s64 + 1372;
	// b 0x82df12cc
	goto loc_82DF12CC;
loc_82DF12A0:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1336
	r11.s64 = r11.s64 + 1336;
	// b 0x82df12cc
	goto loc_82DF12CC;
loc_82DF12AC:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1300
	r11.s64 = r11.s64 + 1300;
	// b 0x82df12cc
	goto loc_82DF12CC;
loc_82DF12B8:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1264
	r11.s64 = r11.s64 + 1264;
	// b 0x82df12cc
	goto loc_82DF12CC;
loc_82DF12C4:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1228
	r11.s64 = r11.s64 + 1228;
loc_82DF12CC:
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r11.u32);
loc_82DF12D0:
	// lwz r7,236(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// b 0x82df114c
	goto loc_82DF114C;
loc_82DF12D8:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r29,r11,10,29,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82df27c4
	if (cr0.eq) goto loc_82DF27C4;
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// lwz r27,564(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x82df131c
	if (!cr6.eq) goto loc_82DF131C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r27,r11
	r27.u64 = r11.u64;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// stw r27,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, r27.u32);
loc_82DF131C:
	// stw r27,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r27.u32);
	// li r26,0
	r26.s64 = 0;
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r26,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r26.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r28,168(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r8,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x1F8;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// stw r10,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82deb238
	sub_82DEB238(ctx, base);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// beq cr6,0x82df13d8
	if (cr6.eq) goto loc_82DF13D8;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// beq cr6,0x82df13c4
	if (cr6.eq) goto loc_82DF13C4;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(r29.s32, 3, xer);
	// beq cr6,0x82df13a0
	if (cr6.eq) goto loc_82DF13A0;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// bne cr6,0x82df1400
	if (!cr6.eq) goto loc_82DF1400;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// b 0x82df13b0
	goto loc_82DF13B0;
loc_82DF13A0:
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f27.f64;
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
loc_82DF13B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// b 0x82df1400
	goto loc_82DF1400;
loc_82DF13C4:
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// b 0x82df13e8
	goto loc_82DF13E8;
loc_82DF13D8:
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f27.f64;
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
loc_82DF13E8:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,154(r30)
	PPC_STORE_U8(r30.u32 + 154, r11.u8);
loc_82DF1400:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df1440
	if (!cr0.eq) goto loc_82DF1440;
	// li r7,3516
	ctx.r7.s64 = 3516;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,516(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF1440:
	// addi r11,r28,14
	r11.s64 = r28.s64 + 14;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r9,r28,20
	ctx.r9.s64 = r28.s64 + 20;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r28,1
	ctx.r8.s64 = r28.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stwx r27,r11,r15
	PPC_STORE_U32(r11.u32 + r15.u32, r27.u32);
	// stwx r26,r9,r15
	PPC_STORE_U32(ctx.r9.u32 + r15.u32, r26.u32);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF1470:
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// bne cr6,0x82df148c
	if (!cr6.eq) goto loc_82DF148C;
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// b 0x82df14a4
	goto loc_82DF14A4;
loc_82DF148C:
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(r11.s32, 21, xer);
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// bne cr6,0x82df14a0
	if (!cr6.eq) goto loc_82DF14A0;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x82df14a4
	goto loc_82DF14A4;
loc_82DF14A0:
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_82DF14A4:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x82df114c
	goto loc_82DF114C;
loc_82DF14B0:
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r11,r11,-63
	r11.s64 = r11.s64 + -63;
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// b 0x82df114c
	goto loc_82DF114C;
loc_82DF14DC:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF1504:
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// lbz r7,201(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 201);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r4,r11,-2
	ctx.r4.s64 = r11.s64 + -2;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stb r7,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r7.u8);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwz r30,168(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82ded780
	sub_82DED780(ctx, base);
loc_82DF1550:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
loc_82DF1554:
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF155C:
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r15
	r11.u64 = r11.u64 + r15.u64;
	// stb r10,158(r11)
	PPC_STORE_U8(r11.u32 + 158, ctx.r10.u8);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF1570:
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// add r11,r11,r15
	r11.u64 = r11.u64 + r15.u64;
	// addi r10,r11,152
	ctx.r10.s64 = r11.s64 + 152;
	// lbz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 152);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,152(r11)
	PPC_STORE_U8(r11.u32 + 152, ctx.r10.u8);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF1590:
	// li r11,1
	r11.s64 = 1;
	// stb r11,164(r15)
	PPC_STORE_U8(r15.u32 + 164, r11.u8);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF159C:
	// addi r11,r11,-79
	r11.s64 = r11.s64 + -79;
	// addi r10,r1,560
	ctx.r10.s64 = ctx.r1.s64 + 560;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df15c8
	if (!cr6.eq) goto loc_82DF15C8;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,1508(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1508);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r11.u32);
	// stw r11,1508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1508, r11.u32);
loc_82DF15C8:
	// lwz r30,168(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r11,0
	r11.s64 = 0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r30,14
	ctx.r9.s64 = r30.s64 + 14;
	// addi r8,r30,20
	ctx.r8.s64 = r30.s64 + 20;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stwx r10,r9,r15
	PPC_STORE_U32(ctx.r9.u32 + r15.u32, ctx.r10.u32);
	// stwx r11,r8,r15
	PPC_STORE_U32(ctx.r8.u32 + r15.u32, r11.u32);
	// bne cr6,0x82df1618
	if (!cr6.eq) goto loc_82DF1618;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ded498
	sub_82DED498(ctx, base);
	// b 0x82df1550
	goto loc_82DF1550;
loc_82DF1618:
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// bl 0x82deb238
	sub_82DEB238(ctx, base);
	// b 0x82df1550
	goto loc_82DF1550;
loc_82DF1630:
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r11,14
	ctx.r8.s64 = r11.s64 + 14;
	// addi r7,r11,20
	ctx.r7.s64 = r11.s64 + 20;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// stwx r9,r8,r15
	PPC_STORE_U32(ctx.r8.u32 + r15.u32, ctx.r9.u32);
	// stwx r10,r7,r15
	PPC_STORE_U32(ctx.r7.u32 + r15.u32, ctx.r10.u32);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF1660:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lfs f1,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r29,168(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// addi r10,r11,3
	ctx.r10.s64 = r11.s64 + 3;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfsx f4,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f3,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// b 0x82df1554
	goto loc_82DF1554;
loc_82DF16B0:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r30,168(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfsx f1,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// b 0x82df1550
	goto loc_82DF1550;
loc_82DF16EC:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r7,r11,-548
	ctx.r7.s64 = r11.s64 + -548;
	// b 0x82df114c
	goto loc_82DF114C;
loc_82DF16F8:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r7,r11,5092
	ctx.r7.s64 = r11.s64 + 5092;
	// b 0x82df114c
	goto loc_82DF114C;
loc_82DF1704:
	// lwz r28,164(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df1740
	if (cr6.eq) goto loc_82DF1740;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82df1738
	if (!cr6.lt) goto loc_82DF1738;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df173c
	goto loc_82DF173C;
loc_82DF1738:
	// li r11,0
	r11.s64 = 0;
loc_82DF173C:
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82DF1740:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r10,-32037
	ctx.r10.s64 = -2099576832;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r10,-8808
	r27.s64 = ctx.r10.s64 + -8808;
	// addi r26,r1,536
	r26.s64 = ctx.r1.s64 + 536;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r25,1536(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 1536);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r24,r11,16
	r24.u64 = r11.u32 & 0xFFFF;
	// bl 0x82dc6b50
	sub_82DC6B50(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// bl 0x82dc3598
	sub_82DC3598(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82df17b0
	if (cr6.eq) goto loc_82DF17B0;
	// li r7,3713
	ctx.r7.s64 = 3713;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF17B0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,160
	ctx.r3.s64 = 160;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82deb128
	sub_82DEB128(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df17e0
	if (cr0.eq) goto loc_82DF17E0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,536(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82dea888
	sub_82DEA888(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82df17e4
	goto loc_82DF17E4;
loc_82DF17E0:
	// li r30,0
	r30.s64 = 0;
loc_82DF17E4:
	// lwz r29,188(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// addic. r28,r29,1
	xer.ca = r29.u32 > 4294967294;
	r28.s64 = r29.s64 + 1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r28.u32);
	// bge 0x82df182c
	if (!cr0.lt) goto loc_82DF182C;
	// li r7,3722
	ctx.r7.s64 = 3722;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF182C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,1360(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1360);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bgt cr6,0x82df3dc0
	if (cr6.gt) goto loc_82DF3DC0;
	// lwz r29,160(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dc6af0
	sub_82DC6AF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82deb128
	sub_82DEB128(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df1888
	if (cr0.eq) goto loc_82DF1888;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// b 0x82df188c
	goto loc_82DF188C;
loc_82DF1888:
	// li r14,0
	r14.s64 = 0;
loc_82DF188C:
	// stw r28,52(r14)
	PPC_STORE_U32(r14.u32 + 52, r28.u32);
loc_82DF1890:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// bl 0x82dc6af0
	sub_82DC6AF0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
loc_82DF18AC:
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r14.u32);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF18B4:
	// lwz r27,164(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82df18d8
	if (!cr6.lt) goto loc_82DF18D8;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df18dc
	goto loc_82DF18DC;
loc_82DF18D8:
	// li r11,0
	r11.s64 = 0;
loc_82DF18DC:
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82df1900
	if (!cr6.eq) goto loc_82DF1900;
	// li r7,3742
	ctx.r7.s64 = 3742;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,468(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF1900:
	// lwz r28,152(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,160(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dc6af0
	sub_82DC6AF0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df195c
	if (!cr0.eq) goto loc_82DF195C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df195c
	if (!cr0.eq) goto loc_82DF195C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
loc_82DF195C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82deb128
	sub_82DEB128(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df1984
	if (cr0.eq) goto loc_82DF1984;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82df1988
	goto loc_82DF1988;
loc_82DF1984:
	// li r29,0
	r29.s64 = 0;
loc_82DF1988:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc6af0
	sub_82DC6AF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,156(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 156);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc6af0
	sub_82DC6AF0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82deb128
	sub_82DEB128(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df19ec
	if (cr0.eq) goto loc_82DF19EC;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// b 0x82df19f0
	goto loc_82DF19F0;
loc_82DF19EC:
	// li r14,0
	r14.s64 = 0;
loc_82DF19F0:
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc6af0
	sub_82DC6AF0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r14.u32);
	// bl 0x82dce120
	sub_82DCE120(ctx, base);
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addic. r27,r11,-1
	xer.ca = r11.u32 > 0;
	r27.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r27.u32);
	// bge 0x82df1a40
	if (!cr0.lt) goto loc_82DF1A40;
	// li r7,3772
	ctx.r7.s64 = 3772;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF1A40:
	// stw r27,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r27.u32);
	// stw r27,52(r28)
	PPC_STORE_U32(r28.u32 + 52, r27.u32);
	// stw r27,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r27.u32);
	// stw r27,52(r14)
	PPC_STORE_U32(r14.u32 + 52, r27.u32);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF1A54:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r27,128(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r28,132(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df1a84
	if (cr6.eq) goto loc_82DF1A84;
	// li r7,3787
	ctx.r7.s64 = 3787;
	// lwz r5,524(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF1A84:
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df1aac
	if (cr6.eq) goto loc_82DF1AAC;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,3788
	ctx.r7.s64 = 3788;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF1AAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82deabb8
	sub_82DEABB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,180(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r26,r11,-8808
	r26.s64 = r11.s64 + -8808;
	// addi r25,r1,376
	r25.s64 = ctx.r1.s64 + 376;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r24,12(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r23,1536(r24)
	r23.u64 = PPC_LOAD_U32(r24.u32 + 1536);
	// extsh r22,r11
	r22.s64 = r11.s16;
	// bl 0x82dc6b50
	sub_82DC6B50(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// bl 0x82dc35b0
	sub_82DC35B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82df1b40
	if (cr6.eq) goto loc_82DF1B40;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,3805
	ctx.r7.s64 = 3805;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF1B40:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,376(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r10,r10,3,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1F8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r9.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// stw r30,120(r14)
	PPC_STORE_U32(r14.u32 + 120, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df1ba8
	if (!cr0.eq) goto loc_82DF1BA8;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,3812
	ctx.r7.s64 = 3812;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF1BA8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc6e90
	sub_82DC6E90(ctx, base);
	// lwz r10,940(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// li r14,0
	r14.s64 = 0;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r14,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, r14.u32);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r14,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, r14.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, r11.u32);
	// bl 0x82deb788
	sub_82DEB788(ctx, base);
	// bl 0x82deb168
	sub_82DEB168(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82deb128
	sub_82DEB128(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df1c10
	if (cr0.eq) goto loc_82DF1C10;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
loc_82DF1C10:
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r30,160(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,52(r14)
	PPC_STORE_U32(r14.u32 + 52, r11.u32);
	// b 0x82df1890
	goto loc_82DF1890;
loc_82DF1C20:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82deb128
	sub_82DEB128(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df1c48
	if (cr0.eq) goto loc_82DF1C48;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// b 0x82df1c4c
	goto loc_82DF1C4C;
loc_82DF1C48:
	// li r14,0
	r14.s64 = 0;
loc_82DF1C4C:
	// lwz r30,160(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dc6af0
	sub_82DC6AF0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// lwz r10,940(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, r11.u32);
	// stw r11,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, r11.u32);
	// stw r10,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r10.u32);
	// bl 0x82deb788
	sub_82DEB788(ctx, base);
	// stw r14,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r14.u32);
	// bl 0x82deb168
	sub_82DEB168(ctx, base);
	// b 0x82df18ac
	goto loc_82DF18AC;
loc_82DF1CAC:
	// lwz r22,216(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// li r23,0
	r23.s64 = 0;
	// mr r29,r23
	r29.u64 = r23.u64;
	// mr r25,r23
	r25.u64 = r23.u64;
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df1cf4
	if (cr6.eq) goto loc_82DF1CF4;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82df1ce8
	if (!cr6.lt) goto loc_82DF1CE8;
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df1cec
	goto loc_82DF1CEC;
loc_82DF1CE8:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82DF1CEC:
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r23,140(r25)
	PPC_STORE_U8(r25.u32 + 140, r23.u8);
loc_82DF1CF4:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(r11.u32, 90, xer);
	// beq cr6,0x82df1fc0
	if (cr6.eq) goto loc_82DF1FC0;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(r11.u32, 91, xer);
	// beq cr6,0x82df1ec4
	if (cr6.eq) goto loc_82DF1EC4;
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// bne cr6,0x82df2050
	if (!cr6.eq) goto loc_82DF2050;
	// lwz r24,180(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r30,r23
	r30.u64 = r23.u64;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// rlwinm r29,r10,16,26,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F;
	// extsh r28,r10
	r28.s64 = ctx.r10.s16;
	// rlwinm r27,r9,16,26,31
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x3F;
	// extsh r26,r9
	r26.s64 = ctx.r9.s16;
	// blt cr6,0x82df1dc4
	if (cr6.lt) goto loc_82DF1DC4;
	// beq cr6,0x82df1dbc
	if (cr6.eq) goto loc_82DF1DBC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82df1db4
	if (cr6.lt) goto loc_82DF1DB4;
	// beq cr6,0x82df1dac
	if (cr6.eq) goto loc_82DF1DAC;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// blt cr6,0x82df1da4
	if (cr6.lt) goto loc_82DF1DA4;
	// beq cr6,0x82df1d98
	if (cr6.eq) goto loc_82DF1D98;
	// li r7,3905
	ctx.r7.s64 = 3905;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// b 0x82df1dcc
	goto loc_82DF1DCC;
loc_82DF1D98:
	// li r11,40
	r11.s64 = 40;
loc_82DF1D9C:
	// li r30,1
	r30.s64 = 1;
	// b 0x82df1dc8
	goto loc_82DF1DC8;
loc_82DF1DA4:
	// li r11,41
	r11.s64 = 41;
	// b 0x82df1d9c
	goto loc_82DF1D9C;
loc_82DF1DAC:
	// li r11,40
	r11.s64 = 40;
	// b 0x82df1dc8
	goto loc_82DF1DC8;
loc_82DF1DB4:
	// li r11,41
	r11.s64 = 41;
	// b 0x82df1dc8
	goto loc_82DF1DC8;
loc_82DF1DBC:
	// li r11,39
	r11.s64 = 39;
	// b 0x82df1dc8
	goto loc_82DF1DC8;
loc_82DF1DC4:
	// li r11,42
	r11.s64 = 42;
loc_82DF1DC8:
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r11.u32);
loc_82DF1DCC:
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// clrlwi r8,r30,24
	ctx.r8.u64 = r30.u32 & 0xFF;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r9,r8
	ctx.r9.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r9,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r9,r6,14
	ctx.r9.s64 = ctx.r6.s64 + 14;
	// addi r10,r6,20
	ctx.r10.s64 = ctx.r6.s64 + 20;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r30,14
	r11.s64 = r30.s64 + 14;
	// stwx r28,r9,r21
	PPC_STORE_U32(ctx.r9.u32 + r21.u32, r28.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stwx r8,r7,r21
	PPC_STORE_U32(ctx.r7.u32 + r21.u32, ctx.r8.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,20
	ctx.r8.s64 = r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stwx r26,r9,r21
	PPC_STORE_U32(ctx.r9.u32 + r21.u32, r26.u32);
	// stwx r11,r8,r21
	PPC_STORE_U32(ctx.r8.u32 + r21.u32, r11.u32);
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x82deb238
	sub_82DEB238(ctx, base);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82deb238
	sub_82DEB238(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// stw r29,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r29.u32);
	// stw r29,56(r21)
	PPC_STORE_U32(r21.u32 + 56, r29.u32);
	// stw r23,80(r21)
	PPC_STORE_U32(r21.u32 + 80, r23.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r23,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r23.u32);
	// b 0x82df1fec
	goto loc_82DF1FEC;
loc_82DF1EC4:
	// lwz r30,180(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r11,-8808
	r28.s64 = r11.s64 + -8808;
	// addi r27,r1,392
	r27.s64 = ctx.r1.s64 + 392;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r26,1536(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 1536);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// extsh r24,r11
	r24.s64 = r11.s16;
	// bl 0x82dc6b50
	sub_82DC6B50(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// bl 0x82dc35b0
	sub_82DC35B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82df1f34
	if (cr6.eq) goto loc_82DF1F34;
	// li r7,3969
	ctx.r7.s64 = 3969;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF1F34:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi. r30,r11,26
	r30.u64 = r11.u32 & 0x3F;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82df1f5c
	if (cr0.eq) goto loc_82DF1F5C;
	// li r7,3972
	ctx.r7.s64 = 3972;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,384(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF1F5C:
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,392(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,160
	ctx.r3.s64 = 160;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r9.u32);
	// stw r10,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r10.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82deb128
	sub_82DEB128(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df2028
	if (cr0.eq) goto loc_82DF2028;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82deaab0
	sub_82DEAAB0(ctx, base);
	// b 0x82df2020
	goto loc_82DF2020;
loc_82DF1FC0:
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
loc_82DF1FEC:
	// li r11,1
	r11.s64 = 1;
	// li r3,160
	ctx.r3.s64 = 160;
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82deb128
	sub_82DEB128(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df2028
	if (cr0.eq) goto loc_82DF2028;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dea9b8
	sub_82DEA9B8(ctx, base);
loc_82DF2020:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82df202c
	goto loc_82DF202C;
loc_82DF2028:
	// mr r29,r23
	r29.u64 = r23.u64;
loc_82DF202C:
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r11.u32);
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_82DF2050:
	// lwz r30,160(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dc6af0
	sub_82DC6AF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r14,144(r29)
	r14.u64 = PPC_LOAD_U32(r29.u32 + 144);
loc_82DF2078:
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc6af0
	sub_82DC6AF0(ctx, base);
	// b 0x82df18ac
	goto loc_82DF18AC;
loc_82DF2088:
	// lwz r30,216(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82df20b0
	if (!cr6.eq) goto loc_82DF20B0;
	// li r7,4002
	ctx.r7.s64 = 4002;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,352(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF20B0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82df20d0
	if (!cr6.lt) goto loc_82DF20D0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df20d4
	goto loc_82DF20D4;
loc_82DF20D0:
	// li r11,0
	r11.s64 = 0;
loc_82DF20D4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,1452(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1452);
	// bl 0x82deb128
	sub_82DEB128(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df2100
	if (cr0.eq) goto loc_82DF2100;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// b 0x82df2104
	goto loc_82DF2104;
loc_82DF2100:
	// li r14,0
	r14.s64 = 0;
loc_82DF2104:
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,52(r14)
	PPC_STORE_U32(r14.u32 + 52, r11.u32);
	// stw r14,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r14.u32);
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// b 0x82df2078
	goto loc_82DF2078;
loc_82DF2124:
	// lwz r25,216(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82df214c
	if (!cr6.eq) goto loc_82DF214C;
	// li r7,4015
	ctx.r7.s64 = 4015;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,352(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF214C:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82df216c
	if (!cr6.lt) goto loc_82DF216C;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df2170
	goto loc_82DF2170;
loc_82DF216C:
	// li r11,0
	r11.s64 = 0;
loc_82DF2170:
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,188(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r26,160(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r28,152(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 152);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r27,52(r28)
	PPC_STORE_U32(r28.u32 + 52, r27.u32);
	// bl 0x82dc6af0
	sub_82DC6AF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82de9fa8
	sub_82DE9FA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r27,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r27.u32);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df21e4
	if (!cr0.eq) goto loc_82DF21E4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df21e4
	if (!cr0.eq) goto loc_82DF21E4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
loc_82DF21E4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dea090
	sub_82DEA090(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// stw r27,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r27.u32);
	// bne cr6,0x82df224c
	if (!cr6.eq) goto loc_82DF224C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82deb128
	sub_82DEB128(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df2224
	if (cr0.eq) goto loc_82DF2224;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82df2228
	goto loc_82DF2228;
loc_82DF2224:
	// li r30,0
	r30.s64 = 0;
loc_82DF2228:
	// stw r27,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r27.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,148(r29)
	PPC_STORE_U32(r29.u32 + 148, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc6af0
	sub_82DC6AF0(ctx, base);
loc_82DF224C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df2290
	if (!cr0.eq) goto loc_82DF2290;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df2290
	if (!cr0.eq) goto loc_82DF2290;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
loc_82DF2290:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82deb128
	sub_82DEB128(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df22b8
	if (cr0.eq) goto loc_82DF22B8;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de9b90
	sub_82DE9B90(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// b 0x82df22bc
	goto loc_82DF22BC;
loc_82DF22B8:
	// li r14,0
	r14.s64 = 0;
loc_82DF22BC:
	// stw r27,52(r14)
	PPC_STORE_U32(r14.u32 + 52, r27.u32);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc6af0
	sub_82DC6AF0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r14.u32);
	// bl 0x82dce120
	sub_82DCE120(ctx, base);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF22EC:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df27c4
	if (cr6.eq) goto loc_82DF27C4;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82df2320
	if (!cr6.lt) goto loc_82DF2320;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df2324
	goto loc_82DF2324;
loc_82DF2320:
	// li r11,0
	r11.s64 = 0;
loc_82DF2324:
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df23e4
	if (cr6.eq) goto loc_82DF23E4;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82df2358
	if (!cr6.lt) goto loc_82DF2358;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df235c
	goto loc_82DF235C;
loc_82DF2358:
	// li r11,0
	r11.s64 = 0;
loc_82DF235C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r27,188(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// blt cr6,0x82df23e4
	if (cr6.lt) goto loc_82DF23E4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,140
	ctx.r3.s64 = 140;
	// lwz r29,156(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 156);
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82deb128
	sub_82DEB128(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df23a0
	if (cr0.eq) goto loc_82DF23A0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82dea740
	sub_82DEA740(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82df23a4
	goto loc_82DF23A4;
loc_82DF23A0:
	// li r30,0
	r30.s64 = 0;
loc_82DF23A4:
	// stw r27,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r27.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r27,160(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82dc6af0
	sub_82DC6AF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r30.u32);
	// stb r11,140(r28)
	PPC_STORE_U8(r28.u32 + 140, r11.u8);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF23E4:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-24
	ctx.r7.s64 = r11.s64 + -24;
	// b 0x82df1150
	goto loc_82DF1150;
loc_82DF23F4:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df27c4
	if (cr6.eq) goto loc_82DF27C4;
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df24ec
	if (cr6.eq) goto loc_82DF24EC;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82df2434
	if (!cr6.lt) goto loc_82DF2434;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df2438
	goto loc_82DF2438;
loc_82DF2434:
	// li r11,0
	r11.s64 = 0;
loc_82DF2438:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r27,188(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// blt cr6,0x82df24ec
	if (cr6.lt) goto loc_82DF24EC;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82df2470
	if (!cr6.lt) goto loc_82DF2470;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df2474
	goto loc_82DF2474;
loc_82DF2470:
	// li r11,0
	r11.s64 = 0;
loc_82DF2474:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,140
	ctx.r3.s64 = 140;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,1452(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1452);
	// lwz r29,152(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 152);
	// bl 0x82deb128
	sub_82DEB128(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df24a8
	if (cr0.eq) goto loc_82DF24A8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82dea7a0
	sub_82DEA7A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82df24ac
	goto loc_82DF24AC;
loc_82DF24A8:
	// li r30,0
	r30.s64 = 0;
loc_82DF24AC:
	// stw r27,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r27.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r27,160(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82dc6af0
	sub_82DC6AF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r30.u32);
	// stb r11,141(r28)
	PPC_STORE_U8(r28.u32 + 141, r11.u8);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF24EC:
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82df1150
	goto loc_82DF1150;
loc_82DF24F8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82deb128
	sub_82DEB128(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,87
	cr6.compare<int32_t>(r11.s32, 87, xer);
	// beq cr6,0x82df2628
	if (cr6.eq) goto loc_82DF2628;
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(r11.s32, 93, xer);
	// beq cr6,0x82df25ec
	if (cr6.eq) goto loc_82DF25EC;
	// cmpwi cr6,r11,94
	cr6.compare<int32_t>(r11.s32, 94, xer);
	// beq cr6,0x82df25b0
	if (cr6.eq) goto loc_82DF25B0;
	// cmpwi cr6,r11,95
	cr6.compare<int32_t>(r11.s32, 95, xer);
	// beq cr6,0x82df2568
	if (cr6.eq) goto loc_82DF2568;
	// li r11,0
	r11.s64 = 0;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4159
	ctx.r7.s64 = 4159;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// b 0x82df2638
	goto loc_82DF2638;
loc_82DF2568:
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r28,r11,-8808
	r28.s64 = r11.s64 + -8808;
	// lwz r3,1488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82dc2df0
	sub_82DC2DF0(ctx, base);
loc_82DF25A0:
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x82df2634
	goto loc_82DF2634;
loc_82DF25B0:
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r28,r11,-8808
	r28.s64 = r11.s64 + -8808;
	// lwz r3,1488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82dc2cc8
	sub_82DC2CC8(ctx, base);
	// b 0x82df25a0
	goto loc_82DF25A0;
loc_82DF25EC:
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32037
	r11.s64 = -2099576832;
	// addi r28,r11,-8808
	r28.s64 = r11.s64 + -8808;
	// lwz r3,1488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 1488);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82dc2ba8
	sub_82DC2BA8(ctx, base);
	// b 0x82df25a0
	goto loc_82DF25A0;
loc_82DF2628:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
loc_82DF2634:
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
loc_82DF2638:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF264C:
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82df2670
	if (!cr6.lt) goto loc_82DF2670;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82df2674
	goto loc_82DF2674;
loc_82DF2670:
	// li r11,0
	r11.s64 = 0;
loc_82DF2674:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82df27c4
	if (!cr0.eq) goto loc_82DF27C4;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82DF268C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,51
	cr6.compare<uint32_t>(ctx.r9.u32, 51, xer);
	// bne cr6,0x82df26a0
	if (!cr6.eq) goto loc_82DF26A0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82DF26A0:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,37
	cr6.compare<uint32_t>(ctx.r9.u32, 37, xer);
	// bne cr6,0x82df268c
	if (!cr6.eq) goto loc_82DF268C;
loc_82DF26B4:
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF26C0:
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82df26e4
	if (!cr6.lt) goto loc_82DF26E4;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82df26e8
	goto loc_82DF26E8;
loc_82DF26E4:
	// li r11,0
	r11.s64 = 0;
loc_82DF26E8:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82df27c4
	if (cr0.eq) goto loc_82DF27C4;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82DF2700:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,51
	cr6.compare<uint32_t>(ctx.r9.u32, 51, xer);
	// bne cr6,0x82df2714
	if (!cr6.eq) goto loc_82DF2714;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82DF2714:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,39
	cr6.compare<uint32_t>(ctx.r9.u32, 39, xer);
	// bne cr6,0x82df2700
	if (!cr6.eq) goto loc_82DF2700;
	// b 0x82df26b4
	goto loc_82DF26B4;
loc_82DF272C:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82dce120
	sub_82DCE120(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df27c4
	if (cr0.eq) goto loc_82DF27C4;
loc_82DF273C:
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// b 0x82df27c4
	goto loc_82DF27C4;
loc_82DF274C:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df27bc
	if (cr6.eq) goto loc_82DF27BC;
	// bl 0x82dce120
	sub_82DCE120(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df2770
	if (cr6.eq) goto loc_82DF2770;
	// mr r14,r11
	r14.u64 = r11.u64;
loc_82DF2770:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// b 0x82df273c
	goto loc_82DF273C;
loc_82DF2784:
	// lbz r11,202(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 202);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82df27c4
	if (!cr0.eq) goto loc_82DF27C4;
	// lwz r5,400(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// li r7,4227
	ctx.r7.s64 = 4227;
	// b 0x82df1174
	goto loc_82DF1174;
loc_82DF279C:
	// li r7,4233
	ctx.r7.s64 = 4233;
	// b 0x82df1170
	goto loc_82DF1170;
loc_82DF27A4:
	// li r7,4238
	ctx.r7.s64 = 4238;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF27BC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, r11.u8);
loc_82DF27C4:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x82df284c
	if (cr6.eq) goto loc_82DF284C;
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82df284c
	if (!cr6.eq) goto loc_82DF284C;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df2830
	if (!cr0.eq) goto loc_82DF2830;
	// li r7,4253
	ctx.r7.s64 = 4253;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF2830:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r15,0
	r15.s64 = 0;
	// stw r15,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r15.u32);
	// lwz r11,-1320(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1320);
	// lwz r10,-1312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1312);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
loc_82DF284C:
	// lbz r11,172(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 172);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82df2868
	if (!cr0.eq) goto loc_82DF2868;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// b 0x82dee504
	goto loc_82DEE504;
loc_82DF2868:
	// lwz r30,632(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x82df28c4
	goto loc_82DF28C4;
loc_82DF2874:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de4290
	sub_82DE4290(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df28bc
	if (!cr0.eq) goto loc_82DF28BC;
	// li r7,4269
	ctx.r7.s64 = 4269;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF28BC:
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_82DF28C4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82df2874
	if (!cr6.eq) goto loc_82DF2874;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df28e0
	if (cr6.eq) goto loc_82DF28E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ddc958
	sub_82DDC958(ctx, base);
loc_82DF28E0:
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df3ca4
	if (cr6.eq) goto loc_82DF3CA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x82ddc958
	sub_82DDC958(ctx, base);
	// b 0x82df3ca4
	goto loc_82DF3CA4;
loc_82DF28FC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82deabb8
	sub_82DEABB8(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// bl 0x82dead60
	sub_82DEAD60(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82df2940
	if (cr6.eq) goto loc_82DF2940;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,408(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,1955
	ctx.r7.s64 = 1955;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF2940:
	// lwz r30,20(r19)
	r30.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82df298c
	if (cr0.eq) goto loc_82DF298C;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82deca88
	sub_82DECA88(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_82DF298C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82df29a0
	if (cr0.eq) goto loc_82DF29A0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_82DF29A0:
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// rlwinm r10,r7,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0x1F8;
	// lwz r23,136(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,56(r29)
	PPC_STORE_U32(r29.u32 + 56, ctx.r10.u32);
	// stw r11,80(r29)
	PPC_STORE_U32(r29.u32 + 80, r11.u32);
	// lwz r5,-1312(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + -1312);
	// bl 0x82ded498
	sub_82DED498(ctx, base);
	// lwz r20,192(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82deade0
	sub_82DEADE0(ctx, base);
	// addi r25,r3,1
	r25.s64 = ctx.r3.s64 + 1;
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// ble cr6,0x82df2b44
	if (!cr6.gt) goto loc_82DF2B44;
loc_82DF2A00:
	// lwz r28,20(r19)
	r28.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-1320(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + -1320);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r11.u32);
	// rlwinm. r9,r7,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r8,r7,9,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0x1;
	// stw r7,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r7.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// beq 0x82df2a34
	if (cr0.eq) goto loc_82DF2A34;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r11.u32);
loc_82DF2A34:
	// clrlwi. r26,r8,24
	r26.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x82df2a48
	if (cr0.eq) goto loc_82DF2A48;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// stwx r10,r11,r22
	PPC_STORE_U32(r11.u32 + r22.u32, ctx.r10.u32);
loc_82DF2A48:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// bne cr6,0x82df2a64
	if (!cr6.eq) goto loc_82DF2A64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82df2a7c
	if (cr6.eq) goto loc_82DF2A7C;
loc_82DF2A64:
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82deb8a0
	sub_82DEB8A0(ctx, base);
loc_82DF2A7C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82df2a90
	if (cr6.eq) goto loc_82DF2A90;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_82DF2A90:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82df2aa4
	if (cr6.eq) goto loc_82DF2AA4;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_82DF2AA4:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// rlwinm. r8,r11,9,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// rlwinm r10,r11,16,26,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x3F;
	// beq 0x82df2acc
	if (cr0.eq) goto loc_82DF2ACC;
	// addi r8,r30,50
	ctx.r8.s64 = r30.s64 + 50;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// stwx r11,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + r29.u32, r11.u32);
loc_82DF2ACC:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r30,14
	ctx.r8.s64 = r30.s64 + 14;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r30,20
	ctx.r10.s64 = r30.s64 + 20;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stwx r9,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + r29.u32, ctx.r9.u32);
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, r11.u32);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r24
	r11.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df2b20
	if (cr0.eq) goto loc_82DF2B20;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// addi r11,r23,-1272
	r11.s64 = r23.s64 + -1272;
	// beq cr6,0x82df2b18
	if (cr6.eq) goto loc_82DF2B18;
	// addi r11,r23,-1284
	r11.s64 = r23.s64 + -1284;
loc_82DF2B18:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r11.u32);
loc_82DF2B20:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82deb238
	sub_82DEB238(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r25
	cr6.compare<int32_t>(r30.s32, r25.s32, xer);
	// blt cr6,0x82df2a00
	if (cr6.lt) goto loc_82DF2A00;
loc_82DF2B44:
	// lwz r30,664(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 664);
	// lwz r27,132(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r26,128(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r28,8(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 8);
loc_82DF2B54:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82df2bb0
	if (cr6.eq) goto loc_82DF2BB0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de4290
	sub_82DE4290(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df2ba4
	if (!cr0.eq) goto loc_82DF2BA4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2035
	ctx.r7.s64 = 2035;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF2BA4:
	// mr r30,r28
	r30.u64 = r28.u64;
	// lwz r28,8(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// b 0x82df2b54
	goto loc_82DF2B54;
loc_82DF2BB0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df2bf0
	if (!cr0.eq) goto loc_82DF2BF0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2040
	ctx.r7.s64 = 2040;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF2BF0:
	// lwz r30,632(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x82df2c4c
	goto loc_82DF2C4C;
loc_82DF2BFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de4290
	sub_82DE4290(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df2c44
	if (!cr0.eq) goto loc_82DF2C44;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF2C44:
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_82DF2C4C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82df2bfc
	if (!cr6.eq) goto loc_82DF2BFC;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82deae50
	sub_82DEAE50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82df3ca4
	if (cr0.eq) goto loc_82DF3CA4;
	// lwz r5,416(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// li r7,2051
	ctx.r7.s64 = 2051;
	// b 0x82df380c
	goto loc_82DF380C;
loc_82DF2C70:
	// li r7,1936
	ctx.r7.s64 = 1936;
	// b 0x82df3808
	goto loc_82DF3808;
loc_82DF2C78:
	// li r7,1916
	ctx.r7.s64 = 1916;
	// b 0x82df3808
	goto loc_82DF3808;
loc_82DF2C80:
	// cmpwi cr6,r30,79
	cr6.compare<int32_t>(r30.s32, 79, xer);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,1388
	ctx.r7.s64 = 1388;
	// bne cr6,0x82df2ca0
	if (!cr6.eq) goto loc_82DF2CA0;
	// li r7,1385
	ctx.r7.s64 = 1385;
loc_82DF2CA0:
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF2CA4:
	// cmpwi cr6,r30,66
	cr6.compare<int32_t>(r30.s32, 66, xer);
	// bgt cr6,0x82df3b60
	if (cr6.gt) goto loc_82DF3B60;
	// beq cr6,0x82df3820
	if (cr6.eq) goto loc_82DF3820;
	// addi r11,r30,-20
	r11.s64 = r30.s64 + -20;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// bgt cr6,0x82df3ca4
	if (cr6.gt) goto loc_82DF3CA4;
	// lis r12,-32238
	r12.s64 = -2112749568;
	// addi r12,r12,-21448
	r12.s64 = r12.s64 + -21448;
	// rlwinm r0,r11,1,0,30
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32033
	r12.s64 = -2099314688;
	// addi r12,r12,11492
	r12.s64 = r12.s64 + 11492;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82DF2CE4;
	case 1:
		goto loc_82DF3CA4;
	case 2:
		goto loc_82DF2E14;
	case 3:
		goto loc_82DF30CC;
	case 4:
		goto loc_82DF2F50;
	case 5:
		goto loc_82DF3464;
	case 6:
		goto loc_82DF3504;
	case 7:
		goto loc_82DF30CC;
	case 8:
		goto loc_82DF3730;
	case 9:
		goto loc_82DF3804;
	default:
		__builtin_unreachable();
	}
loc_82DF2CE4:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r8,r6,19,23,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x1F8;
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r29,4(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r10.u32);
	// cmpwi cr6,r29,19
	cr6.compare<int32_t>(r29.s32, 19, xer);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r7,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r7.u32);
	// extsh r28,r11
	r28.s64 = r11.s16;
	// beq cr6,0x82df2d54
	if (cr6.eq) goto loc_82DF2D54;
	// cmpwi cr6,r29,20
	cr6.compare<int32_t>(r29.s32, 20, xer);
	// beq cr6,0x82df2d54
	if (cr6.eq) goto loc_82DF2D54;
	// lwz r26,128(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,1409
	ctx.r7.s64 = 1409;
	// lwz r27,132(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,424(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// b 0x82df2d5c
	goto loc_82DF2D5C;
loc_82DF2D54:
	// lwz r27,132(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r26,128(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82DF2D5C:
	// cmpw cr6,r28,r30
	cr6.compare<int32_t>(r28.s32, r30.s32, xer);
	// bgt cr6,0x82df2d7c
	if (cr6.gt) goto loc_82DF2D7C;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,432(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,1410
	ctx.r7.s64 = 1410;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF2D7C:
	// lbz r11,2116(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82df2da0
	if (cr0.eq) goto loc_82DF2DA0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,440(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,1412
	ctx.r7.s64 = 1412;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF2DA0:
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// stw r29,2120(r31)
	PPC_STORE_U32(r31.u32 + 2120, r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,2124(r31)
	PPC_STORE_U32(r31.u32 + 2124, r30.u32);
	// stw r11,2128(r31)
	PPC_STORE_U32(r31.u32 + 2128, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,2116(r31)
	PPC_STORE_U8(r31.u32 + 2116, ctx.r10.u8);
	// bl 0x82dc6b50
	sub_82DC6B50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df3ca4
	if (cr0.eq) goto loc_82DF3CA4;
	// lwz r30,2124(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 2124);
	// b 0x82df2e04
	goto loc_82DF2E04;
loc_82DF2DD0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,-1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -1312);
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82DF2E04:
	// lwz r11,2128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2128);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82df2dd0
	if (cr6.lt) goto loc_82DF2DD0;
	// b 0x82df3ca4
	goto loc_82DF3CA4;
loc_82DF2E14:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// stw r30,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r30.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm. r11,r11,10,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df2e50
	if (cr0.eq) goto loc_82DF2E50;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,1448
	ctx.r7.s64 = 1448;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_82DF2E50:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lhz r11,0(r15)
	r11.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// addi r30,r31,184
	r30.s64 = r31.s64 + 184;
	// clrlwi r3,r11,30
	ctx.r3.u64 = r11.u32 & 0x3;
	// lwz r28,16(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x82deafa0
	sub_82DEAFA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82de2408
	sub_82DE2408(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// rlwinm r3,r11,14,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x3;
	// lwz r28,16(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x82deafa0
	sub_82DEAFA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82de2408
	sub_82DE2408(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// rlwinm r3,r11,12,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x3;
	// lwz r28,16(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x82deafa0
	sub_82DEAFA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82de2408
	sub_82DE2408(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// rlwinm r3,r11,10,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x3;
	// lwz r28,16(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x82deafa0
	sub_82DEAFA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82de2408
	sub_82DE2408(ctx, base);
	// lbz r11,0(r15)
	r11.u64 = PPC_LOAD_U8(r15.u32 + 0);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// rlwinm r11,r11,7,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// stw r11,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r11.u32);
	// b 0x82df3ca4
	goto loc_82DF3CA4;
loc_82DF2F50:
	// li r11,1
	r11.s64 = 1;
	// lbz r29,1(r15)
	r29.u64 = PPC_LOAD_U8(r15.u32 + 1);
	// stb r11,2057(r31)
	PPC_STORE_U8(r31.u32 + 2057, r11.u8);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// stw r30,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r30.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm. r11,r11,10,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df2f98
	if (cr0.eq) goto loc_82DF2F98;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,1493
	ctx.r7.s64 = 1493;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_82DF2F98:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82dd6670
	sub_82DD6670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df2ffc
	if (!cr0.eq) goto loc_82DF2FFC;
	// li r7,1504
	ctx.r7.s64 = 1504;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,448(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF2FFC:
	// lhz r11,0(r15)
	r11.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// addi r29,r31,184
	r29.s64 = r31.s64 + 184;
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// clrlwi r3,r11,30
	ctx.r3.u64 = r11.u32 & 0x3;
	// bl 0x82deafa0
	sub_82DEAFA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82de2408
	sub_82DE2408(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// rlwinm r3,r11,14,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x3;
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82deafa0
	sub_82DEAFA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82de2408
	sub_82DE2408(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// rlwinm r3,r11,12,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x3;
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82deafa0
	sub_82DEAFA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82de2408
	sub_82DE2408(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// rlwinm r3,r11,10,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x3;
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82deafa0
	sub_82DEAFA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82de2408
	sub_82DE2408(ctx, base);
	// lbz r11,0(r15)
	r11.u64 = PPC_LOAD_U8(r15.u32 + 0);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// rlwinm r11,r11,7,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// b 0x82df3ca4
	goto loc_82DF3CA4;
loc_82DF30CC:
	// lhz r11,0(r15)
	r11.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// clrlwi r3,r11,27
	ctx.r3.u64 = r11.u32 & 0x1F;
	// bl 0x82deb020
	sub_82DEB020(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// rlwinm r24,r10,11,24,31
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFF;
	// stw r30,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r30.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df3154
	if (cr0.eq) goto loc_82DF3154;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r3,r11,30
	ctx.r3.u64 = r11.u32 & 0x3;
	// bl 0x82deafa0
	sub_82DEAFA0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r3,r11,30,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3;
	// bl 0x82deafa0
	sub_82DEAFA0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// rlwinm r3,r11,28,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
	// bl 0x82deafa0
	sub_82DEAFA0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// rlwinm r3,r11,26,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3;
	// bl 0x82deafa0
	sub_82DEAFA0(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// rlwinm r20,r10,24,31,31
	r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// stw r30,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r30.u32);
	// b 0x82df3168
	goto loc_82DF3168;
loc_82DF3154:
	// li r27,5
	r27.s64 = 5;
	// li r25,5
	r25.s64 = 5;
	// li r23,5
	r23.s64 = 5;
	// li r21,5
	r21.s64 = 5;
	// li r20,0
	r20.s64 = 0;
loc_82DF3168:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// lwz r17,128(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r18,132(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// extsh r29,r9
	r29.s64 = ctx.r9.s16;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r28,33
	cr6.compare<int32_t>(r28.s32, 33, xer);
	// beq cr6,0x82df31a8
	if (cr6.eq) goto loc_82DF31A8;
	// li r7,1565
	ctx.r7.s64 = 1565;
	// lwz r5,456(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF31A8:
	// lwz r11,2124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2124);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// blt cr6,0x82df31b8
	if (cr6.lt) goto loc_82DF31B8;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82DF31B8:
	// stw r11,2124(r31)
	PPC_STORE_U32(r31.u32 + 2124, r11.u32);
	// lwz r11,2128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2128);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bgt cr6,0x82df31cc
	if (cr6.gt) goto loc_82DF31CC;
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
loc_82DF31CC:
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r11,2128(r31)
	PPC_STORE_U32(r31.u32 + 2128, r11.u32);
	// stw r10,2120(r31)
	PPC_STORE_U32(r31.u32 + 2120, ctx.r10.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,10,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df31fc
	if (cr0.eq) goto loc_82DF31FC;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r5,464(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1573
	ctx.r7.s64 = 1573;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF31FC:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd5d18
	sub_82DD5D18(ctx, base);
	// li r19,0
	r19.s64 = 0;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// mr r26,r19
	r26.u64 = r19.u64;
	// bne 0x82df3240
	if (!cr0.eq) goto loc_82DF3240;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r26,1
	r26.s64 = 1;
	// bl 0x82dd5d38
	sub_82DD5D38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82DF3240:
	// lwz r29,136(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// lwz r11,-1308(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -1308);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// beq cr6,0x82df3274
	if (cr6.eq) goto loc_82DF3274;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x82de2408
	sub_82DE2408(ctx, base);
	// stb r19,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, r19.u8);
loc_82DF3274:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x82df329c
	if (cr6.eq) goto loc_82DF329C;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x82de2408
	sub_82DE2408(ctx, base);
	// stb r19,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, r19.u8);
loc_82DF329C:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x82df32c4
	if (cr6.eq) goto loc_82DF32C4;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x82de2408
	sub_82DE2408(ctx, base);
	// stb r19,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, r19.u8);
loc_82DF32C4:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x82df32ec
	if (cr6.eq) goto loc_82DF32EC;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x82de2408
	sub_82DE2408(ctx, base);
	// stb r19,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, r19.u8);
loc_82DF32EC:
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// bne cr6,0x82df3308
	if (!cr6.eq) goto loc_82DF3308;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// bne cr6,0x82df3ca4
	if (!cr6.eq) goto loc_82DF3CA4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
loc_82DF3308:
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(r11.s32, 27, xer);
	// bne cr6,0x82df3ca4
	if (!cr6.eq) goto loc_82DF3CA4;
	// lwz r28,156(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq 0x82df3340
	if (cr0.eq) goto loc_82DF3340;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82df334c
	goto loc_82DF334C;
loc_82DF3340:
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DF334C:
	// cmpwi cr6,r22,5
	cr6.compare<int32_t>(r22.s32, 5, xer);
	// beq cr6,0x82df335c
	if (cr6.eq) goto loc_82DF335C;
	// cmpwi cr6,r22,6
	cr6.compare<int32_t>(r22.s32, 6, xer);
	// bne cr6,0x82df3ca4
	if (!cr6.eq) goto loc_82DF3CA4;
loc_82DF335C:
	// lwz r11,-1312(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -1312);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x82df3380
	if (cr6.eq) goto loc_82DF3380;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r5,472(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1628
	ctx.r7.s64 = 1628;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF3380:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82dd5d38
	sub_82DD5D38(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82df33e8
	if (cr0.eq) goto loc_82DF33E8;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de7bb8
	sub_82DE7BB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82df33ec
	goto loc_82DF33EC;
loc_82DF33E8:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_82DF33EC:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82de4f50
	sub_82DE4F50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// cmpwi cr6,r22,5
	cr6.compare<int32_t>(r22.s32, 5, xer);
	// bne cr6,0x82df3438
	if (!cr6.eq) goto loc_82DF3438;
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// b 0x82df344c
	goto loc_82DF344C;
loc_82DF3438:
	// cmpwi cr6,r22,6
	cr6.compare<int32_t>(r22.s32, 6, xer);
	// bne cr6,0x82df344c
	if (!cr6.eq) goto loc_82DF344C;
	// li r11,1
	r11.s64 = 1;
	// stw r29,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r29.u32);
	// stb r11,126(r31)
	PPC_STORE_U8(r31.u32 + 126, r11.u8);
loc_82DF344C:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82df3ca4
	goto loc_82DF3CA4;
loc_82DF3464:
	// lbz r11,0(r15)
	r11.u64 = PPC_LOAD_U8(r15.u32 + 0);
	// clrlwi r30,r11,29
	r30.u64 = r11.u32 & 0x7;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(r30.s32, 6, xer);
	// blt cr6,0x82df348c
	if (cr6.lt) goto loc_82DF348C;
	// li r7,1657
	ctx.r7.s64 = 1657;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,480(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF348C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lbz r11,1(r15)
	r11.u64 = PPC_LOAD_U8(r15.u32 + 1);
	// lwz r10,1360(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1360);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82df3dd8
	if (cr6.gt) goto loc_82DF3DD8;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r9,268(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// rlwinm r10,r10,5,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x3;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// beq cr6,0x82df34f4
	if (cr6.eq) goto loc_82DF34F4;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
loc_82DF34F4:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// b 0x82df3ca4
	goto loc_82DF3CA4;
loc_82DF3504:
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82de42b0
	sub_82DE42B0(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// lhz r9,0(r15)
	ctx.r9.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r27,136(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi r28,r9,26
	r28.u64 = ctx.r9.u32 & 0x3F;
	// stw r10,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r10.u32);
	// lwz r11,-1316(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1316);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df35a0
	if (cr0.eq) goto loc_82DF35A0;
	// lwz r11,-1308(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1308);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// beq 0x82df355c
	if (cr0.eq) goto loc_82DF355C;
	// li r11,4
	r11.s64 = 4;
	// li r30,1
	r30.s64 = 1;
	// stb r11,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, r11.u8);
loc_82DF355C:
	// rlwinm. r11,r9,0,28,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df3570
	if (cr0.eq) goto loc_82DF3570;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, r11.u8);
loc_82DF3570:
	// rlwinm. r11,r9,0,26,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x30;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df3584
	if (cr0.eq) goto loc_82DF3584;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, r11.u8);
loc_82DF3584:
	// rlwinm. r11,r9,0,24,25
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df3598
	if (cr0.eq) goto loc_82DF3598;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, r11.u8);
loc_82DF3598:
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_82DF35A0:
	// lwz r29,20(r19)
	r29.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,10,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df3694
	if (cr0.eq) goto loc_82DF3694;
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df35d4
	if (cr0.eq) goto loc_82DF35D4;
	// li r7,1713
	ctx.r7.s64 = 1713;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,488(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF35D4:
	// lwz r11,-1308(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1308);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// bl 0x82df78f8
	sub_82DF78F8(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df3608
	if (!cr6.eq) goto loc_82DF3608;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, r11.u8);
loc_82DF3608:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82df78f8
	sub_82DF78F8(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df3634
	if (!cr6.eq) goto loc_82DF3634;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, r11.u8);
loc_82DF3634:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82df78f8
	sub_82DF78F8(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df3660
	if (!cr6.eq) goto loc_82DF3660;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, r11.u8);
loc_82DF3660:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82df78f8
	sub_82DF78F8(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df3688
	if (!cr6.eq) goto loc_82DF3688;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stb r11,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, r11.u8);
loc_82DF3688:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_82DF3694:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,164(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ded028
	sub_82DED028(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r30,696(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 696);
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x82df371c
	goto loc_82DF371C;
loc_82DF36CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de4290
	sub_82DE4290(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df3714
	if (!cr0.eq) goto loc_82DF3714;
	// li r7,1746
	ctx.r7.s64 = 1746;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF3714:
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_82DF371C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82df36cc
	if (!cr6.eq) goto loc_82DF36CC;
	// stw r18,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, r18.u32);
	// stw r18,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, r18.u32);
	// b 0x82df3ca4
	goto loc_82DF3CA4;
loc_82DF3730:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82df3780
	if (!cr6.gt) goto loc_82DF3780;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82df3788
	goto loc_82DF3788;
loc_82DF3780:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF3788:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82df37ac
	if (!cr6.eq) goto loc_82DF37AC;
	// li r7,1765
	ctx.r7.s64 = 1765;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,496(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF37AC:
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82deae50
	sub_82DEAE50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82df3ca4
	if (!cr0.gt) goto loc_82DF3CA4;
	// addi r9,r30,928
	ctx.r9.s64 = r30.s64 + 928;
	// addi r11,r30,896
	r11.s64 = r30.s64 + 896;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82DF37C8:
	// lwz r8,20(r19)
	ctx.r8.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r8,20(r19)
	ctx.r8.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r8,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r8.u32);
	// bne 0x82df37c8
	if (!cr0.eq) goto loc_82DF37C8;
	// b 0x82df3ca4
	goto loc_82DF3CA4;
loc_82DF3804:
	// li r7,1906
	ctx.r7.s64 = 1906;
loc_82DF3808:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_82DF380C:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// b 0x82df3ca4
	goto loc_82DF3CA4;
loc_82DF3820:
	// lwz r11,7484(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 7484);
	// li r3,143
	ctx.r3.s64 = 143;
	// lwz r10,504(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// li r4,47
	ctx.r4.s64 = 47;
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6d80
	sub_82DE6D80(ctx, base);
	// lbz r21,200(r1)
	r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 200);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r21,0
	cr0.compare<uint32_t>(r21.u32, 0, xer);
	// stw r10,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r10.u32);
	// beq 0x82df388c
	if (cr0.eq) goto loc_82DF388C;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82deace8
	sub_82DEACE8(ctx, base);
loc_82DF388C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// lwz r17,128(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r18,132(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df38d4
	if (!cr0.eq) goto loc_82DF38D4;
	// li r7,1794
	ctx.r7.s64 = 1794;
	// lwz r5,512(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF38D4:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// rlwinm. r20,r11,9,26,31
	r20.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x3F;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// rlwinm r22,r11,16,26,31
	r22.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x3F;
	// beq 0x82df3908
	if (cr0.eq) goto loc_82DF3908;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r5,520(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1802
	ctx.r7.s64 = 1802;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF3908:
	// cmpwi cr6,r20,4
	cr6.compare<int32_t>(r20.s32, 4, xer);
	// ble cr6,0x82df3914
	if (!cr6.gt) goto loc_82DF3914;
	// li r20,0
	r20.s64 = 0;
loc_82DF3914:
	// lwz r29,20(r19)
	r29.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,10,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df392c
	if (cr0.eq) goto loc_82DF392C;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_82DF392C:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r9,r8,19,23,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x1F8;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// extsh r28,r8
	r28.s64 = ctx.r8.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm. r9,r7,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r27,4(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// beq 0x82df3964
	if (cr0.eq) goto loc_82DF3964;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r10,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r10.u32);
loc_82DF3964:
	// lwz r10,20(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,43
	ctx.r4.s64 = 43;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// extsh r25,r9
	r25.s64 = ctx.r9.s16;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r24,4(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82dd6618
	sub_82DD6618(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82de6918
	sub_82DE6918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,43
	ctx.r5.s64 = 43;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r29,136(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r19,1
	r19.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r19,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r19.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r28,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r28.u32);
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// stw r27,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-1320(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -1320);
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r11.u32);
	// bl 0x82deb238
	sub_82DEB238(ctx, base);
	// lwz r11,-1284(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -1284);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x82de79a0
	sub_82DE79A0(ctx, base);
	// extsh r11,r22
	r11.s64 = r22.s16;
	// li r10,14
	ctx.r10.s64 = 14;
	// sth r11,342(r1)
	PPC_STORE_U16(ctx.r1.u32 + 342, r11.u16);
	// li r9,39
	ctx.r9.s64 = 39;
	// li r8,40
	ctx.r8.s64 = 40;
	// sth r11,314(r1)
	PPC_STORE_U16(ctx.r1.u32 + 314, r11.u16);
	// li r7,41
	ctx.r7.s64 = 41;
	// sth r9,340(r1)
	PPC_STORE_U16(ctx.r1.u32 + 340, ctx.r9.u16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r10,316(r1)
	PPC_STORE_U16(ctx.r1.u32 + 316, ctx.r10.u16);
	// li r5,3
	ctx.r5.s64 = 3;
	// sth r7,312(r1)
	PPC_STORE_U16(ctx.r1.u32 + 312, ctx.r7.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,318(r1)
	PPC_STORE_U16(ctx.r1.u32 + 318, r11.u16);
	// sth r8,324(r1)
	PPC_STORE_U16(ctx.r1.u32 + 324, ctx.r8.u16);
	// sth r11,326(r1)
	PPC_STORE_U16(ctx.r1.u32 + 326, r11.u16);
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r9,312(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r7,340(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x82de79f8
	sub_82DE79F8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82deace8
	sub_82DEACE8(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82df3a98
	if (cr6.eq) goto loc_82DF3A98;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82deace8
	sub_82DEACE8(ctx, base);
loc_82DF3A98:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df3ad8
	if (!cr0.eq) goto loc_82DF3AD8;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1846
	ctx.r7.s64 = 1846;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF3AD8:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82de8808
	sub_82DE8808(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r25.u32);
	// stw r24,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r24.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82deace8
	sub_82DEACE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc7440
	sub_82DC7440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82de9970
	sub_82DE9970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de69a8
	sub_82DE69A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df3b58
	if (!cr0.eq) goto loc_82DF3B58;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1857
	ctx.r7.s64 = 1857;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF3B58:
	// stb r19,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, r19.u8);
	// b 0x82df3ca4
	goto loc_82DF3CA4;
loc_82DF3B60:
	// cmpwi cr6,r30,67
	cr6.compare<int32_t>(r30.s32, 67, xer);
	// bne cr6,0x82df3ca4
	if (!cr6.eq) goto loc_82DF3CA4;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// lhz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r27,136(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi r28,r10,26
	r28.u64 = ctx.r10.u32 & 0x3F;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// mr r29,r11
	r29.u64 = r11.u64;
	// lwz r10,-1316(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -1316);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r11,r11,10,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df3c5c
	if (cr0.eq) goto loc_82DF3C5C;
	// lwz r11,-1308(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1308);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// bl 0x82df78f8
	sub_82DF78F8(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df3bcc
	if (!cr6.eq) goto loc_82DF3BCC;
	// li r11,4
	r11.s64 = 4;
	// li r30,1
	r30.s64 = 1;
	// stb r11,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, r11.u8);
loc_82DF3BCC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82df78f8
	sub_82DF78F8(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df3bf8
	if (!cr6.eq) goto loc_82DF3BF8;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, r11.u8);
loc_82DF3BF8:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82df78f8
	sub_82DF78F8(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df3c24
	if (!cr6.eq) goto loc_82DF3C24;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, r11.u8);
loc_82DF3C24:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82df78f8
	sub_82DF78F8(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df3c4c
	if (!cr6.eq) goto loc_82DF3C4C;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stb r11,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, r11.u8);
loc_82DF3C4C:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_82DF3C5C:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stw r9,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm. r11,r11,10,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df3c7c
	if (cr0.eq) goto loc_82DF3C7C;
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_82DF3C7C:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ded028
	sub_82DED028(ctx, base);
loc_82DF3CA4:
	// lwz r19,940(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82dce1f8
	sub_82DCE1F8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82dede74
	if (!cr0.eq) goto loc_82DEDE74;
	// lwz r25,164(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r26,268(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r27,216(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
loc_82DF3CC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc8250
	sub_82DC8250(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82dea310
	sub_82DEA310(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82df3cec
	if (cr6.eq) goto loc_82DF3CEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ddc958
	sub_82DDC958(ctx, base);
loc_82DF3CEC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82df3d00
	if (cr6.eq) goto loc_82DF3D00;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ddc958
	sub_82DDC958(ctx, base);
loc_82DF3D00:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,280(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82df3d74
	if (cr6.eq) goto loc_82DF3D74;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// lwz r3,-4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -4);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
loc_82DF3D74:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dda240
	sub_82DDA240(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df3db0
	if (!cr0.eq) goto loc_82DF3DB0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4297
	ctx.r7.s64 = 4297;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r5,r11,-19532
	ctx.r5.s64 = r11.s64 + -19532;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF3DB0:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831b147c
	// b 0x831b0b40
	return;
loc_82DF3DC0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r10,26
	ctx.r10.s64 = 26;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r10,1364(r11)
	PPC_STORE_U32(r11.u32 + 1364, ctx.r10.u32);
	// bl 0x831b6790
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
loc_82DF3DD8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r10,25
	ctx.r10.s64 = 25;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r10,1364(r11)
	PPC_STORE_U32(r11.u32 + 1364, ctx.r10.u32);
	// bl 0x831b6790
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
}

__attribute__((alias("__imp__sub_82DF3DF0"))) PPC_WEAK_FUNC(sub_82DF3DF0);
PPC_FUNC_IMPL(__imp__sub_82DF3DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r4,8
	r11.s64 = ctx.r4.s64 + 8;
	// subf r7,r10,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r10.s64;
	// subf r8,r4,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_82DF3E14:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// andc r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ~ctx.r9.u64;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x82df3e3c
	if (cr6.eq) goto loc_82DF3E3C;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82DF3E3C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// blt cr6,0x82df3e14
	if (cr6.lt) goto loc_82DF3E14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF3E58"))) PPC_WEAK_FUNC(sub_82DF3E58);
PPC_FUNC_IMPL(__imp__sub_82DF3E58) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r26,1
	r26.s64 = 1;
	// lwz r31,20(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82df3ef8
	if (!cr6.gt) goto loc_82DF3EF8;
	// addi r11,r31,7
	r11.s64 = r31.s64 + 7;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
loc_82DF3E8C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82df7ad8
	sub_82DF7AD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82df3eec
	if (cr0.lt) goto loc_82DF3EEC;
	// rlwinm r11,r3,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// srw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82df3eec
	if (!cr0.eq) goto loc_82DF3EEC;
	// lwz r9,176(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 176);
	// slw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DF3EEC:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bgt 0x82df3e8c
	if (cr0.gt) goto loc_82DF3E8C;
loc_82DF3EF8:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82df3f44
	if (!cr6.gt) goto loc_82DF3F44;
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df3f44
	if (!cr0.eq) goto loc_82DF3F44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82df7ad8
	sub_82DF7AD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82df3f44
	if (cr0.lt) goto loc_82DF3F44;
	// rlwinm r11,r3,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// slw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, ctx.r10.u32);
loc_82DF3F44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82DF3F50"))) PPC_WEAK_FUNC(sub_82DF3F50);
PPC_FUNC_IMPL(__imp__sub_82DF3F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,176(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r9,8
	r11.s64 = ctx.r9.s64 + 8;
loc_82DF3F68:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82df3f68
	if (cr6.lt) goto loc_82DF3F68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF3F88"))) PPC_WEAK_FUNC(sub_82DF3F88);
PPC_FUNC_IMPL(__imp__sub_82DF3F88) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82dca888
	sub_82DCA888(ctx, base);
	// addi r27,r31,128
	r27.s64 = r31.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82de42e8
	sub_82DE42E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x82df4030
	if (cr6.lt) goto loc_82DF4030;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// li r29,0
	r29.s64 = 0;
loc_82DF3FC0:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df3fdc
	if (cr6.eq) goto loc_82DF3FDC;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
loc_82DF3FDC:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df3ff8
	if (cr6.eq) goto loc_82DF3FF8;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
loc_82DF3FF8:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df4014
	if (cr6.eq) goto loc_82DF4014;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
loc_82DF4014:
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bl 0x82de42e8
	sub_82DE42E8(ctx, base);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// ble cr6,0x82df3fc0
	if (!cr6.gt) goto loc_82DF3FC0;
loc_82DF4030:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82DF4038"))) PPC_WEAK_FUNC(sub_82DF4038);
PPC_FUNC_IMPL(__imp__sub_82DF4038) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dc7828
	sub_82DC7828(ctx, base);
	// lwz r28,136(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 136);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82df40cc
	goto loc_82DF40CC;
loc_82DF4064:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82df4094
	if (!cr6.gt) goto loc_82DF4094;
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
loc_82DF4078:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82df4078
	if (cr6.lt) goto loc_82DF4078;
loc_82DF4094:
	// lwz r31,28(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// b 0x82df40bc
	goto loc_82DF40BC;
loc_82DF409C:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df40b8
	if (cr0.eq) goto loc_82DF40B8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82df3e58
	sub_82DF3E58(ctx, base);
loc_82DF40B8:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82DF40BC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df409c
	if (!cr6.eq) goto loc_82DF409C;
	// lwz r28,8(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 8);
loc_82DF40CC:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df4064
	if (!cr6.eq) goto loc_82DF4064;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF40E0"))) PPC_WEAK_FUNC(sub_82DF40E0);
PPC_FUNC_IMPL(__imp__sub_82DF40E0) {
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
	// li r3,1024
	ctx.r3.s64 = 1024;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dc7828
	sub_82DC7828(ctx, base);
	// stw r3,180(r27)
	PPC_STORE_U32(r27.u32 + 180, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dca7e0
	sub_82DCA7E0(ctx, base);
	// addi r18,r27,128
	r18.s64 = r27.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r19,1
	r19.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// mr r21,r19
	r21.u64 = r19.u64;
	// bl 0x82de42e8
	sub_82DE42E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x82df43b4
	if (cr6.lt) goto loc_82DF43B4;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r22,r31,4
	r22.s64 = r31.s64 + 4;
	// addi r20,r11,-18416
	r20.s64 = r11.s64 + -18416;
loc_82DF413C:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r31,0(r22)
	r31.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dc7828
	sub_82DC7828(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dc7828
	sub_82DC7828(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dc7828
	sub_82DC7828(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r26,28(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r11,r19
	r11.u64 = r19.u64;
	// lwz r23,100(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r25,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r25.u32);
	// b 0x82df4390
	goto loc_82DF4390;
loc_82DF4190:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df4380
	if (cr0.eq) goto loc_82DF4380;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82df4380
	if (!cr0.eq) goto loc_82DF4380;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82DF41BC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df42ec
	if (!cr0.eq) goto loc_82DF42EC;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df42d4
	if (cr0.eq) goto loc_82DF42D4;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r29,r19
	r29.u64 = r19.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82df4288
	if (cr6.lt) goto loc_82DF4288;
	// addi r28,r31,236
	r28.s64 = r31.s64 + 236;
loc_82DF41E4:
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82df421c
	if (cr6.eq) goto loc_82DF421C;
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df421c
	if (!cr0.eq) goto loc_82DF421C;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// addi r10,r20,4
	ctx.r10.s64 = r20.s64 + 4;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r19
	r11.u64 = r19.u64;
	// bne 0x82df4220
	if (!cr0.eq) goto loc_82DF4220;
loc_82DF421C:
	// li r11,0
	r11.s64 = 0;
loc_82DF4220:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df4274
	if (cr0.eq) goto loc_82DF4274;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82de7470
	sub_82DE7470(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df4274
	if (!cr0.eq) goto loc_82DF4274;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// rlwinm r11,r10,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// srw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82df4274
	if (!cr0.eq) goto loc_82DF4274;
	// lwzx r9,r11,r23
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r23.u32);
	// slw r10,r19,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r23
	PPC_STORE_U32(r11.u32 + r23.u32, ctx.r10.u32);
loc_82DF4274:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// ble cr6,0x82df41e4
	if (!cr6.gt) goto loc_82DF41E4;
loc_82DF4288:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df42d4
	if (cr0.eq) goto loc_82DF42D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc6c50
	sub_82DC6C50(ctx, base);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,180(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 180);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82df42d4
	if (!cr0.eq) goto loc_82DF42D4;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// slw r9,r19,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
loc_82DF42D4:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// rlwinm r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// bne cr6,0x82df41bc
	if (!cr6.eq) goto loc_82DF41BC;
loc_82DF42EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82DF42F4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82df4380
	if (!cr0.eq) goto loc_82DF4380;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82df4368
	if (cr0.eq) goto loc_82DF4368;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82df4338
	if (cr6.eq) goto loc_82DF4338;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82df4338
	if (!cr0.eq) goto loc_82DF4338;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// addi r9,r20,4
	ctx.r9.s64 = r20.s64 + 4;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// bne 0x82df433c
	if (!cr0.eq) goto loc_82DF433C;
loc_82DF4338:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82DF433C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82df4368
	if (cr0.eq) goto loc_82DF4368;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r9,r19,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r25.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + r25.u32, ctx.r9.u32);
loc_82DF4368:
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// bne cr6,0x82df42f4
	if (!cr6.eq) goto loc_82DF42F4;
loc_82DF4380:
	// lwz r11,228(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 228);
	// lwz r26,8(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
loc_82DF4390:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82df4190
	if (!cr6.eq) goto loc_82DF4190;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// bl 0x82de42e8
	sub_82DE42E8(ctx, base);
	// cmpw cr6,r21,r3
	cr6.compare<int32_t>(r21.s32, ctx.r3.s32, xer);
	// ble cr6,0x82df413c
	if (!cr6.gt) goto loc_82DF413C;
loc_82DF43B4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dca888
	sub_82DCA888(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82DF43C0:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r19
	r30.u64 = r19.u64;
	// bl 0x82de42e8
	sub_82DE42E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x82df4534
	if (cr6.lt) goto loc_82DF4534;
	// addi r29,r27,4
	r29.s64 = r27.s64 + 4;
loc_82DF43DC:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df451c
	if (!cr0.eq) goto loc_82DF451C;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82df4430
	if (!cr6.gt) goto loc_82DF4430;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_82DF4414:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82df4414
	if (cr6.lt) goto loc_82DF4414;
loc_82DF4430:
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_82DF4440:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82df4458
	if (!cr6.gt) goto loc_82DF4458;
	// li r11,0
	r11.s64 = 0;
	// b 0x82df4464
	goto loc_82DF4464;
loc_82DF4458:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r11,r19
	r11.u64 = r19.u64;
	// lwzx r7,r10,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_82DF4464:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df4500
	if (cr0.eq) goto loc_82DF4500;
	// lwz r8,100(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82df44b8
	if (cr0.eq) goto loc_82DF44B8;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82df44b0
	if (!cr6.gt) goto loc_82DF44B0;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
loc_82DF4494:
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x82df4494
	if (cr6.lt) goto loc_82DF4494;
loc_82DF44B0:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82df44f4
	goto loc_82DF44F4;
loc_82DF44B8:
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82df44f4
	if (!cr6.gt) goto loc_82DF44F4;
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_82DF44D0:
	// lwzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// or r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 | r26.u64;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// blt cr6,0x82df44d0
	if (cr6.lt) goto loc_82DF44D0;
loc_82DF44F4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x82df4440
	goto loc_82DF4440;
loc_82DF4500:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82df3df0
	sub_82DF3DF0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// or r28,r11,r10
	r28.u64 = r11.u64 | ctx.r10.u64;
loc_82DF451C:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bl 0x82de42e8
	sub_82DE42E8(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// ble cr6,0x82df43dc
	if (!cr6.gt) goto loc_82DF43DC;
loc_82DF4534:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df43c0
	if (!cr0.eq) goto loc_82DF43C0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_82DF4548"))) PPC_WEAK_FUNC(sub_82DF4548);
PPC_FUNC_IMPL(__imp__sub_82DF4548) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df4594
	if (cr0.eq) goto loc_82DF4594;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de5890
	sub_82DE5890(ctx, base);
	// b 0x82df4598
	goto loc_82DF4598;
loc_82DF4594:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF4598:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF45A0"))) PPC_WEAK_FUNC(sub_82DF45A0);
PPC_FUNC_IMPL(__imp__sub_82DF45A0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df45ec
	if (cr0.eq) goto loc_82DF45EC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de5750
	sub_82DE5750(ctx, base);
	// b 0x82df45f0
	goto loc_82DF45F0;
loc_82DF45EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF45F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF45F8"))) PPC_WEAK_FUNC(sub_82DF45F8);
PPC_FUNC_IMPL(__imp__sub_82DF45F8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,68
	ctx.r4.s64 = 68;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df4644
	if (cr0.eq) goto loc_82DF4644;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de5938
	sub_82DE5938(ctx, base);
	// b 0x82df4648
	goto loc_82DF4648;
loc_82DF4644:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF4648:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF4650"))) PPC_WEAK_FUNC(sub_82DF4650);
PPC_FUNC_IMPL(__imp__sub_82DF4650) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df469c
	if (cr0.eq) goto loc_82DF469C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de6390
	sub_82DE6390(ctx, base);
	// b 0x82df46a0
	goto loc_82DF46A0;
loc_82DF469C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF46A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF46A8"))) PPC_WEAK_FUNC(sub_82DF46A8);
PPC_FUNC_IMPL(__imp__sub_82DF46A8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df46f4
	if (cr0.eq) goto loc_82DF46F4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de5c20
	sub_82DE5C20(ctx, base);
	// b 0x82df46f8
	goto loc_82DF46F8;
loc_82DF46F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF46F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF4700"))) PPC_WEAK_FUNC(sub_82DF4700);
PPC_FUNC_IMPL(__imp__sub_82DF4700) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df474c
	if (cr0.eq) goto loc_82DF474C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de5b78
	sub_82DE5B78(ctx, base);
	// b 0x82df4750
	goto loc_82DF4750;
loc_82DF474C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF4750:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF4758"))) PPC_WEAK_FUNC(sub_82DF4758);
PPC_FUNC_IMPL(__imp__sub_82DF4758) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df47a4
	if (cr0.eq) goto loc_82DF47A4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de63d0
	sub_82DE63D0(ctx, base);
	// b 0x82df47a8
	goto loc_82DF47A8;
loc_82DF47A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF47A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF47B0"))) PPC_WEAK_FUNC(sub_82DF47B0);
PPC_FUNC_IMPL(__imp__sub_82DF47B0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df47fc
	if (cr0.eq) goto loc_82DF47FC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de6660
	sub_82DE6660(ctx, base);
	// b 0x82df4800
	goto loc_82DF4800;
loc_82DF47FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF4800:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF4808"))) PPC_WEAK_FUNC(sub_82DF4808);
PPC_FUNC_IMPL(__imp__sub_82DF4808) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df4854
	if (cr0.eq) goto loc_82DF4854;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de65f8
	sub_82DE65F8(ctx, base);
	// b 0x82df4858
	goto loc_82DF4858;
loc_82DF4854:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF4858:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF4860"))) PPC_WEAK_FUNC(sub_82DF4860);
PPC_FUNC_IMPL(__imp__sub_82DF4860) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df48ac
	if (cr0.eq) goto loc_82DF48AC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de6590
	sub_82DE6590(ctx, base);
	// b 0x82df48b0
	goto loc_82DF48B0;
loc_82DF48AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF48B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF48B8"))) PPC_WEAK_FUNC(sub_82DF48B8);
PPC_FUNC_IMPL(__imp__sub_82DF48B8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df4904
	if (cr0.eq) goto loc_82DF4904;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de6188
	sub_82DE6188(ctx, base);
	// b 0x82df4908
	goto loc_82DF4908;
loc_82DF4904:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF4908:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF4910"))) PPC_WEAK_FUNC(sub_82DF4910);
PPC_FUNC_IMPL(__imp__sub_82DF4910) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df495c
	if (cr0.eq) goto loc_82DF495C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de6420
	sub_82DE6420(ctx, base);
	// b 0x82df4960
	goto loc_82DF4960;
loc_82DF495C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF4960:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF4968"))) PPC_WEAK_FUNC(sub_82DF4968);
PPC_FUNC_IMPL(__imp__sub_82DF4968) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df49b4
	if (cr0.eq) goto loc_82DF49B4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de64a8
	sub_82DE64A8(ctx, base);
	// b 0x82df49b8
	goto loc_82DF49B8;
loc_82DF49B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF49B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF49C0"))) PPC_WEAK_FUNC(sub_82DF49C0);
PPC_FUNC_IMPL(__imp__sub_82DF49C0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df4a0c
	if (cr0.eq) goto loc_82DF4A0C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de5b20
	sub_82DE5B20(ctx, base);
	// b 0x82df4a10
	goto loc_82DF4A10;
loc_82DF4A0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF4A10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF4A18"))) PPC_WEAK_FUNC(sub_82DF4A18);
PPC_FUNC_IMPL(__imp__sub_82DF4A18) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df4a64
	if (cr0.eq) goto loc_82DF4A64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de58f0
	sub_82DE58F0(ctx, base);
	// b 0x82df4a68
	goto loc_82DF4A68;
loc_82DF4A64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF4A68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF4A70"))) PPC_WEAK_FUNC(sub_82DF4A70);
PPC_FUNC_IMPL(__imp__sub_82DF4A70) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82df4abc
	if (cr0.eq) goto loc_82DF4ABC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de6070
	sub_82DE6070(ctx, base);
	// b 0x82df4ac0
	goto loc_82DF4AC0;
loc_82DF4ABC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF4AC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF4AC8"))) PPC_WEAK_FUNC(sub_82DF4AC8);
PPC_FUNC_IMPL(__imp__sub_82DF4AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82df4ae8
	if (!cr6.eq) goto loc_82DF4AE8;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82DF4AE8:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82df4b08
	goto loc_82DF4B08;
loc_82DF4AF4:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
loc_82DF4B08:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82df4af4
	if (cr6.lt) goto loc_82DF4AF4;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF4B38"))) PPC_WEAK_FUNC(sub_82DF4B38);
PPC_FUNC_IMPL(__imp__sub_82DF4B38) {
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
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// beq 0x82df4ba0
	if (cr0.eq) goto loc_82DF4BA0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,24148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24148);
	// bl 0x82df7888
	sub_82DF7888(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82df4b98
	if (cr6.lt) goto loc_82DF4B98;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-17840
	ctx.r6.s64 = r11.s64 + -17840;
	// addi r5,r10,-17752
	ctx.r5.s64 = ctx.r10.s64 + -17752;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,638
	ctx.r7.s64 = 638;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF4B98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82df4bac
	goto loc_82DF4BAC;
loc_82DF4BA0:
	// lwz r11,24148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24148);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
loc_82DF4BAC:
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

__attribute__((alias("__imp__sub_82DF4BC0"))) PPC_WEAK_FUNC(sub_82DF4BC0);
PPC_FUNC_IMPL(__imp__sub_82DF4BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// bne cr6,0x82df4c0c
	if (!cr6.eq) goto loc_82DF4C0C;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-17840
	ctx.r6.s64 = r11.s64 + -17840;
	// addi r5,r10,-17732
	ctx.r5.s64 = ctx.r10.s64 + -17732;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,690
	ctx.r7.s64 = 690;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
loc_82DF4C0C:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// blt cr6,0x82df4c18
	if (cr6.lt) goto loc_82DF4C18;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82DF4C18:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// mr r11,r31
	r11.u64 = r31.u64;
	// bgt cr6,0x82df4c28
	if (cr6.gt) goto loc_82DF4C28;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82DF4C28:
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82DF4C58"))) PPC_WEAK_FUNC(sub_82DF4C58);
PPC_FUNC_IMPL(__imp__sub_82DF4C58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x82df4d0c
	if (!cr6.eq) goto loc_82DF4D0C;
	// li r29,0
	r29.s64 = 0;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82df4cc8
	if (!cr6.eq) goto loc_82DF4CC8;
	// lwz r28,1456(r6)
	r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1456);
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r29.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x82df4d08
	goto loc_82DF4D08;
loc_82DF4CC8:
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82df4d00
	if (!cr6.eq) goto loc_82DF4D00;
	// lwz r31,1456(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1456);
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r29,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r29.u32);
loc_82DF4D00:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
loc_82DF4D08:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82DF4D0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF4D18"))) PPC_WEAK_FUNC(sub_82DF4D18);
PPC_FUNC_IMPL(__imp__sub_82DF4D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r9,8
	r11.s64 = ctx.r9.s64 + 8;
loc_82DF4D30:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82df4d30
	if (cr6.lt) goto loc_82DF4D30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF4D50"))) PPC_WEAK_FUNC(sub_82DF4D50);
PPC_FUNC_IMPL(__imp__sub_82DF4D50) {
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
	// bl 0x82df4bc0
	sub_82DF4BC0(ctx, base);
	// rlwinm r11,r3,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
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

__attribute__((alias("__imp__sub_82DF4DA0"))) PPC_WEAK_FUNC(sub_82DF4DA0);
PPC_FUNC_IMPL(__imp__sub_82DF4DA0) {
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
	// bl 0x82df4bc0
	sub_82DF4BC0(ctx, base);
	// rlwinm r10,r3,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r8,r3,27
	ctx.r8.u64 = ctx.r3.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82DF4DF8"))) PPC_WEAK_FUNC(sub_82DF4DF8);
PPC_FUNC_IMPL(__imp__sub_82DF4DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,228(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// lwz r3,56(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// rlwinm. r11,r11,25,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,24144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24144);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF4E20"))) PPC_WEAK_FUNC(sub_82DF4E20);
PPC_FUNC_IMPL(__imp__sub_82DF4E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// lwz r11,24148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24148);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// lwz r27,1456(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 1456);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82df4e88
	if (cr0.eq) goto loc_82DF4E88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 1456);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// b 0x82df4e8c
	goto loc_82DF4E8C;
loc_82DF4E88:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82DF4E8C:
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82DF4EA0"))) PPC_WEAK_FUNC(sub_82DF4EA0);
PPC_FUNC_IMPL(__imp__sub_82DF4EA0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df4ed8
	if (!cr6.lt) goto loc_82DF4ED8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82df4ee0
	goto loc_82DF4EE0;
loc_82DF4ED8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF4EE0:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lwz r22,0(r3)
	r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82df4efc
	if (!cr6.eq) goto loc_82DF4EFC;
	// lwz r11,8(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// b 0x82df4f24
	goto loc_82DF4F24;
loc_82DF4EFC:
	// addi r10,r11,28
	ctx.r10.s64 = r11.s64 + 28;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82df4f14
	goto loc_82DF4F14;
loc_82DF4F08:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r11,28
	ctx.r10.s64 = r11.s64 + 28;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 28);
loc_82DF4F14:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82df4f08
	if (!cr6.eq) goto loc_82DF4F08;
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
loc_82DF4F24:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82df4ac8
	sub_82DF4AC8(ctx, base);
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df4f54
	if (!cr6.lt) goto loc_82DF4F54;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df4f5c
	goto loc_82DF4F5C;
loc_82DF4F54:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF4F5C:
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// mr r26,r24
	r26.u64 = r24.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r29,8(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82df5010
	if (!cr6.gt) goto loc_82DF5010;
	// lis r28,-31943
	r28.s64 = -2093416448;
loc_82DF4F80:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(r30.s32, 7, xer);
	// bne cr6,0x82df4f94
	if (!cr6.eq) goto loc_82DF4F94;
	// lwz r29,28(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82DF4F94:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r11,24148(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24148);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r29
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x82df4d50
	sub_82DF4D50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df5000
	if (!cr0.eq) goto loc_82DF5000;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r6,8(r23)
	ctx.r6.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82df4c58
	sub_82DF4C58(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stwx r31,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,24148(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24148);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82df4da0
	sub_82DF4DA0(ctx, base);
loc_82DF5000:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82df4f80
	if (cr6.lt) goto loc_82DF4F80;
loc_82DF5010:
	// stw r24,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r24.u32);
	// stw r24,8(r22)
	PPC_STORE_U32(r22.u32 + 8, r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82DF5020"))) PPC_WEAK_FUNC(sub_82DF5020);
PPC_FUNC_IMPL(__imp__sub_82DF5020) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r5.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82df5130
	if (cr6.eq) goto loc_82DF5130;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1456);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r3,24148(r11)
	PPC_STORE_U32(r11.u32 + 24148, ctx.r3.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r29,1456(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x82df5094
	if (cr0.eq) goto loc_82DF5094;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// b 0x82df5098
	goto loc_82DF5098;
loc_82DF5094:
	// li r30,0
	r30.s64 = 0;
loc_82DF5098:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82df510c
	if (!cr6.gt) goto loc_82DF510C;
loc_82DF50AC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,1456(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82df50e8
	if (cr0.eq) goto loc_82DF50E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82df4e20
	sub_82DF4E20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82df50ec
	goto loc_82DF50EC;
loc_82DF50E8:
	// li r30,0
	r30.s64 = 0;
loc_82DF50EC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82df50ac
	if (cr6.lt) goto loc_82DF50AC;
loc_82DF510C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// lwz r4,1456(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r3,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x82dc7828
	sub_82DC7828(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82DF5130:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DF5140"))) PPC_WEAK_FUNC(sub_82DF5140);
PPC_FUNC_IMPL(__imp__sub_82DF5140) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bge cr6,0x82df5174
	if (!cr6.lt) goto loc_82DF5174;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82df5180
	goto loc_82DF5180;
loc_82DF5174:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82DF5180:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df51a0
	if (!cr6.lt) goto loc_82DF51A0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df51a8
	goto loc_82DF51A8;
loc_82DF51A0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF51A8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DF51C8"))) PPC_WEAK_FUNC(sub_82DF51C8);
PPC_FUNC_IMPL(__imp__sub_82DF51C8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,16(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// lwz r4,1456(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r30,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r30.s64 = temp.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dc7828
	sub_82DC7828(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r10,r11,r30
	ctx.r10.s64 = r30.s64 - r11.s64;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// addic. r10,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x82df5270
	if (!cr0.gt) goto loc_82DF5270;
loc_82DF5220:
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// srw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82df5258
	if (cr0.eq) goto loc_82DF5258;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_82DF5258:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82df5220
	if (cr6.lt) goto loc_82DF5220;
loc_82DF5270:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82df5284
	if (cr6.eq) goto loc_82DF5284;
	// addi r4,r29,-4
	ctx.r4.s64 = r29.s64 + -4;
	// lwz r3,-4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
loc_82DF5284:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r30,-31943
	r30.s64 = -2093416448;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,24148(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 24148);
	// lwz r3,1456(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r3,24148(r30)
	PPC_STORE_U32(r30.u32 + 24148, ctx.r3.u32);
	// ble cr6,0x82df52d0
	if (!cr6.gt) goto loc_82DF52D0;
	// li r11,0
	r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x82df52bc
	goto loc_82DF52BC;
loc_82DF52B8:
	// lwz r3,24148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24148);
loc_82DF52BC:
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82df52b8
	if (!cr0.eq) goto loc_82DF52B8;
loc_82DF52D0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,1456(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82df531c
	if (cr0.eq) goto loc_82DF531C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82df4e20
	sub_82DF4E20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82df5320
	goto loc_82DF5320;
loc_82DF531C:
	// li r30,0
	r30.s64 = 0;
loc_82DF5320:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF5338"))) PPC_WEAK_FUNC(sub_82DF5338);
PPC_FUNC_IMPL(__imp__sub_82DF5338) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
	// beq cr6,0x82df547c
	if (cr6.eq) goto loc_82DF547C;
	// bl 0x82df4d50
	sub_82DF4D50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df547c
	if (!cr0.eq) goto loc_82DF547C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82df4da0
	sub_82DF4DA0(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82df5394
	if (!cr6.lt) goto loc_82DF5394;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df539c
	goto loc_82DF539C;
loc_82DF5394:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF539C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82df4ac8
	sub_82DF4AC8(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82df53cc
	if (!cr6.lt) goto loc_82DF53CC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df53d4
	goto loc_82DF53D4;
loc_82DF53CC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF53D4:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82df4c58
	sub_82DF4C58(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r31.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df5418
	if (!cr6.lt) goto loc_82DF5418;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df5420
	goto loc_82DF5420;
loc_82DF5418:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF5420:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82df4ac8
	sub_82DF4AC8(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df5450
	if (!cr6.lt) goto loc_82DF5450;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df5458
	goto loc_82DF5458;
loc_82DF5450:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF5458:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82df4c58
	sub_82DF4C58(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
loc_82DF547C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DF5488"))) PPC_WEAK_FUNC(sub_82DF5488);
PPC_FUNC_IMPL(__imp__sub_82DF5488) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82df54f0
	if (!cr6.gt) goto loc_82DF54F0;
	// li r30,0
	r30.s64 = 0;
loc_82DF54AC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df54c8
	if (!cr6.lt) goto loc_82DF54C8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x82df54d0
	goto loc_82DF54D0;
loc_82DF54C8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF54D0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82df54ac
	if (cr6.lt) goto loc_82DF54AC;
loc_82DF54F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DF54F8"))) PPC_WEAK_FUNC(sub_82DF54F8);
PPC_FUNC_IMPL(__imp__sub_82DF54F8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// bne cr6,0x82df5520
	if (!cr6.eq) goto loc_82DF5520;
loc_82DF5518:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82df55a4
	goto loc_82DF55A4;
loc_82DF5520:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82df4d50
	sub_82DF4D50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df55a0
	if (!cr0.eq) goto loc_82DF55A0;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// mr r31,r29
	r31.u64 = r29.u64;
	// blt cr6,0x82df5550
	if (cr6.lt) goto loc_82DF5550;
	// mr r31,r30
	r31.u64 = r30.u64;
	// ble cr6,0x82df5550
	if (!cr6.gt) goto loc_82DF5550;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82DF5550:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,24148(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 24148);
	// bl 0x82df78e8
	sub_82DF78E8(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df5584
	if (!cr6.lt) goto loc_82DF5584;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df558c
	goto loc_82DF558C;
loc_82DF5584:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF558C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82df4ea0
	sub_82DF4EA0(ctx, base);
	// b 0x82df5518
	goto loc_82DF5518;
loc_82DF55A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF55A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF55B0"))) PPC_WEAK_FUNC(sub_82DF55B0);
PPC_FUNC_IMPL(__imp__sub_82DF55B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82df55e8
	if (!cr6.lt) goto loc_82DF55E8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82df55ec
	goto loc_82DF55EC;
loc_82DF55E8:
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF55EC:
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,-1
	r30.s64 = -1;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r29,8(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82df56f0
	if (!cr6.gt) goto loc_82DF56F0;
loc_82DF5608:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(r30.s32, 7, xer);
	// bne cr6,0x82df561c
	if (!cr6.eq) goto loc_82DF561C;
	// lwz r29,28(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r30,0
	r30.s64 = 0;
loc_82DF561C:
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwzx r31,r11,r29
	r31.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df5644
	if (!cr6.lt) goto loc_82DF5644;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df564c
	goto loc_82DF564C;
loc_82DF5644:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF564C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82df56e0
	if (!cr6.gt) goto loc_82DF56E0;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df567c
	if (!cr6.lt) goto loc_82DF567C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df5684
	goto loc_82DF5684;
loc_82DF567C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF5684:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df56b4
	if (!cr6.lt) goto loc_82DF56B4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82df56bc
	goto loc_82DF56BC;
loc_82DF56B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF56BC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r24,-1
	ctx.r10.s64 = r24.s64 + -1;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82df56e0
	if (!cr6.eq) goto loc_82DF56E0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82DF56E0:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82df5608
	if (cr6.lt) goto loc_82DF5608;
loc_82DF56F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82DF56F8"))) PPC_WEAK_FUNC(sub_82DF56F8);
PPC_FUNC_IMPL(__imp__sub_82DF56F8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82df5730
	goto loc_82DF5730;
loc_82DF5710:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// beq 0x82df5730
	if (cr0.eq) goto loc_82DF5730;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
loc_82DF5730:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82df5710
	if (!cr6.eq) goto loc_82DF5710;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df5750
	if (cr6.eq) goto loc_82DF5750;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ddc958
	sub_82DDC958(ctx, base);
loc_82DF5750:
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

__attribute__((alias("__imp__sub_82DF5768"))) PPC_WEAK_FUNC(sub_82DF5768);
PPC_FUNC_IMPL(__imp__sub_82DF5768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0af4
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r15,1
	r15.s64 = 1;
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r26,r11
	r26.u64 = r11.u64;
	// bgt cr6,0x82df5790
	if (cr6.gt) goto loc_82DF5790;
	// mr r26,r15
	r26.u64 = r15.u64;
loc_82DF5790:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r30,1456(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// li r18,0
	r18.s64 = 0;
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x82df57cc
	if (cr0.eq) goto loc_82DF57CC;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// mr r27,r31
	r27.u64 = r31.u64;
	// b 0x82df57d0
	goto loc_82DF57D0;
loc_82DF57CC:
	// mr r27,r18
	r27.u64 = r18.u64;
loc_82DF57D0:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r30,1456(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x82df5808
	if (cr0.eq) goto loc_82DF5808;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// mr r19,r31
	r19.u64 = r31.u64;
	// b 0x82df580c
	goto loc_82DF580C;
loc_82DF5808:
	// mr r19,r18
	r19.u64 = r18.u64;
loc_82DF580C:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// mr r28,r18
	r28.u64 = r18.u64;
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1452);
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// lis r17,-31943
	r17.s64 = -2093416448;
	// mr r11,r18
	r11.u64 = r18.u64;
	// stw r3,24144(r17)
	PPC_STORE_U32(r17.u32 + 24144, ctx.r3.u32);
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82df5874
	if (!cr6.gt) goto loc_82DF5874;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// b 0x82df5848
	goto loc_82DF5848;
loc_82DF5844:
	// lwz r3,24144(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 24144);
loc_82DF5848:
	// lwz r9,12(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x82df585c
	if (cr6.lt) goto loc_82DF585C;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82DF585C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r9,16(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82df5844
	if (cr6.lt) goto loc_82DF5844;
loc_82DF5874:
	// lwz r31,12(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// lis r16,-31943
	r16.s64 = -2093416448;
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x82df5994
	if (!cr6.lt) goto loc_82DF5994;
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DF588C:
	// lwz r11,24148(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 24148);
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x82df5980
	if (!cr6.eq) goto loc_82DF5980;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df58bc
	if (!cr6.lt) goto loc_82DF58BC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
	// b 0x82df58c8
	goto loc_82DF58C8;
loc_82DF58BC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82DF58C8:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df58e4
	if (!cr6.lt) goto loc_82DF58E4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x82df58ec
	goto loc_82DF58EC;
loc_82DF58E4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF58EC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df5918
	if (!cr6.lt) goto loc_82DF5918;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x82df5920
	goto loc_82DF5920;
loc_82DF5918:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF5920:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df593c
	if (!cr6.eq) goto loc_82DF593C;
	// lwz r4,4(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// b 0x82df5978
	goto loc_82DF5978;
loc_82DF593C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df5958
	if (!cr6.lt) goto loc_82DF5958;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x82df5960
	goto loc_82DF5960;
loc_82DF5958:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF5960:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bge cr6,0x82df5980
	if (!cr6.lt) goto loc_82DF5980;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82DF5978:
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82DF5980:
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82df588c
	if (cr6.lt) goto loc_82DF588C;
loc_82DF5994:
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// mr r20,r18
	r20.u64 = r18.u64;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x82df5ab8
	if (cr6.eq) goto loc_82DF5AB8;
	// addi r29,r26,-1
	r29.s64 = r26.s64 + -1;
loc_82DF59A8:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// b 0x82df5a10
	goto loc_82DF5A10;
loc_82DF59B0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dce120
	sub_82DCE120(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r4,4(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df59ec
	if (!cr6.lt) goto loc_82DF59EC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82df59f4
	goto loc_82DF59F4;
loc_82DF59EC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF59F4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r18,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r18.u32);
	// bl 0x82df55b0
	sub_82DF55B0(ctx, base);
loc_82DF5A10:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82df59b0
	if (!cr6.eq) goto loc_82DF59B0;
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x82df5ab8
	if (cr6.eq) goto loc_82DF5AB8;
	// lwz r31,12(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x82df5aac
	if (!cr6.lt) goto loc_82DF5AAC;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DF5A44:
	// lwz r11,24148(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 24148);
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x82df5a98
	if (!cr6.eq) goto loc_82DF5A98;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df5a70
	if (!cr6.lt) goto loc_82DF5A70;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x82df5a78
	goto loc_82DF5A78;
loc_82DF5A70:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF5A78:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bne cr6,0x82df5a98
	if (!cr6.eq) goto loc_82DF5A98;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82DF5A98:
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82df5a44
	if (cr6.lt) goto loc_82DF5A44;
loc_82DF5AAC:
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bne cr6,0x82df59a8
	if (!cr6.eq) goto loc_82DF59A8;
loc_82DF5AB8:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// mr r22,r18
	r22.u64 = r18.u64;
	// lwz r10,1360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1360);
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// lwz r23,2736(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 2736);
	// lwz r21,4(r10)
	r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82dc7828
	sub_82DC7828(ctx, base);
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df5d4c
	if (cr6.eq) goto loc_82DF5D4C;
	// lwz r24,80(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82DF5AEC:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82df5b18
	if (!cr6.gt) goto loc_82DF5B18;
	// addi r11,r26,8
	r11.s64 = r26.s64 + 8;
loc_82DF5B00:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r18,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r18.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82df5b00
	if (cr6.lt) goto loc_82DF5B00;
loc_82DF5B18:
	// mr r31,r18
	r31.u64 = r18.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x82df5b64
	if (!cr6.gt) goto loc_82DF5B64;
loc_82DF5B24:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82dd8390
	sub_82DD8390(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df5b58
	if (!cr0.eq) goto loc_82DF5B58;
	// rlwinm r11,r31,27,5,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// slw r10,r15,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, ctx.r10.u32);
loc_82DF5B58:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r21
	cr6.compare<int32_t>(r31.s32, r21.s32, xer);
	// blt cr6,0x82df5b24
	if (cr6.lt) goto loc_82DF5B24;
loc_82DF5B64:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82dce120
	sub_82DCE120(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x82df5b90
	if (!cr6.lt) goto loc_82DF5B90;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82df5b9c
	goto loc_82DF5B9C;
loc_82DF5B90:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF5B9C:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82df5c18
	if (!cr6.gt) goto loc_82DF5C18;
loc_82DF5BB8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x82df5bcc
	if (!cr6.eq) goto loc_82DF5BCC;
	// lwz r7,28(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_82DF5BCC:
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,24144(r17)
	ctx.r8.u64 = PPC_LOAD_U32(r17.u32 + 24144);
	// lwzx r11,r11,r7
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82df5c08
	if (cr6.lt) goto loc_82DF5C08;
	// rlwinm r8,r11,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// slw r5,r15,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (r15.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r26
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwx r8,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, ctx.r8.u32);
loc_82DF5C08:
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// blt cr6,0x82df5bb8
	if (cr6.lt) goto loc_82DF5BB8;
loc_82DF5C18:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r27,r18
	r27.u64 = r18.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82df5c3c
	if (!cr6.lt) goto loc_82DF5C3C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82df5c44
	goto loc_82DF5C44;
loc_82DF5C3C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF5C44:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r18
	r31.u64 = r18.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82df5d0c
	if (!cr6.gt) goto loc_82DF5D0C;
	// mr r29,r18
	r29.u64 = r18.u64;
loc_82DF5C60:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82df5c80
	if (!cr6.lt) goto loc_82DF5C80;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82df5c88
	goto loc_82DF5C88;
loc_82DF5C80:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF5C88:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df5ca8
	if (!cr6.lt) goto loc_82DF5CA8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x82df5cb0
	goto loc_82DF5CB0;
loc_82DF5CA8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF5CB0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24144(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 24144);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82df5cec
	if (cr6.lt) goto loc_82DF5CEC;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82df5d00
	if (cr0.eq) goto loc_82DF5D00;
loc_82DF5CEC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x82df5c60
	if (cr6.lt) goto loc_82DF5C60;
	// b 0x82df5d0c
	goto loc_82DF5D0C;
loc_82DF5D00:
	// mr r24,r11
	r24.u64 = r11.u64;
	// mr r27,r15
	r27.u64 = r15.u64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
loc_82DF5D0C:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df5d28
	if (!cr0.eq) goto loc_82DF5D28;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ddbbb0
	sub_82DDBBB0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// beq cr6,0x82df5e00
	if (cr6.eq) goto loc_82DF5E00;
loc_82DF5D28:
	// lwz r11,24144(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 24144);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stwx r24,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r24.u32);
	// bl 0x82dd83c8
	sub_82DD83C8(ctx, base);
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82df5aec
	if (!cr6.eq) goto loc_82DF5AEC;
loc_82DF5D4C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82df5d60
	if (cr6.eq) goto loc_82DF5D60;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// lwz r3,-4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -4);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
loc_82DF5D60:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82dd8518
	sub_82DD8518(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// addi r4,r11,-17576
	ctx.r4.s64 = r11.s64 + -17576;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lwz r11,2080(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 2080);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// ble cr6,0x82df5da4
	if (!cr6.gt) goto loc_82DF5DA4;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r11,-17644
	ctx.r4.s64 = r11.s64 + -17644;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82DF5DA4:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r11,-17712
	ctx.r4.s64 = r11.s64 + -17712;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82df5df8
	if (!cr6.lt) goto loc_82DF5DF8;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82DF5DCC:
	// lwz r8,24148(r16)
	ctx.r8.u64 = PPC_LOAD_U32(r16.u32 + 24148);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,24144(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 24144);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r8,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,16(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82df5dcc
	if (cr6.lt) goto loc_82DF5DCC;
loc_82DF5DF8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b44
	return;
loc_82DF5E00:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// li r10,22
	ctx.r10.s64 = 22;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r10,1364(r11)
	PPC_STORE_U32(r11.u32 + 1364, ctx.r10.u32);
	// bl 0x831b6790
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
}

__attribute__((alias("__imp__sub_82DF5E18"))) PPC_WEAK_FUNC(sub_82DF5E18);
PPC_FUNC_IMPL(__imp__sub_82DF5E18) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82df5e94
	if (!cr6.gt) goto loc_82DF5E94;
	// li r29,0
	r29.s64 = 0;
loc_82DF5E3C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82df5e58
	if (!cr6.lt) goto loc_82DF5E58;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x82df5e60
	goto loc_82DF5E60;
loc_82DF5E58:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF5E60:
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82df5e80
	if (cr6.eq) goto loc_82DF5E80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82df56f8
	sub_82DF56F8(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
loc_82DF5E80:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82df5e3c
	if (cr6.lt) goto loc_82DF5E3C;
loc_82DF5E94:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df5ea8
	if (cr6.eq) goto loc_82DF5EA8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ddc958
	sub_82DDC958(ctx, base);
loc_82DF5EA8:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r4,24148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24148);
	// lwz r3,1456(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// bl 0x82dad448
	sub_82DAD448(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF5EC8"))) PPC_WEAK_FUNC(sub_82DF5EC8);
PPC_FUNC_IMPL(__imp__sub_82DF5EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df5f24
	if (cr6.eq) goto loc_82DF5F24;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_82DF5ED8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - r11.s64;
loc_82DF5EEC:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82df5f2c
	if (!cr6.eq) goto loc_82DF5F2C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, xer);
	// blt cr6,0x82df5eec
	if (cr6.lt) goto loc_82DF5EEC;
	// li r11,1
	r11.s64 = 1;
loc_82DF5F10:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82df5ed8
	if (!cr6.eq) goto loc_82DF5ED8;
loc_82DF5F24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82DF5F2C:
	// li r11,0
	r11.s64 = 0;
	// b 0x82df5f10
	goto loc_82DF5F10;
}

__attribute__((alias("__imp__sub_82DF5F38"))) PPC_WEAK_FUNC(sub_82DF5F38);
PPC_FUNC_IMPL(__imp__sub_82DF5F38) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82df5f68
	if (!cr6.eq) goto loc_82DF5F68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82df5fec
	goto loc_82DF5FEC;
loc_82DF5F68:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mulli r11,r6,12
	r11.s64 = ctx.r6.s64 * 12;
	// cmpw cr6,r6,r30
	cr6.compare<int32_t>(ctx.r6.s32, r30.s32, xer);
	// ble cr6,0x82df5f80
	if (!cr6.gt) goto loc_82DF5F80;
	// mulli r11,r31,12
	r11.s64 = r31.s64 * 12;
loc_82DF5F80:
	// add r4,r11,r5
	ctx.r4.u64 = r11.u64 + ctx.r5.u64;
	// bl 0x82df5ec8
	sub_82DF5EC8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df5fec
	if (cr0.eq) goto loc_82DF5FEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r31,12
	ctx.r10.s64 = r31.s64 * 12;
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
loc_82DF5FB8:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82df6004
	if (!cr6.eq) goto loc_82DF6004;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r9,12
	cr6.compare<int32_t>(ctx.r9.s32, 12, xer);
	// blt cr6,0x82df5fb8
	if (cr6.lt) goto loc_82DF5FB8;
	// li r11,1
	r11.s64 = 1;
loc_82DF5FDC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_82DF5FEC:
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
loc_82DF6004:
	// li r11,0
	r11.s64 = 0;
	// b 0x82df5fdc
	goto loc_82DF5FDC;
}

__attribute__((alias("__imp__sub_82DF6010"))) PPC_WEAK_FUNC(sub_82DF6010);
PPC_FUNC_IMPL(__imp__sub_82DF6010) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r6,r30
	cr6.compare<int32_t>(ctx.r6.s32, r30.s32, xer);
	// bgt cr6,0x82df60b0
	if (cr6.gt) goto loc_82DF60B0;
	// mulli r11,r6,12
	r11.s64 = ctx.r6.s64 * 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r4,r11,r5
	ctx.r4.u64 = r11.u64 + ctx.r5.u64;
	// bl 0x82df5ec8
	sub_82DF5EC8(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r6,r30
	ctx.r9.s64 = r30.s64 - ctx.r6.s64;
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82df60b0
	if (cr6.gt) goto loc_82DF60B0;
loc_82DF6064:
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmpw cr6,r6,r30
	cr6.compare<int32_t>(ctx.r6.s32, r30.s32, xer);
	// bgt cr6,0x82df6090
	if (cr6.gt) goto loc_82DF6090;
	// mulli r11,r6,12
	r11.s64 = ctx.r6.s64 * 12;
	// add r4,r11,r5
	ctx.r4.u64 = r11.u64 + ctx.r5.u64;
	// bl 0x82df5ec8
	sub_82DF5EC8(ctx, base);
loc_82DF6090:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r7,r10,r11
	ctx.r7.s64 = r11.s64 - ctx.r10.s64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// ble cr6,0x82df6064
	if (!cr6.gt) goto loc_82DF6064;
loc_82DF60B0:
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

__attribute__((alias("__imp__sub_82DF60C8"))) PPC_WEAK_FUNC(sub_82DF60C8);
PPC_FUNC_IMPL(__imp__sub_82DF60C8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82df60f0
	if (!cr6.gt) goto loc_82DF60F0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82df61f0
	goto loc_82DF61F0;
loc_82DF60F0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwz r31,20(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r28,0
	r28.s64 = 0;
	// add r8,r11,r4
	ctx.r8.u64 = r11.u64 + ctx.r4.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
loc_82DF6108:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - r11.s64;
loc_82DF611C:
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x82df6154
	if (!cr6.eq) goto loc_82DF6154;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, xer);
	// blt cr6,0x82df611c
	if (cr6.lt) goto loc_82DF611C;
	// li r11,1
	r11.s64 = 1;
loc_82DF6140:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df615c
	if (!cr0.eq) goto loc_82DF615C;
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,16(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// b 0x82df6108
	goto loc_82DF6108;
loc_82DF6154:
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x82df6140
	goto loc_82DF6140;
loc_82DF615C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r26,1456(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// beq 0x82df619c
	if (cr0.eq) goto loc_82DF619C;
	// lis r11,16384
	r11.s64 = 1073741824;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r28.u32);
	// b 0x82df61a0
	goto loc_82DF61A0;
loc_82DF619C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82DF61A0:
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r28.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
	// bne cr6,0x82df61ec
	if (!cr6.eq) goto loc_82DF61EC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r3,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r3.u32);
	// b 0x82df61f0
	goto loc_82DF61F0;
loc_82DF61EC:
	// stw r3,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r3.u32);
loc_82DF61F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82DF61F8"))) PPC_WEAK_FUNC(sub_82DF61F8);
PPC_FUNC_IMPL(__imp__sub_82DF61F8) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r28
	r26.u64 = r28.u64;
	// bl 0x82df5f38
	sub_82DF5F38(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82df6300
	if (!cr0.eq) goto loc_82DF6300;
loc_82DF6230:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82df60c8
	sub_82DF60C8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r24,1456(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// beq 0x82df6278
	if (cr0.eq) goto loc_82DF6278;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
	// stw r28,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r28.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r28,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r28.u32);
	// b 0x82df627c
	goto loc_82DF627C;
loc_82DF6278:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82DF627C:
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r28,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r28.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// stw r28,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r28.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// beq cr6,0x82df62a0
	if (cr6.eq) goto loc_82DF62A0;
	// stw r30,32(r26)
	PPC_STORE_U32(r26.u32 + 32, r30.u32);
loc_82DF62A0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r26,r30
	r26.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bne cr6,0x82df62d4
	if (!cr6.eq) goto loc_82DF62D4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82df62d4
	if (cr6.gt) goto loc_82DF62D4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r25,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r25.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82DF62D4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82df6010
	sub_82DF6010(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82df5f38
	sub_82DF5F38(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82df6230
	if (cr0.eq) goto loc_82DF6230;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
loc_82DF6300:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82DF6308"))) PPC_WEAK_FUNC(sub_82DF6308);
PPC_FUNC_IMPL(__imp__sub_82DF6308) {
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
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// li r5,380
	ctx.r5.s64 = 380;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r26,1456(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 1456);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// beq 0x82df6380
	if (cr0.eq) goto loc_82DF6380;
	// lis r11,16384
	r11.s64 = 1073741824;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// b 0x82df6384
	goto loc_82DF6384;
loc_82DF6380:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82DF6384:
	// li r11,-1
	r11.s64 = -1;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// addic. r29,r29,1
	xer.ca = r29.u32 > 4294967294;
	r29.s64 = r29.s64 + 1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// ble 0x82df6408
	if (!cr0.gt) goto loc_82DF6408;
loc_82DF63B8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82df63d4
	if (!cr6.eq) goto loc_82DF63D4;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_82DF63D4:
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df6010
	sub_82DF6010(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df61f8
	sub_82DF61F8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x82df63b8
	if (cr6.lt) goto loc_82DF63B8;
loc_82DF6408:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82DF6418"))) PPC_WEAK_FUNC(sub_82DF6418);
PPC_FUNC_IMPL(__imp__sub_82DF6418) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r28,1456(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x82df6460
	if (cr0.eq) goto loc_82DF6460;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 1456);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// b 0x82df6464
	goto loc_82DF6464;
loc_82DF6460:
	// li r31,0
	r31.s64 = 0;
loc_82DF6464:
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF6478"))) PPC_WEAK_FUNC(sub_82DF6478);
PPC_FUNC_IMPL(__imp__sub_82DF6478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b14
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,96(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r27,0
	r27.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r23,r11
	r23.u64 = r11.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82df6648
	if (!cr0.gt) goto loc_82DF6648;
	// li r25,0
	r25.s64 = 0;
loc_82DF64A0:
	// addi r24,r27,1
	r24.s64 = r27.s64 + 1;
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// bge cr6,0x82df6638
	if (!cr6.lt) goto loc_82DF6638;
	// addi r26,r25,4
	r26.s64 = r25.s64 + 4;
loc_82DF64B4:
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x82df64c8
	if (!cr6.lt) goto loc_82DF64C8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x82df64d4
	goto loc_82DF64D4;
loc_82DF64C8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF64D4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bge cr6,0x82df64f8
	if (!cr6.lt) goto loc_82DF64F8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x82df6504
	goto loc_82DF6504;
loc_82DF64F8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF6504:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mullw r29,r11,r30
	r29.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// bge cr6,0x82df652c
	if (!cr6.lt) goto loc_82DF652C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// b 0x82df6538
	goto loc_82DF6538;
loc_82DF652C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF6538:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bge cr6,0x82df655c
	if (!cr6.lt) goto loc_82DF655C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// b 0x82df6568
	goto loc_82DF6568;
loc_82DF655C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF6568:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x82df6624
	if (!cr6.lt) goto loc_82DF6624;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x82df6598
	if (!cr6.lt) goto loc_82DF6598;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x82df65a4
	goto loc_82DF65A4;
loc_82DF6598:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF65A4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x82df65c0
	if (!cr6.lt) goto loc_82DF65C0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r30,r11,r26
	r30.u64 = r11.u64 + r26.u64;
	// b 0x82df65d0
	goto loc_82DF65D0;
loc_82DF65C0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82DF65D0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x82df65e8
	if (!cr6.lt) goto loc_82DF65E8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// b 0x82df65f4
	goto loc_82DF65F4;
loc_82DF65E8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF65F4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x82df6614
	if (!cr6.lt) goto loc_82DF6614;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// b 0x82df6620
	goto loc_82DF6620;
loc_82DF6614:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF6620:
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_82DF6624:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82df64b4
	if (cr6.lt) goto loc_82DF64B4;
loc_82DF6638:
	// mr r27,r24
	r27.u64 = r24.u64;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpw cr6,r24,r23
	cr6.compare<int32_t>(r24.s32, r23.s32, xer);
	// blt cr6,0x82df64a0
	if (cr6.lt) goto loc_82DF64A0;
loc_82DF6648:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82DF6650"))) PPC_WEAK_FUNC(sub_82DF6650);
PPC_FUNC_IMPL(__imp__sub_82DF6650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b14
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,1456(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// li r24,0
	r24.s64 = 0;
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x82df669c
	if (cr0.eq) goto loc_82DF669C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 1456);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// mr r26,r31
	r26.u64 = r31.u64;
	// b 0x82df66a0
	goto loc_82DF66A0;
loc_82DF669C:
	// mr r26,r24
	r26.u64 = r24.u64;
loc_82DF66A0:
	// stw r24,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r24.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,1456(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r24
	r27.u64 = r24.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x82df66d8
	if (cr0.eq) goto loc_82DF66D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 1456);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// mr r28,r31
	r28.u64 = r31.u64;
	// b 0x82df66dc
	goto loc_82DF66DC;
loc_82DF66D8:
	// mr r28,r24
	r28.u64 = r24.u64;
loc_82DF66DC:
	// lwz r31,20(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r29,r24
	r29.u64 = r24.u64;
loc_82DF66E4:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df677c
	if (!cr0.eq) goto loc_82DF677C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df6750
	if (cr6.eq) goto loc_82DF6750;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bge 0x82df6714
	if (!cr0.lt) goto loc_82DF6714;
	// stw r24,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r24.u32);
loc_82DF6714:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,20(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// b 0x82df66e4
	goto loc_82DF66E4;
loc_82DF6750:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82df676c
	if (!cr6.eq) goto loc_82DF676C;
	// stw r31,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r31.u32);
loc_82DF676C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82df6778
	if (cr6.eq) goto loc_82DF6778;
	// stw r31,32(r27)
	PPC_STORE_U32(r27.u32 + 32, r31.u32);
loc_82DF6778:
	// mr r27,r31
	r27.u64 = r31.u64;
loc_82DF677C:
	// mr r11,r31
	r11.u64 = r31.u64;
	// lwz r31,16(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82df66e4
	if (!cr6.eq) goto loc_82DF66E4;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df67b0
	if (!cr6.eq) goto loc_82DF67B0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82df67ac
	if (cr6.eq) goto loc_82DF67AC;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
loc_82DF67AC:
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
loc_82DF67B0:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df67fc
	if (cr6.eq) goto loc_82DF67FC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// bl 0x82dce120
	sub_82DCE120(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,1
	r29.s64 = 1;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82df66e4
	if (!cr6.eq) goto loc_82DF66E4;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df67f0
	if (cr6.eq) goto loc_82DF67F0;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// b 0x82df67f4
	goto loc_82DF67F4;
loc_82DF67F0:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82DF67F4:
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// b 0x82df66e4
	goto loc_82DF66E4;
loc_82DF67FC:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df68d4
	if (cr6.eq) goto loc_82DF68D4;
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x82df6824
	if (!cr6.lt) goto loc_82DF6824;
loc_82DF6818:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// b 0x82df6830
	goto loc_82DF6830;
loc_82DF6824:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF6830:
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82df68c0
	if (!cr6.gt) goto loc_82DF68C0;
	// lwz r31,1456(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 1456);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// beq 0x82df6870
	if (cr0.eq) goto loc_82DF6870;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82df6418
	sub_82DF6418(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82df6874
	goto loc_82DF6874;
loc_82DF6870:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82DF6874:
	// lwz r3,96(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r31,24(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 24);
loc_82DF6890:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82df68ac
	if (cr6.eq) goto loc_82DF68AC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82DF68AC:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82df68c0
	if (cr6.eq) goto loc_82DF68C0;
	// lwz r31,32(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// b 0x82df6890
	goto loc_82DF6890;
loc_82DF68C0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82df6818
	if (cr6.lt) goto loc_82DF6818;
loc_82DF68D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82DF68E0"))) PPC_WEAK_FUNC(sub_82DF68E0);
PPC_FUNC_IMPL(__imp__sub_82DF68E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0af4
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82df6308
	sub_82DF6308(ctx, base);
	// lwz r27,1456(r21)
	r27.u64 = PPC_LOAD_U32(r21.u32 + 1456);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// li r19,0
	r19.s64 = 0;
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82df6940
	if (cr0.eq) goto loc_82DF6940;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 1456);
	// bl 0x82dc6b98
	sub_82DC6B98(ctx, base);
	// b 0x82df6944
	goto loc_82DF6944;
loc_82DF6940:
	// mr r30,r19
	r30.u64 = r19.u64;
loc_82DF6944:
	// stw r30,96(r20)
	PPC_STORE_U32(r20.u32 + 96, r30.u32);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82df6650
	sub_82DF6650(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82df6478
	sub_82DF6478(ctx, base);
	// rlwinm r4,r31,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82dad9d0
	sub_82DAD9D0(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r11,r19
	r11.u64 = r19.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82df69a0
	if (!cr6.gt) goto loc_82DF69A0;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_82DF6988:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r19.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// blt cr6,0x82df6988
	if (cr6.lt) goto loc_82DF6988;
loc_82DF69A0:
	// lwz r11,96(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 96);
	// li r17,-1
	r17.s64 = -1;
	// mr r16,r19
	r16.u64 = r19.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82df6d98
	if (!cr6.gt) goto loc_82DF6D98;
	// mr r15,r19
	r15.u64 = r19.u64;
loc_82DF69BC:
	// lwz r3,96(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 96);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(r16.u32, r11.u32, xer);
	// bge cr6,0x82df69d8
	if (!cr6.lt) goto loc_82DF69D8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r15
	ctx.r3.u64 = r11.u64 + r15.u64;
	// b 0x82df69e0
	goto loc_82DF69E0;
loc_82DF69D8:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF69E0:
	// lwz r22,0(r3)
	r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,1
	r29.s64 = 1;
	// mr r31,r19
	r31.u64 = r19.u64;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// lwz r23,0(r22)
	r23.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82df6a84
	if (!cr6.gt) goto loc_82DF6A84;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_82DF6A04:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df6a1c
	if (!cr6.lt) goto loc_82DF6A1C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x82df6a24
	goto loc_82DF6A24;
loc_82DF6A1C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF6A24:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ble cr6,0x82df6a6c
	if (!cr6.gt) goto loc_82DF6A6C;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r18
	r11.u64 = r11.u64 + r18.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82DF6A40:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82df6a68
	if (!cr6.eq) goto loc_82DF6A68;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r10,r23
	cr6.compare<int32_t>(ctx.r10.s32, r23.s32, xer);
	// blt cr6,0x82df6a40
	if (cr6.lt) goto loc_82DF6A40;
	// b 0x82df6a6c
	goto loc_82DF6A6C;
loc_82DF6A68:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_82DF6A6C:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82df6a04
	if (cr6.lt) goto loc_82DF6A04;
loc_82DF6A84:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82df6b1c
	if (!cr0.eq) goto loc_82DF6B1C;
	// mr r31,r19
	r31.u64 = r19.u64;
	// ble cr6,0x82df6d80
	if (!cr6.gt) goto loc_82DF6D80;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_82DF6AA4:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82df6abc
	if (!cr6.lt) goto loc_82DF6ABC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x82df6ac4
	goto loc_82DF6AC4;
loc_82DF6ABC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF6AC4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ble cr6,0x82df6b00
	if (!cr6.gt) goto loc_82DF6B00;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r18
	r11.u64 = r11.u64 + r18.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82DF6AE0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x82df6b00
	if (!cr6.eq) goto loc_82DF6B00;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r19,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r19.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r10,r23
	cr6.compare<int32_t>(ctx.r10.s32, r23.s32, xer);
	// blt cr6,0x82df6ae0
	if (cr6.lt) goto loc_82DF6AE0;
loc_82DF6B00:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82df6aa4
	if (cr6.lt) goto loc_82DF6AA4;
	// b 0x82df6d80
	goto loc_82DF6D80;
loc_82DF6B1C:
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// mr r26,r19
	r26.u64 = r19.u64;
	// ble cr6,0x82df6d80
	if (!cr6.gt) goto loc_82DF6D80;
	// mr r24,r19
	r24.u64 = r19.u64;
loc_82DF6B2C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bge cr6,0x82df6b44
	if (!cr6.lt) goto loc_82DF6B44;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r24
	ctx.r3.u64 = r11.u64 + r24.u64;
	// b 0x82df6b4c
	goto loc_82DF6B4C;
loc_82DF6B44:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82de4548
	sub_82DE4548(ctx, base);
loc_82DF6B4C:
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r19
	r28.u64 = r19.u64;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ble cr6,0x82df6d68
	if (!cr6.gt) goto loc_82DF6D68;
	// addi r25,r23,-1
	r25.s64 = r23.s64 + -1;
loc_82DF6B60:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82df6c4c
	if (!cr6.eq) goto loc_82DF6C4C;
	// lwz r11,52(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 52);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82df6bc8
	if (cr6.eq) goto loc_82DF6BC8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82df6bc4
	if (cr6.eq) goto loc_82DF6BC4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82df6bc8
	if (cr6.eq) goto loc_82DF6BC8;
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x82df6bbc
	goto loc_82DF6BBC;
loc_82DF6B9C:
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df6bc8
	if (!cr0.eq) goto loc_82DF6BC8;
loc_82DF6BBC:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bne cr6,0x82df6b9c
	if (!cr6.eq) goto loc_82DF6B9C;
loc_82DF6BC4:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82DF6BC8:
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r21)
	r30.u64 = PPC_LOAD_U32(r21.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bne cr6,0x82df6c10
	if (!cr6.eq) goto loc_82DF6C10;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82df6c38
	if (cr0.eq) goto loc_82DF6C38;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82de8698
	sub_82DE8698(ctx, base);
	// b 0x82df6c3c
	goto loc_82DF6C3C;
loc_82DF6C10:
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82df6c38
	if (cr0.eq) goto loc_82DF6C38;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82de8640
	sub_82DE8640(ctx, base);
	// b 0x82df6c3c
	goto loc_82DF6C3C;
loc_82DF6C38:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_82DF6C3C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de9a60
	sub_82DE9A60(ctx, base);
loc_82DF6C4C:
	// cmpw cr6,r28,r25
	cr6.compare<int32_t>(r28.s32, r25.s32, xer);
	// bne cr6,0x82df6d2c
	if (!cr6.eq) goto loc_82DF6D2C;
	// add r10,r28,r27
	ctx.r10.u64 = r28.u64 + r27.u64;
	// lwz r11,52(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 52);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82df6cb4
	if (cr6.eq) goto loc_82DF6CB4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82df6cb8
	if (cr6.eq) goto loc_82DF6CB8;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x82df6cb4
	if (cr6.eq) goto loc_82DF6CB4;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82df6cac
	goto loc_82DF6CAC;
loc_82DF6C8C:
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df6cb8
	if (!cr0.eq) goto loc_82DF6CB8;
loc_82DF6CAC:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bne cr6,0x82df6c8c
	if (!cr6.eq) goto loc_82DF6C8C;
loc_82DF6CB4:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82DF6CB8:
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r21)
	r30.u64 = PPC_LOAD_U32(r21.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bne cr6,0x82df6cf8
	if (!cr6.eq) goto loc_82DF6CF8;
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82df6d18
	if (cr0.eq) goto loc_82DF6D18;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82de8748
	sub_82DE8748(ctx, base);
	// b 0x82df6d1c
	goto loc_82DF6D1C;
loc_82DF6CF8:
	// bl 0x82dad2c0
	sub_82DAD2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82df6d18
	if (cr0.eq) goto loc_82DF6D18;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82de86f0
	sub_82DE86F0(ctx, base);
	// b 0x82df6d1c
	goto loc_82DF6D1C;
loc_82DF6D18:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_82DF6D1C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82de9a00
	sub_82DE9A00(ctx, base);
loc_82DF6D2C:
	// add r11,r28,r27
	r11.u64 = r28.u64 + r27.u64;
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r28,r23
	cr6.compare<int32_t>(r28.s32, r23.s32, xer);
	// add r9,r11,r18
	ctx.r9.u64 = r11.u64 + r18.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// blt cr6,0x82df6b60
	if (cr6.lt) goto loc_82DF6B60;
loc_82DF6D68:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82df6b2c
	if (cr6.lt) goto loc_82DF6B2C;
loc_82DF6D80:
	// lwz r11,96(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 96);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(r16.u32, r11.u32, xer);
	// blt cr6,0x82df69bc
	if (cr6.lt) goto loc_82DF69BC;
loc_82DF6D98:
	// addi r5,r17,1
	ctx.r5.s64 = r17.s64 + 1;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r5,1532(r21)
	PPC_STORE_U32(r21.u32 + 1532, ctx.r5.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r4,r11,-17508
	ctx.r4.s64 = r11.s64 + -17508;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r3,1444(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 1444);
	// lwz r11,1436(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 1436);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b44
	return;
}

__attribute__((alias("__imp__sub_82DF6DD0"))) PPC_WEAK_FUNC(sub_82DF6DD0);
PPC_FUNC_IMPL(__imp__sub_82DF6DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x82df6e00
	if (cr6.lt) goto loc_82DF6E00;
	// li r27,43
	r27.s64 = 43;
	// b 0x82df6e08
	goto loc_82DF6E08;
loc_82DF6E00:
	// li r27,45
	r27.s64 = 45;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_82DF6E08:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r28
	r11.s64 = r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f30,26548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26548);
	f30.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,-32320
	r29.s64 = r11.s64 + -32320;
	// fsubs f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fctiwz f0,f31
	f0.s64 = (f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82DF6E4C:
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// fmuls f31,f0,f30
	f31.f64 = double(float(f0.f64 * f30.f64));
	// fctiwz f0,f31
	f0.s64 = (f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x831b1630
	sub_831B1630(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,9
	cr6.compare<int32_t>(r31.s32, 9, xer);
	// blt cr6,0x82df6e4c
	if (cr6.lt) goto loc_82DF6E4C;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, r11.u8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-17468
	ctx.r4.s64 = ctx.r10.s64 + -17468;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// extsb r5,r27
	ctx.r5.s64 = r27.s8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831b1630
	sub_831B1630(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82DF6EC8"))) PPC_WEAK_FUNC(sub_82DF6EC8);
PPC_FUNC_IMPL(__imp__sub_82DF6EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-31950
	r11.s64 = -2093875200;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,11416
	r29.s64 = r11.s64 + 11416;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82df6efc
	if (cr0.eq) goto loc_82DF6EFC;
	// li r11,0
	r11.s64 = 0;
	// b 0x82df6f0c
	goto loc_82DF6F0C;
loc_82DF6EFC:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// rlwinm r11,r11,29,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
loc_82DF6F0C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df6f24
	if (!cr0.eq) goto loc_82DF6F24;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-17448
	r11.s64 = r11.s64 + -17448;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// b 0x82df6f68
	goto loc_82DF6F68;
loc_82DF6F24:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df6f74
	if (!cr0.eq) goto loc_82DF6F74;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-17448
	r11.s64 = r11.s64 + -17448;
	// beq 0x82df6f64
	if (cr0.eq) goto loc_82DF6F64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x82df6f68
	goto loc_82DF6F68;
loc_82DF6F64:
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82DF6F68:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r30,r10,r11
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
loc_82DF6F74:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF6F90"))) PPC_WEAK_FUNC(sub_82DF6F90);
PPC_FUNC_IMPL(__imp__sub_82DF6F90) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-31950
	r11.s64 = -2093875200;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,11416
	r29.s64 = r11.s64 + 11416;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82df6fc0
	if (cr0.eq) goto loc_82DF6FC0;
	// li r11,0
	r11.s64 = 0;
	// b 0x82df6fd0
	goto loc_82DF6FD0;
loc_82DF6FC0:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// rlwinm r11,r11,29,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
loc_82DF6FD0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df6fe8
	if (!cr0.eq) goto loc_82DF6FE8;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-17448
	r11.s64 = r11.s64 + -17448;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// b 0x82df702c
	goto loc_82DF702C;
loc_82DF6FE8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df703c
	if (!cr0.eq) goto loc_82DF703C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-17448
	r11.s64 = r11.s64 + -17448;
	// beq 0x82df7028
	if (cr0.eq) goto loc_82DF7028;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x82df702c
	goto loc_82DF702C;
loc_82DF7028:
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82DF702C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_82DF703C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82df706c
	if (!cr6.eq) goto loc_82DF706C;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r6,r11,-17128
	ctx.r6.s64 = r11.s64 + -17128;
	// addi r5,r10,-17144
	ctx.r5.s64 = ctx.r10.s64 + -17144;
	// addi r4,r9,28456
	ctx.r4.s64 = ctx.r9.s64 + 28456;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF706C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DF7078"))) PPC_WEAK_FUNC(sub_82DF7078);
PPC_FUNC_IMPL(__imp__sub_82DF7078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r27,r10,-17384
	r27.s64 = ctx.r10.s64 + -17384;
	// addi r29,r11,-18416
	r29.s64 = r11.s64 + -18416;
	// ble 0x82df7100
	if (!cr0.gt) goto loc_82DF7100;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// addi r10,r29,6
	ctx.r10.s64 = r29.s64 + 6;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82df70f0
	if (cr0.eq) goto loc_82DF70F0;
	// lbz r10,159(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 159);
	// li r26,1
	r26.s64 = 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82df70f0
	if (cr0.eq) goto loc_82DF70F0;
	// li r25,1
	r25.s64 = 1;
loc_82DF70F0:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	r30.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82df723c
	if (cr6.eq) goto loc_82DF723C;
loc_82DF7100:
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r28,r11,11416
	r28.s64 = r11.s64 + 11416;
	// mulli r11,r10,52
	r11.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df71c4
	if (cr0.eq) goto loc_82DF71C4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x82df7154
	if (cr6.gt) goto loc_82DF7154;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df71c4
	if (cr0.eq) goto loc_82DF71C4;
loc_82DF7154:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r29,6
	ctx.r10.s64 = r29.s64 + 6;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r11,58
	ctx.r9.s64 = r11.s64 + 58;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwz r9,80(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82df71b4
	if (cr0.eq) goto loc_82DF71B4;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lbz r11,158(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 158);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82df71b4
	if (cr0.eq) goto loc_82DF71B4;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_82DF71B4:
	// mulli r11,r30,5
	r11.s64 = r30.s64 * 5;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	r30.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
loc_82DF71C4:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82df723c
	if (cr6.eq) goto loc_82DF723C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df723c
	if (cr0.eq) goto loc_82DF723C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x82df723c
	if (!cr6.gt) goto loc_82DF723C;
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// addi r10,r29,6
	ctx.r10.s64 = r29.s64 + 6;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82df722c
	if (cr0.eq) goto loc_82DF722C;
	// lbz r11,161(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 161);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82df722c
	if (cr0.eq) goto loc_82DF722C;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_82DF722C:
	// mulli r11,r30,5
	r11.s64 = r30.s64 * 5;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	r30.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
loc_82DF723C:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82df724c
	if (cr6.gt) goto loc_82DF724C;
	// li r11,0
	r11.s64 = 0;
loc_82DF724C:
	// stb r11,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df7274
	if (cr0.eq) goto loc_82DF7274;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bgt cr6,0x82df7288
	if (cr6.gt) goto loc_82DF7288;
loc_82DF7274:
	// lbz r11,0(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82df728c
	if (cr0.eq) goto loc_82DF728C;
	// cmpw cr6,r25,r26
	cr6.compare<int32_t>(r25.s32, r26.s32, xer);
	// bge cr6,0x82df728c
	if (!cr6.lt) goto loc_82DF728C;
loc_82DF7288:
	// li r30,-1
	r30.s64 = -1;
loc_82DF728C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82DF7298"))) PPC_WEAK_FUNC(sub_82DF7298);
PPC_FUNC_IMPL(__imp__sub_82DF7298) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df72d0
	if (cr0.eq) goto loc_82DF72D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82df73e0
	goto loc_82DF73E0;
loc_82DF72D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82df7078
	sub_82DF7078(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// addi r29,r11,28456
	r29.s64 = r11.s64 + 28456;
	// addi r28,r10,-17128
	r28.s64 = ctx.r10.s64 + -17128;
	// bne cr6,0x82df7314
	if (!cr6.eq) goto loc_82DF7314;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-17000
	ctx.r5.s64 = r11.s64 + -17000;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,169
	ctx.r7.s64 = 169;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF7314:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82df7340
	if (cr6.eq) goto loc_82DF7340;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x82df7340
	if (cr6.eq) goto loc_82DF7340;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82df7340
	if (cr6.eq) goto loc_82DF7340;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82df73e0
	goto loc_82DF73E0;
loc_82DF7340:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// addi r9,r9,11416
	ctx.r9.s64 = ctx.r9.s64 + 11416;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82df7390
	if (cr0.eq) goto loc_82DF7390;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// ble cr6,0x82df7380
	if (!cr6.gt) goto loc_82DF7380;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-17020
	ctx.r5.s64 = r11.s64 + -17020;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,182
	ctx.r7.s64 = 182;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF7380:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mulli r11,r11,5
	r11.s64 = r11.s64 * 5;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// b 0x82df73c0
	goto loc_82DF73C0;
loc_82DF7390:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x82df73b4
	if (!cr6.gt) goto loc_82DF73B4;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-17040
	ctx.r5.s64 = r11.s64 + -17040;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,185
	ctx.r7.s64 = 185;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF73B4:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mulli r10,r31,5
	ctx.r10.s64 = r31.s64 * 5;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_82DF73C0:
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-17384
	ctx.r10.s64 = ctx.r10.s64 + -17384;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_82DF73E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82DF73E8"))) PPC_WEAK_FUNC(sub_82DF73E8);
PPC_FUNC_IMPL(__imp__sub_82DF73E8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df7568
	if (!cr0.eq) goto loc_82DF7568;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82df7078
	sub_82DF7078(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// addi r28,r11,28456
	r28.s64 = r11.s64 + 28456;
	// addi r27,r10,-17128
	r27.s64 = ctx.r10.s64 + -17128;
	// bne cr6,0x82df745c
	if (!cr6.eq) goto loc_82DF745C;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-17000
	ctx.r5.s64 = r11.s64 + -17000;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,202
	ctx.r7.s64 = 202;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF745C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df7474
	if (!cr6.eq) goto loc_82DF7474;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,8(r29)
	PPC_STORE_U8(r29.u32 + 8, r11.u8);
	// b 0x82df74a8
	goto loc_82DF74A8;
loc_82DF7474:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x82df74a8
	if (cr6.eq) goto loc_82DF74A8;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82df74a8
	if (cr6.eq) goto loc_82DF74A8;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-16980
	ctx.r5.s64 = r11.s64 + -16980;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,207
	ctx.r7.s64 = 207;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF74A8:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// addi r10,r10,11416
	ctx.r10.s64 = ctx.r10.s64 + 11416;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df74f8
	if (cr0.eq) goto loc_82DF74F8;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// ble cr6,0x82df74e8
	if (!cr6.gt) goto loc_82DF74E8;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-17020
	ctx.r5.s64 = r11.s64 + -17020;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,211
	ctx.r7.s64 = 211;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF74E8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r11,5
	r11.s64 = r11.s64 * 5;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// b 0x82df752c
	goto loc_82DF752C;
loc_82DF74F8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x82df7520
	if (!cr6.gt) goto loc_82DF7520;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-17040
	ctx.r5.s64 = r11.s64 + -17040;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,214
	ctx.r7.s64 = 214;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF7520:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r10,r31,5
	ctx.r10.s64 = r31.s64 * 5;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_82DF752C:
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-17384
	ctx.r10.s64 = ctx.r10.s64 + -17384;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82df7568
	if (!cr6.eq) goto loc_82DF7568;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-17144
	ctx.r5.s64 = r11.s64 + -17144;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,218
	ctx.r7.s64 = 218;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
loc_82DF7568:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82DF7570"))) PPC_WEAK_FUNC(sub_82DF7570);
PPC_FUNC_IMPL(__imp__sub_82DF7570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,228(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// lis r11,-31950
	r11.s64 = -2093875200;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,11416
	r11.s64 = r11.s64 + 11416;
	// beq 0x82df758c
	if (cr0.eq) goto loc_82DF758C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82df759c
	goto loc_82DF759C;
loc_82DF758C:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_82DF759C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82df75b4
	if (!cr0.eq) goto loc_82DF75B4;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
loc_82DF75B4:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82df75d8
	if (cr0.eq) goto loc_82DF75D8;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// blr 
	return;
loc_82DF75D8:
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF75F0"))) PPC_WEAK_FUNC(sub_82DF75F0);
PPC_FUNC_IMPL(__imp__sub_82DF75F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,228(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// lis r11,-31950
	r11.s64 = -2093875200;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,11416
	r11.s64 = r11.s64 + 11416;
	// beq 0x82df760c
	if (cr0.eq) goto loc_82DF760C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82df761c
	goto loc_82DF761C;
loc_82DF760C:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_82DF761C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82df7634
	if (!cr0.eq) goto loc_82DF7634;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
loc_82DF7634:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82df7658
	if (cr0.eq) goto loc_82DF7658;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// blr 
	return;
loc_82DF7658:
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF7670"))) PPC_WEAK_FUNC(sub_82DF7670);
PPC_FUNC_IMPL(__imp__sub_82DF7670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82df769c
	if (!cr6.gt) goto loc_82DF769C;
	// lwz r11,228(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df7694
	if (!cr0.eq) goto loc_82DF7694;
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// bne cr6,0x82df769c
	if (!cr6.eq) goto loc_82DF769C;
loc_82DF7694:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82DF769C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF76A8"))) PPC_WEAK_FUNC(sub_82DF76A8);
PPC_FUNC_IMPL(__imp__sub_82DF76A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,104
	cr6.compare<int32_t>(r11.s32, 104, xer);
	// beq cr6,0x82df76f8
	if (cr6.eq) goto loc_82DF76F8;
	// cmpwi cr6,r11,105
	cr6.compare<int32_t>(r11.s32, 105, xer);
	// beq cr6,0x82df76f8
	if (cr6.eq) goto loc_82DF76F8;
	// cmpwi cr6,r11,106
	cr6.compare<int32_t>(r11.s32, 106, xer);
	// beq cr6,0x82df76f8
	if (cr6.eq) goto loc_82DF76F8;
	// cmpwi cr6,r11,107
	cr6.compare<int32_t>(r11.s32, 107, xer);
	// beq cr6,0x82df76f8
	if (cr6.eq) goto loc_82DF76F8;
	// cmpwi cr6,r11,108
	cr6.compare<int32_t>(r11.s32, 108, xer);
	// beq cr6,0x82df76f8
	if (cr6.eq) goto loc_82DF76F8;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(r11.s32, 109, xer);
	// beq cr6,0x82df76f8
	if (cr6.eq) goto loc_82DF76F8;
	// cmpwi cr6,r11,110
	cr6.compare<int32_t>(r11.s32, 110, xer);
	// beq cr6,0x82df76f8
	if (cr6.eq) goto loc_82DF76F8;
	// cmpwi cr6,r11,111
	cr6.compare<int32_t>(r11.s32, 111, xer);
	// beq cr6,0x82df76f8
	if (cr6.eq) goto loc_82DF76F8;
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(r11.s32, 112, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82df76fc
	if (!cr6.eq) goto loc_82DF76FC;
loc_82DF76F8:
	// li r11,1
	r11.s64 = 1;
loc_82DF76FC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF7708"))) PPC_WEAK_FUNC(sub_82DF7708);
PPC_FUNC_IMPL(__imp__sub_82DF7708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,113
	cr6.compare<int32_t>(r11.s32, 113, xer);
	// beq cr6,0x82df7730
	if (cr6.eq) goto loc_82DF7730;
	// cmpwi cr6,r11,114
	cr6.compare<int32_t>(r11.s32, 114, xer);
	// beq cr6,0x82df7730
	if (cr6.eq) goto loc_82DF7730;
	// cmpwi cr6,r11,115
	cr6.compare<int32_t>(r11.s32, 115, xer);
	// beq cr6,0x82df7730
	if (cr6.eq) goto loc_82DF7730;
	// cmpwi cr6,r11,116
	cr6.compare<int32_t>(r11.s32, 116, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82df7734
	if (!cr6.eq) goto loc_82DF7734;
loc_82DF7730:
	// li r11,1
	r11.s64 = 1;
loc_82DF7734:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF7740"))) PPC_WEAK_FUNC(sub_82DF7740);
PPC_FUNC_IMPL(__imp__sub_82DF7740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x82df7770
	if (cr6.eq) goto loc_82DF7770;
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(r11.s32, 99, xer);
	// beq cr6,0x82df7770
	if (cr6.eq) goto loc_82DF7770;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// beq cr6,0x82df7770
	if (cr6.eq) goto loc_82DF7770;
	// cmpwi cr6,r11,142
	cr6.compare<int32_t>(r11.s32, 142, xer);
	// beq cr6,0x82df7770
	if (cr6.eq) goto loc_82DF7770;
	// cmpwi cr6,r11,143
	cr6.compare<int32_t>(r11.s32, 143, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82df7774
	if (!cr6.eq) goto loc_82DF7774;
loc_82DF7770:
	// li r11,1
	r11.s64 = 1;
loc_82DF7774:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF7780"))) PPC_WEAK_FUNC(sub_82DF7780);
PPC_FUNC_IMPL(__imp__sub_82DF7780) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82df7860
	if (!cr6.eq) goto loc_82DF7860;
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df77d0
	if (cr0.eq) goto loc_82DF77D0;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// bne cr6,0x82df77d0
	if (!cr6.eq) goto loc_82DF77D0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82de6788
	sub_82DE6788(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82df786c
	if (!cr0.eq) goto loc_82DF786C;
loc_82DF77D0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df7858
	if (cr0.eq) goto loc_82DF7858;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df7814
	if (cr0.eq) goto loc_82DF7814;
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82df786c
	if (cr6.eq) goto loc_82DF786C;
loc_82DF7814:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df7858
	if (cr0.eq) goto loc_82DF7858;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df7858
	if (cr0.eq) goto loc_82DF7858;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82df786c
	if (cr6.eq) goto loc_82DF786C;
loc_82DF7858:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82df7870
	goto loc_82DF7870;
loc_82DF7860:
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82df7870
	if (cr6.eq) goto loc_82DF7870;
loc_82DF786C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF7870:
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

__attribute__((alias("__imp__sub_82DF7888"))) PPC_WEAK_FUNC(sub_82DF7888);
PPC_FUNC_IMPL(__imp__sub_82DF7888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// beq cr6,0x82df78b8
	if (cr6.eq) goto loc_82DF78B8;
loc_82DF78A0:
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82df78a0
	if (!cr6.eq) goto loc_82DF78A0;
loc_82DF78B8:
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x82df78dc
	if (cr6.eq) goto loc_82DF78DC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82DF78C4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bne cr6,0x82df78c4
	if (!cr6.eq) goto loc_82DF78C4;
loc_82DF78DC:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF78E8"))) PPC_WEAK_FUNC(sub_82DF78E8);
PPC_FUNC_IMPL(__imp__sub_82DF78E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r5
	PPC_STORE_U32(r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF78F8"))) PPC_WEAK_FUNC(sub_82DF78F8);
PPC_FUNC_IMPL(__imp__sub_82DF78F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df794c
	if (cr0.eq) goto loc_82DF794C;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x82df7940
	if (cr6.lt) goto loc_82DF7940;
	// beq cr6,0x82df7934
	if (cr6.eq) goto loc_82DF7934;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x82df7928
	if (cr6.lt) goto loc_82DF7928;
	// bne cr6,0x82df794c
	if (!cr6.eq) goto loc_82DF794C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,26,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3;
	// blr 
	return;
loc_82DF7928:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,28,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
	// blr 
	return;
loc_82DF7934:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,30,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3;
	// blr 
	return;
loc_82DF7940:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,30
	ctx.r3.u64 = r11.u32 & 0x3;
	// blr 
	return;
loc_82DF794C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF7958"))) PPC_WEAK_FUNC(sub_82DF7958);
PPC_FUNC_IMPL(__imp__sub_82DF7958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df79b0
	if (cr0.eq) goto loc_82DF79B0;
	// blt cr6,0x82df79a4
	if (cr6.lt) goto loc_82DF79A4;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x82df7998
	if (cr6.eq) goto loc_82DF7998;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x82df798c
	if (cr6.lt) goto loc_82DF798C;
	// bne cr6,0x82df79c8
	if (!cr6.eq) goto loc_82DF79C8;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,20,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	// blr 
	return;
loc_82DF798C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
loc_82DF7998:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
loc_82DF79A4:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// blr 
	return;
loc_82DF79B0:
	// blt cr6,0x82df79e8
	if (cr6.lt) goto loc_82DF79E8;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x82df79e0
	if (cr6.eq) goto loc_82DF79E0;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x82df79d8
	if (cr6.lt) goto loc_82DF79D8;
	// beq cr6,0x82df79d0
	if (cr6.eq) goto loc_82DF79D0;
loc_82DF79C8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82DF79D0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82DF79D8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82DF79E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82DF79E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF79F0"))) PPC_WEAK_FUNC(sub_82DF79F0);
PPC_FUNC_IMPL(__imp__sub_82DF79F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df7a08
	if (cr0.eq) goto loc_82DF7A08;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// andi. r3,r11,34952
	ctx.r3.u64 = r11.u64 & 34952;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blr 
	return;
loc_82DF7A08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF7A10"))) PPC_WEAK_FUNC(sub_82DF7A10);
PPC_FUNC_IMPL(__imp__sub_82DF7A10) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df7ac4
	if (cr0.eq) goto loc_82DF7AC4;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r27,0
	r27.s64 = 0;
	// addi r31,r9,28456
	r31.s64 = ctx.r9.s64 + 28456;
	// addi r30,r10,-21684
	r30.s64 = ctx.r10.s64 + -21684;
	// addi r29,r11,-16768
	r29.s64 = r11.s64 + -16768;
loc_82DF7A48:
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// blt cr6,0x82df7aa0
	if (cr6.lt) goto loc_82DF7AA0;
	// beq cr6,0x82df7a94
	if (cr6.eq) goto loc_82DF7A94;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(r27.u32, 3, xer);
	// blt cr6,0x82df7a88
	if (cr6.lt) goto loc_82DF7A88;
	// beq cr6,0x82df7a7c
	if (cr6.eq) goto loc_82DF7A7C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,166
	ctx.r7.s64 = 166;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cea8b0
	sub_82CEA8B0(ctx, base);
	// b 0x82df7ab8
	goto loc_82DF7AB8;
loc_82DF7A7C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,26,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3;
	// b 0x82df7aa8
	goto loc_82DF7AA8;
loc_82DF7A88:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,28,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
	// b 0x82df7aa8
	goto loc_82DF7AA8;
loc_82DF7A94:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,30,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3;
	// b 0x82df7aa8
	goto loc_82DF7AA8;
loc_82DF7AA0:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
loc_82DF7AA8:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82df7ad0
	if (cr6.eq) goto loc_82DF7AD0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82df7ad0
	if (cr6.eq) goto loc_82DF7AD0;
loc_82DF7AB8:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(r27.s32, 4, xer);
	// blt cr6,0x82df7a48
	if (cr6.lt) goto loc_82DF7A48;
loc_82DF7AC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF7AC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_82DF7AD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82df7ac8
	goto loc_82DF7AC8;
}

__attribute__((alias("__imp__sub_82DF7AD8"))) PPC_WEAK_FUNC(sub_82DF7AD8);
PPC_FUNC_IMPL(__imp__sub_82DF7AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r11,r4,7
	r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r3
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df7b18
	if (cr0.eq) goto loc_82DF7B18;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// b 0x82df7b1c
	goto loc_82DF7B1C;
loc_82DF7B18:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82DF7B1C:
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

__attribute__((alias("__imp__sub_82DF7B30"))) PPC_WEAK_FUNC(sub_82DF7B30);
PPC_FUNC_IMPL(__imp__sub_82DF7B30) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82df7ba0
	if (cr6.eq) goto loc_82DF7BA0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df7ba0
	if (cr6.eq) goto loc_82DF7BA0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df7ba0
	if (cr6.eq) goto loc_82DF7BA0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82df7dc8
	sub_82DF7DC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82df7ba4
	if (!cr0.eq) goto loc_82DF7BA4;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,24160
	ctx.r3.s64 = r11.s64 + 24160;
	// bl 0x82df7c58
	sub_82DF7C58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bge 0x82df7ba4
	if (!cr0.lt) goto loc_82DF7BA4;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82df7ba4
	goto loc_82DF7BA4;
loc_82DF7BA0:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82DF7BA4:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF7BB8"))) PPC_WEAK_FUNC(sub_82DF7BB8);
PPC_FUNC_IMPL(__imp__sub_82DF7BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,-23092
	ctx.r3.s64 = r11.s64 + -23092;
	// b 0x82df7b30
	sub_82DF7B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7BC8"))) PPC_WEAK_FUNC(sub_82DF7BC8);
PPC_FUNC_IMPL(__imp__sub_82DF7BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82df7dd8
	sub_82DF7DD8(ctx, base);
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

__attribute__((alias("__imp__sub_82DF7BF0"))) PPC_WEAK_FUNC(sub_82DF7BF0);
PPC_FUNC_IMPL(__imp__sub_82DF7BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x82bd5268
	sub_82BD5268(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82df7c4c
	if (!cr0.eq) goto loc_82DF7C4C;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8324b8ac
	__imp__XamUserReadProfileSettings(ctx, base);
loc_82DF7C4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82DF7C58"))) PPC_WEAK_FUNC(sub_82DF7C58);
PPC_FUNC_IMPL(__imp__sub_82DF7C58) {
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
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r30,44
	ctx.r9.s64 = r30.s64 + 44;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df7c94
	if (cr0.eq) goto loc_82DF7C94;
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
	// b 0x82df7d10
	goto loc_82DF7D10;
loc_82DF7C94:
	// lhz r8,38(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 38);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82df7ca8
	if (cr0.eq) goto loc_82DF7CA8;
	// stw r9,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_82DF7CA8:
	// lhz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 40);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rotlwi r11,r10,2
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lhz r6,42(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 42);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - r11.s64;
	// lhz r5,26(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 26);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lhz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 24);
	// lhz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r9,-44
	ctx.r10.s64 = ctx.r9.s64 + -44;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// mullw r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
loc_82DF7D10:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DF7D20"))) PPC_WEAK_FUNC(sub_82DF7D20);
PPC_FUNC_IMPL(__imp__sub_82DF7D20) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8324b15c
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8202
	r11.s64 = 537526272;
	// ori r11,r11,12800
	r11.u64 = r11.u64 | 12800;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82df7d90
	if (cr6.lt) goto loc_82DF7D90;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,-14312
	ctx.r3.s64 = r11.s64 + -14312;
	// bl 0x8324b9dc
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82df7d90
	if (cr0.lt) goto loc_82DF7D90;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x8324b3dc
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82df7d90
	if (!cr0.lt) goto loc_82DF7D90;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82df7d94
	goto loc_82DF7D94;
loc_82DF7D90:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82DF7D94:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82df7dbc
	if (cr6.eq) goto loc_82DF7DBC;
	// lis r6,8222
	ctx.r6.s64 = 538836992;
	// ori r6,r6,24576
	ctx.r6.u64 = ctx.r6.u64 | 24576;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82df7dc0
	goto loc_82DF7DC0;
loc_82DF7DBC:
	// bl 0x8324b8bc
	__imp__NetDll_WSAStartup(ctx, base);
loc_82DF7DC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DF7DC8"))) PPC_WEAK_FUNC(sub_82DF7DC8);
PPC_FUNC_IMPL(__imp__sub_82DF7DC8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82df7d20
	sub_82DF7D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7DD8"))) PPC_WEAK_FUNC(sub_82DF7DD8);
PPC_FUNC_IMPL(__imp__sub_82DF7DD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8324b8cc
	__imp__NetDll_WSACleanup(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7DE0"))) PPC_WEAK_FUNC(sub_82DF7DE0);
PPC_FUNC_IMPL(__imp__sub_82DF7DE0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8324b8dc
	__imp__NetDll_socket(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7DF8"))) PPC_WEAK_FUNC(sub_82DF7DF8);
PPC_FUNC_IMPL(__imp__sub_82DF7DF8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8324b8ec
	__imp__NetDll_closesocket(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7E08"))) PPC_WEAK_FUNC(sub_82DF7E08);
PPC_FUNC_IMPL(__imp__sub_82DF7E08) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8324b8fc
	__imp__NetDll_setsockopt(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7E28"))) PPC_WEAK_FUNC(sub_82DF7E28);
PPC_FUNC_IMPL(__imp__sub_82DF7E28) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8324b90c
	__imp__NetDll_bind(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7E40"))) PPC_WEAK_FUNC(sub_82DF7E40);
PPC_FUNC_IMPL(__imp__sub_82DF7E40) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8324b91c
	__imp__NetDll_connect(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7E58"))) PPC_WEAK_FUNC(sub_82DF7E58);
PPC_FUNC_IMPL(__imp__sub_82DF7E58) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8324b92c
	__imp__NetDll_listen(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7E68"))) PPC_WEAK_FUNC(sub_82DF7E68);
PPC_FUNC_IMPL(__imp__sub_82DF7E68) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8324b93c
	__imp__NetDll_accept(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7E80"))) PPC_WEAK_FUNC(sub_82DF7E80);
PPC_FUNC_IMPL(__imp__sub_82DF7E80) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8324b94c
	__imp__NetDll_select(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7EA0"))) PPC_WEAK_FUNC(sub_82DF7EA0);
PPC_FUNC_IMPL(__imp__sub_82DF7EA0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8324b95c
	__imp__NetDll_recv(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7EB8"))) PPC_WEAK_FUNC(sub_82DF7EB8);
PPC_FUNC_IMPL(__imp__sub_82DF7EB8) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8324b96c
	__imp__NetDll_send(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7ED0"))) PPC_WEAK_FUNC(sub_82DF7ED0);
PPC_FUNC_IMPL(__imp__sub_82DF7ED0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8324b97c
	__imp__NetDll_inet_addr(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7ED8"))) PPC_WEAK_FUNC(sub_82DF7ED8);
PPC_FUNC_IMPL(__imp__sub_82DF7ED8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8324b98c
	__imp__NetDll___WSAFDIsSet(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7EE0"))) PPC_WEAK_FUNC(sub_82DF7EE0);
PPC_FUNC_IMPL(__imp__sub_82DF7EE0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bne cr6,0x82df7f20
	if (!cr6.eq) goto loc_82DF7F20;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82df7f24
	goto loc_82DF7F24;
loc_82DF7F20:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82DF7F24:
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x8324b99c
	__imp__XMsgStartIORequestEx(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82df7f60
	if (cr0.lt) goto loc_82DF7F60;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cdb18
	sub_831CDB18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82df7f60
	if (cr0.lt) goto loc_82DF7F60;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82df7f78
	goto loc_82DF7F78;
loc_82DF7F60:
	// rlwinm r11,r3,0,3,15
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82df7f78
	if (cr6.eq) goto loc_82DF7F78;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82DF7F78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF7F88"))) PPC_WEAK_FUNC(sub_82DF7F88);
PPC_FUNC_IMPL(__imp__sub_82DF7F88) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x8324b89c
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82df7fc8
	if (cr0.lt) goto loc_82DF7FC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82df7fe0
	goto loc_82DF7FE0;
loc_82DF7FC8:
	// rlwinm r11,r3,0,3,15
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82df7fe0
	if (cr6.eq) goto loc_82DF7FE0;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82DF7FE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF7FF0"))) PPC_WEAK_FUNC(sub_82DF7FF0);
PPC_FUNC_IMPL(__imp__sub_82DF7FF0) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-16680
	r11.s64 = r11.s64 + -16680;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82df801c
	if (cr0.eq) goto loc_82DF801C;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82DF801C:
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

__attribute__((alias("__imp__sub_82DF8038"))) PPC_WEAK_FUNC(sub_82DF8038);
PPC_FUNC_IMPL(__imp__sub_82DF8038) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82df7f88
	sub_82DF7F88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82df8088
	if (!cr0.eq) goto loc_82DF8088;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df8080
	if (!cr6.eq) goto loc_82DF8080;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82df8084
	if (cr6.eq) goto loc_82DF8084;
loc_82DF8080:
	// li r11,0
	r11.s64 = 0;
loc_82DF8084:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82DF8088:
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

__attribute__((alias("__imp__sub_82DF80A0"))) PPC_WEAK_FUNC(sub_82DF80A0);
PPC_FUNC_IMPL(__imp__sub_82DF80A0) {
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
	// bl 0x8324b15c
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8
	r11.s64 = 524288;
	// rlwinm r10,r3,0,8,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF00;
	// ori r11,r11,41216
	r11.u64 = r11.u64 | 41216;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82df8158
	if (!cr6.lt) goto loc_82DF8158;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r28,r11,-23084
	r28.s64 = r11.s64 + -23084;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r29,-31943
	r29.s64 = -2093416448;
	// lwz r11,24240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24240);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82df80ec
	if (!cr6.eq) goto loc_82DF80EC;
	// li r30,1627
	r30.s64 = 1627;
	// b 0x82df814c
	goto loc_82DF814C;
loc_82DF80EC:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82df7f88
	sub_82DF7F88(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lis r31,-31943
	r31.s64 = -2093416448;
	// bne 0x82df813c
	if (!cr0.eq) goto loc_82DF813C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,24244(r31)
	PPC_STORE_U32(r31.u32 + 24244, r11.u32);
	// bl 0x82df7ee0
	sub_82DF7EE0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82df813c
	if (!cr0.eq) goto loc_82DF813C;
	// li r11,1
	r11.s64 = 1;
	// b 0x82df8148
	goto loc_82DF8148;
loc_82DF813C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// stw r10,24244(r31)
	PPC_STORE_U32(r31.u32 + 24244, ctx.r10.u32);
loc_82DF8148:
	// stw r11,24240(r29)
	PPC_STORE_U32(r29.u32 + 24240, r11.u32);
loc_82DF814C:
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82df816c
	goto loc_82DF816C;
loc_82DF8158:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82df7ee0
	sub_82DF7EE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82DF816C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF8178"))) PPC_WEAK_FUNC(sub_82DF8178);
PPC_FUNC_IMPL(__imp__sub_82DF8178) {
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
	// bl 0x8324b15c
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8
	r11.s64 = 524288;
	// rlwinm r10,r3,0,8,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF00;
	// ori r11,r11,41216
	r11.u64 = r11.u64 | 41216;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82df8208
	if (!cr6.lt) goto loc_82DF8208;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r28,r11,-23084
	r28.s64 = r11.s64 + -23084;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r31,-31943
	r31.s64 = -2093416448;
	// lwz r11,24240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24240);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df81c4
	if (!cr6.eq) goto loc_82DF81C4;
	// li r29,1627
	r29.s64 = 1627;
	// b 0x82df81fc
	goto loc_82DF81FC;
loc_82DF81C4:
	// lis r30,-31943
	r30.s64 = -2093416448;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24244(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24244);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82df81e4
	if (cr6.eq) goto loc_82DF81E4;
	// li r4,4
	ctx.r4.s64 = 4;
loc_82DF81E4:
	// bl 0x82df7ee0
	sub_82DF7EE0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,24244(r30)
	PPC_STORE_U32(r30.u32 + 24244, r11.u32);
	// stw r10,24240(r31)
	PPC_STORE_U32(r31.u32 + 24240, ctx.r10.u32);
loc_82DF81FC:
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82df821c
	goto loc_82DF821C;
loc_82DF8208:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82df7ee0
	sub_82DF7EE0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82DF821C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82DF8228"))) PPC_WEAK_FUNC(sub_82DF8228);
PPC_FUNC_IMPL(__imp__sub_82DF8228) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x831b9430
	sub_831B9430(ctx, base);
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b8c78
	sub_831B8C78(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82df826c
	if (!cr6.eq) goto loc_82DF826C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r11,16256
	r31.s64 = r11.s64 + 16256;
loc_82DF826C:
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b8c78
	sub_831B8C78(ctx, base);
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// addi r3,r11,-32328
	ctx.r3.s64 = r11.s64 + -32328;
	// bl 0x831b8c78
	sub_831B8C78(ctx, base);
	// bl 0x831b45f8
	sub_831B45F8(ctx, base);
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

__attribute__((alias("__imp__sub_82DF82B0"))) PPC_WEAK_FUNC(sub_82DF82B0);
PPC_FUNC_IMPL(__imp__sub_82DF82B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-16676
	ctx.r3.s64 = r11.s64 + -16676;
	// bl 0x82df8228
	sub_82DF8228(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF82F0"))) PPC_WEAK_FUNC(sub_82DF82F0);
PPC_FUNC_IMPL(__imp__sub_82DF82F0) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r11,-16664
	r11.s64 = r11.s64 + -16664;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82df8364
	if (cr6.eq) goto loc_82DF8364;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82DF8320:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82df8320
	if (!cr6.eq) goto loc_82DF8320;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b9610
	sub_831B9610(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df836c
	if (cr0.eq) goto loc_82DF836C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x831b9530
	sub_831B9530(ctx, base);
	// b 0x82df836c
	goto loc_82DF836C;
loc_82DF8364:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_82DF836C:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DF8380"))) PPC_WEAK_FUNC(sub_82DF8380);
PPC_FUNC_IMPL(__imp__sub_82DF8380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-16656
	ctx.r3.s64 = r11.s64 + -16656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF8398"))) PPC_WEAK_FUNC(sub_82DF8398);
PPC_FUNC_IMPL(__imp__sub_82DF8398) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r11,-16664
	r11.s64 = r11.s64 + -16664;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// beq cr6,0x82df8424
	if (cr6.eq) goto loc_82DF8424;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82df841c
	if (cr6.eq) goto loc_82DF841C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82DF83D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82df83d8
	if (!cr6.eq) goto loc_82DF83D8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b9610
	sub_831B9610(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df842c
	if (cr0.eq) goto loc_82DF842C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x831b9530
	sub_831B9530(ctx, base);
	// b 0x82df842c
	goto loc_82DF842C;
loc_82DF841C:
	// li r11,0
	r11.s64 = 0;
	// b 0x82df8428
	goto loc_82DF8428;
loc_82DF8424:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
loc_82DF8428:
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_82DF842C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DF8440"))) PPC_WEAK_FUNC(sub_82DF8440);
PPC_FUNC_IMPL(__imp__sub_82DF8440) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-16636
	ctx.r4.s64 = r11.s64 + -16636;
	// bl 0x822c30c0
	sub_822C30C0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822c2e80
	sub_822C2E80(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r11,-24916
	r11.s64 = r11.s64 + -24916;
	// addi r4,r10,-9008
	ctx.r4.s64 = ctx.r10.s64 + -9008;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_82DF848C"))) PPC_WEAK_FUNC(sub_82DF848C);
PPC_FUNC_IMPL(__imp__sub_82DF848C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822c26d8
	sub_822C26D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF84C0"))) PPC_WEAK_FUNC(sub_82DF84C0);
PPC_FUNC_IMPL(__imp__sub_82DF84C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82df8398
	sub_82DF8398(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// addi r11,r11,16228
	r11.s64 = r11.s64 + 16228;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c2e28
	sub_822C2E28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DF8504"))) PPC_WEAK_FUNC(sub_82DF8504);
PPC_FUNC_IMPL(__imp__sub_82DF8504) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x831b2408
	sub_831B2408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF8530"))) PPC_WEAK_FUNC(sub_82DF8530);
PPC_FUNC_IMPL(__imp__sub_82DF8530) {
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
	// bl 0x82df84c0
	sub_82DF84C0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-24916
	r11.s64 = r11.s64 + -24916;
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

__attribute__((alias("__imp__sub_82DF8578"))) PPC_WEAK_FUNC(sub_82DF8578);
PPC_FUNC_IMPL(__imp__sub_82DF8578) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-16504
	ctx.r4.s64 = r11.s64 + -16504;
	// bl 0x822c30c0
	sub_822C30C0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822c2e80
	sub_822C2E80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r11,16244
	r11.s64 = r11.s64 + 16244;
	// addi r4,r10,-8920
	ctx.r4.s64 = ctx.r10.s64 + -8920;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_82DF85C4"))) PPC_WEAK_FUNC(sub_82DF85C4);
PPC_FUNC_IMPL(__imp__sub_82DF85C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822c26d8
	sub_822C26D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF85F0"))) PPC_WEAK_FUNC(sub_82DF85F0);
PPC_FUNC_IMPL(__imp__sub_82DF85F0) {
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
	// bl 0x82df84c0
	sub_82DF84C0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,16244
	r11.s64 = r11.s64 + 16244;
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

__attribute__((alias("__imp__sub_82DF8630"))) PPC_WEAK_FUNC(sub_82DF8630);
PPC_FUNC_IMPL(__imp__sub_82DF8630) {
	PPC_FUNC_PROLOGUE();
	// b 0x822c0988
	sub_822C0988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF8638"))) PPC_WEAK_FUNC(sub_82DF8638);
PPC_FUNC_IMPL(__imp__sub_82DF8638) {
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
	// bl 0x831b96d8
	sub_831B96D8(ctx, base);
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r3,r11
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df8668
	if (cr0.eq) goto loc_82DF8668;
	// bl 0x831b22b0
	sub_831B22B0(ctx, base);
loc_82DF8668:
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

__attribute__((alias("__imp__sub_82DF8680"))) PPC_WEAK_FUNC(sub_82DF8680);
PPC_FUNC_IMPL(__imp__sub_82DF8680) {
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
	// bl 0x831b9708
	sub_831B9708(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x831b96f8
	sub_831B96F8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x831b89d8
	sub_831B89D8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq 0x82df86e0
	if (cr0.eq) goto loc_82DF86E0;
	// bl 0x831b96d8
	sub_831B96D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// b 0x82df86ec
	goto loc_82DF86EC;
loc_82DF86E0:
	// bl 0x831b96d8
	sub_831B96D8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_82DF86EC:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_82DF8710"))) PPC_WEAK_FUNC(sub_82DF8710);
PPC_FUNC_IMPL(__imp__sub_82DF8710) {
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
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// ble cr6,0x82df8744
	if (!cr6.gt) goto loc_82DF8744;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,42
	ctx.r10.s64 = 42;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82df874c
	goto loc_82DF874C;
loc_82DF8744:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r4,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r4.u8);
loc_82DF874C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF8760"))) PPC_WEAK_FUNC(sub_82DF8760);
PPC_FUNC_IMPL(__imp__sub_82DF8760) {
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
	// bl 0x831b9708
	sub_831B9708(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x831b96f8
	sub_831B96F8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF8798"))) PPC_WEAK_FUNC(sub_82DF8798);
PPC_FUNC_IMPL(__imp__sub_82DF8798) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r8,r11,-23008
	ctx.r8.s64 = r11.s64 + -23008;
loc_82DF87B0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82df87b0
	if (!cr0.eq) goto loc_82DF87B0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82df87fc
	if (!cr6.eq) goto loc_82DF87FC;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r30,r11,24256
	r30.s64 = r11.s64 + 24256;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82DF87E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82df97c8
	sub_82DF97C8(ctx, base);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// addi r11,r30,112
	r11.s64 = r30.s64 + 112;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82df87e4
	if (cr6.lt) goto loc_82DF87E4;
loc_82DF87FC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82DF8808"))) PPC_WEAK_FUNC(sub_82DF8808);
PPC_FUNC_IMPL(__imp__sub_82DF8808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r8,r11,-23008
	ctx.r8.s64 = r11.s64 + -23008;
loc_82DF8824:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82df8824
	if (!cr0.eq) goto loc_82DF8824;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82df8870
	if (!cr6.lt) goto loc_82DF8870;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r30,r11,24256
	r30.s64 = r11.s64 + 24256;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82DF8858:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// addi r11,r30,112
	r11.s64 = r30.s64 + 112;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82df8858
	if (cr6.lt) goto loc_82DF8858;
loc_82DF8870:
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

__attribute__((alias("__imp__sub_82DF8888"))) PPC_WEAK_FUNC(sub_82DF8888);
PPC_FUNC_IMPL(__imp__sub_82DF8888) {
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
	// clrlwi r11,r4,30
	r11.u64 = ctx.r4.u32 & 0x3;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// mulli r10,r11,28
	ctx.r10.s64 = r11.s64 * 28;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r11,r9,24256
	r11.s64 = ctx.r9.s64 + 24256;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82df97d0
	sub_82DF97D0(ctx, base);
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

__attribute__((alias("__imp__sub_82DF88D0"))) PPC_WEAK_FUNC(sub_82DF88D0);
PPC_FUNC_IMPL(__imp__sub_82DF88D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r11,r11,24256
	r11.s64 = r11.s64 + 24256;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82df97d8
	sub_82DF97D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF88E8"))) PPC_WEAK_FUNC(sub_82DF88E8);
PPC_FUNC_IMPL(__imp__sub_82DF88E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x823a3ed8
	sub_823A3ED8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df8928
	if (cr0.eq) goto loc_82DF8928;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DF8928:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82df8938
	if (cr0.eq) goto loc_82DF8938;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82DF8938:
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

__attribute__((alias("__imp__sub_82DF8958"))) PPC_WEAK_FUNC(sub_82DF8958);
PPC_FUNC_IMPL(__imp__sub_82DF8958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df8990
	if (cr6.eq) goto loc_82DF8990;
	// bl 0x823a3ed8
	sub_823A3ED8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82df8990
	if (cr0.eq) goto loc_82DF8990;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DF8990:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF89A0"))) PPC_WEAK_FUNC(sub_82DF89A0);
PPC_FUNC_IMPL(__imp__sub_82DF89A0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df8888
	sub_82DF8888(ctx, base);
	// lis r31,-31943
	r31.s64 = -2093416448;
	// addi r3,r31,24376
	ctx.r3.s64 = r31.s64 + 24376;
	// bl 0x82df8958
	sub_82DF8958(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,24376(r31)
	PPC_STORE_U32(r31.u32 + 24376, r11.u32);
	// bl 0x82df88d0
	sub_82DF88D0(ctx, base);
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

__attribute__((alias("__imp__sub_82DF89F0"))) PPC_WEAK_FUNC(sub_82DF89F0);
PPC_FUNC_IMPL(__imp__sub_82DF89F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r3,24376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24376);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF8A00"))) PPC_WEAK_FUNC(sub_82DF8A00);
PPC_FUNC_IMPL(__imp__sub_82DF8A00) {
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
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r10,24412(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24412);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82df8a38
	if (!cr0.eq) goto loc_82DF8A38;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// stb r10,24412(r11)
	PPC_STORE_U8(r11.u32 + 24412, ctx.r10.u8);
	// addi r3,r9,-30304
	ctx.r3.s64 = ctx.r9.s64 + -30304;
	// bl 0x82df97e0
	sub_82DF97E0(ctx, base);
loc_82DF8A38:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// stw r31,24376(r11)
	PPC_STORE_U32(r11.u32 + 24376, r31.u32);
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

