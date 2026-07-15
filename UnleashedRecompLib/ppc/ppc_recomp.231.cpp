#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8310B218"))) PPC_WEAK_FUNC(sub_8310B218);
PPC_FUNC_IMPL(__imp__sub_8310B218) {
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
	// bl 0x8310b060
	sub_8310B060(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8310b288
	if (cr6.eq) goto loc_8310B288;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8310b288
	if (cr0.eq) goto loc_8310B288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// addi r29,r3,1
	r29.s64 = ctx.r3.s64 + 1;
	// rlwinm r3,r29,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8310b270
	if (!cr0.eq) goto loc_8310B270;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310b29c
	goto loc_8310B29C;
loc_8310B270:
	// li r11,5
	r11.s64 = 5;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831ba8e0
	sub_831BA8E0(ctx, base);
	// b 0x8310b298
	goto loc_8310B298;
loc_8310B288:
	// li r11,5
	r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8310B298:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310B29C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8310B2A8"))) PPC_WEAK_FUNC(sub_8310B2A8);
PPC_FUNC_IMPL(__imp__sub_8310B2A8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8310b060
	sub_8310B060(ctx, base);
	// li r11,7
	r11.s64 = 7;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_8310B300"))) PPC_WEAK_FUNC(sub_8310B300);
PPC_FUNC_IMPL(__imp__sub_8310B300) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8310b060
	sub_8310B060(ctx, base);
	// li r11,8
	r11.s64 = 8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
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

__attribute__((alias("__imp__sub_8310B360"))) PPC_WEAK_FUNC(sub_8310B360);
PPC_FUNC_IMPL(__imp__sub_8310B360) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8310b060
	sub_8310B060(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
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

__attribute__((alias("__imp__sub_8310B3A8"))) PPC_WEAK_FUNC(sub_8310B3A8);
PPC_FUNC_IMPL(__imp__sub_8310B3A8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8310b060
	sub_8310B060(ctx, base);
	// li r11,10
	r11.s64 = 10;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8310B3E0"))) PPC_WEAK_FUNC(sub_8310B3E0);
PPC_FUNC_IMPL(__imp__sub_8310B3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x8310b4ec
	if (cr6.gt) goto loc_8310B4EC;
	// lis r12,-32231
	r12.s64 = -2112290816;
	// addi r12,r12,-21456
	r12.s64 = r12.s64 + -21456;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-31983
	r12.s64 = -2096037888;
	// addi r12,r12,-19408
	r12.s64 = r12.s64 + -19408;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8310B430;
	case 1:
		goto loc_8310B444;
	case 2:
		goto loc_8310B458;
	case 3:
		goto loc_8310B46C;
	case 4:
		goto loc_8310B498;
	case 5:
		goto loc_8310B484;
	case 6:
		goto loc_8310B4AC;
	case 7:
		goto loc_8310B4BC;
	case 8:
		goto loc_8310B4CC;
	default:
		__builtin_unreachable();
	}
loc_8310B430:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8310b060
	sub_8310B060(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// b 0x8310b4dc
	goto loc_8310B4DC;
loc_8310B444:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8310b060
	sub_8310B060(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// b 0x8310b4dc
	goto loc_8310B4DC;
loc_8310B458:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8310b060
	sub_8310B060(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// b 0x8310b4dc
	goto loc_8310B4DC;
loc_8310B46C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f31.f64 = double(temp.f32);
	// bl 0x8310b060
	sub_8310B060(ctx, base);
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// li r11,4
	r11.s64 = 4;
	// b 0x8310b4e0
	goto loc_8310B4E0;
loc_8310B484:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8310b060
	sub_8310B060(ctx, base);
	// li r11,6
	r11.s64 = 6;
	// b 0x8310b4dc
	goto loc_8310B4DC;
loc_8310B498:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8310b218
	sub_8310B218(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8310b4e4
	goto loc_8310B4E4;
loc_8310B4AC:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310b2a8
	sub_8310B2A8(ctx, base);
	// b 0x8310b4e4
	goto loc_8310B4E4;
loc_8310B4BC:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310b300
	sub_8310B300(ctx, base);
	// b 0x8310b4e4
	goto loc_8310B4E4;
loc_8310B4CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8310b060
	sub_8310B060(ctx, base);
	// li r11,9
	r11.s64 = 9;
loc_8310B4DC:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
loc_8310B4E0:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8310B4E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8310b4f4
	goto loc_8310B4F4;
loc_8310B4EC:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_8310B4F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8310B500"))) PPC_WEAK_FUNC(sub_8310B500);
PPC_FUNC_IMPL(__imp__sub_8310B500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x8310b5ac
	if (cr6.gt) goto loc_8310B5AC;
	// lis r12,-32231
	r12.s64 = -2112290816;
	// addi r12,r12,-21440
	r12.s64 = r12.s64 + -21440;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-31983
	r12.s64 = -2096037888;
	// addi r12,r12,-19116
	r12.s64 = r12.s64 + -19116;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8310B554;
	case 1:
		goto loc_8310B560;
	case 2:
		goto loc_8310B560;
	case 3:
		goto loc_8310B568;
	case 4:
		goto loc_8310B578;
	case 5:
		goto loc_8310B570;
	case 6:
		goto loc_8310B590;
	case 7:
		goto loc_8310B598;
	case 8:
		goto loc_8310B5A0;
	default:
		__builtin_unreachable();
	}
loc_8310B554:
	// li r11,5
	r11.s64 = 5;
loc_8310B558:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8310b5a4
	goto loc_8310B5A4;
loc_8310B560:
	// li r11,33
	r11.s64 = 33;
	// b 0x8310b558
	goto loc_8310B558;
loc_8310B568:
	// li r11,128
	r11.s64 = 128;
	// b 0x8310b558
	goto loc_8310B558;
loc_8310B570:
	// li r11,10
	r11.s64 = 10;
	// b 0x8310b558
	goto loc_8310B558;
loc_8310B578:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310b5a4
	if (cr6.eq) goto loc_8310B5A4;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x8310b5a4
	goto loc_8310B5A4;
loc_8310B590:
	// li r11,386
	r11.s64 = 386;
	// b 0x8310b558
	goto loc_8310B558;
loc_8310B598:
	// li r11,515
	r11.s64 = 515;
	// b 0x8310b558
	goto loc_8310B558;
loc_8310B5A0:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8310B5A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310b5b4
	goto loc_8310B5B4;
loc_8310B5AC:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_8310B5B4:
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

__attribute__((alias("__imp__sub_8310B5C8"))) PPC_WEAK_FUNC(sub_8310B5C8);
PPC_FUNC_IMPL(__imp__sub_8310B5C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8310b060
	sub_8310B060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310B5D0"))) PPC_WEAK_FUNC(sub_8310B5D0);
PPC_FUNC_IMPL(__imp__sub_8310B5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,8
	r11.s64 = 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B600"))) PPC_WEAK_FUNC(sub_8310B600);
PPC_FUNC_IMPL(__imp__sub_8310B600) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8310b060
	sub_8310B060(ctx, base);
	// li r11,8
	r11.s64 = 8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
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

__attribute__((alias("__imp__sub_8310B660"))) PPC_WEAK_FUNC(sub_8310B660);
PPC_FUNC_IMPL(__imp__sub_8310B660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x8310b6b8
	if (!cr6.eq) goto loc_8310B6B8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310b6ac
	if (cr6.eq) goto loc_8310B6AC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310b6ac
	if (cr6.eq) goto loc_8310B6AC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8310b948
	goto loc_8310B948;
loc_8310B6AC:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x8310b948
	goto loc_8310B948;
loc_8310B6B8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310b500
	sub_8310B500(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8310b948
	if (cr0.lt) goto loc_8310B948;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// rlwinm r28,r30,1,0,30
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8310b6f8
	if (!cr0.eq) goto loc_8310B6F8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310b948
	goto loc_8310B948;
loc_8310B6F8:
	// li r27,0
	r27.s64 = 0;
	// sth r27,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r27.u16);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x8310b940
	if (cr6.gt) goto loc_8310B940;
	// lis r12,-32231
	r12.s64 = -2112290816;
	// addi r12,r12,-21408
	r12.s64 = r12.s64 + -21408;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31983
	r12.s64 = -2096037888;
	// addi r12,r12,-18632
	r12.s64 = r12.s64 + -18632;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8310B738;
	case 1:
		goto loc_8310B768;
	case 2:
		goto loc_8310B780;
	case 3:
		goto loc_8310B79C;
	case 4:
		goto loc_8310B894;
	case 5:
		goto loc_8310B7C0;
	case 6:
		goto loc_8310B8AC;
	case 7:
		goto loc_8310B8E8;
	default:
		__builtin_unreachable();
	}
loc_8310B738:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8310b758
	if (cr6.eq) goto loc_8310B758;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r5,r11,-27244
	ctx.r5.s64 = r11.s64 + -27244;
	// b 0x8310b760
	goto loc_8310B760;
loc_8310B758:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r5,r11,-27256
	ctx.r5.s64 = r11.s64 + -27256;
loc_8310B760:
	// bl 0x831ba8e0
	sub_831BA8E0(ctx, base);
	// b 0x8310b92c
	goto loc_8310B92C;
loc_8310B768:
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831baf98
	sub_831BAF98(ctx, base);
	// b 0x8310b92c
	goto loc_8310B92C;
loc_8310B780:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r11,-27232
	ctx.r5.s64 = r11.s64 + -27232;
	// bl 0x8324ba3c
	__imp___snwprintf(ctx, base);
	// b 0x8310b92c
	goto loc_8310B92C;
loc_8310B79C:
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r11,-27224
	ctx.r5.s64 = r11.s64 + -27224;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8324ba3c
	__imp___snwprintf(ctx, base);
	// b 0x8310b92c
	goto loc_8310B92C;
loc_8310B7C0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwinm r6,r11,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// lfs f0,-24904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24904);
	f0.f64 = double(temp.f32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lfs f13,-12552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12552);
	ctx.f13.f64 = double(temp.f32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// addi r5,r10,-21392
	ctx.r5.s64 = ctx.r10.s64 + -21392;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctidz f13,f10
	ctx.f13.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8324ba3c
	__imp___snwprintf(ctx, base);
	// b 0x8310b92c
	goto loc_8310B92C;
loc_8310B894:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8310b92c
	if (cr6.eq) goto loc_8310B92C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8310b760
	goto loc_8310B760;
loc_8310B8AC:
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r11,-27200
	ctx.r5.s64 = r11.s64 + -27200;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8324ba3c
	__imp___snwprintf(ctx, base);
	// b 0x8310b92c
	goto loc_8310B92C;
loc_8310B8E8:
	// lfs f4,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r11,-27180
	ctx.r5.s64 = r11.s64 + -27180;
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x8324ba3c
	__imp___snwprintf(ctx, base);
loc_8310B92C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// sth r27,-2(r11)
	PPC_STORE_U16(r11.u32 + -2, r27.u16);
	// b 0x8310b948
	goto loc_8310B948;
loc_8310B940:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_8310B948:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8310B950"))) PPC_WEAK_FUNC(sub_8310B950);
PPC_FUNC_IMPL(__imp__sub_8310B950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
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
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B988"))) PPC_WEAK_FUNC(sub_8310B988);
PPC_FUNC_IMPL(__imp__sub_8310B988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
loc_8310B98C:
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
	// bne 0x8310b98c
	if (!cr0.eq) goto loc_8310B98C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B9B0"))) PPC_WEAK_FUNC(sub_8310B9B0);
PPC_FUNC_IMPL(__imp__sub_8310B9B0) {
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
	// beq 0x8310ba10
	if (cr0.eq) goto loc_8310BA10;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// addi r29,r30,-4
	r29.s64 = r30.s64 + -4;
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addic. r31,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// blt 0x8310b9f8
	if (cr0.lt) goto loc_8310B9F8;
loc_8310B9E4:
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83110100
	sub_83110100(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x8310b9e4
	if (!cr0.lt) goto loc_8310B9E4;
loc_8310B9F8:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8310ba08
	if (cr0.eq) goto loc_8310BA08;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310BA08:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8310ba2c
	goto loc_8310BA2C;
loc_8310BA10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83110100
	sub_83110100(ctx, base);
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8310ba28
	if (cr0.eq) goto loc_8310BA28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310BA28:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8310BA2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8310BA38"))) PPC_WEAK_FUNC(sub_8310BA38);
PPC_FUNC_IMPL(__imp__sub_8310BA38) {
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
	// beq 0x8310ba98
	if (cr0.eq) goto loc_8310BA98;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// addi r29,r30,-4
	r29.s64 = r30.s64 + -4;
	// rlwinm r11,r10,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addic. r31,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// blt 0x8310ba80
	if (cr0.lt) goto loc_8310BA80;
loc_8310BA6C:
	// addi r30,r30,-32
	r30.s64 = r30.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83110090
	sub_83110090(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x8310ba6c
	if (!cr0.lt) goto loc_8310BA6C;
loc_8310BA80:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8310ba90
	if (cr0.eq) goto loc_8310BA90;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310BA90:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8310bab4
	goto loc_8310BAB4;
loc_8310BA98:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83110090
	sub_83110090(ctx, base);
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8310bab0
	if (cr0.eq) goto loc_8310BAB0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310BAB0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8310BAB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8310BAC0"))) PPC_WEAK_FUNC(sub_8310BAC0);
PPC_FUNC_IMPL(__imp__sub_8310BAC0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
loc_8310BADC:
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
	// bne 0x8310badc
	if (!cr0.eq) goto loc_8310BADC;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8310bb28
	if (!cr6.eq) goto loc_8310BB28;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8310bb24
	if (!cr0.eq) goto loc_8310BB24;
	// bl 0x8310bb48
	sub_8310BB48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// b 0x8310bb28
	goto loc_8310BB28;
loc_8310BB24:
	// bl 0x8310bb48
	sub_8310BB48(ctx, base);
loc_8310BB28:
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

__attribute__((alias("__imp__sub_8310BB48"))) PPC_WEAK_FUNC(sub_8310BB48);
PPC_FUNC_IMPL(__imp__sub_8310BB48) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8310bbdc
	if (!cr0.eq) goto loc_8310BBDC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310bb80
	if (cr6.eq) goto loc_8310BB80;
	// lis r11,-31983
	r11.s64 = -2096037888;
	// addi r4,r11,-17592
	ctx.r4.s64 = r11.s64 + -17592;
	// bl 0x83110108
	sub_83110108(ctx, base);
loc_8310BB80:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8310bc2c
	if (cr0.eq) goto loc_8310BC2C;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8310bc2c
	if (!cr0.eq) goto loc_8310BC2C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310bc44
	if (cr6.eq) goto loc_8310BC44;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8310bc44
	if (!cr6.gt) goto loc_8310BC44;
loc_8310BBB0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x8310fa98
	sub_8310FA98(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x8310bbb0
	if (cr6.lt) goto loc_8310BBB0;
	// b 0x8310bc44
	goto loc_8310BC44;
loc_8310BBDC:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8310BBE0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310bbf4
	if (cr6.eq) goto loc_8310BBF4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8310BBF4:
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// bge cr6,0x8310bb80
	if (!cr6.lt) goto loc_8310BB80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm. r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bne 0x8310bc20
	if (!cr0.eq) goto loc_8310BC20;
	// bl 0x8310bb48
	sub_8310BB48(ctx, base);
	// b 0x8310bc24
	goto loc_8310BC24;
loc_8310BC20:
	// bl 0x8310bac0
	sub_8310BAC0(ctx, base);
loc_8310BC24:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x8310bbe0
	goto loc_8310BBE0;
loc_8310BC2C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310bc44
	if (cr6.eq) goto loc_8310BC44;
	// lis r11,-31983
	r11.s64 = -2096037888;
	// addi r4,r11,-1384
	ctx.r4.s64 = r11.s64 + -1384;
	// bl 0x83110108
	sub_83110108(ctx, base);
loc_8310BC44:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310bc58
	if (cr6.eq) goto loc_8310BC58;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x830ea6a0
	sub_830EA6A0(ctx, base);
loc_8310BC58:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310bcf8
	if (cr6.eq) goto loc_8310BCF8;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8310bca0
	if (!cr6.gt) goto loc_8310BCA0;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8310BC78:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r29,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r29.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// stw r29,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r29.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8310bc78
	if (cr6.lt) goto loc_8310BC78;
loc_8310BCA0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8310bcd4
	if (!cr6.gt) goto loc_8310BCD4;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8310BCB4:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8310bcb4
	if (cr6.lt) goto loc_8310BCB4;
loc_8310BCD4:
	// lwz r30,40(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// bne 0x8310bd00
	if (!cr0.eq) goto loc_8310BD00;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83108e00
	sub_83108E00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8310bcfc
	goto loc_8310BCFC;
loc_8310BCF8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8310BCFC:
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310BD00:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8310bd38
	if (!cr0.eq) goto loc_8310BD38;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310bd20
	if (cr6.eq) goto loc_8310BD20;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8310b9b0
	sub_8310B9B0(ctx, base);
loc_8310BD20:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310bd9c
	if (cr6.eq) goto loc_8310BD9C;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8310ba38
	sub_8310BA38(ctx, base);
	// b 0x8310bd9c
	goto loc_8310BD9C;
loc_8310BD38:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8310bd6c
	if (!cr6.gt) goto loc_8310BD6C;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8310BD4C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x83110090
	sub_83110090(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8310bd4c
	if (cr6.lt) goto loc_8310BD4C;
loc_8310BD6C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8310bd9c
	if (!cr6.gt) goto loc_8310BD9C;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8310BD7C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x83110100
	sub_83110100(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8310bd7c
	if (cr6.lt) goto loc_8310BD7C;
loc_8310BD9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8310BDA8"))) PPC_WEAK_FUNC(sub_8310BDA8);
PPC_FUNC_IMPL(__imp__sub_8310BDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x830e61f8
	sub_830E61F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310BDBC"))) PPC_WEAK_FUNC(sub_8310BDBC);
PPC_FUNC_IMPL(__imp__sub_8310BDBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BDC0"))) PPC_WEAK_FUNC(sub_8310BDC0);
PPC_FUNC_IMPL(__imp__sub_8310BDC0) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8310bde8
	if (!cr0.eq) goto loc_8310BDE8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310BDE8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_8310BE10"))) PPC_WEAK_FUNC(sub_8310BE10);
PPC_FUNC_IMPL(__imp__sub_8310BE10) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310bdc0
	sub_8310BDC0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// bne 0x8310be58
	if (!cr0.eq) goto loc_8310BE58;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310be9c
	goto loc_8310BE9C;
loc_8310BE58:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8310be90
	if (!cr6.gt) goto loc_8310BE90;
	// li r11,0
	r11.s64 = 0;
loc_8310BE6C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8310be6c
	if (cr6.lt) goto loc_8310BE6C;
loc_8310BE90:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_8310BE9C:
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

__attribute__((alias("__imp__sub_8310BEB8"))) PPC_WEAK_FUNC(sub_8310BEB8);
PPC_FUNC_IMPL(__imp__sub_8310BEB8) {
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
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, r29.u32);
	// li r30,128
	r30.s64 = 128;
loc_8310BED4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310bee4
	if (cr6.eq) goto loc_8310BEE4;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310BEE4:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8310bed4
	if (!cr0.eq) goto loc_8310BED4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8310BF00"))) PPC_WEAK_FUNC(sub_8310BF00);
PPC_FUNC_IMPL(__imp__sub_8310BF00) {
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
	// li r31,0
	r31.s64 = 0;
	// lwz r11,544(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8310bf68
	if (!cr6.gt) goto loc_8310BF68;
loc_8310BF28:
	// rlwinm r11,r31,25,23,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 25) & 0x1FC;
	// clrlwi r10,r31,23
	ctx.r10.u64 = r31.u32 & 0x1FF;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8310bf58
	if (cr0.eq) goto loc_8310BF58;
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x830e2548
	sub_830E2548(ctx, base);
loc_8310BF58:
	// lwz r11,544(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8310bf28
	if (cr6.lt) goto loc_8310BF28;
loc_8310BF68:
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

__attribute__((alias("__imp__sub_8310BF80"))) PPC_WEAK_FUNC(sub_8310BF80);
PPC_FUNC_IMPL(__imp__sub_8310BF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 544);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, r11.u32);
	// b 0x8310bfd0
	goto loc_8310BFD0;
loc_8310BF94:
	// srawi r11,r10,9
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	r11.s64 = ctx.r10.s32 >> 9;
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r11,r11,2,23,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1FC;
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// sth r8,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r8.u16);
	// sth r7,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r7.u16);
	// lwz r11,552(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
loc_8310BFD0:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x8310bf94
	if (!cr6.gt) goto loc_8310BF94;
	// lwz r11,552(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// li r9,-1
	ctx.r9.s64 = -1;
	// srawi r10,r11,9
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = r11.s32 >> 9;
	// clrlwi r11,r11,23
	r11.u64 = r11.u32 & 0x1FF;
	// rlwinm r8,r10,2,23,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1FC;
	// mulli r10,r11,12
	ctx.r10.s64 = r11.s64 * 12;
	// lwzx r11,r8,r3
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C000"))) PPC_WEAK_FUNC(sub_8310C000);
PPC_FUNC_IMPL(__imp__sub_8310C000) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r28,r31,512
	r28.s64 = r31.s64 + 512;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,548(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 548);
	// lwz r10,552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 552);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8310c0d8
	if (!cr6.eq) goto loc_8310C0D8;
	// lwz r11,544(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 544);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// addi r30,r11,512
	r30.s64 = r11.s64 + 512;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x8310c05c
	if (cr6.lt) goto loc_8310C05C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310C054:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8310C05C:
	// li r3,6144
	ctx.r3.s64 = 6144;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8310c080
	if (!cr0.eq) goto loc_8310C080;
	// li r30,0
	r30.s64 = 0;
loc_8310C070:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8310c054
	goto loc_8310C054;
loc_8310C080:
	// lwz r5,544(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 544);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,544(r31)
	PPC_STORE_U32(r31.u32 + 544, r30.u32);
	// srawi r10,r5,9
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 9;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r6,r10,2,23,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1FC;
	// stwx r11,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, r11.u32);
	// bl 0x8310bf80
	sub_8310BF80(ctx, base);
	// clrlwi r11,r5,23
	r11.u64 = ctx.r5.u32 & 0x1FF;
	// mulli r9,r11,12
	ctx.r9.s64 = r11.s64 * 12;
	// lwz r11,548(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 548);
	// srawi r10,r11,9
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = r11.s32 >> 9;
	// clrlwi r11,r11,23
	r11.u64 = r11.u32 & 0x1FF;
	// rlwinm r10,r10,2,23,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1FC;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// lwz r10,548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 548);
	// lwzx r11,r6,r31
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + r31.u32);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_8310C0D8:
	// lwz r30,548(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 548);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// srawi r11,r30,9
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1FF) != 0);
	r11.s64 = r30.s32 >> 9;
	// clrlwi r9,r30,23
	ctx.r9.u64 = r30.u32 & 0x1FF;
	// rlwinm r10,r11,2,23,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1FC;
	// mulli r11,r9,12
	r11.s64 = ctx.r9.s64 * 12;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// srawi r8,r9,9
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 9;
	// clrlwi r5,r9,23
	ctx.r5.u64 = ctx.r9.u32 & 0x1FF;
	// rlwinm r4,r8,2,23,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x1FC;
	// mulli r8,r5,12
	ctx.r8.s64 = ctx.r5.s64 * 12;
	// stw r9,548(r31)
	PPC_STORE_U32(r31.u32 + 548, ctx.r9.u32);
	// lwzx r9,r4,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + r31.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// sth r6,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r6.u16);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// lwz r9,540(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 540);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,540(r31)
	PPC_STORE_U32(r31.u32 + 540, ctx.r9.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lhzx r11,r10,r11
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + r11.u32);
	// rlwimi r30,r11,16,0,15
	r30.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x8310c070
	goto loc_8310C070;
}

__attribute__((alias("__imp__sub_8310C158"))) PPC_WEAK_FUNC(sub_8310C158);
PPC_FUNC_IMPL(__imp__sub_8310C158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r30,r31,512
	r30.s64 = r31.s64 + 512;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r10,r29,25,23,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 25) & 0x1FC;
	// clrlwi r11,r29,23
	r11.u64 = r29.u32 & 0x1FF;
	// lwz r6,552(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 552);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r29,16
	ctx.r7.u64 = r29.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r8,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r8.u16);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// lwz r11,552(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 552);
	// srawi r10,r11,9
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = r11.s32 >> 9;
	// rlwinm r9,r10,2,23,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1FC;
	// clrlwi r11,r11,23
	r11.u64 = r11.u32 & 0x1FF;
	// mulli r10,r11,12
	ctx.r10.s64 = r11.s64 * 12;
	// lwzx r11,r9,r31
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r11,540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 540);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r7,552(r31)
	PPC_STORE_U32(r31.u32 + 552, ctx.r7.u32);
	// stw r11,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r11.u32);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8310C1F8"))) PPC_WEAK_FUNC(sub_8310C1F8);
PPC_FUNC_IMPL(__imp__sub_8310C1F8) {
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
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8310C214:
	// li r3,6144
	ctx.r3.s64 = 6144;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310c260
	if (cr0.eq) goto loc_8310C260;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// blt cr6,0x8310c214
	if (cr6.lt) goto loc_8310C214;
	// li r11,1024
	r11.s64 = 1024;
	// stw r28,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r28.u32);
	// stw r28,548(r31)
	PPC_STORE_U32(r31.u32 + 548, r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,544(r31)
	PPC_STORE_U32(r31.u32 + 544, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310bf80
	sub_8310BF80(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310C258:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8310C260:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310beb8
	sub_8310BEB8(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310c258
	goto loc_8310C258;
}

__attribute__((alias("__imp__sub_8310C278"))) PPC_WEAK_FUNC(sub_8310C278);
PPC_FUNC_IMPL(__imp__sub_8310C278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x831ba858
	sub_831BA858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310C290"))) PPC_WEAK_FUNC(sub_8310C290);
PPC_FUNC_IMPL(__imp__sub_8310C290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C2A8"))) PPC_WEAK_FUNC(sub_8310C2A8);
PPC_FUNC_IMPL(__imp__sub_8310C2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt 0x8310c2f8
	if (cr0.lt) goto loc_8310C2F8;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_8310C2BC:
	// subf r11,r10,r8
	r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x8310c310
	if (cr6.eq) goto loc_8310C310;
	// bge cr6,0x8310c2ec
	if (!cr6.lt) goto loc_8310C2EC;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// b 0x8310c2f0
	goto loc_8310C2F0;
loc_8310C2EC:
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
loc_8310C2F0:
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// ble cr6,0x8310c2bc
	if (!cr6.gt) goto loc_8310C2BC;
loc_8310C2F8:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8310c308
	if (cr6.eq) goto loc_8310C308;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_8310C308:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8310C310:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8310c31c
	if (cr6.eq) goto loc_8310C31C;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_8310C31C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C330"))) PPC_WEAK_FUNC(sub_8310C330);
PPC_FUNC_IMPL(__imp__sub_8310C330) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x8310c3a4
	if (cr0.lt) goto loc_8310C3A4;
loc_8310C358:
	// subf r11,r31,r29
	r11.s64 = r29.s64 - r31.s64;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8310c3c0
	if (cr0.eq) goto loc_8310C3C0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8310c398
	if (!cr6.lt) goto loc_8310C398;
	// addi r29,r30,-1
	r29.s64 = r30.s64 + -1;
	// b 0x8310c39c
	goto loc_8310C39C;
loc_8310C398:
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
loc_8310C39C:
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// ble cr6,0x8310c358
	if (!cr6.gt) goto loc_8310C358;
loc_8310C3A4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8310c3b4
	if (cr6.eq) goto loc_8310C3B4;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_8310C3B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310C3B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_8310C3C0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8310c3cc
	if (cr6.eq) goto loc_8310C3CC;
	// stw r30,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r30.u32);
loc_8310C3CC:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8310c3b8
	goto loc_8310C3B8;
}

__attribute__((alias("__imp__sub_8310C3E0"))) PPC_WEAK_FUNC(sub_8310C3E0);
PPC_FUNC_IMPL(__imp__sub_8310C3E0) {
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// lhz r31,0(r11)
	r31.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x8310c418
	if (!cr0.eq) goto loc_8310C418;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x8310c48c
	goto loc_8310C48C;
loc_8310C418:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8310c43c
	if (!cr0.eq) goto loc_8310C43C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310c490
	goto loc_8310C490;
loc_8310C43C:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8310c47c
	if (!cr6.gt) goto loc_8310C47C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
loc_8310C454:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lhz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// sthx r9,r10,r7
	PPC_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// bne 0x8310c454
	if (!cr0.eq) goto loc_8310C454;
loc_8310C47C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + r11.u32, ctx.r9.u16);
loc_8310C48C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310C490:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8310C498"))) PPC_WEAK_FUNC(sub_8310C498);
PPC_FUNC_IMPL(__imp__sub_8310C498) {
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
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8310c500
	if (!cr6.eq) goto loc_8310C500;
	// addi r29,r11,50
	r29.s64 = r11.s64 + 50;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8310c4e0
	if (!cr0.eq) goto loc_8310C4E0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310c520
	goto loc_8310C520;
loc_8310C4E0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
loc_8310C500:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8310C520:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8310C528"))) PPC_WEAK_FUNC(sub_8310C528);
PPC_FUNC_IMPL(__imp__sub_8310C528) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8310c558
	if (cr6.eq) goto loc_8310C558;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,47
	ctx.r3.u64 = ctx.r3.u64 | 47;
	// b 0x8310c5b8
	goto loc_8310C5B8;
loc_8310C558:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310c5b4
	if (cr6.eq) goto loc_8310C5B4;
	// li r31,0
	r31.s64 = 0;
loc_8310C568:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8310c5a0
	if (!cr6.eq) goto loc_8310C5A0;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8310c5a0
	if (cr6.eq) goto loc_8310C5A0;
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8310c5b8
	if (cr0.lt) goto loc_8310C5B8;
loc_8310C5A0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8310c568
	if (cr6.lt) goto loc_8310C568;
loc_8310C5B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310C5B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8310C5C0"))) PPC_WEAK_FUNC(sub_8310C5C0);
PPC_FUNC_IMPL(__imp__sub_8310C5C0) {
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
	// rlwinm r31,r4,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8310c634
	if (cr6.eq) goto loc_8310C634;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8310c5fc
	if (!cr0.eq) goto loc_8310C5FC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310C5FC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310C634:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8310C640"))) PPC_WEAK_FUNC(sub_8310C640);
PPC_FUNC_IMPL(__imp__sub_8310C640) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310c698
	if (cr6.eq) goto loc_8310C698;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8310c68c
	if (!cr6.gt) goto loc_8310C68C;
loc_8310C670:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310c5c0
	sub_8310C5C0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8310c670
	if (cr6.lt) goto loc_8310C670;
loc_8310C68C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
loc_8310C698:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8310C6A8"))) PPC_WEAK_FUNC(sub_8310C6A8);
PPC_FUNC_IMPL(__imp__sub_8310C6A8) {
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
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8310c6fc
	if (!cr6.eq) goto loc_8310C6FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830e8aa8
	sub_830E8AA8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8310c764
	if (cr6.eq) goto loc_8310C764;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rlwimi r4,r30,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(r30.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310c2a8
	sub_8310C2A8(ctx, base);
	// b 0x8310c70c
	goto loc_8310C70C;
loc_8310C6FC:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310c330
	sub_8310C330(ctx, base);
loc_8310C70C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8310c764
	if (cr6.eq) goto loc_8310C764;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// bl 0x830db278
	sub_830DB278(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8310c74c
	if (!cr0.lt) goto loc_8310C74C;
loc_8310C738:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8310b5c8
	sub_8310B5C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8310c768
	goto loc_8310C768;
loc_8310C74C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830db0d0
	sub_830DB0D0(ctx, base);
	// b 0x8310c738
	goto loc_8310C738;
loc_8310C764:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310C768:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8310C770"))) PPC_WEAK_FUNC(sub_8310C770);
PPC_FUNC_IMPL(__imp__sub_8310C770) {
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
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// beq cr6,0x8310c7ac
	if (cr6.eq) goto loc_8310C7AC;
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8310c7ac
	if (!cr0.eq) goto loc_8310C7AC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
loc_8310C7AC:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_8310C7C8"))) PPC_WEAK_FUNC(sub_8310C7C8);
PPC_FUNC_IMPL(__imp__sub_8310C7C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8310c640
	sub_8310C640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310C7D0"))) PPC_WEAK_FUNC(sub_8310C7D0);
PPC_FUNC_IMPL(__imp__sub_8310C7D0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,22613
	ctx.r10.s64 = 1481965568;
	// mr r30,r25
	r30.u64 = r25.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// ori r10,r10,18771
	ctx.r10.u64 = ctx.r10.u64 | 18771;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8310c880
	if (!cr6.eq) goto loc_8310C880;
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8310c880
	if (!cr6.eq) goto loc_8310C880;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// mr r29,r25
	r29.u64 = r25.u64;
	// lhz r27,10(r4)
	r27.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r11,12(r26)
	PPC_STORE_U32(r26.u32 + 12, r11.u32);
	// beq cr6,0x8310c968
	if (cr6.eq) goto loc_8310C968;
	// addi r11,r4,12
	r11.s64 = ctx.r4.s64 + 12;
	// mr r28,r25
	r28.u64 = r25.u64;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r11.u32);
loc_8310C838:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x8310c3e0
	sub_8310C3E0(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x8310c948
	if (cr0.lt) goto loc_8310C948;
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8310c88c
	if (!cr6.eq) goto loc_8310C88C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310c8f8
	if (cr0.eq) goto loc_8310C8F8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8310C874:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8310c770
	sub_8310C770(ctx, base);
	// b 0x8310c8f0
	goto loc_8310C8F0;
loc_8310C880:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,87
	r29.u64 = r29.u64 | 87;
	// b 0x8310c948
	goto loc_8310C948;
loc_8310C88C:
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8310c8c0
	if (!cr6.eq) goto loc_8310C8C0;
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310c8f8
	if (cr0.eq) goto loc_8310C8F8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x8310c874
	goto loc_8310C874;
loc_8310C8C0:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x8310c3e0
	sub_8310C3E0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x8310c948
	if (cr0.lt) goto loc_8310C948;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310c8f8
	if (cr0.eq) goto loc_8310C8F8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8310c770
	sub_8310C770(ctx, base);
loc_8310C8F0:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8310c8fc
	goto loc_8310C8FC;
loc_8310C8F8:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_8310C8FC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8310c938
	if (cr6.eq) goto loc_8310C938;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8310c498
	sub_8310C498(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x8310c948
	if (cr0.lt) goto loc_8310C948;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// blt cr6,0x8310c838
	if (cr6.lt) goto loc_8310C838;
	// b 0x8310c940
	goto loc_8310C940;
loc_8310C938:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
loc_8310C940:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bge cr6,0x8310c968
	if (!cr6.lt) goto loc_8310C968;
loc_8310C948:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8310c640
	sub_8310C640(ctx, base);
loc_8310C968:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8310C978"))) PPC_WEAK_FUNC(sub_8310C978);
PPC_FUNC_IMPL(__imp__sub_8310C978) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8310c9a8
	if (!cr0.eq) goto loc_8310C9A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310ca6c
	goto loc_8310CA6C;
loc_8310C9A8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830dafc0
	sub_830DAFC0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// blt 0x8310ca64
	if (cr0.lt) goto loc_8310CA64;
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x8310b660
	sub_8310B660(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8310ca48
	if (cr0.lt) goto loc_8310CA48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8310ca48
	if (cr0.lt) goto loc_8310CA48;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310ca20
	if (cr0.eq) goto loc_8310CA20;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8310c770
	sub_8310C770(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8310CA20:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8310ca34
	if (!cr6.eq) goto loc_8310CA34;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8310ca48
	goto loc_8310CA48;
loc_8310CA34:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8310c498
	sub_8310C498(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x8310ca60
	if (!cr0.lt) goto loc_8310CA60;
loc_8310CA48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310CA60:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8310CA64:
	// bl 0x8310b5c8
	sub_8310B5C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8310CA6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8310CA78"))) PPC_WEAK_FUNC(sub_8310CA78);
PPC_FUNC_IMPL(__imp__sub_8310CA78) {
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
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x830d7040
	sub_830D7040(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8310cacc
	if (cr6.eq) goto loc_8310CACC;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r30,-1
	ctx.r5.s64 = r30.s64 + -1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8310ca78
	sub_8310CA78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8310cb74
	if (cr0.lt) goto loc_8310CB74;
loc_8310CACC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830d7190
	sub_830D7190(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8310cb70
	if (cr0.eq) goto loc_8310CB70;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r22,0
	r22.s64 = 0;
	// mr r28,r22
	r28.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310cb70
	if (cr6.eq) goto loc_8310CB70;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// rlwinm r23,r30,8,0,23
	r23.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// addi r25,r11,-21352
	r25.s64 = r11.s64 + -21352;
loc_8310CB00:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x830e6c50
	sub_830E6C50(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r23,r28
	ctx.r4.u64 = r23.u64 + r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x8310cb7c
	if (cr0.lt) goto loc_8310CB7C;
	// blt cr6,0x8310cb5c
	if (cr6.lt) goto loc_8310CB5C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x8310cb5c
	if (!cr6.lt) goto loc_8310CB5C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + r11.u32, r22.u16);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_8310CB5C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8310cb00
	if (cr6.lt) goto loc_8310CB00;
loc_8310CB70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310CB74:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
loc_8310CB7C:
	// blt cr6,0x8310cb74
	if (cr6.lt) goto loc_8310CB74;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x8310cb74
	if (!cr6.lt) goto loc_8310CB74;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + r11.u32, r22.u16);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x8310cb74
	goto loc_8310CB74;
}

__attribute__((alias("__imp__sub_8310CBA0"))) PPC_WEAK_FUNC(sub_8310CBA0);
PPC_FUNC_IMPL(__imp__sub_8310CBA0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// addi r29,r1,128
	r29.s64 = ctx.r1.s64 + 128;
	// bl 0x830d70e8
	sub_830D70E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x830d6f08
	sub_830D6F08(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r11,-28672
	ctx.r4.s64 = r11.s64 + -28672;
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8310cc64
	if (cr0.eq) goto loc_8310CC64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e88b0
	sub_830E88B0(ctx, base);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-21344
	ctx.r4.s64 = r11.s64 + -21344;
	// bne cr6,0x8310cc14
	if (!cr6.eq) goto loc_8310CC14;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8310CC14:
	// bl 0x830e6c50
	sub_830E6C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r29,-1
	r29.s64 = -1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8310cc44
	if (cr6.eq) goto loc_8310CC44;
loc_8310CC2C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x830d7040
	sub_830D7040(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8310cc2c
	if (!cr6.eq) goto loc_8310CC2C;
loc_8310CC44:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8310ca78
	sub_8310CA78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8310cd44
	if (cr0.lt) goto loc_8310CD44;
loc_8310CC64:
	// li r29,0
	r29.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e8400
	sub_830E8400(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8310cd40
	if (cr6.eq) goto loc_8310CD40;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r26,r11,-28520
	r26.s64 = r11.s64 + -28520;
loc_8310CC8C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7eb0
	sub_830D7EB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8310cd28
	if (!cr6.eq) goto loc_8310CD28;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r1,128
	r31.s64 = ctx.r1.s64 + 128;
	// bl 0x830d70e8
	sub_830D70E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d6f08
	sub_830D6F08(ctx, base);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x8310cce0
	if (!cr6.eq) goto loc_8310CCE0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8310cd28
	if (cr0.eq) goto loc_8310CD28;
loc_8310CCE0:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8310cba0
	sub_8310CBA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8310cd4c
	if (cr0.lt) goto loc_8310CD4C;
	// blt cr6,0x8310cd28
	if (cr6.lt) goto loc_8310CD28;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x8310cd28
	if (!cr6.lt) goto loc_8310CD28;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + r11.u32, r29.u16);
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
loc_8310CD28:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e84f0
	sub_830E84F0(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8310cc8c
	if (!cr6.eq) goto loc_8310CC8C;
loc_8310CD40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310CD44:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b6c
	return;
loc_8310CD4C:
	// blt cr6,0x8310cd44
	if (cr6.lt) goto loc_8310CD44;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x8310cd44
	if (!cr6.lt) goto loc_8310CD44;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + r11.u32, r29.u16);
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// b 0x8310cd44
	goto loc_8310CD44;
}

__attribute__((alias("__imp__sub_8310CD70"))) PPC_WEAK_FUNC(sub_8310CD70);
PPC_FUNC_IMPL(__imp__sub_8310CD70) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x8310cba0
	sub_8310CBA0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8310CDC0"))) PPC_WEAK_FUNC(sub_8310CDC0);
PPC_FUNC_IMPL(__imp__sub_8310CDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31983
	r11.s64 = -2096037888;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-14680
	ctx.r6.s64 = r11.s64 + -14680;
	// b 0x8310cd70
	sub_8310CD70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310CDD0"))) PPC_WEAK_FUNC(sub_8310CDD0);
PPC_FUNC_IMPL(__imp__sub_8310CDD0) {
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
	// lis r11,-31983
	r11.s64 = -2096037888;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r11,-13960
	ctx.r6.s64 = r11.s64 + -13960;
	// bl 0x8310cd70
	sub_8310CD70(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8310ce14
	if (cr0.lt) goto loc_8310CE14;
	// lis r11,-31983
	r11.s64 = -2096037888;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r11,-15752
	ctx.r6.s64 = r11.s64 + -15752;
	// bl 0x831b5ec0
	sub_831B5EC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310CE14:
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

__attribute__((alias("__imp__sub_8310CE28"))) PPC_WEAK_FUNC(sub_8310CE28);
PPC_FUNC_IMPL(__imp__sub_8310CE28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lwz r3,24448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24448);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CE38"))) PPC_WEAK_FUNC(sub_8310CE38);
PPC_FUNC_IMPL(__imp__sub_8310CE38) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// bge cr6,0x8310ce68
	if (!cr6.lt) goto loc_8310CE68;
loc_8310CE5C:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,28
	ctx.r3.u64 = ctx.r3.u64 | 28;
	// b 0x8310cef8
	goto loc_8310CEF8;
loc_8310CE68:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r10,r11,9
	ctx.r10.s64 = r11.s64 + 9;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r10,r10,-9
	ctx.r10.s64 = ctx.r10.s64 + -9;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r11,8(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// rotlwi r31,r11,1
	r31.u64 = __builtin_rotateleft32(r11.u32, 1);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// blt cr6,0x8310ce5c
	if (cr6.lt) goto loc_8310CE5C;
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// bl 0x830d6d68
	sub_830D6D68(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8310cec4
	if (!cr0.eq) goto loc_8310CEC4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310cef8
	goto loc_8310CEF8;
loc_8310CEC4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sthx r11,r10,r31
	PPC_STORE_U16(ctx.r10.u32 + r31.u32, r11.u16);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8310CEF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8310CF00"))) PPC_WEAK_FUNC(sub_8310CF00);
PPC_FUNC_IMPL(__imp__sub_8310CF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
loc_8310CF04:
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
	// bne 0x8310cf04
	if (!cr0.eq) goto loc_8310CF04;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CF28"))) PPC_WEAK_FUNC(sub_8310CF28);
PPC_FUNC_IMPL(__imp__sub_8310CF28) {
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
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r31,r3,24
	r31.s64 = ctx.r3.s64 + 24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8310cf5c
	if (!cr6.eq) goto loc_8310CF5C;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8310cf5c
	if (!cr6.eq) goto loc_8310CF5C;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8310e2e0
	sub_8310E2E0(ctx, base);
loc_8310CF5C:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8310cf5c
	if (!cr0.eq) goto loc_8310CF5C;
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

__attribute__((alias("__imp__sub_8310CF90"))) PPC_WEAK_FUNC(sub_8310CF90);
PPC_FUNC_IMPL(__imp__sub_8310CF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
loc_8310CF94:
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
	// bne 0x8310cf94
	if (!cr0.eq) goto loc_8310CF94;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8310cfd4
	if (cr0.eq) goto loc_8310CFD4;
	// b 0x8310e348
	sub_8310E348(ctx, base);
	return;
loc_8310CFD4:
	// b 0x8310e270
	sub_8310E270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310CFD8"))) PPC_WEAK_FUNC(sub_8310CFD8);
PPC_FUNC_IMPL(__imp__sub_8310CFD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CFE0"))) PPC_WEAK_FUNC(sub_8310CFE0);
PPC_FUNC_IMPL(__imp__sub_8310CFE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x830d77b0
	sub_830D77B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310CFE8"))) PPC_WEAK_FUNC(sub_8310CFE8);
PPC_FUNC_IMPL(__imp__sub_8310CFE8) {
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
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831ba760
	sub_831BA760(ctx, base);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r11,r31
	r11.u64 = r31.u64;
	// b 0x8310d034
	goto loc_8310D034;
loc_8310D018:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,92
	cr6.compare<uint32_t>(ctx.r10.u32, 92, xer);
	// bne cr6,0x8310d02c
	if (!cr6.eq) goto loc_8310D02C;
	// li r10,47
	ctx.r10.s64 = 47;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
loc_8310D02C:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_8310D034:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8310d018
	if (!cr0.eq) goto loc_8310D018;
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

__attribute__((alias("__imp__sub_8310D058"))) PPC_WEAK_FUNC(sub_8310D058);
PPC_FUNC_IMPL(__imp__sub_8310D058) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8310d084
	if (cr6.lt) goto loc_8310D084;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8310D084:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8310d104
	if (cr6.eq) goto loc_8310D104;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8310d10c
	if (cr0.lt) goto loc_8310D10C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8310d10c
	if (cr0.lt) goto loc_8310D10C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8310d10c
	goto loc_8310D10C;
loc_8310D104:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_8310D10C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8310D118"))) PPC_WEAK_FUNC(sub_8310D118);
PPC_FUNC_IMPL(__imp__sub_8310D118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
loc_8310D11C:
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
	// bne 0x8310d11c
	if (!cr0.eq) goto loc_8310D11C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D140"))) PPC_WEAK_FUNC(sub_8310D140);
PPC_FUNC_IMPL(__imp__sub_8310D140) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// clrlwi. r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8310d1b4
	if (cr0.eq) goto loc_8310D1B4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8310d1a8
	if (cr6.lt) goto loc_8310D1A8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8310d1a8
	if (!cr6.lt) goto loc_8310D1A8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r5,r11,r30
	ctx.r5.u64 = r11.u64 + r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8310d288
	if (cr0.lt) goto loc_8310D288;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// b 0x8310d268
	goto loc_8310D268;
loc_8310D1A8:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,29
	ctx.r3.u64 = ctx.r3.u64 | 29;
	// b 0x8310d288
	goto loc_8310D288;
loc_8310D1B4:
	// rlwinm. r11,r4,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8310d208
	if (cr0.eq) goto loc_8310D208;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8310d1a8
	if (!cr6.lt) goto loc_8310D1A8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r11,r30
	ctx.r5.u64 = r11.u64 + r30.u64;
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8310d288
	if (cr0.lt) goto loc_8310D288;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// b 0x8310d264
	goto loc_8310D264;
loc_8310D208:
	// rlwinm. r11,r4,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8310d280
	if (cr0.eq) goto loc_8310D280;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x8310d1a8
	if (cr6.gt) goto loc_8310D1A8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subfic r11,r10,1
	xer.ca = ctx.r10.u32 <= 1;
	r11.s64 = 1 - ctx.r10.s64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8310d1a8
	if (cr6.lt) goto loc_8310D1A8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8310d288
	if (cr0.lt) goto loc_8310D288;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_8310D264:
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8310D268:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x8310d288
	goto loc_8310D288;
loc_8310D280:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8310D288:
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

__attribute__((alias("__imp__sub_8310D2A0"))) PPC_WEAK_FUNC(sub_8310D2A0);
PPC_FUNC_IMPL(__imp__sub_8310D2A0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310d2fc
	if (cr0.eq) goto loc_8310D2FC;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-21336
	ctx.r10.s64 = ctx.r10.s64 + -21336;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x8310d300
	goto loc_8310D300;
loc_8310D2FC:
	// li r31,0
	r31.s64 = 0;
loc_8310D300:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8310d314
	if (!cr6.eq) goto loc_8310D314;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310d370
	goto loc_8310D370;
loc_8310D314:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x8310d350
	if (!cr0.lt) goto loc_8310D350;
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8310d370
	goto loc_8310D370;
loc_8310D350:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
loc_8310D370:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8310D378"))) PPC_WEAK_FUNC(sub_8310D378);
PPC_FUNC_IMPL(__imp__sub_8310D378) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne cr6,0x8310d3b0
	if (!cr6.eq) goto loc_8310D3B0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8310d3f8
	goto loc_8310D3F8;
loc_8310D3B0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310d3f0
	if (cr6.eq) goto loc_8310D3F0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8310d3f8
	if (cr0.lt) goto loc_8310D3F8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x8310d3f8
	goto loc_8310D3F8;
loc_8310D3F0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_8310D3F8:
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

__attribute__((alias("__imp__sub_8310D410"))) PPC_WEAK_FUNC(sub_8310D410);
PPC_FUNC_IMPL(__imp__sub_8310D410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8310D43C"))) PPC_WEAK_FUNC(sub_8310D43C);
PPC_FUNC_IMPL(__imp__sub_8310D43C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D440"))) PPC_WEAK_FUNC(sub_8310D440);
PPC_FUNC_IMPL(__imp__sub_8310D440) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x8310d4b8
	if (cr6.lt) goto loc_8310D4B8;
	// lis r11,2730
	r11.s64 = 178913280;
	// ori r11,r11,43690
	r11.u64 = r11.u64 | 43690;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8310d4b8
	if (!cr6.lt) goto loc_8310D4B8;
	// lis r11,8191
	r11.s64 = 536805376;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8310d4b8
	if (!cr6.lt) goto loc_8310D4B8;
	// mulli r3,r31,12
	ctx.r3.s64 = r31.s64 * 12;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310d4b8
	if (cr0.eq) goto loc_8310D4B8;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310d4b8
	if (cr0.eq) goto loc_8310D4B8;
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8310d4bc
	goto loc_8310D4BC;
loc_8310D4B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310D4BC:
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

__attribute__((alias("__imp__sub_8310D4D8"))) PPC_WEAK_FUNC(sub_8310D4D8);
PPC_FUNC_IMPL(__imp__sub_8310D4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
loc_8310D4F4:
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
	// bne 0x8310d4f4
	if (!cr0.eq) goto loc_8310D4F4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8310d584
	if (!cr6.eq) goto loc_8310D584;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310d54c
	if (cr6.eq) goto loc_8310D54C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8310cf90
	sub_8310CF90(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_8310D54C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310d56c
	if (cr6.eq) goto loc_8310D56C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_8310D56C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-21336
	r11.s64 = r11.s64 + -21336;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310D584:
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

__attribute__((alias("__imp__sub_8310D5A0"))) PPC_WEAK_FUNC(sub_8310D5A0);
PPC_FUNC_IMPL(__imp__sub_8310D5A0) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8310d5f4
	if (!cr6.gt) goto loc_8310D5F4;
	// li r30,0
	r30.s64 = 0;
loc_8310D5C8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8310d600
	if (cr0.eq) goto loc_8310D600;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8310d5c8
	if (cr6.lt) goto loc_8310D5C8;
loc_8310D5F4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8310D5F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8310D600:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8310d5f8
	goto loc_8310D5F8;
}

__attribute__((alias("__imp__sub_8310D608"))) PPC_WEAK_FUNC(sub_8310D608);
PPC_FUNC_IMPL(__imp__sub_8310D608) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r31,r28
	r31.u64 = r28.u64;
	// stw r28,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r28.u32);
	// beq cr6,0x8310d768
	if (cr6.eq) goto loc_8310D768;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8310d768
	if (cr0.eq) goto loc_8310D768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6e90
	sub_830D6E90(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x8310d78c
	if (cr0.lt) goto loc_8310D78C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8310cfe8
	sub_8310CFE8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x8310d78c
	if (cr0.lt) goto loc_8310D78C;
	// lwz r31,12(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310d5a0
	sub_8310D5A0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8310d68c
	if (cr6.eq) goto loc_8310D68C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8310d698
	if (!cr6.eq) goto loc_8310D698;
loc_8310D68C:
	// lis r30,-32720
	r30.s64 = -2144337920;
	// ori r30,r30,19
	r30.u64 = r30.u64 | 19;
	// b 0x8310d78c
	goto loc_8310D78C;
loc_8310D698:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310d6dc
	if (cr0.eq) goto loc_8310D6DC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// addi r11,r11,-21336
	r11.s64 = r11.s64 + -21336;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r28.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r28.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// b 0x8310d6e0
	goto loc_8310D6E0;
loc_8310D6DC:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_8310D6E0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8310d6f4
	if (!cr6.eq) goto loc_8310D6F4;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8310d78c
	goto loc_8310D78C;
loc_8310D6F4:
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x8310d770
	if (cr0.lt) goto loc_8310D770;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8310cf28
	sub_8310CF28(ctx, base);
	// stw r28,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r28.u32);
	// mr r30,r28
	r30.u64 = r28.u64;
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// b 0x8310d78c
	goto loc_8310D78C;
loc_8310D768:
	// lis r30,-32720
	r30.s64 = -2144337920;
	// ori r30,r30,18
	r30.u64 = r30.u64 | 18;
loc_8310D770:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8310d78c
	if (cr6.eq) goto loc_8310D78C;
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
loc_8310D78C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830d6e00
	sub_830D6E00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8310D7A0"))) PPC_WEAK_FUNC(sub_8310D7A0);
PPC_FUNC_IMPL(__imp__sub_8310D7A0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8310d86c
	if (cr6.eq) goto loc_8310D86C;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8310d86c
	if (cr0.eq) goto loc_8310D86C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6e90
	sub_830D6E90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8310d874
	if (cr0.lt) goto loc_8310D874;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8310cfe8
	sub_8310CFE8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8310d874
	if (cr0.lt) goto loc_8310D874;
	// lwz r31,12(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310d5a0
	sub_8310D5A0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8310d820
	if (cr6.eq) goto loc_8310D820;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8310d82c
	if (!cr6.eq) goto loc_8310D82C;
loc_8310D820:
	// lis r31,-32720
	r31.s64 = -2144337920;
	// ori r31,r31,19
	r31.u64 = r31.u64 | 19;
	// b 0x8310d874
	goto loc_8310D874;
loc_8310D82C:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// beq cr6,0x8310d864
	if (cr6.eq) goto loc_8310D864;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_8310D864:
	// li r31,0
	r31.s64 = 0;
	// b 0x8310d874
	goto loc_8310D874;
loc_8310D86C:
	// lis r31,-32720
	r31.s64 = -2144337920;
	// ori r31,r31,18
	r31.u64 = r31.u64 | 18;
loc_8310D874:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830d6e00
	sub_830D6E00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8310D888"))) PPC_WEAK_FUNC(sub_8310D888);
PPC_FUNC_IMPL(__imp__sub_8310D888) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8310d7a0
	sub_8310D7A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310D890"))) PPC_WEAK_FUNC(sub_8310D890);
PPC_FUNC_IMPL(__imp__sub_8310D890) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x830d5b80
	sub_830D5B80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8310d978
	if (cr0.eq) goto loc_8310D978;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addic. r30,r11,1
	xer.ca = r11.u32 > 4294967294;
	r30.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x8310d978
	if (!cr0.gt) goto loc_8310D978;
	// lis r11,5461
	r11.s64 = 357892096;
	// ori r11,r11,21845
	r11.u64 = r11.u64 | 21845;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8310d978
	if (!cr6.lt) goto loc_8310D978;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x8310d920
	if (!cr6.gt) goto loc_8310D920;
	// mulli r4,r30,12
	ctx.r4.s64 = r30.s64 * 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310d978
	if (cr0.eq) goto loc_8310D978;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310d978
	if (cr0.eq) goto loc_8310D978;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_8310D920:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r10,r11,12
	ctx.r10.s64 = r11.s64 * 12;
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8310d94c
	if (cr0.eq) goto loc_8310D94C;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
loc_8310D94C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8310d964
	if (cr0.eq) goto loc_8310D964;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8310D964:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8310d984
	goto loc_8310D984;
loc_8310D978:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310D984:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8310D990"))) PPC_WEAK_FUNC(sub_8310D990);
PPC_FUNC_IMPL(__imp__sub_8310D990) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r25,r28,4
	r25.s64 = r28.s64 + 4;
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r23,r24
	r23.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310d9cc
	if (cr6.eq) goto loc_8310D9CC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x8310dcb0
	goto loc_8310DCB0;
loc_8310D9CC:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310d9f4
	if (cr0.eq) goto loc_8310D9F4;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r24,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r24.u32);
	// stw r24,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r24.u32);
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r24.u32);
	// b 0x8310d9f8
	goto loc_8310D9F8;
loc_8310D9F4:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8310D9F8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// bne cr6,0x8310da10
	if (!cr6.eq) goto loc_8310DA10;
loc_8310DA04:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8310dd04
	goto loc_8310DD04;
loc_8310DA10:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8310dd04
	if (cr0.lt) goto loc_8310DD04;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8310dd04
	if (cr0.lt) goto loc_8310DD04;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8310dce4
	if (cr0.lt) goto loc_8310DCE4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(r11.u32, 22, xer);
	// bne cr6,0x8310dce4
	if (!cr6.eq) goto loc_8310DCE4;
	// lis r11,22613
	r11.s64 = 1481965568;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ori r11,r11,18778
	r11.u64 = r11.u64 | 18778;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8310dcd8
	if (!cr6.eq) goto loc_8310DCD8;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8310dcd8
	if (!cr6.eq) goto loc_8310DCD8;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r31,120(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x8310dcd8
	if (!cr6.eq) goto loc_8310DCD8;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lhz r26,132(r1)
	r26.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// beq 0x8310da04
	if (cr0.eq) goto loc_8310DA04;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8310dcd8
	if (cr0.lt) goto loc_8310DCD8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8310dcd8
	if (!cr6.eq) goto loc_8310DCD8;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r10,r10,22
	ctx.r10.s64 = ctx.r10.s64 + 22;
	// stw r11,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r11.u32);
	// stw r10,20(r28)
	PPC_STORE_U32(r28.u32 + 20, ctx.r10.u32);
	// bl 0x8310d440
	sub_8310D440(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8310da04
	if (cr0.eq) goto loc_8310DA04;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8310dc90
	if (cr6.eq) goto loc_8310DC90;
loc_8310DB54:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310db80
	if (cr0.eq) goto loc_8310DB80;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r24,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r24.u32);
	// stw r24,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r24.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r24.u32);
	// b 0x8310db88
	goto loc_8310DB88;
loc_8310DB80:
	// mr r30,r24
	r30.u64 = r24.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
loc_8310DB88:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8310da04
	if (cr6.eq) goto loc_8310DA04;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8310ce38
	sub_8310CE38(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8310dcec
	if (cr0.lt) goto loc_8310DCEC;
	// lwz r11,32(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8310dc50
	if (cr6.eq) goto loc_8310DC50;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r11,r9
	ctx.r5.u64 = r11.u64 + ctx.r9.u64;
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8310dcb8
	if (cr0.lt) goto loc_8310DCB8;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8310dcb8
	if (cr0.lt) goto loc_8310DCB8;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8310dcb8
	if (cr0.lt) goto loc_8310DCB8;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
loc_8310DC50:
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8310cfe8
	sub_8310CFE8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8310dcc4
	if (cr0.lt) goto loc_8310DCC4;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8310d890
	sub_8310D890(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x8310dccc
	if (cr0.eq) goto loc_8310DCCC;
	// bl 0x830d6e00
	sub_830D6E00(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// blt cr6,0x8310db54
	if (cr6.lt) goto loc_8310DB54;
loc_8310DC90:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8310dca0
	if (cr6.eq) goto loc_8310DCA0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310DCA0:
	// li r11,1
	r11.s64 = 1;
	// stw r24,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28(r28)
	PPC_STORE_U32(r28.u32 + 28, r11.u32);
loc_8310DCB0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b64
	return;
loc_8310DCB8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8310DCBC:
	// bl 0x830d6e00
	sub_830D6E00(ctx, base);
	// b 0x8310dcec
	goto loc_8310DCEC;
loc_8310DCC4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8310dcbc
	goto loc_8310DCBC;
loc_8310DCCC:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8310dcbc
	goto loc_8310DCBC;
loc_8310DCD8:
	// lis r31,-32720
	r31.s64 = -2144337920;
	// ori r31,r31,28
	r31.u64 = r31.u64 | 28;
	// b 0x8310dd04
	goto loc_8310DD04;
loc_8310DCE4:
	// lis r31,-32720
	r31.s64 = -2144337920;
	// ori r31,r31,28
	r31.u64 = r31.u64 | 28;
loc_8310DCEC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8310dcfc
	if (cr6.eq) goto loc_8310DCFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310DCFC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x8310dc90
	if (!cr6.lt) goto loc_8310DC90;
loc_8310DD04:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310dd7c
	if (cr6.eq) goto loc_8310DD7C;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8310dd54
	if (!cr6.gt) goto loc_8310DD54;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8310DD2C:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8310dd2c
	if (cr6.lt) goto loc_8310DD2C;
loc_8310DD54:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x830ece38
	sub_830ECE38(ctx, base);
	// lwz r30,12(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8310dd78
	if (cr6.eq) goto loc_8310DD78;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ece38
	sub_830ECE38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310DD78:
	// stw r24,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r24.u32);
loc_8310DD7C:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310dd9c
	if (cr6.eq) goto loc_8310DD9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r24,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r24.u32);
loc_8310DD9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8310dcb0
	goto loc_8310DCB0;
}

__attribute__((alias("__imp__sub_8310DDA8"))) PPC_WEAK_FUNC(sub_8310DDA8);
PPC_FUNC_IMPL(__imp__sub_8310DDA8) {
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
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r10,r10,-24596
	ctx.r10.s64 = ctx.r10.s64 + -24596;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310de30
	if (cr6.eq) goto loc_8310DE30;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8310de0c
	if (!cr6.gt) goto loc_8310DE0C;
	// li r30,0
	r30.s64 = 0;
loc_8310DDE4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8310dde4
	if (cr6.lt) goto loc_8310DDE4;
loc_8310DE0C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x830ece38
	sub_830ECE38(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8310de30
	if (cr6.eq) goto loc_8310DE30;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ece38
	sub_830ECE38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310DE30:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310de40
	if (cr6.eq) goto loc_8310DE40;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310DE40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8310DE48"))) PPC_WEAK_FUNC(sub_8310DE48);
PPC_FUNC_IMPL(__imp__sub_8310DE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
loc_8310DE60:
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
	// bne 0x8310de60
	if (!cr0.eq) goto loc_8310DE60;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8310debc
	if (!cr6.eq) goto loc_8310DEBC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310dea8
	if (cr6.eq) goto loc_8310DEA8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8310DEA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310dda8
	sub_8310DDA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310DEBC:
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

__attribute__((alias("__imp__sub_8310DED0"))) PPC_WEAK_FUNC(sub_8310DED0);
PPC_FUNC_IMPL(__imp__sub_8310DED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310df04
	if (cr6.eq) goto loc_8310DF04;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8310DF04:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310df14
	if (cr6.eq) goto loc_8310DF14;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310DF14:
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

__attribute__((alias("__imp__sub_8310DF28"))) PPC_WEAK_FUNC(sub_8310DF28);
PPC_FUNC_IMPL(__imp__sub_8310DF28) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	r11.u64 = r30.u64;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// b 0x8310df5c
	goto loc_8310DF5C;
loc_8310DF50:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_8310DF5C:
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x8310df50
	if (!cr0.eq) goto loc_8310DF50;
	// rlwinm r11,r10,2,25,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7C;
	// lwzx r31,r11,r3
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// b 0x8310df88
	goto loc_8310DF88;
loc_8310DF70:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8310dfac
	if (cr0.eq) goto loc_8310DFAC;
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_8310DF88:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8310df70
	if (!cr6.eq) goto loc_8310DF70;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310DF94:
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
loc_8310DFAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8310df94
	goto loc_8310DF94;
}

__attribute__((alias("__imp__sub_8310DFB8"))) PPC_WEAK_FUNC(sub_8310DFB8);
PPC_FUNC_IMPL(__imp__sub_8310DFB8) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r11,-8028
	r30.s64 = r11.s64 + -8028;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8310e004
	if (cr0.eq) goto loc_8310E004;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x8310e008
	goto loc_8310E008;
loc_8310E004:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8310E008:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r11,r11,-7364
	r11.s64 = r11.s64 + -7364;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x8310e048
	if (!cr6.eq) goto loc_8310E048;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
loc_8310E024:
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
loc_8310E048:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r31,0
	r31.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x8310e024
	goto loc_8310E024;
}

__attribute__((alias("__imp__sub_8310E058"))) PPC_WEAK_FUNC(sub_8310E058);
PPC_FUNC_IMPL(__imp__sub_8310E058) {
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
	// bl 0x8310df28
	sub_8310DF28(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8310e090
	if (cr0.eq) goto loc_8310E090;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x8310e094
	goto loc_8310E094;
loc_8310E090:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310E094:
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

__attribute__((alias("__imp__sub_8310E0A8"))) PPC_WEAK_FUNC(sub_8310E0A8);
PPC_FUNC_IMPL(__imp__sub_8310E0A8) {
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
	// li r28,32
	r28.s64 = 32;
loc_8310E0BC:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8310e0e8
	if (cr6.eq) goto loc_8310E0E8;
loc_8310E0C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8310ded0
	sub_8310DED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8310e0c8
	if (!cr6.eq) goto loc_8310E0C8;
loc_8310E0E8:
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
	// bne 0x8310e0bc
	if (!cr0.eq) goto loc_8310E0BC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8310E108"))) PPC_WEAK_FUNC(sub_8310E108);
PPC_FUNC_IMPL(__imp__sub_8310E108) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// li r11,0
	r11.s64 = 0;
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// b 0x8310e138
	goto loc_8310E138;
loc_8310E12C:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
loc_8310E138:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8310e12c
	if (!cr0.eq) goto loc_8310E12C;
	// rlwinm r30,r11,2,25,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x7C;
	// li r29,0
	r29.s64 = 0;
	// lwzx r31,r30,r27
	r31.u64 = PPC_LOAD_U32(r30.u32 + r27.u32);
	// b 0x8310e16c
	goto loc_8310E16C;
loc_8310E150:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8310e178
	if (cr0.eq) goto loc_8310E178;
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_8310E16C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8310e150
	if (!cr6.eq) goto loc_8310E150;
	// b 0x8310e1a0
	goto loc_8310E1A0;
loc_8310E178:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8310e18c
	if (!cr6.eq) goto loc_8310E18C;
	// stwx r11,r30,r27
	PPC_STORE_U32(r30.u32 + r27.u32, r11.u32);
	// b 0x8310e190
	goto loc_8310E190;
loc_8310E18C:
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
loc_8310E190:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310ded0
	sub_8310DED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310E1A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8310E1A8"))) PPC_WEAK_FUNC(sub_8310E1A8);
PPC_FUNC_IMPL(__imp__sub_8310E1A8) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r11,-8028
	r30.s64 = r11.s64 + -8028;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r31,-31942
	r31.s64 = -2093350912;
	// lwz r3,-7360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -7360);
	// bl 0x8310e0a8
	sub_8310E0A8(ctx, base);
	// lwz r3,-7360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -7360);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310e1e8
	if (cr6.eq) goto loc_8310E1E8;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310E1E8:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,-7360(r31)
	PPC_STORE_U32(r31.u32 + -7360, r11.u32);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8310E210"))) PPC_WEAK_FUNC(sub_8310E210);
PPC_FUNC_IMPL(__imp__sub_8310E210) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-8028
	r30.s64 = r11.s64 + -8028;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,-7360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7360);
	// bl 0x8310e058
	sub_8310E058(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
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

__attribute__((alias("__imp__sub_8310E270"))) PPC_WEAK_FUNC(sub_8310E270);
PPC_FUNC_IMPL(__imp__sub_8310E270) {
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
	// addi r30,r11,-8028
	r30.s64 = r11.s64 + -8028;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,-7360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7360);
	// bl 0x8310df28
	sub_8310DF28(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8310e2bc
	if (cr0.eq) goto loc_8310E2BC;
	// bl 0x831cdad0
	sub_831CDAD0(ctx, base);
	// addi r11,r3,5000
	r11.s64 = ctx.r3.s64 + 5000;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_8310E2BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8310E2E0"))) PPC_WEAK_FUNC(sub_8310E2E0);
PPC_FUNC_IMPL(__imp__sub_8310E2E0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-8028
	r31.s64 = r11.s64 + -8028;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,-7360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7360);
	// bl 0x8310df28
	sub_8310DF28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310e328
	if (cr0.eq) goto loc_8310E328;
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_8310E328:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8310E348"))) PPC_WEAK_FUNC(sub_8310E348);
PPC_FUNC_IMPL(__imp__sub_8310E348) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-8028
	r31.s64 = r11.s64 + -8028;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,-7360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7360);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310e388
	if (cr6.eq) goto loc_8310E388;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8310e108
	sub_8310E108(ctx, base);
loc_8310E388:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8310E3A8"))) PPC_WEAK_FUNC(sub_8310E3A8);
PPC_FUNC_IMPL(__imp__sub_8310E3A8) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x8310e058
	sub_8310E058(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310e3d4
	if (cr0.eq) goto loc_8310E3D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8310e4b8
	goto loc_8310E4B8;
loc_8310E3D4:
	// li r30,0
	r30.s64 = 0;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x8310e3f4
	goto loc_8310E3F4;
loc_8310E3E8:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_8310E3F4:
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x8310e3e8
	if (!cr0.eq) goto loc_8310E3E8;
	// li r3,16
	ctx.r3.s64 = 16;
	// clrlwi r27,r10,27
	r27.u64 = ctx.r10.u32 & 0x1F;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310e428
	if (cr0.eq) goto loc_8310E428;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// b 0x8310e42c
	goto loc_8310E42C;
loc_8310E428:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8310E42C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8310e440
	if (!cr6.eq) goto loc_8310E440;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310e4b8
	goto loc_8310E4B8;
loc_8310E440:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x8310e470
	if (!cr0.lt) goto loc_8310E470;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310ded0
	sub_8310DED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8310e4b8
	goto loc_8310E4B8;
loc_8310E470:
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x8310e4a4
	goto loc_8310E4A4;
loc_8310E49C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
loc_8310E4A4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310e49c
	if (!cr6.eq) goto loc_8310E49C;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310E4B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8310E4C0"))) PPC_WEAK_FUNC(sub_8310E4C0);
PPC_FUNC_IMPL(__imp__sub_8310E4C0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,-8028
	r29.s64 = r11.s64 + -8028;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,-7360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7360);
	// bl 0x8310e3a8
	sub_8310E3A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8310E510"))) PPC_WEAK_FUNC(sub_8310E510);
PPC_FUNC_IMPL(__imp__sub_8310E510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lwz r3,24452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24452);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E520"))) PPC_WEAK_FUNC(sub_8310E520);
PPC_FUNC_IMPL(__imp__sub_8310E520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8310e534
	if (cr6.eq) goto loc_8310E534;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_8310E534:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E540"))) PPC_WEAK_FUNC(sub_8310E540);
PPC_FUNC_IMPL(__imp__sub_8310E540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_8310E544:
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
	// bne 0x8310e544
	if (!cr0.eq) goto loc_8310E544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E568"))) PPC_WEAK_FUNC(sub_8310E568);
PPC_FUNC_IMPL(__imp__sub_8310E568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310e59c
	if (cr6.eq) goto loc_8310E59C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8310E59C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
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

__attribute__((alias("__imp__sub_8310E5B8"))) PPC_WEAK_FUNC(sub_8310E5B8);
PPC_FUNC_IMPL(__imp__sub_8310E5B8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310e5f0
	if (cr6.eq) goto loc_8310E5F0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8310E5F0:
	// stw r31,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8310e610
	if (cr6.eq) goto loc_8310E610;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8310E610:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8310E630"))) PPC_WEAK_FUNC(sub_8310E630);
PPC_FUNC_IMPL(__imp__sub_8310E630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_8310E640:
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
	// bne 0x8310e640
	if (!cr0.eq) goto loc_8310E640;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8310e688
	if (!cr6.eq) goto loc_8310E688;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310e680
	if (cr6.eq) goto loc_8310E680;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r11,r11,-24556
	r11.s64 = r11.s64 + -24556;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310E680:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310e68c
	goto loc_8310E68C;
loc_8310E688:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_8310E68C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E6A0"))) PPC_WEAK_FUNC(sub_8310E6A0);
PPC_FUNC_IMPL(__imp__sub_8310E6A0) {
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// beq cr6,0x8310e848
	if (cr6.eq) goto loc_8310E848;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8310e848
	if (cr0.eq) goto loc_8310E848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x8310e874
	if (cr0.lt) goto loc_8310E874;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8310e708
	goto loc_8310E708;
loc_8310E6F0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
	// bne cr6,0x8310e704
	if (!cr6.eq) goto loc_8310E704;
	// li r10,92
	ctx.r10.s64 = 92;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
loc_8310E704:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8310E708:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8310e6f0
	if (!cr0.eq) goto loc_8310E6F0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310e758
	if (cr0.eq) goto loc_8310E758;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// addi r11,r11,-21284
	r11.s64 = r11.s64 + -21284;
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r27.u32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r27.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r27.u32);
	// stw r27,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r27.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// b 0x8310e75c
	goto loc_8310E75C;
loc_8310E758:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_8310E75C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8310e770
	if (!cr6.eq) goto loc_8310E770;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8310e874
	goto loc_8310E874;
loc_8310E770:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r29,1
	ctx.r3.s64 = r29.s64 + 1;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8310e798
	if (!cr0.eq) goto loc_8310E798;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8310e858
	goto loc_8310E858;
loc_8310E798:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x8310e7c4
	if (!cr6.gt) goto loc_8310E7C4;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8310E7A8:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x8310e7a8
	if (!cr0.eq) goto loc_8310E7A8;
loc_8310E7C4:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bd4668
	sub_82BD4668(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8310e80c
	if (!cr6.eq) goto loc_8310E80C;
loc_8310E7F4:
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8310e840
	if (!cr0.gt) goto loc_8310E840;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r30,r11,32775
	r30.u64 = r11.u64 | 2147942400;
	// b 0x8310e850
	goto loc_8310E850;
loc_8310E80C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bd4600
	sub_82BD4600(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8310e7f4
	if (cr6.eq) goto loc_8310E7F4;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r31,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r31.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8310E840:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8310e850
	goto loc_8310E850;
loc_8310E848:
	// lis r30,-32720
	r30.s64 = -2144337920;
	// ori r30,r30,18
	r30.u64 = r30.u64 | 18;
loc_8310E850:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x8310e878
	if (!cr6.lt) goto loc_8310E878;
loc_8310E858:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8310e874
	if (cr6.eq) goto loc_8310E874;
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
loc_8310E874:
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
loc_8310E878:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310e888
	if (cr6.eq) goto loc_8310E888;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310E888:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8310E898"))) PPC_WEAK_FUNC(sub_8310E898);
PPC_FUNC_IMPL(__imp__sub_8310E898) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8310e99c
	if (cr6.eq) goto loc_8310E99C;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8310e99c
	if (cr0.eq) goto loc_8310E99C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8310e9a4
	if (cr0.lt) goto loc_8310E9A4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8310e8f8
	goto loc_8310E8F8;
loc_8310E8E0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
	// bne cr6,0x8310e8f4
	if (!cr6.eq) goto loc_8310E8F4;
	// li r10,92
	ctx.r10.s64 = 92;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
loc_8310E8F4:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8310E8F8:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8310e8e0
	if (!cr0.eq) goto loc_8310E8E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8310e92c
	if (!cr0.eq) goto loc_8310E92C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310e9a4
	goto loc_8310E9A4;
loc_8310E92C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8310e958
	if (!cr6.gt) goto loc_8310E958;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8310E93C:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x8310e93c
	if (!cr0.eq) goto loc_8310E93C;
loc_8310E958:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ce358
	sub_831CE358(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8310e994
	if (!cr6.eq) goto loc_8310E994;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8310e9a4
	if (!cr0.gt) goto loc_8310E9A4;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = r11.u64 | 2147942400;
	// b 0x8310e9a4
	goto loc_8310E9A4;
loc_8310E994:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310e9a4
	goto loc_8310E9A4;
loc_8310E99C:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,18
	ctx.r3.u64 = ctx.r3.u64 | 18;
loc_8310E9A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8310E9B0"))) PPC_WEAK_FUNC(sub_8310E9B0);
PPC_FUNC_IMPL(__imp__sub_8310E9B0) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x8310e9dc
	if (cr6.lt) goto loc_8310E9DC;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
loc_8310E9DC:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8310ea38
	if (cr6.eq) goto loc_8310EA38;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82bd4478
	sub_82BD4478(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8310ea14
	if (!cr0.eq) goto loc_8310EA14;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8310ea44
	if (!cr0.gt) goto loc_8310EA44;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = r11.u64 | 2147942400;
	// b 0x8310ea44
	goto loc_8310EA44;
loc_8310EA14:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8310ea40
	goto loc_8310EA40;
loc_8310EA38:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8310EA40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310EA44:
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

__attribute__((alias("__imp__sub_8310EA60"))) PPC_WEAK_FUNC(sub_8310EA60);
PPC_FUNC_IMPL(__imp__sub_8310EA60) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8310ea88
	if (!cr6.eq) goto loc_8310EA88;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8310ebc4
	goto loc_8310EBC4;
loc_8310EA88:
	// li r31,0
	r31.s64 = 0;
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8310EA98:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8310ea98
	if (!cr6.eq) goto loc_8310EA98;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8310ead4
	if (!cr0.eq) goto loc_8310EAD4;
loc_8310EAC8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310ebc4
	goto loc_8310EBC4;
loc_8310EAD4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bd4668
	sub_82BD4668(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// bne cr6,0x8310eb30
	if (!cr6.eq) goto loc_8310EB30;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8310ebc4
	if (!cr0.gt) goto loc_8310EBC4;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = r11.u64 | 2147942400;
	// b 0x8310ebc4
	goto loc_8310EBC4;
loc_8310EB30:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310eb70
	if (cr0.eq) goto loc_8310EB70;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// addi r11,r11,-21284
	r11.s64 = r11.s64 + -21284;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
loc_8310EB70:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8310eb8c
	if (!cr6.eq) goto loc_8310EB8C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// b 0x8310eac8
	goto loc_8310EAC8;
loc_8310EB8C:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310EBC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8310EBD0"))) PPC_WEAK_FUNC(sub_8310EBD0);
PPC_FUNC_IMPL(__imp__sub_8310EBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
loc_8310EBEC:
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
	// bne 0x8310ebec
	if (!cr0.eq) goto loc_8310EBEC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8310ec80
	if (!cr6.eq) goto loc_8310EC80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310ec2c
	if (cr6.eq) goto loc_8310EC2C;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8310ec2c
	if (cr6.eq) goto loc_8310EC2C;
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
loc_8310EC2C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310ec50
	if (cr6.eq) goto loc_8310EC50;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8310EC50:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310ec64
	if (cr6.eq) goto loc_8310EC64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310EC64:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-21284
	r11.s64 = r11.s64 + -21284;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310EC80:
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

__attribute__((alias("__imp__sub_8310EC98"))) PPC_WEAK_FUNC(sub_8310EC98);
PPC_FUNC_IMPL(__imp__sub_8310EC98) {
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
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8310ecd4
	if (cr0.eq) goto loc_8310ECD4;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8310eccc
	if (!cr6.eq) goto loc_8310ECCC;
loc_8310ECC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310ed64
	goto loc_8310ED64;
loc_8310ECCC:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8310ed10
	goto loc_8310ED10;
loc_8310ECD4:
	// rlwinm. r10,r4,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8310ecec
	if (cr0.eq) goto loc_8310ECEC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8310ecc4
	if (cr6.eq) goto loc_8310ECC4;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8310ed10
	goto loc_8310ED10;
loc_8310ECEC:
	// rlwinm. r10,r4,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8310ed5c
	if (cr0.eq) goto loc_8310ED5C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8310ecc4
	if (cr6.eq) goto loc_8310ECC4;
	// li r6,2
	ctx.r6.s64 = 2;
loc_8310ED10:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x831cd3e8
	sub_831CD3E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8310ed44
	if (!cr6.eq) goto loc_8310ED44;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8310ed64
	if (!cr0.gt) goto loc_8310ED64;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = r11.u64 | 2147942400;
	// b 0x8310ed64
	goto loc_8310ED64;
loc_8310ED44:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x8310ed64
	goto loc_8310ED64;
loc_8310ED5C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8310ED64:
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

__attribute__((alias("__imp__sub_8310ED78"))) PPC_WEAK_FUNC(sub_8310ED78);
PPC_FUNC_IMPL(__imp__sub_8310ED78) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// rlwinm r3,r28,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8310edb0
	if (!cr0.eq) goto loc_8310EDB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310ee48
	goto loc_8310EE48;
loc_8310EDB0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r27,r11,-21228
	r27.s64 = r11.s64 + -21228;
loc_8310EDB8:
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// bl 0x831ba8a0
	sub_831BA8A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne 0x8310ede4
	if (!cr0.eq) goto loc_8310EDE4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x831ba8e0
	sub_831BA8E0(ctx, base);
	// b 0x8310edf8
	goto loc_8310EDF8;
loc_8310EDE4:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// srawi r6,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r6.s64 = r11.s32 >> 1;
	// bl 0x831bac60
	sub_831BAC60(ctx, base);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_8310EDF8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bne 0x8310ee1c
	if (!cr0.eq) goto loc_8310EE1C;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// b 0x8310ee28
	goto loc_8310EE28;
loc_8310EE1C:
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x830e8910
	sub_830E8910(ctx, base);
loc_8310EE28:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8310ee3c
	if (cr6.eq) goto loc_8310EE3C;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8310edb8
	if (!cr6.eq) goto loc_8310EDB8;
loc_8310EE3C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_8310EE48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8310EE50"))) PPC_WEAK_FUNC(sub_8310EE50);
PPC_FUNC_IMPL(__imp__sub_8310EE50) {
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
	// li r27,0
	r27.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// add r11,r29,r3
	r11.u64 = r29.u64 + ctx.r3.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8310eea8
	if (!cr0.eq) goto loc_8310EEA8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310ef5c
	goto loc_8310EF5C;
loc_8310EEA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// b 0x8310eed4
	goto loc_8310EED4;
loc_8310EEBC:
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x8310eee0
	if (cr6.eq) goto loc_8310EEE0;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x8310eee0
	if (cr6.eq) goto loc_8310EEE0;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8310EED4:
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bgt cr6,0x8310eebc
	if (cr6.gt) goto loc_8310EEBC;
	// b 0x8310eee4
	goto loc_8310EEE4;
loc_8310EEE0:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_8310EEE4:
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x8310ef0c
	if (!cr6.lt) goto loc_8310EF0C;
loc_8310EEF4:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// sth r8,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// blt cr6,0x8310eef4
	if (cr6.lt) goto loc_8310EEF4;
loc_8310EF0C:
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// b 0x8310ef28
	goto loc_8310EF28;
loc_8310EF18:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
loc_8310EF28:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8310ef18
	if (!cr0.eq) goto loc_8310EF18;
	// li r10,47
	ctx.r10.s64 = 47;
	// b 0x8310ef3c
	goto loc_8310EF3C;
loc_8310EF38:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
loc_8310EF3C:
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8310ef38
	if (!cr0.eq) goto loc_8310EF38;
	// sth r27,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r27.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
loc_8310EF5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8310EF68"))) PPC_WEAK_FUNC(sub_8310EF68);
PPC_FUNC_IMPL(__imp__sub_8310EF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lwz r3,24456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EF78"))) PPC_WEAK_FUNC(sub_8310EF78);
PPC_FUNC_IMPL(__imp__sub_8310EF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// blt cr6,0x8310eff8
	if (cr6.lt) goto loc_8310EFF8;
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r3
	ctx.r8.u64 = r11.u64 + ctx.r3.u64;
loc_8310EF94:
	// lhz r11,0(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// blt cr6,0x8310efb0
	if (cr6.lt) goto loc_8310EFB0;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(r11.u32, 57, xer);
	// bgt cr6,0x8310efb0
	if (cr6.gt) goto loc_8310EFB0;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// b 0x8310efdc
	goto loc_8310EFDC;
loc_8310EFB0:
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// blt cr6,0x8310efc8
	if (cr6.lt) goto loc_8310EFC8;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(r11.u32, 70, xer);
	// bgt cr6,0x8310efc8
	if (cr6.gt) goto loc_8310EFC8;
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
	// b 0x8310efdc
	goto loc_8310EFDC;
loc_8310EFC8:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// blt cr6,0x8310f004
	if (cr6.lt) goto loc_8310F004;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(r11.u32, 102, xer);
	// bgt cr6,0x8310f004
	if (cr6.gt) goto loc_8310F004;
	// addi r11,r11,-87
	r11.s64 = r11.s64 + -87;
loc_8310EFDC:
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r7,r11,r7
	ctx.r7.u64 = r11.u64 + ctx.r7.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bge cr6,0x8310ef94
	if (!cr6.lt) goto loc_8310EF94;
loc_8310EFF8:
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8310F004:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F010"))) PPC_WEAK_FUNC(sub_8310F010);
PPC_FUNC_IMPL(__imp__sub_8310F010) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cd628
	sub_831CD628(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8310f058
	if (!cr0.eq) goto loc_8310F058;
loc_8310F050:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310f0b0
	goto loc_8310F0B0;
loc_8310F058:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8310f0b0
	if (cr0.eq) goto loc_8310F0B0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cd628
	sub_831CD628(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8310f0a0
	if (!cr0.eq) goto loc_8310F0A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// b 0x8310f050
	goto loc_8310F050;
loc_8310F0A0:
	// add r11,r31,r3
	r11.u64 = r31.u64 + ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
loc_8310F0B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8310F0B8"))) PPC_WEAK_FUNC(sub_8310F0B8);
PPC_FUNC_IMPL(__imp__sub_8310F0B8) {
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x831ba8a0
	sub_831BA8A0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8310f0e8
	if (!cr0.eq) goto loc_8310F0E8;
loc_8310F0E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310f180
	goto loc_8310F180;
loc_8310F0E8:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r30,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r30.s64 = ctx.r10.s32 >> 1;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x8310f140
	if (!cr6.eq) goto loc_8310F140;
	// addi r5,r30,-2
	ctx.r5.s64 = r30.s64 + -2;
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// bl 0x8310ef78
	sub_8310EF78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8310f0e0
	if (cr0.eq) goto loc_8310F0E0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8310f0e0
	if (cr6.lt) goto loc_8310F0E0;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// bge cr6,0x8310f0e0
	if (!cr6.lt) goto loc_8310F0E0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-7352
	ctx.r10.s64 = ctx.r10.s64 + -7352;
	// lwzx r28,r11,r10
	r28.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// b 0x8310f158
	goto loc_8310F158;
loc_8310F140:
	// addi r5,r30,-1
	ctx.r5.s64 = r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310ef78
	sub_8310EF78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8310f0e0
	if (cr0.eq) goto loc_8310F0E0;
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8310F158:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// subf r4,r30,r3
	ctx.r4.s64 = ctx.r3.s64 - r30.s64;
	// addi r3,r29,2
	ctx.r3.s64 = r29.s64 + 2;
	// bl 0x8310f010
	sub_8310F010(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310f0e0
	if (cr0.eq) goto loc_8310F0E0;
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8310F180:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8310F188"))) PPC_WEAK_FUNC(sub_8310F188);
PPC_FUNC_IMPL(__imp__sub_8310F188) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x8310f1c0
	if (cr6.lt) goto loc_8310F1C0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8310F1C0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8310F1F8"))) PPC_WEAK_FUNC(sub_8310F1F8);
PPC_FUNC_IMPL(__imp__sub_8310F1F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8310f22c
	if (!cr0.eq) goto loc_8310F22C;
	// rlwinm. r10,r4,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8310f218
	if (cr0.eq) goto loc_8310F218;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8310f22c
	goto loc_8310F22C;
loc_8310F218:
	// rlwinm. r10,r4,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8310f24c
	if (cr0.eq) goto loc_8310F24C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_8310F22C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8310f24c
	if (cr6.lt) goto loc_8310F24C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8310f24c
	if (!cr6.lt) goto loc_8310F24C;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8310F24C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F258"))) PPC_WEAK_FUNC(sub_8310F258);
PPC_FUNC_IMPL(__imp__sub_8310F258) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310f298
	if (cr0.eq) goto loc_8310F298;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-21220
	r11.s64 = r11.s64 + -21220;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x8310f29c
	goto loc_8310F29C;
loc_8310F298:
	// li r31,0
	r31.s64 = 0;
loc_8310F29C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8310f2b0
	if (!cr6.eq) goto loc_8310F2B0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310f2e4
	goto loc_8310F2E4;
loc_8310F2B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e7368
	sub_830E7368(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// blt cr6,0x8310f2e4
	if (cr6.lt) goto loc_8310F2E4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310F2E4:
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

__attribute__((alias("__imp__sub_8310F300"))) PPC_WEAK_FUNC(sub_8310F300);
PPC_FUNC_IMPL(__imp__sub_8310F300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lwz r3,24460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24460);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F310"))) PPC_WEAK_FUNC(sub_8310F310);
PPC_FUNC_IMPL(__imp__sub_8310F310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_8310F320:
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
	// bne 0x8310f320
	if (!cr0.eq) goto loc_8310F320;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8310f368
	if (!cr6.eq) goto loc_8310F368;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310f360
	if (cr6.eq) goto loc_8310F360;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r11,r11,-21192
	r11.s64 = r11.s64 + -21192;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310F360:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310f36c
	goto loc_8310F36C;
loc_8310F368:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_8310F36C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F380"))) PPC_WEAK_FUNC(sub_8310F380);
PPC_FUNC_IMPL(__imp__sub_8310F380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_8310F390:
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
	// bne 0x8310f390
	if (!cr0.eq) goto loc_8310F390;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8310f3d8
	if (!cr6.eq) goto loc_8310F3D8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310f3d0
	if (cr6.eq) goto loc_8310F3D0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r11,r11,-21220
	r11.s64 = r11.s64 + -21220;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310F3D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310f3dc
	goto loc_8310F3DC;
loc_8310F3D8:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_8310F3DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F3F0"))) PPC_WEAK_FUNC(sub_8310F3F0);
PPC_FUNC_IMPL(__imp__sub_8310F3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310f424
	if (cr6.eq) goto loc_8310F424;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8310F424:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
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

__attribute__((alias("__imp__sub_8310F440"))) PPC_WEAK_FUNC(sub_8310F440);
PPC_FUNC_IMPL(__imp__sub_8310F440) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8310f478
	if (cr6.eq) goto loc_8310F478;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8310F478:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310f494
	if (cr6.eq) goto loc_8310F494;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8310F494:
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8310F4B8"))) PPC_WEAK_FUNC(sub_8310F4B8);
PPC_FUNC_IMPL(__imp__sub_8310F4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F4C8"))) PPC_WEAK_FUNC(sub_8310F4C8);
PPC_FUNC_IMPL(__imp__sub_8310F4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F4D8"))) PPC_WEAK_FUNC(sub_8310F4D8);
PPC_FUNC_IMPL(__imp__sub_8310F4D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
loc_8310F4E8:
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
	// bne 0x8310f4e8
	if (!cr0.eq) goto loc_8310F4E8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8310f530
	if (!cr6.eq) goto loc_8310F530;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310f528
	if (cr6.eq) goto loc_8310F528;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r11,r11,-21164
	r11.s64 = r11.s64 + -21164;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310F528:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310f534
	goto loc_8310F534;
loc_8310F530:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_8310F534:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F548"))) PPC_WEAK_FUNC(sub_8310F548);
PPC_FUNC_IMPL(__imp__sub_8310F548) {
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// beq cr6,0x8310f658
	if (cr6.eq) goto loc_8310F658;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8310f658
	if (cr0.eq) goto loc_8310F658;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831ba8a0
	sub_831BA8A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310f658
	if (cr0.eq) goto loc_8310F658;
	// subf r11,r31,r3
	r11.s64 = ctx.r3.s64 - r31.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r30,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r30.s64 = r11.s32 >> 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r30,-1
	ctx.r5.s64 = r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310ef78
	sub_8310EF78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8310f5d4
	if (!cr0.eq) goto loc_8310F5D4;
loc_8310F5C8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8310f660
	goto loc_8310F660;
loc_8310F5D4:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r28,-1
	ctx.r5.s64 = r28.s64 + -1;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310ef78
	sub_8310EF78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8310f5c8
	if (cr0.eq) goto loc_8310F5C8;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310f634
	if (cr0.eq) goto loc_8310F634;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,-21164
	ctx.r7.s64 = r11.s64 + -21164;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r27.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// b 0x8310f638
	goto loc_8310F638;
loc_8310F634:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8310F638:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8310f64c
	if (!cr6.eq) goto loc_8310F64C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310f660
	goto loc_8310F660;
loc_8310F64C:
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310f660
	goto loc_8310F660;
loc_8310F658:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,18
	ctx.r3.u64 = ctx.r3.u64 | 18;
loc_8310F660:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8310F668"))) PPC_WEAK_FUNC(sub_8310F668);
PPC_FUNC_IMPL(__imp__sub_8310F668) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// beq cr6,0x8310f750
	if (cr6.eq) goto loc_8310F750;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8310f750
	if (cr0.eq) goto loc_8310F750;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8310f0b8
	sub_8310F0B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8310f6bc
	if (!cr0.eq) goto loc_8310F6BC;
loc_8310F6B0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8310f758
	goto loc_8310F758;
loc_8310F6BC:
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8324b3ec
	__imp__XexGetModuleSection(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x8310f6b0
	if (cr6.lt) goto loc_8310F6B0;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310f72c
	if (cr0.eq) goto loc_8310F72C;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,-21164
	ctx.r7.s64 = r11.s64 + -21164;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// b 0x8310f730
	goto loc_8310F730;
loc_8310F72C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8310F730:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8310f744
	if (!cr6.eq) goto loc_8310F744;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310f758
	goto loc_8310F758;
loc_8310F744:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310f758
	goto loc_8310F758;
loc_8310F750:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,18
	ctx.r3.u64 = ctx.r3.u64 | 18;
loc_8310F758:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8310F760"))) PPC_WEAK_FUNC(sub_8310F760);
PPC_FUNC_IMPL(__imp__sub_8310F760) {
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
	// beq 0x8310f7c8
	if (cr0.eq) goto loc_8310F7C8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-21164
	r11.s64 = r11.s64 + -21164;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// b 0x8310f7cc
	goto loc_8310F7CC;
loc_8310F7C8:
	// li r11,0
	r11.s64 = 0;
loc_8310F7CC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8310f7e0
	if (!cr6.eq) goto loc_8310F7E0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310f7e8
	goto loc_8310F7E8;
loc_8310F7E0:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310F7E8:
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

__attribute__((alias("__imp__sub_8310F800"))) PPC_WEAK_FUNC(sub_8310F800);
PPC_FUNC_IMPL(__imp__sub_8310F800) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310f840
	if (cr0.eq) goto loc_8310F840;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-21192
	r11.s64 = r11.s64 + -21192;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x8310f844
	goto loc_8310F844;
loc_8310F840:
	// li r31,0
	r31.s64 = 0;
loc_8310F844:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8310f858
	if (!cr6.eq) goto loc_8310F858;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8310f88c
	goto loc_8310F88C;
loc_8310F858:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e7368
	sub_830E7368(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// blt cr6,0x8310f88c
	if (cr6.lt) goto loc_8310F88C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310F88C:
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

__attribute__((alias("__imp__sub_8310F8A8"))) PPC_WEAK_FUNC(sub_8310F8A8);
PPC_FUNC_IMPL(__imp__sub_8310F8A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x830e61f8
	sub_830E61F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310F8B0"))) PPC_WEAK_FUNC(sub_8310F8B0);
PPC_FUNC_IMPL(__imp__sub_8310F8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F8D0"))) PPC_WEAK_FUNC(sub_8310F8D0);
PPC_FUNC_IMPL(__imp__sub_8310F8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, r11.u16);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F8F0"))) PPC_WEAK_FUNC(sub_8310F8F0);
PPC_FUNC_IMPL(__imp__sub_8310F8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// beq 0x8310f908
	if (cr0.eq) goto loc_8310F908;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8310f938
	goto loc_8310F938;
loc_8310F908:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8310f91c
	if (!cr6.eq) goto loc_8310F91C;
loc_8310F914:
	// li r11,0
	r11.s64 = 0;
	// b 0x8310f938
	goto loc_8310F938;
loc_8310F91C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8310f914
	if (cr6.gt) goto loc_8310F914;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
loc_8310F938:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F940"))) PPC_WEAK_FUNC(sub_8310F940);
PPC_FUNC_IMPL(__imp__sub_8310F940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8310f958
	if (cr0.eq) goto loc_8310F958;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x8310f95c
	goto loc_8310F95C;
loc_8310F958:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
loc_8310F95C:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F968"))) PPC_WEAK_FUNC(sub_8310F968);
PPC_FUNC_IMPL(__imp__sub_8310F968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8310f99c
	if (cr0.eq) goto loc_8310F99C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8310F984:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8310f984
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8310F984;
	// blr 
	return;
loc_8310F99C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// ble cr6,0x8310fa40
	if (!cr6.gt) goto loc_8310FA40;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// beq cr6,0x8310fa0c
	if (cr6.eq) goto loc_8310FA0C;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// beq cr6,0x8310fa40
	if (cr6.eq) goto loc_8310FA40;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// beq cr6,0x8310f9f8
	if (cr6.eq) goto loc_8310F9F8;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r11,4
	ctx.r5.s64 = r11.s64 + 4;
	// addi r3,r9,24
	ctx.r3.s64 = ctx.r9.s64 + 24;
	// b 0x83108d98
	sub_83108D98(ctx, base);
	return;
loc_8310F9F8:
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r11,4
	ctx.r5.s64 = r11.s64 + 4;
	// addi r3,r9,12
	ctx.r3.s64 = ctx.r9.s64 + 12;
	// b 0x83108d98
	sub_83108D98(ctx, base);
	return;
loc_8310FA0C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310fa20
	if (!cr6.eq) goto loc_8310FA20;
loc_8310FA18:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8310fa44
	goto loc_8310FA44;
loc_8310FA20:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x8310fa18
	if (cr6.gt) goto loc_8310FA18;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// b 0x8310fa44
	goto loc_8310FA44;
loc_8310FA40:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_8310FA44:
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FA50"))) PPC_WEAK_FUNC(sub_8310FA50);
PPC_FUNC_IMPL(__imp__sub_8310FA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8310fa80
	if (cr0.eq) goto loc_8310FA80;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
loc_8310FA80:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r6,12
	ctx.r6.s64 = 12;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// b 0x83108d98
	sub_83108D98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310FA98"))) PPC_WEAK_FUNC(sub_8310FA98);
PPC_FUNC_IMPL(__imp__sub_8310FA98) {
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
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8310fb18
	if (cr0.eq) goto loc_8310FB18;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8310fad8
	if (!cr0.eq) goto loc_8310FAD8;
	// lis r11,-31983
	r11.s64 = -2096037888;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r11,-1384
	ctx.r4.s64 = r11.s64 + -1384;
	// bl 0x83110108
	sub_83110108(ctx, base);
	// b 0x8310fb7c
	goto loc_8310FB7C;
loc_8310FAD8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8310fb7c
	if (!cr6.gt) goto loc_8310FB7C;
loc_8310FAEC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x8310fa98
	sub_8310FA98(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8310faec
	if (cr6.lt) goto loc_8310FAEC;
	// b 0x8310fb7c
	goto loc_8310FB7C;
loc_8310FB18:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8310fb28
	if (cr0.eq) goto loc_8310FB28;
loc_8310FB20:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x8310fb78
	goto loc_8310FB78;
loc_8310FB28:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8310fb58
	if (cr0.eq) goto loc_8310FB58;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8310fb20
	if (cr0.eq) goto loc_8310FB20;
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// bne 0x8310fb7c
	if (!cr0.eq) goto loc_8310FB7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83108e00
	sub_83108E00(ctx, base);
	// b 0x8310fb74
	goto loc_8310FB74;
loc_8310FB58:
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8310fb7c
	if (cr0.eq) goto loc_8310FB7C;
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8310fb7c
	if (cr6.eq) goto loc_8310FB7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310b5c8
	sub_8310B5C8(ctx, base);
loc_8310FB74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8310FB78:
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310FB7C:
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

__attribute__((alias("__imp__sub_8310FB98"))) PPC_WEAK_FUNC(sub_8310FB98);
PPC_FUNC_IMPL(__imp__sub_8310FB98) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8310fc0c
	if (cr6.eq) goto loc_8310FC0C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x8310fc04
	if (!cr6.gt) goto loc_8310FC04;
	// addi r29,r27,24
	r29.s64 = r27.s64 + 24;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
loc_8310FBC4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8310fbf8
	if (cr6.eq) goto loc_8310FBF8;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x8310fbf8
	if (!cr6.gt) goto loc_8310FBF8;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_8310FBE0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x8310b5c8
	sub_8310B5C8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// bne 0x8310fbe0
	if (!cr0.eq) goto loc_8310FBE0;
loc_8310FBF8:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// bne 0x8310fbc4
	if (!cr0.eq) goto loc_8310FBC4;
loc_8310FC04:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310FC0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8310FC18"))) PPC_WEAK_FUNC(sub_8310FC18);
PPC_FUNC_IMPL(__imp__sub_8310FC18) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8310fd14
	if (cr6.lt) goto loc_8310FD14;
	// lis r11,2340
	r11.s64 = 153354240;
	// ori r11,r11,37449
	r11.u64 = r11.u64 | 37449;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8310fd14
	if (!cr6.lt) goto loc_8310FD14;
	// lis r11,3276
	r11.s64 = 214695936;
	// ori r11,r11,52428
	r11.u64 = r11.u64 | 52428;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8310fd14
	if (!cr6.lt) goto loc_8310FD14;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// blt cr6,0x8310fd14
	if (cr6.lt) goto loc_8310FD14;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x8310fc84
	if (!cr6.gt) goto loc_8310FC84;
	// mulli r11,r30,20
	r11.s64 = r30.s64 * 20;
	// li r10,-1
	ctx.r10.s64 = -1;
	// twllei r11,0
	// divwu r11,r10,r11
	r11.u32 = ctx.r10.u32 / r11.u32;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bge cr6,0x8310fd14
	if (!cr6.lt) goto loc_8310FD14;
loc_8310FC84:
	// mulli r11,r25,20
	r11.s64 = r25.s64 * 20;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// mullw r3,r11,r30
	ctx.r3.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x8310fd14
	if (cr0.eq) goto loc_8310FD14;
	// mulli r11,r30,28
	r11.s64 = r30.s64 * 28;
	// add r29,r11,r27
	r29.u64 = r11.u64 + r27.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// ble cr6,0x8310fd0c
	if (!cr6.gt) goto loc_8310FD0C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r27,20
	r31.s64 = r27.s64 + 20;
	// li r26,0
	r26.s64 = 0;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_8310FCC0:
	// stw r26,-20(r31)
	PPC_STORE_U32(r31.u32 + -20, r26.u32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// stw r26,-16(r31)
	PPC_STORE_U32(r31.u32 + -16, r26.u32);
	// stfs f31,-12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + -12, temp.u32);
	// stfs f31,-8(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + -8, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + -4, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// ble cr6,0x8310fd00
	if (!cr6.gt) goto loc_8310FD00;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_8310FCEC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8310aff8
	sub_8310AFF8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// bne 0x8310fcec
	if (!cr0.eq) goto loc_8310FCEC;
loc_8310FD00:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// bne 0x8310fcc0
	if (!cr0.eq) goto loc_8310FCC0;
loc_8310FD0C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x8310fd18
	goto loc_8310FD18;
loc_8310FD14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310FD18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8310FD28"))) PPC_WEAK_FUNC(sub_8310FD28);
PPC_FUNC_IMPL(__imp__sub_8310FD28) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r29,r11,r28
	r29.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8310fdd8
	if (cr6.lt) goto loc_8310FDD8;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x8310fdd8
	if (cr6.lt) goto loc_8310FDD8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x8310fdb4
	if (!cr6.gt) goto loc_8310FDB4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8310fd74
	if (!cr6.eq) goto loc_8310FD74;
	// li r30,512
	r30.s64 = 512;
	// b 0x8310fd8c
	goto loc_8310FD8C;
loc_8310FD74:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8310fd8c
	if (cr6.lt) goto loc_8310FD8C;
	// li r30,-1
	r30.s64 = -1;
loc_8310FD8C:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// ble cr6,0x8310fd98
	if (!cr6.gt) goto loc_8310FD98;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8310FD98:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8310fdd8
	if (cr0.eq) goto loc_8310FDD8;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_8310FDB4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8310fddc
	goto loc_8310FDDC;
loc_8310FDD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310FDDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8310FDE8"))) PPC_WEAK_FUNC(sub_8310FDE8);
PPC_FUNC_IMPL(__imp__sub_8310FDE8) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x8310fd28
	sub_8310FD28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FE18"))) PPC_WEAK_FUNC(sub_8310FE18);
PPC_FUNC_IMPL(__imp__sub_8310FE18) {
	PPC_FUNC_PROLOGUE();
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
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8310fd28
	sub_8310FD28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FE50"))) PPC_WEAK_FUNC(sub_8310FE50);
PPC_FUNC_IMPL(__imp__sub_8310FE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, r11.u8);
	// stb r10,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r10.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FE78"))) PPC_WEAK_FUNC(sub_8310FE78);
PPC_FUNC_IMPL(__imp__sub_8310FE78) {
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
	// lbz r11,4(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8310feac
	if (!cr0.eq) goto loc_8310FEAC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310fee0
	if (cr6.eq) goto loc_8310FEE0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x830d8b48
	sub_830D8B48(ctx, base);
	// b 0x8310fee0
	goto loc_8310FEE0;
loc_8310FEAC:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8310fee0
	if (!cr6.gt) goto loc_8310FEE0;
	// li r31,0
	r31.s64 = 0;
loc_8310FEC0:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	// bl 0x8310b5c8
	sub_8310B5C8(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8310fec0
	if (cr6.lt) goto loc_8310FEC0;
loc_8310FEE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8310FEE8"))) PPC_WEAK_FUNC(sub_8310FEE8);
PPC_FUNC_IMPL(__imp__sub_8310FEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
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
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FF10"))) PPC_WEAK_FUNC(sub_8310FF10);
PPC_FUNC_IMPL(__imp__sub_8310FF10) {
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
	// beq 0x8310ff70
	if (cr0.eq) goto loc_8310FF70;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// addi r29,r30,-4
	r29.s64 = r30.s64 + -4;
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addic. r31,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// blt 0x8310ff58
	if (cr0.lt) goto loc_8310FF58;
loc_8310FF44:
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310fe78
	sub_8310FE78(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x8310ff44
	if (!cr0.lt) goto loc_8310FF44;
loc_8310FF58:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8310ff68
	if (cr0.eq) goto loc_8310FF68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310FF68:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8310ff8c
	goto loc_8310FF8C;
loc_8310FF70:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310fe78
	sub_8310FE78(ctx, base);
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8310ff88
	if (cr0.eq) goto loc_8310FF88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8310FF88:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8310FF8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8310FF98"))) PPC_WEAK_FUNC(sub_8310FF98);
PPC_FUNC_IMPL(__imp__sub_8310FF98) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8310fff8
	if (!cr0.eq) goto loc_8310FFF8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310ffd8
	if (cr6.eq) goto loc_8310FFD8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x830d8ac0
	sub_830D8AC0(ctx, base);
loc_8310FFD8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83110060
	if (cr6.eq) goto loc_83110060;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8310ff10
	sub_8310FF10(ctx, base);
	// b 0x83110060
	goto loc_83110060;
loc_8310FFF8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8311002c
	if (!cr6.gt) goto loc_8311002C;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8311000C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x8310bda8
	sub_8310BDA8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8311000c
	if (cr6.lt) goto loc_8311000C;
loc_8311002C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83110060
	if (!cr6.gt) goto loc_83110060;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_83110040:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x8310fe78
	sub_8310FE78(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83110040
	if (cr6.lt) goto loc_83110040;
loc_83110060:
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8310fb98
	sub_8310FB98(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83110090"))) PPC_WEAK_FUNC(sub_83110090);
PPC_FUNC_IMPL(__imp__sub_83110090) {
	PPC_FUNC_PROLOGUE();
	// b 0x8310ff98
	sub_8310FF98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83110098"))) PPC_WEAK_FUNC(sub_83110098);
PPC_FUNC_IMPL(__imp__sub_83110098) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
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

__attribute__((alias("__imp__sub_831100E8"))) PPC_WEAK_FUNC(sub_831100E8);
PPC_FUNC_IMPL(__imp__sub_831100E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110100"))) PPC_WEAK_FUNC(sub_83110100);
PPC_FUNC_IMPL(__imp__sub_83110100) {
	PPC_FUNC_PROLOGUE();
	// b 0x83110098
	sub_83110098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83110108"))) PPC_WEAK_FUNC(sub_83110108);
PPC_FUNC_IMPL(__imp__sub_83110108) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8311016c
	if (cr6.eq) goto loc_8311016C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83110164
	if (cr6.eq) goto loc_83110164;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83110164
	if (!cr6.gt) goto loc_83110164;
loc_83110140:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mullw r11,r11,r31
	r11.s64 = int64_t(r11.s32) * int64_t(r31.s32);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x83110140
	if (cr6.lt) goto loc_83110140;
loc_83110164:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_8311016C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83110178"))) PPC_WEAK_FUNC(sub_83110178);
PPC_FUNC_IMPL(__imp__sub_83110178) {
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
	// li r30,1
	r30.s64 = 1;
	// bl 0x83118710
	sub_83118710(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831101a8
	if (!cr0.eq) goto loc_831101A8;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,-7044(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7044);
loc_831101A8:
	// lbz r11,85(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 85);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x831101d8
	if (!cr0.eq) goto loc_831101D8;
	// lbz r11,84(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 84);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x831101d8
	if (!cr0.eq) goto loc_831101D8;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x831101d8
	if (cr6.eq) goto loc_831101D8;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831101dc
	if (!cr6.eq) goto loc_831101DC;
loc_831101D8:
	// li r30,0
	r30.s64 = 0;
loc_831101DC:
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

__attribute__((alias("__imp__sub_831101F8"))) PPC_WEAK_FUNC(sub_831101F8);
PPC_FUNC_IMPL(__imp__sub_831101F8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83110280
	if (cr6.eq) goto loc_83110280;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83110250
	if (cr6.eq) goto loc_83110250;
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
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// sth r11,44(r31)
	PPC_STORE_U16(r31.u32 + 44, r11.u16);
	// stb r11,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r11.u8);
loc_83110250:
	// lwz r11,804(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 804);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bge cr6,0x83110278
	if (!cr6.lt) goto loc_83110278;
	// addi r11,r11,101
	r11.s64 = r11.s64 + 101;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, r31.u32);
	// lwz r11,804(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 804);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,804(r30)
	PPC_STORE_U32(r30.u32 + 804, r11.u32);
	// b 0x83110280
	goto loc_83110280;
loc_83110278:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83110280:
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

__attribute__((alias("__imp__sub_83110298"))) PPC_WEAK_FUNC(sub_83110298);
PPC_FUNC_IMPL(__imp__sub_83110298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// li r29,100
	r29.s64 = 100;
	// mr r31,r28
	r31.u64 = r28.u64;
	// li r30,0
	r30.s64 = 0;
loc_831102B4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831102c8
	if (cr6.eq) goto loc_831102C8;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_831102C8:
	// lwz r3,404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 404);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831102dc
	if (cr6.eq) goto loc_831102DC;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r30,404(r31)
	PPC_STORE_U32(r31.u32 + 404, r30.u32);
loc_831102DC:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x831102b4
	if (!cr0.eq) goto loc_831102B4;
	// stw r30,400(r28)
	PPC_STORE_U32(r28.u32 + 400, r30.u32);
	// stw r30,804(r28)
	PPC_STORE_U32(r28.u32 + 804, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831102F8"))) PPC_WEAK_FUNC(sub_831102F8);
PPC_FUNC_IMPL(__imp__sub_831102F8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, r11.u16);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lfs f0,2240(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x831103c0
	if (!cr6.gt) goto loc_831103C0;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r28,r4,16
	r28.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_83110358:
	// lhz r27,0(r5)
	r27.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// beq cr6,0x83110378
	if (cr6.eq) goto loc_83110378;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x83110358
	if (cr6.lt) goto loc_83110358;
	// b 0x831103c0
	goto loc_831103C0;
loc_83110378:
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831103b8
	if (cr6.eq) goto loc_831103B8;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x831103c0
	if (!cr0.eq) goto loc_831103C0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x831103c0
	goto loc_831103C0;
loc_831103B8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_831103C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831103C8"))) PPC_WEAK_FUNC(sub_831103C8);
PPC_FUNC_IMPL(__imp__sub_831103C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// stfs f31,32(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stb r30,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r30.u8);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// sth r30,68(r31)
	PPC_STORE_U16(r31.u32 + 68, r30.u16);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stfs f31,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// stb r30,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r30.u8);
	// sth r30,56(r31)
	PPC_STORE_U16(r31.u32 + 56, r30.u16);
	// sth r30,48(r31)
	PPC_STORE_U16(r31.u32 + 48, r30.u16);
	// sth r30,58(r31)
	PPC_STORE_U16(r31.u32 + 58, r30.u16);
	// beq cr6,0x83110468
	if (cr6.eq) goto loc_83110468;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83110468:
	// stw r29,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83110480"))) PPC_WEAK_FUNC(sub_83110480);
PPC_FUNC_IMPL(__imp__sub_83110480) {
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
	// li r29,1
	r29.s64 = 1;
	// bl 0x83118710
	sub_83118710(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831104cc
	if (!cr6.eq) goto loc_831104CC;
	// bl 0x83118720
	sub_83118720(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831104d0
	if (cr0.eq) goto loc_831104D0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x831104cc
	if (cr6.eq) goto loc_831104CC;
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831104d0
	if (!cr6.eq) goto loc_831104D0;
loc_831104CC:
	// li r29,0
	r29.s64 = 0;
loc_831104D0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831104E0"))) PPC_WEAK_FUNC(sub_831104E0);
PPC_FUNC_IMPL(__imp__sub_831104E0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x83110544
	if (!cr6.eq) goto loc_83110544;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d58d8
	sub_830D58D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83110544
	if (!cr0.eq) goto loc_83110544;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x83110548
	if (cr6.eq) goto loc_83110548;
loc_83110544:
	// li r11,0
	r11.s64 = 0;
loc_83110548:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_83110568"))) PPC_WEAK_FUNC(sub_83110568);
PPC_FUNC_IMPL(__imp__sub_83110568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110600"))) PPC_WEAK_FUNC(sub_83110600);
PPC_FUNC_IMPL(__imp__sub_83110600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// clrlwi. r28,r9,24
	r28.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lfs f31,-24904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24904);
	f31.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFF;
	// rlwinm r6,r11,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// rlwinm r26,r29,30,2,31
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// beq 0x83110898
	if (cr0.eq) goto loc_83110898;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_831106C4:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831106CC:
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8311088c
	if (cr0.lt) goto loc_8311088C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8311088c
	if (cr0.lt) goto loc_8311088C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8311073c
	if (!cr6.eq) goto loc_8311073C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,216(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 216);
	f0.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,220(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lwz r11,184(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8311088c
	if (cr0.lt) goto loc_8311088C;
loc_8311073C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8311088c
	if (cr0.lt) goto loc_8311088C;
	// cmplwi cr6,r29,65535
	cr6.compare<uint32_t>(r29.u32, 65535, xer);
	// ble cr6,0x83110770
	if (!cr6.gt) goto loc_83110770;
	// lis r29,0
	r29.s64 = 0;
	// li r26,16383
	r26.s64 = 16383;
	// ori r29,r29,65535
	r29.u64 = r29.u64 | 65535;
loc_83110770:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lfs f0,2244(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bne cr6,0x831107bc
	if (!cr6.eq) goto loc_831107BC;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_831107BC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8311088c
	if (cr0.lt) goto loc_8311088C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8311088c
	if (cr0.lt) goto loc_8311088C;
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x83110888
	if (cr0.lt) goto loc_83110888;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83110888:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8311088C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
loc_83110898:
	// clrlwi. r11,r8,31
	r11.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x83110960
	if (cr0.eq) goto loc_83110960;
	// li r4,4
	ctx.r4.s64 = 4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8311088c
	if (cr0.lt) goto loc_8311088C;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFF;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// rlwinm r11,r11,8,24,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r5,0
	ctx.r5.s64 = 0;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// li r4,0
	ctx.r4.s64 = 0;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fmuls f13,f11,f31
	ctx.f13.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x831106cc
	goto loc_831106CC;
loc_83110960:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x831106c4
	goto loc_831106C4;
}

__attribute__((alias("__imp__sub_83110968"))) PPC_WEAK_FUNC(sub_83110968);
PPC_FUNC_IMPL(__imp__sub_83110968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
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
	// bl 0x831b0b20
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r11,16
	r11.s64 = 16;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x0)));
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x15));
	// lvsr v0,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x45));
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x51));
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r29,8
	r29.s64 = 8;
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// li r29,24
	r29.s64 = 24;
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r26,r1,96
	r26.s64 = ctx.r1.s64 + 96;
	// stvewx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r5,28
	ctx.r5.s64 = 28;
	// stvewx128 v63,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stvewx128 v63,r28,r27
	ea = (r28.u32 + r27.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r31,32
	r31.s64 = 32;
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x54));
	// stvewx128 v63,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stvewx128 v62,r10,r11
	ea = (ctx.r10.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r6,36
	ctx.r6.s64 = 36;
	// stvewx128 v62,r30,r29
	ea = (r30.u32 + r29.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stvewx128 v62,r26,r5
	ea = (r26.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r11,40
	r11.s64 = 40;
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvewx128 v61,r7,r31
	ea = (ctx.r7.u32 + r31.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r4,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r4.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stvewx128 v61,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// li r7,48
	ctx.r7.s64 = 48;
	// stvewx128 v61,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r5,r4,72
	ctx.r5.s64 = ctx.r4.s64 + 72;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stvewx128 v61,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r10,52
	ctx.r10.s64 = 52;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stvewx128 v60,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// li r8,56
	ctx.r8.s64 = 56;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,60
	ctx.r6.s64 = 60;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r30,-32255
	r30.s64 = -2113863680;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stvewx128 v60,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stvewx128 v60,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-21804(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -21804);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2244(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// lis r29,-31942
	r29.s64 = -2093350912;
	// lwz r31,168(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r28,r1,192
	r28.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-7048(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -7048);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r3,-7048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -7048);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r30,32(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83110BB0"))) PPC_WEAK_FUNC(sub_83110BB0);
PPC_FUNC_IMPL(__imp__sub_83110BB0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f1,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// neg r11,r11
	r11.s64 = -r11.s64;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x83110bf8
	if (!cr6.lt) goto loc_83110BF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83110c14
	goto loc_83110C14;
loc_83110BF8:
	// lfs f1,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
loc_83110C14:
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

__attribute__((alias("__imp__sub_83110C30"))) PPC_WEAK_FUNC(sub_83110C30);
PPC_FUNC_IMPL(__imp__sub_83110C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lhz r11,32(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 32);
	// lwz r7,236(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lhz r10,34(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 34);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lhz r9,36(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 36);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lhz r11,38(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 38);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83110dfc
	if (cr0.lt) goto loc_83110DFC;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 38);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83110ce4
	if (cr0.eq) goto loc_83110CE4;
	// li r30,0
	r30.s64 = 0;
loc_83110CB0:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r9,r30,r9
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lhz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 36);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// clrlwi r30,r10,16
	r30.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 38);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x83110cb0
	if (cr6.lt) goto loc_83110CB0;
loc_83110CE4:
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f13,f12
	f31.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r11,94(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// addi r30,r11,2
	r30.s64 = r11.s64 + 2;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// clrlwi r7,r30,16
	ctx.r7.u64 = r30.u32 & 0xFFFF;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r11,94(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// clrlwi r6,r11,16
	ctx.r6.u64 = r11.u32 & 0xFFFF;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bge cr6,0x83110ddc
	if (!cr6.lt) goto loc_83110DDC;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lhz r11,36(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 36);
	// lfs f13,2244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,-3
	ctx.r9.s64 = r11.s64 + -3;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f12,-12552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12552);
	ctx.f12.f64 = double(temp.f32);
loc_83110D58:
	// subf r11,r7,r10
	r11.s64 = ctx.r10.s64 - ctx.r7.s64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x83110d80
	if (!cr6.gt) goto loc_83110D80;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_83110D80:
	// fmuls f0,f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lbz r8,103(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// ble cr6,0x83110dcc
	if (!cr6.gt) goto loc_83110DCC;
	// li r11,3
	r11.s64 = 3;
loc_83110D9C:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// stbx r8,r9,r4
	PPC_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r8.u8);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lhz r9,36(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 36);
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83110d9c
	if (cr6.lt) goto loc_83110D9C;
loc_83110DCC:
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x83110d58
	if (cr6.lt) goto loc_83110D58;
loc_83110DDC:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,240(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83110DFC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83110E08"))) PPC_WEAK_FUNC(sub_83110E08);
PPC_FUNC_IMPL(__imp__sub_83110E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83110e28
	if (!cr6.eq) goto loc_83110E28;
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, r11.u32);
	// b 0x83110e30
	goto loc_83110E30;
loc_83110E28:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
loc_83110E30:
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83110e44
	if (cr6.eq) goto loc_83110E44;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
loc_83110E44:
	// li r11,0
	r11.s64 = 0;
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r11.u32);
	// stb r11,40(r4)
	PPC_STORE_U8(ctx.r4.u32 + 40, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110E58"))) PPC_WEAK_FUNC(sub_83110E58);
PPC_FUNC_IMPL(__imp__sub_83110E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x83110e78
	if (!cr6.eq) goto loc_83110E78;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_83110E78:
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83110e8c
	if (cr6.eq) goto loc_83110E8C;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_83110E8C:
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110EA8"))) PPC_WEAK_FUNC(sub_83110EA8);
PPC_FUNC_IMPL(__imp__sub_83110EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r11,r11,19
	r11.s64 = r11.s64 + 19;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// b 0x83110ed4
	goto loc_83110ED4;
loc_83110EC4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
loc_83110ED4:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x83110ec4
	if (!cr6.eq) goto loc_83110EC4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,72(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83110ef8
	if (cr6.eq) goto loc_83110EF8;
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, r11.u32);
	// blr 
	return;
loc_83110EF8:
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110F00"))) PPC_WEAK_FUNC(sub_83110F00);
PPC_FUNC_IMPL(__imp__sub_83110F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,80(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83110f18
	if (cr6.eq) goto loc_83110F18;
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// b 0x83110f20
	goto loc_83110F20;
loc_83110F18:
	// lwz r11,76(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, r11.u32);
loc_83110F20:
	// lwz r11,76(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83110f38
	if (cr6.eq) goto loc_83110F38;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// b 0x83110f40
	goto loc_83110F40;
loc_83110F38:
	// lwz r11,80(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, r11.u32);
loc_83110F40:
	// li r11,0
	r11.s64 = 0;
	// stw r11,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, r11.u32);
	// stw r11,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110F50"))) PPC_WEAK_FUNC(sub_83110F50);
PPC_FUNC_IMPL(__imp__sub_83110F50) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-7088
	r31.s64 = r11.s64 + -7088;
	// lwz r11,-7044(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7044);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-7044(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7044, r11.u32);
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,-7052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7052);
	// b 0x83110f90
	goto loc_83110F90;
loc_83110F8C:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_83110F90:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83110f8c
	if (!cr6.eq) goto loc_83110F8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_83110FB8"))) PPC_WEAK_FUNC(sub_83110FB8);
PPC_FUNC_IMPL(__imp__sub_83110FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r31,-7052(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -7052);
	// b 0x83111000
	goto loc_83111000;
loc_83110FE0:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831104e0
	sub_831104E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83111018
	if (!cr0.eq) goto loc_83111018;
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
loc_83111000:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83110fe0
	if (!cr6.eq) goto loc_83110FE0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311100C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_83111018:
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
loc_8311101C:
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
	// bne 0x8311101c
	if (!cr0.eq) goto loc_8311101C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8311100c
	goto loc_8311100C;
}

__attribute__((alias("__imp__sub_83111040"))) PPC_WEAK_FUNC(sub_83111040);
PPC_FUNC_IMPL(__imp__sub_83111040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// clrlwi. r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r11.u8);
	// li r8,146
	ctx.r8.s64 = 146;
	// beqlr 
	if (cr0.eq) return;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r6,r11,24472
	ctx.r6.s64 = r11.s64 + 24472;
loc_83111064:
	// add r11,r8,r7
	r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x831110a4
	if (cr6.eq) goto loc_831110A4;
	// bge cr6,0x8311108c
	if (!cr6.lt) goto loc_8311108C;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// b 0x83111098
	goto loc_83111098;
loc_8311108C:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x83111098
	if (!cr6.gt) goto loc_83111098;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
loc_83111098:
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// ble cr6,0x83111064
	if (!cr6.gt) goto loc_83111064;
	// blr 
	return;
loc_831110A4:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// addi r9,r6,3
	ctx.r9.s64 = ctx.r6.s64 + 3;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// lbzx r11,r11,r9
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831110C8"))) PPC_WEAK_FUNC(sub_831110C8);
PPC_FUNC_IMPL(__imp__sub_831110C8) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// clrlwi r31,r28,16
	r31.u64 = r28.u32 & 0xFFFF;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(r31.u32, 32, xer);
	// beq cr6,0x831110f4
	if (cr6.eq) goto loc_831110F4;
	// cmplwi cr6,r31,12288
	cr6.compare<uint32_t>(r31.u32, 12288, xer);
	// bne cr6,0x83111108
	if (!cr6.eq) goto loc_83111108;
loc_831110F4:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x83111280
	if (cr6.eq) goto loc_83111280;
	// cmplwi cr6,r11,12288
	cr6.compare<uint32_t>(r11.u32, 12288, xer);
	// beq cr6,0x83111280
	if (cr6.eq) goto loc_83111280;
loc_83111108:
	// clrlwi r30,r3,16
	r30.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r30,44
	cr6.compare<uint32_t>(r30.u32, 44, xer);
	// beq cr6,0x8311113c
	if (cr6.eq) goto loc_8311113C;
	// cmplwi cr6,r30,65292
	cr6.compare<uint32_t>(r30.u32, 65292, xer);
	// beq cr6,0x8311113c
	if (cr6.eq) goto loc_8311113C;
	// cmplwi cr6,r30,46
	cr6.compare<uint32_t>(r30.u32, 46, xer);
	// beq cr6,0x8311113c
	if (cr6.eq) goto loc_8311113C;
	// cmplwi cr6,r30,65294
	cr6.compare<uint32_t>(r30.u32, 65294, xer);
	// beq cr6,0x8311113c
	if (cr6.eq) goto loc_8311113C;
	// cmplwi cr6,r30,58
	cr6.compare<uint32_t>(r30.u32, 58, xer);
	// beq cr6,0x8311113c
	if (cr6.eq) goto loc_8311113C;
	// cmplwi cr6,r30,65306
	cr6.compare<uint32_t>(r30.u32, 65306, xer);
	// bne cr6,0x83111164
	if (!cr6.eq) goto loc_83111164;
loc_8311113C:
	// cmplwi cr6,r31,48
	cr6.compare<uint32_t>(r31.u32, 48, xer);
	// blt cr6,0x8311114c
	if (cr6.lt) goto loc_8311114C;
	// cmplwi cr6,r31,57
	cr6.compare<uint32_t>(r31.u32, 57, xer);
	// ble cr6,0x8311115c
	if (!cr6.gt) goto loc_8311115C;
loc_8311114C:
	// cmplwi cr6,r31,65296
	cr6.compare<uint32_t>(r31.u32, 65296, xer);
	// blt cr6,0x83111164
	if (cr6.lt) goto loc_83111164;
	// cmplwi cr6,r31,65305
	cr6.compare<uint32_t>(r31.u32, 65305, xer);
	// bgt cr6,0x83111164
	if (cr6.gt) goto loc_83111164;
loc_8311115C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83111284
	goto loc_83111284;
loc_83111164:
	// cmplwi cr6,r30,8217
	cr6.compare<uint32_t>(r30.u32, 8217, xer);
	// bne cr6,0x83111174
	if (!cr6.eq) goto loc_83111174;
	// cmplwi cr6,r31,12352
	cr6.compare<uint32_t>(r31.u32, 12352, xer);
	// bge cr6,0x83111280
	if (!cr6.lt) goto loc_83111280;
loc_83111174:
	// li r27,0
	r27.s64 = 0;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r27.u8);
	// stb r27,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r27.u8);
	// stb r27,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r27.u8);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// bl 0x83111040
	sub_83111040(ctx, base);
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8311115c
	if (!cr0.eq) goto loc_8311115C;
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83111040
	sub_83111040(ctx, base);
	// rlwinm. r11,r29,0,21,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831111c0
	if (cr0.eq) goto loc_831111C0;
	// rlwinm. r11,r29,0,13,13
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831111e0
	if (!cr0.eq) goto loc_831111E0;
loc_831111C0:
	// rlwinm. r11,r29,0,22,22
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831111d0
	if (cr0.eq) goto loc_831111D0;
	// rlwinm. r11,r29,0,11,11
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831111e0
	if (!cr0.eq) goto loc_831111E0;
loc_831111D0:
	// rlwinm. r11,r29,0,23,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83111230
	if (cr0.eq) goto loc_83111230;
	// rlwinm. r11,r29,0,15,15
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83111230
	if (cr0.eq) goto loc_83111230;
loc_831111E0:
	// cmplwi cr6,r31,4352
	cr6.compare<uint32_t>(r31.u32, 4352, xer);
	// blt cr6,0x831111f0
	if (cr6.lt) goto loc_831111F0;
	// cmplwi cr6,r31,4607
	cr6.compare<uint32_t>(r31.u32, 4607, xer);
	// ble cr6,0x83111210
	if (!cr6.gt) goto loc_83111210;
loc_831111F0:
	// cmplwi cr6,r31,12592
	cr6.compare<uint32_t>(r31.u32, 12592, xer);
	// blt cr6,0x83111200
	if (cr6.lt) goto loc_83111200;
	// cmplwi cr6,r31,12687
	cr6.compare<uint32_t>(r31.u32, 12687, xer);
	// ble cr6,0x83111210
	if (!cr6.gt) goto loc_83111210;
loc_83111200:
	// cmplwi cr6,r31,44032
	cr6.compare<uint32_t>(r31.u32, 44032, xer);
	// blt cr6,0x83111230
	if (cr6.lt) goto loc_83111230;
	// cmplwi cr6,r31,55203
	cr6.compare<uint32_t>(r31.u32, 55203, xer);
	// bgt cr6,0x83111230
	if (cr6.gt) goto loc_83111230;
loc_83111210:
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(r30.u32, 32, xer);
	// beq cr6,0x83111220
	if (cr6.eq) goto loc_83111220;
	// cmplwi cr6,r30,12288
	cr6.compare<uint32_t>(r30.u32, 12288, xer);
	// bne cr6,0x83111258
	if (!cr6.eq) goto loc_83111258;
loc_83111220:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x83111284
	goto loc_83111284;
loc_83111230:
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(r30.u32, 32, xer);
	// beq cr6,0x83111220
	if (cr6.eq) goto loc_83111220;
	// cmplwi cr6,r30,12288
	cr6.compare<uint32_t>(r30.u32, 12288, xer);
	// beq cr6,0x83111220
	if (cr6.eq) goto loc_83111220;
	// cmplwi cr6,r30,12352
	cr6.compare<uint32_t>(r30.u32, 12352, xer);
	// blt cr6,0x83111250
	if (cr6.lt) goto loc_83111250;
	// cmplwi cr6,r30,61440
	cr6.compare<uint32_t>(r30.u32, 61440, xer);
	// blt cr6,0x83111220
	if (cr6.lt) goto loc_83111220;
loc_83111250:
	// cmplwi cr6,r30,65382
	cr6.compare<uint32_t>(r30.u32, 65382, xer);
	// bge cr6,0x83111220
	if (!cr6.lt) goto loc_83111220;
loc_83111258:
	// lbz r11,82(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83111274
	if (cr0.eq) goto loc_83111274;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x83111278
	if (cr0.eq) goto loc_83111278;
loc_83111274:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_83111278:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x83111284
	goto loc_83111284;
loc_83111280:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83111284:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83111290"))) PPC_WEAK_FUNC(sub_83111290);
PPC_FUNC_IMPL(__imp__sub_83111290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831112b8
	if (!cr6.eq) goto loc_831112B8;
loc_831112AC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x831112f8
	goto loc_831112F8;
loc_831112B8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831112ac
	if (cr6.eq) goto loc_831112AC;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r29,r11,-7088
	r29.s64 = r11.s64 + -7088;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r30
	PPC_STORE_U32(r30.u32, f0.u32);
	// bl 0x83118710
	sub_83118710(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831112F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83111300"))) PPC_WEAK_FUNC(sub_83111300);
PPC_FUNC_IMPL(__imp__sub_83111300) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-7055
	r30.s64 = r11.s64 + -7055;
	// lwz r11,3(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83111334
	if (cr6.eq) goto loc_83111334;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_8311132C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83111334:
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r28,r11,-7088
	r28.s64 = r11.s64 + -7088;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8311137c
	if (!cr6.eq) goto loc_8311137C;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,7(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7);
	// addi r31,r10,-7028
	r31.s64 = ctx.r10.s64 + -7028;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8311137c
	if (!cr6.eq) goto loc_8311137C;
loc_83111368:
	// li r31,0
	r31.s64 = 0;
loc_8311136C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8311132c
	goto loc_8311132C;
loc_8311137C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,-21120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831113a8
	if (!cr0.lt) goto loc_831113A8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8311136c
	goto loc_8311136C;
loc_831113A8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x831113e4
	if (!cr0.lt) goto loc_831113E4;
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
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x8311136c
	goto loc_8311136C;
loc_831113E4:
	// lwz r3,7(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 7);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83111400
	if (cr6.eq) goto loc_83111400;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83111400:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,7(r30)
	PPC_STORE_U32(r30.u32 + 7, r31.u32);
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// rlwinm r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// stb r10,-1(r30)
	PPC_STORE_U8(r30.u32 + -1, ctx.r10.u8);
	// b 0x83111368
	goto loc_83111368;
}

__attribute__((alias("__imp__sub_83111420"))) PPC_WEAK_FUNC(sub_83111420);
PPC_FUNC_IMPL(__imp__sub_83111420) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83111504
	if (cr6.eq) goto loc_83111504;
	// li r31,0
	r31.s64 = 0;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// lwz r11,400(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x831114b0
	if (!cr6.gt) goto loc_831114B0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, r11.u32);
	// lwzx r11,r10,r3
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,400(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r31.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r31.u32);
	// sth r31,32(r11)
	PPC_STORE_U16(r11.u32 + 32, r31.u16);
	// sth r31,34(r11)
	PPC_STORE_U16(r11.u32 + 34, r31.u16);
	// sth r31,36(r11)
	PPC_STORE_U16(r11.u32 + 36, r31.u16);
	// sth r31,38(r11)
	PPC_STORE_U16(r11.u32 + 38, r31.u16);
	// stb r31,40(r11)
	PPC_STORE_U8(r11.u32 + 40, r31.u8);
	// b 0x83111504
	goto loc_83111504;
loc_831114B0:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831114fc
	if (cr0.eq) goto loc_831114FC;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// sth r31,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, r31.u16);
	// sth r31,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, r31.u16);
	// sth r31,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, r31.u16);
	// sth r31,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, r31.u16);
	// stb r31,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r31.u8);
	// b 0x83111500
	goto loc_83111500;
loc_831114FC:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_83111500:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_83111504:
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

__attribute__((alias("__imp__sub_83111520"))) PPC_WEAK_FUNC(sub_83111520);
PPC_FUNC_IMPL(__imp__sub_83111520) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83111684
	if (cr6.eq) goto loc_83111684;
	// li r31,0
	r31.s64 = 0;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// lwz r11,804(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 804);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x831115f4
	if (!cr6.gt) goto loc_831115F4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,101
	ctx.r9.s64 = r11.s64 + 101;
	// stw r11,804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 804, r11.u32);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,804(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 804);
	// addi r11,r11,101
	r11.s64 = r11.s64 + 101;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stfs f0,56(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// sth r31,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r31.u16);
	// stfs f0,64(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 64, temp.u32);
	// stw r31,72(r11)
	PPC_STORE_U32(r11.u32 + 72, r31.u32);
	// stfs f0,68(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 68, temp.u32);
	// stw r31,76(r11)
	PPC_STORE_U32(r11.u32 + 76, r31.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stw r31,80(r11)
	PPC_STORE_U32(r11.u32 + 80, r31.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r31,88(r11)
	PPC_STORE_U32(r11.u32 + 88, r31.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stb r31,84(r11)
	PPC_STORE_U8(r11.u32 + 84, r31.u8);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// sth r31,46(r11)
	PPC_STORE_U16(r11.u32 + 46, r31.u16);
	// sth r31,48(r11)
	PPC_STORE_U16(r11.u32 + 48, r31.u16);
	// sth r31,50(r11)
	PPC_STORE_U16(r11.u32 + 50, r31.u16);
	// sth r31,52(r11)
	PPC_STORE_U16(r11.u32 + 52, r31.u16);
	// sth r31,2(r11)
	PPC_STORE_U16(r11.u32 + 2, r31.u16);
	// stb r31,85(r11)
	PPC_STORE_U8(r11.u32 + 85, r31.u8);
	// stw r31,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r31.u32);
	// stb r31,28(r11)
	PPC_STORE_U8(r11.u32 + 28, r31.u8);
	// stw r31,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r31.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r31.u32);
	// stw r31,40(r11)
	PPC_STORE_U32(r11.u32 + 40, r31.u32);
	// sth r31,44(r11)
	PPC_STORE_U16(r11.u32 + 44, r31.u16);
	// b 0x83111684
	goto loc_83111684;
loc_831115F4:
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8311167c
	if (cr0.eq) goto loc_8311167C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// sth r31,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r31.u16);
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r31.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r31.u32);
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r31.u32);
	// stw r31,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r31.u32);
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stb r31,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, r31.u8);
	// stfs f0,56(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// sth r31,46(r3)
	PPC_STORE_U16(ctx.r3.u32 + 46, r31.u16);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// sth r31,48(r3)
	PPC_STORE_U16(ctx.r3.u32 + 48, r31.u16);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// sth r31,50(r3)
	PPC_STORE_U16(ctx.r3.u32 + 50, r31.u16);
	// stfs f0,68(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// sth r31,52(r3)
	PPC_STORE_U16(ctx.r3.u32 + 52, r31.u16);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// sth r31,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, r31.u16);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r31,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, r31.u8);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r31,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r31.u8);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r31.u32);
	// sth r31,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, r31.u16);
	// b 0x83111680
	goto loc_83111680;
loc_8311167C:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_83111680:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_83111684:
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

__attribute__((alias("__imp__sub_831116A0"))) PPC_WEAK_FUNC(sub_831116A0);
PPC_FUNC_IMPL(__imp__sub_831116A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831116d0
	if (cr6.eq) goto loc_831116D0;
	// bl 0x830d5a18
	sub_830D5A18(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d5880
	sub_830D5880(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
loc_831116D0:
	// lbz r11,40(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83111700
	if (cr0.eq) goto loc_83111700;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r3,-7048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7048);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r27.u32);
	// stb r27,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r27.u8);
loc_83111700:
	// lhz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 68);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r28,r27
	r28.u64 = r27.u64;
	// addi r26,r11,-6992
	r26.s64 = r11.s64 + -6992;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x831117d8
	if (cr0.eq) goto loc_831117D8;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8311171C:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831117c4
	if (cr6.eq) goto loc_831117C4;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83111778
	if (cr6.eq) goto loc_83111778;
	// lwz r11,400(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 400);
loc_83111740:
	// lwz r29,20(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bge cr6,0x83111764
	if (!cr6.lt) goto loc_83111764;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, ctx.r3.u32);
	// lwz r11,400(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 400);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,400(r26)
	PPC_STORE_U32(r26.u32 + 400, r11.u32);
	// b 0x8311176c
	goto loc_8311176C;
loc_83111764:
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r11,400(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 400);
loc_8311176C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83111740
	if (!cr6.eq) goto loc_83111740;
loc_83111778:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831117b0
	if (cr6.eq) goto loc_831117B0;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
loc_831117B0:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// stwx r27,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r27.u32);
loc_831117C4:
	// lhz r11,68(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 68);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8311171c
	if (cr6.lt) goto loc_8311171C;
loc_831117D8:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x830e61d8
	sub_830E61D8(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r27,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r27.u32);
	// addi r29,r31,76
	r29.s64 = r31.s64 + 76;
	// sth r27,68(r31)
	PPC_STORE_U16(r31.u32 + 68, r27.u16);
	// li r28,32
	r28.s64 = 32;
loc_831117F8:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8311181c
	if (cr6.eq) goto loc_8311181C;
loc_83111804:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r30,72(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// bl 0x831101f8
	sub_831101F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83111804
	if (!cr6.eq) goto loc_83111804;
loc_8311181C:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x831117f8
	if (!cr0.eq) goto loc_831117F8;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83111858
	if (cr6.eq) goto loc_83111858;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
loc_83111838:
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
	// bne 0x83111838
	if (!cr0.eq) goto loc_83111838;
	// stw r27,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r27.u32);
loc_83111858:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83111878
	if (cr6.eq) goto loc_83111878;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r27.u32);
loc_83111878:
	// stb r27,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r27.u8);
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83111888"))) PPC_WEAK_FUNC(sub_83111888);
PPC_FUNC_IMPL(__imp__sub_83111888) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lbz r11,-7056(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -7056);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83111918
	if (cr0.eq) goto loc_83111918;
	// lwz r4,204(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,208(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x8311190c
	if (cr6.eq) goto loc_8311190C;
loc_831118B8:
	// lbz r11,85(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 85);
	// lwz r8,76(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83111900
	if (cr0.eq) goto loc_83111900;
	// bl 0x83110f00
	sub_83110F00(ctx, base);
	// lwz r11,204(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831118dc
	if (!cr6.eq) goto loc_831118DC;
	// stw r4,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r4.u32);
loc_831118DC:
	// lwz r11,208(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831118f4
	if (cr6.eq) goto loc_831118F4;
	// stw r4,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r4.u32);
	// lwz r11,208(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// stw r11,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, r11.u32);
loc_831118F4:
	// stw r7,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r7.u32);
	// stw r4,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r4.u32);
	// stb r7,85(r4)
	PPC_STORE_U8(ctx.r4.u32 + 85, ctx.r7.u8);
loc_83111900:
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x831118b8
	if (!cr6.eq) goto loc_831118B8;
loc_8311190C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83111918
	if (cr6.eq) goto loc_83111918;
	// stb r7,85(r4)
	PPC_STORE_U8(ctx.r4.u32 + 85, ctx.r7.u8);
loc_83111918:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111928"))) PPC_WEAK_FUNC(sub_83111928);
PPC_FUNC_IMPL(__imp__sub_83111928) {
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
	// clrlwi r11,r4,27
	r11.u64 = ctx.r4.u32 & 0x1F;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r11,r11,19
	r11.s64 = r11.s64 + 19;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83111990
	if (cr6.eq) goto loc_83111990;
loc_83111950:
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83111968
	if (cr6.eq) goto loc_83111968;
	// lwz r4,72(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83111950
	if (!cr6.eq) goto loc_83111950;
loc_83111968:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83111990
	if (cr6.eq) goto loc_83111990;
	// lbz r11,28(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83111990
	if (cr0.eq) goto loc_83111990;
	// bl 0x83110f00
	sub_83110F00(ctx, base);
	// bl 0x83110ea8
	sub_83110EA8(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-6992
	ctx.r3.s64 = r11.s64 + -6992;
	// bl 0x831101f8
	sub_831101F8(ctx, base);
loc_83111990:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831119A0"))) PPC_WEAK_FUNC(sub_831119A0);
PPC_FUNC_IMPL(__imp__sub_831119A0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// stb r11,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r11.u8);
	// lwz r11,212(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831119e0
	if (!cr6.eq) goto loc_831119E0;
	// stw r30,212(r29)
	PPC_STORE_U32(r29.u32 + 212, r30.u32);
	// stw r5,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r5.u32);
	// stw r5,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r5.u32);
	// b 0x83111b38
	goto loc_83111B38;
loc_831119E0:
	// lhz r6,68(r29)
	ctx.r6.u64 = PPC_LOAD_U16(r29.u32 + 68);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi r6,0
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble 0x83111a20
	if (!cr0.gt) goto loc_83111A20;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 64);
loc_831119FC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x83111a24
	if (cr6.eq) goto loc_83111A24;
	// lhz r7,68(r29)
	ctx.r7.u64 = PPC_LOAD_U16(r29.u32 + 68);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x831119fc
	if (cr6.lt) goto loc_831119FC;
loc_83111A20:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_83111A24:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x83111a60
	if (!cr6.gt) goto loc_83111A60;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 64);
loc_83111A3C:
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x83111a64
	if (cr6.eq) goto loc_83111A64;
	// lhz r4,68(r29)
	ctx.r4.u64 = PPC_LOAD_U16(r29.u32 + 68);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// blt cr6,0x83111a3c
	if (cr6.lt) goto loc_83111A3C;
loc_83111A60:
	// li r8,-1
	ctx.r8.s64 = -1;
loc_83111A64:
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bge cr6,0x83111ae4
	if (!cr6.lt) goto loc_83111AE4;
loc_83111A6C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83111adc
	if (cr6.eq) goto loc_83111ADC;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83111adc
	if (cr6.eq) goto loc_83111ADC;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x83111ad0
	if (cr6.eq) goto loc_83111AD0;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x83111acc
	if (!cr6.gt) goto loc_83111ACC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
loc_83111AA8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x83111ad0
	if (cr6.eq) goto loc_83111AD0;
	// lhz r4,68(r29)
	ctx.r4.u64 = PPC_LOAD_U16(r29.u32 + 68);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// blt cr6,0x83111aa8
	if (cr6.lt) goto loc_83111AA8;
loc_83111ACC:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_83111AD0:
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x83111a6c
	if (cr6.lt) goto loc_83111A6C;
loc_83111ADC:
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83111b18
	if (cr6.gt) goto loc_83111B18;
loc_83111AE4:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r10,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r30.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83111b04
	if (cr6.eq) goto loc_83111B04;
	// stw r30,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r30.u32);
loc_83111B04:
	// lwz r10,212(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83111b38
	if (!cr6.eq) goto loc_83111B38;
	// stw r30,212(r29)
	PPC_STORE_U32(r29.u32 + 212, r30.u32);
	// b 0x83111b38
	goto loc_83111B38;
loc_83111B18:
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r30.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83111b38
	if (cr6.eq) goto loc_83111B38;
	// stw r30,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r30.u32);
loc_83111B38:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83111b6c
	if (cr6.eq) goto loc_83111B6C;
loc_83111B48:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r11,40(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83111b6c
	if (cr0.eq) goto loc_83111B6C;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83111b48
	if (!cr6.eq) goto loc_83111B48;
loc_83111B6C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83111bf8
	if (cr6.eq) goto loc_83111BF8;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-6992
	r31.s64 = r11.s64 + -6992;
loc_83111B80:
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lbz r11,40(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83111bf8
	if (cr0.eq) goto loc_83111BF8;
	// lhz r11,36(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 36);
	// lhz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 36);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// sth r11,36(r30)
	PPC_STORE_U16(r30.u32 + 36, r11.u16);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// beq cr6,0x83111bb4
	if (cr6.eq) goto loc_83111BB4;
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
loc_83111BB4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83110e08
	sub_83110E08(ctx, base);
	// bl 0x83110e58
	sub_83110E58(ctx, base);
	// lwz r11,400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bge cr6,0x83111be4
	if (!cr6.lt) goto loc_83111BE4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r4.u32);
	// lwz r11,400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,400(r31)
	PPC_STORE_U32(r31.u32 + 400, r11.u32);
	// b 0x83111bec
	goto loc_83111BEC;
loc_83111BE4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_83111BEC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83111b80
	if (!cr6.eq) goto loc_83111B80;
loc_83111BF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83111C00"))) PPC_WEAK_FUNC(sub_83111C00);
PPC_FUNC_IMPL(__imp__sub_83111C00) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r30,204(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 204);
	// b 0x83111c50
	goto loc_83111C50;
loc_83111C1C:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83111c4c
	if (cr6.eq) goto loc_83111C4C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83110178
	sub_83110178(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83111c4c
	if (cr0.eq) goto loc_83111C4C;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// clrlwi r10,r28,16
	ctx.r10.u64 = r28.u32 & 0xFFFF;
	// lhz r11,36(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 36);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83111c64
	if (!cr6.lt) goto loc_83111C64;
loc_83111C4C:
	// lwz r30,76(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 76);
loc_83111C50:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83111c1c
	if (!cr6.eq) goto loc_83111C1C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83111C5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_83111C64:
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r27,0
	r27.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r27,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r27.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// bl 0x83110f00
	sub_83110F00(ctx, base);
	// bl 0x83110ea8
	sub_83110EA8(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r11,-6992
	r30.s64 = r11.s64 + -6992;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831101f8
	sub_831101F8(ctx, base);
	// lhz r11,36(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// clrlwi r29,r28,16
	r29.u64 = r28.u32 & 0xFFFF;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// ble cr6,0x83111d4c
	if (!cr6.gt) goto loc_83111D4C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83111420
	sub_83111420(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83111d4c
	if (cr6.eq) goto loc_83111D4C;
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// sth r11,32(r30)
	PPC_STORE_U16(r30.u32 + 32, r11.u16);
	// lhz r11,34(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 34);
	// sth r11,34(r30)
	PPC_STORE_U16(r30.u32 + 34, r11.u16);
	// sth r28,36(r30)
	PPC_STORE_U16(r30.u32 + 36, r28.u16);
	// lhz r11,38(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 38);
	// sth r11,38(r30)
	PPC_STORE_U16(r30.u32 + 38, r11.u16);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// lhz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// sth r11,32(r31)
	PPC_STORE_U16(r31.u32 + 32, r11.u16);
	// sth r10,36(r31)
	PPC_STORE_U16(r31.u32 + 36, ctx.r10.u16);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83111d14
	if (cr6.eq) goto loc_83111D14;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
loc_83111D14:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r27,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r27.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83111d3c
	if (cr6.eq) goto loc_83111D3C;
	// stw r30,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r30.u32);
loc_83111D3C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831119a0
	sub_831119A0(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
loc_83111D4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x83111c5c
	goto loc_83111C5C;
}

__attribute__((alias("__imp__sub_83111D58"))) PPC_WEAK_FUNC(sub_83111D58);
PPC_FUNC_IMPL(__imp__sub_83111D58) {
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
	// lwz r31,204(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83111dd0
	if (cr6.eq) goto loc_83111DD0;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r28,r11,-6992
	r28.s64 = r11.s64 + -6992;
loc_83111D7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83110178
	sub_83110178(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83111dc4
	if (cr0.eq) goto loc_83111DC4;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83111dc4
	if (cr6.eq) goto loc_83111DC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,76(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x831119a0
	sub_831119A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83110f00
	sub_83110F00(ctx, base);
	// bl 0x83110ea8
	sub_83110EA8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831101f8
	sub_831101F8(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x83111dc8
	goto loc_83111DC8;
loc_83111DC4:
	// lwz r31,76(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 76);
loc_83111DC8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83111d7c
	if (!cr6.eq) goto loc_83111D7C;
loc_83111DD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83111DD8"))) PPC_WEAK_FUNC(sub_83111DD8);
PPC_FUNC_IMPL(__imp__sub_83111DD8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,212(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83111ee8
	if (cr6.eq) goto loc_83111EE8;
	// clrlwi r30,r29,16
	r30.u64 = r29.u32 & 0xFFFF;
loc_83111DFC:
	// lhz r11,36(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 36);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x83111edc
	if (cr6.eq) goto loc_83111EDC;
	// ble cr6,0x83111e24
	if (!cr6.gt) goto loc_83111E24;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83111e20
	if (cr6.eq) goto loc_83111E20;
	// lhz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83111e24
	if (!cr6.lt) goto loc_83111E24;
loc_83111E20:
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_83111E24:
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83111dfc
	if (!cr6.eq) goto loc_83111DFC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83111ee8
	if (cr6.eq) goto loc_83111EE8;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-6992
	ctx.r3.s64 = r11.s64 + -6992;
	// bl 0x83111420
	sub_83111420(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83111ee8
	if (cr6.eq) goto loc_83111EE8;
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, r11.u16);
	// lhz r11,34(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 34);
	// sth r11,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, r11.u16);
	// sth r29,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, r29.u16);
	// lhz r11,38(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 38);
	// sth r11,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, r11.u16);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// lhz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// sth r11,32(r31)
	PPC_STORE_U16(r31.u32 + 32, r11.u16);
	// sth r10,36(r31)
	PPC_STORE_U16(r31.u32 + 36, ctx.r10.u16);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83111eac
	if (cr6.eq) goto loc_83111EAC;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r3,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r3.u32);
loc_83111EAC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83111eec
	if (cr6.eq) goto loc_83111EEC;
	// stw r3,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r3.u32);
	// b 0x83111eec
	goto loc_83111EEC;
loc_83111EDC:
	// bl 0x83110e08
	sub_83110E08(ctx, base);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83111eec
	goto loc_83111EEC;
loc_83111EE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83111EEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83111EF8"))) PPC_WEAK_FUNC(sub_83111EF8);
PPC_FUNC_IMPL(__imp__sub_83111EF8) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	r11.s64 = 0;
	// addi r31,r10,-7040
	r31.s64 = ctx.r10.s64 + -7040;
	// li r3,6400
	ctx.r3.s64 = 6400;
	// stw r11,-12(r31)
	PPC_STORE_U32(r31.u32 + -12, r11.u32);
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,-20(r31)
	PPC_STORE_U32(r31.u32 + -20, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83111f3c
	if (!cr0.eq) goto loc_83111F3C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83111f80
	goto loc_83111F80;
loc_83111F3C:
	// bl 0x830e61d8
	sub_830E61D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83111300
	sub_83111300(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83111f68
	if (!cr6.eq) goto loc_83111F68;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x83111f6c
	if (!cr6.eq) goto loc_83111F6C;
loc_83111F68:
	// li r4,1
	ctx.r4.s64 = 1;
loc_83111F6C:
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-7028
	ctx.r3.s64 = r11.s64 + -7028;
	// bl 0x83121190
	sub_83121190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_83111F80:
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

__attribute__((alias("__imp__sub_83111F98"))) PPC_WEAK_FUNC(sub_83111F98);
PPC_FUNC_IMPL(__imp__sub_83111F98) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-7088
	r31.s64 = r11.s64 + -7088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,-7052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7052);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// beq cr6,0x83111fdc
	if (cr6.eq) goto loc_83111FDC;
loc_83111FCC:
	// bl 0x83111888
	sub_83111888(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83111fcc
	if (!cr6.eq) goto loc_83111FCC;
loc_83111FDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_83111FF8"))) PPC_WEAK_FUNC(sub_83111FF8);
PPC_FUNC_IMPL(__imp__sub_83111FF8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x83112078
	if (cr6.lt) goto loc_83112078;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x83112078
	if (!cr6.lt) goto loc_83112078;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r30,-7052(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + -7052);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83112050
	if (cr6.eq) goto loc_83112050;
	// mulli r28,r29,12
	r28.s64 = r29.s64 * 12;
loc_83112034:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U16(r28.u32 + r11.u32);
	// bl 0x83111928
	sub_83111928(ctx, base);
	// lwz r30,24(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83112034
	if (!cr6.eq) goto loc_83112034;
loc_83112050:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// sthx r10,r11,r9
	PPC_STORE_U16(r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_83112078:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83112080"))) PPC_WEAK_FUNC(sub_83112080);
PPC_FUNC_IMPL(__imp__sub_83112080) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831120e4
	if (cr6.eq) goto loc_831120E4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x831120cc
	if (!cr6.gt) goto loc_831120CC;
loc_831120B0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83111ff8
	sub_83111FF8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x831120b0
	if (cr6.lt) goto loc_831120B0;
loc_831120CC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e61d8
	sub_830E61D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
loc_831120E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831120F0"))) PPC_WEAK_FUNC(sub_831120F0);
PPC_FUNC_IMPL(__imp__sub_831120F0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83112128
	if (cr0.eq) goto loc_83112128;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// b 0x8311212c
	goto loc_8311212C;
loc_83112128:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8311212C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83112140
	if (!cr6.eq) goto loc_83112140;
	// lis r26,-32761
	r26.s64 = -2147024896;
	// ori r26,r26,14
	r26.u64 = r26.u64 | 14;
	// b 0x831122c8
	goto loc_831122C8;
loc_83112140:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lhz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// lhz r4,70(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 70);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 232);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r27,r11,-6992
	r27.s64 = r11.s64 + -6992;
	// blt 0x83112254
	if (cr0.lt) goto loc_83112254;
	// lhz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// mr r29,r28
	r29.u64 = r28.u64;
	// lhz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 56);
	// rotlwi r11,r9,1
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw. r9,r9,r10
	ctx.r9.s32 = ctx.r9.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// twllei r10,0
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// twlgei r11,-1
	// ble 0x83112220
	if (!cr0.gt) goto loc_83112220;
loc_83112198:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83111420
	sub_83111420(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8311224c
	if (cr6.eq) goto loc_8311224C;
	// sth r28,32(r11)
	PPC_STORE_U16(r11.u32 + 32, r28.u16);
	// lhz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 56);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// sth r10,34(r11)
	PPC_STORE_U16(r11.u32 + 34, ctx.r10.u16);
	// lhz r10,70(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 70);
	// sth r10,36(r11)
	PPC_STORE_U16(r11.u32 + 36, ctx.r10.u16);
	// lhz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 56);
	// sth r10,38(r11)
	PPC_STORE_U16(r11.u32 + 38, ctx.r10.u16);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831121f4
	if (cr6.eq) goto loc_831121F4;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
loc_831121F4:
	// lhz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lhz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 56);
	// rotlwi r11,r9,1
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r9,r9,r10
	ctx.r9.s32 = ctx.r9.s32 / ctx.r10.s32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// twllei r10,0
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// twlgei r11,-1
	// blt cr6,0x83112198
	if (cr6.lt) goto loc_83112198;
loc_83112220:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x830e61d8
	sub_830E61D8(ctx, base);
	// lhz r11,68(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 68);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831122d0
	if (!cr0.eq) goto loc_831122D0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x830e61d8
	sub_830E61D8(ctx, base);
loc_8311224C:
	// lis r26,-32761
	r26.s64 = -2147024896;
	// ori r26,r26,14
	r26.u64 = r26.u64 | 14;
loc_83112254:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831122c0
	if (cr6.eq) goto loc_831122C0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831122c0
	if (cr6.eq) goto loc_831122C0;
loc_8311227C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,20(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// bl 0x83110e08
	sub_83110E08(ctx, base);
	// lwz r11,400(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 400);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bge cr6,0x831122ac
	if (!cr6.lt) goto loc_831122AC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r4.u32);
	// lwz r11,400(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 400);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,400(r27)
	PPC_STORE_U32(r27.u32 + 400, r11.u32);
	// b 0x831122b4
	goto loc_831122B4;
loc_831122AC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_831122B4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8311227c
	if (!cr6.eq) goto loc_8311227C;
loc_831122C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_831122C8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x83112318
	goto loc_83112318;
loc_831122D0:
	// lhz r11,68(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 68);
	// stw r3,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// stwx r30,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r30.u32);
	// lhz r11,68(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 68);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,68(r31)
	PPC_STORE_U16(r31.u32 + 68, r11.u16);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x830e61d8
	sub_830E61D8(ctx, base);
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x8311230c
	goto loc_8311230C;
loc_831122FC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831119a0
	sub_831119A0(ctx, base);
	// lwz r30,20(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 20);
loc_8311230C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831122fc
	if (!cr6.eq) goto loc_831122FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83112318:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83112320"))) PPC_WEAK_FUNC(sub_83112320);
PPC_FUNC_IMPL(__imp__sub_83112320) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83112688
	if (!cr6.eq) goto loc_83112688;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83112688
	if (!cr6.eq) goto loc_83112688;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r28,r11,-7048
	r28.s64 = r11.s64 + -7048;
	// lbz r11,-8(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + -8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83112688
	if (cr0.eq) goto loc_83112688;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,-17404(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -17404);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
	// lhz r29,118(r1)
	r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// mr r11,r29
	r11.u64 = r29.u64;
	// srawi r10,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r10.s64 = r11.s32 >> 4;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831123a8
	if (cr0.eq) goto loc_831123A8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
loc_831123A8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83111dd8
	sub_83111DD8(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bne 0x8311242c
	if (!cr0.eq) goto loc_8311242C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83111c00
	sub_83111C00(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bne 0x8311242c
	if (!cr0.eq) goto loc_8311242C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83111d58
	sub_83111D58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83111dd8
	sub_83111DD8(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bne 0x8311242c
	if (!cr0.eq) goto loc_8311242C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831120f0
	sub_831120F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831126ac
	if (cr0.lt) goto loc_831126AC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83111dd8
	sub_83111DD8(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bne 0x8311242c
	if (!cr0.eq) goto loc_8311242C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x831126ac
	goto loc_831126AC;
loc_8311242C:
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// lis r11,0
	r11.s64 = 0;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// ori r11,r11,65534
	r11.u64 = r11.u64 | 65534;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lhz r11,32(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// sth r11,46(r31)
	PPC_STORE_U16(r31.u32 + 46, r11.u16);
	// lhz r11,34(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 34);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// sth r11,48(r31)
	PPC_STORE_U16(r31.u32 + 48, r11.u16);
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r9,65534
	cr6.compare<uint32_t>(ctx.r9.u32, 65534, xer);
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// sth r10,50(r31)
	PPC_STORE_U16(r31.u32 + 50, ctx.r10.u16);
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 38);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// sth r10,52(r31)
	PPC_STORE_U16(r31.u32 + 52, ctx.r10.u16);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// bne cr6,0x831125fc
	if (!cr6.eq) goto loc_831125FC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83110c30
	sub_83110C30(ctx, base);
loc_831124BC:
	// lhz r11,70(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 70);
	// li r7,1
	ctx.r7.s64 = 1;
	// lhz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 48);
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// lhz r11,46(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 46);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lhz r8,50(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 50);
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// lhz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 52);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfd f11,120(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f10,120(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lhz r11,72(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 72);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f12,f11
	ctx.f12.f64 = double(ctx.f11.s64);
	// fcfid f11,f10
	ctx.f11.f64 = double(ctx.f10.s64);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lhz r11,70(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 70);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f0,120(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lhz r11,72(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 72);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f0,120(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// stb r7,85(r31)
	PPC_STORE_U8(r31.u32 + 85, ctx.r7.u8);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// bl 0x83118710
	sub_83118710(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831125c0
	if (!cr0.eq) goto loc_831125C0;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,-7044(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7044);
loc_831125C0:
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// lwz r11,204(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831125d4
	if (!cr6.eq) goto loc_831125D4;
	// stw r31,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r31.u32);
loc_831125D4:
	// lwz r11,208(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831125ec
	if (cr6.eq) goto loc_831125EC;
	// stw r31,76(r11)
	PPC_STORE_U32(r11.u32 + 76, r31.u32);
	// lwz r11,208(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 208);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_831125EC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r31,208(r30)
	PPC_STORE_U32(r30.u32 + 208, r31.u32);
	// b 0x831126a8
	goto loc_831126A8;
loc_831125FC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lhz r27,38(r11)
	r27.u64 = PPC_LOAD_U16(r11.u32 + 38);
	// lhz r26,36(r11)
	r26.u64 = PPC_LOAD_U16(r11.u32 + 36);
	// lhz r25,34(r11)
	r25.u64 = PPC_LOAD_U16(r11.u32 + 34);
	// lwz r29,0(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r24,32(r11)
	r24.u64 = PPC_LOAD_U16(r11.u32 + 32);
	// lwz r23,0(r9)
	r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r29,28(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x831124bc
	if (!cr0.lt) goto loc_831124BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x831119a0
	sub_831119A0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// b 0x831126ac
	goto loc_831126AC;
loc_83112688:
	// li r11,1
	r11.s64 = 1;
	// stb r11,85(r31)
	PPC_STORE_U8(r31.u32 + 85, r11.u8);
	// bl 0x83118710
	sub_83118710(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831126a4
	if (!cr0.eq) goto loc_831126A4;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,-7044(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7044);
loc_831126A4:
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
loc_831126A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831126AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_831126B8"))) PPC_WEAK_FUNC(sub_831126B8);
PPC_FUNC_IMPL(__imp__sub_831126B8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// clrlwi r11,r28,27
	r11.u64 = r28.u32 & 0x1F;
	// clrlwi r10,r28,16
	ctx.r10.u64 = r28.u32 & 0xFFFF;
	// addi r11,r11,19
	r11.s64 = r11.s64 + 19;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
	// lwzx r31,r11,r29
	r31.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// b 0x831126f8
	goto loc_831126F8;
loc_831126E8:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83112700
	if (cr6.eq) goto loc_83112700;
	// lwz r31,72(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 72);
loc_831126F8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831126e8
	if (!cr6.eq) goto loc_831126E8;
loc_83112700:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83112770
	if (cr6.eq) goto loc_83112770;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83112730
	if (cr6.eq) goto loc_83112730;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x831119a0
	sub_831119A0(ctx, base);
	// stw r27,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r27.u32);
	// b 0x8311275c
	goto loc_8311275C;
loc_83112730:
	// lbz r11,28(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8311275c
	if (cr0.eq) goto loc_8311275C;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8311275c
	if (cr6.eq) goto loc_8311275C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8311275C:
	// li r11,1
	r11.s64 = 1;
	// sth r28,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r28.u16);
	// stb r11,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r11.u8);
	// stw r27,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r27.u32);
	// b 0x831127fc
	goto loc_831127FC;
loc_83112770:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-6992
	ctx.r3.s64 = r11.s64 + -6992;
	// bl 0x83111520
	sub_83111520(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83112794
	if (!cr6.eq) goto loc_83112794;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83112800
	goto loc_83112800;
loc_83112794:
	// li r11,1
	r11.s64 = 1;
	// sth r28,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r28.u16);
	// li r27,0
	r27.s64 = 0;
	// stb r11,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r11.u8);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r27,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r27.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x831127c0
	goto loc_831127C0;
loc_831127B4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,72
	r11.s64 = r11.s64 + 72;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_831127C0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831127b4
	if (!cr6.eq) goto loc_831127B4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// lwz r11,204(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831127dc
	if (!cr6.eq) goto loc_831127DC;
	// stw r31,204(r29)
	PPC_STORE_U32(r29.u32 + 204, r31.u32);
loc_831127DC:
	// lwz r11,208(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831127f4
	if (cr6.eq) goto loc_831127F4;
	// stw r31,76(r11)
	PPC_STORE_U32(r11.u32 + 76, r31.u32);
	// lwz r11,208(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 208);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_831127F4:
	// stw r27,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r27.u32);
	// stw r31,208(r29)
	PPC_STORE_U32(r29.u32 + 208, r31.u32);
loc_831127FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83112800:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83112808"))) PPC_WEAK_FUNC(sub_83112808);
PPC_FUNC_IMPL(__imp__sub_83112808) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83112864
	if (cr6.eq) goto loc_83112864;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83112864
	if (!cr6.gt) goto loc_83112864;
	// li r31,0
	r31.s64 = 0;
loc_83112838:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lhzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + r11.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83112850
	if (cr0.eq) goto loc_83112850;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831126b8
	sub_831126B8(ctx, base);
loc_83112850:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83112838
	if (cr6.lt) goto loc_83112838;
loc_83112864:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83112870"))) PPC_WEAK_FUNC(sub_83112870);
PPC_FUNC_IMPL(__imp__sub_83112870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f29.u64);
	// stfd f30,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x831128a8
	if (cr6.eq) goto loc_831128A8;
	// lfs f0,32(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r22)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r22.u32 + 0, temp.u32);
loc_831128A8:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x831128b4
	if (cr6.eq) goto loc_831128B4;
	// stw r29,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r29.u32);
loc_831128B4:
	// clrlwi r11,r26,27
	r11.u64 = r26.u32 & 0x1F;
	// clrlwi r23,r26,16
	r23.u64 = r26.u32 & 0xFFFF;
	// addi r11,r11,19
	r11.s64 = r11.s64 + 19;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r29
	r24.u64 = r11.u64 + r29.u64;
	// lwzx r31,r11,r29
	r31.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// b 0x831128e0
	goto loc_831128E0;
loc_831128D0:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// beq cr6,0x831128e8
	if (cr6.eq) goto loc_831128E8;
	// lwz r31,72(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 72);
loc_831128E0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831128d0
	if (!cr6.eq) goto loc_831128D0;
loc_831128E8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lfs f30,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f30.f64 = double(temp.f32);
	// beq cr6,0x83112a64
	if (cr6.eq) goto loc_83112A64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83112930
	if (!cr6.eq) goto loc_83112930;
	// lbz r11,28(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83112930
	if (!cr0.eq) goto loc_83112930;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83112320
	sub_83112320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83112a5c
	if (!cr0.lt) goto loc_83112A5C;
loc_83112928:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83112c20
	goto loc_83112C20;
loc_83112930:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r27,r31,32
	r27.s64 = r31.s64 + 32;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83112a5c
	if (!cr6.eq) goto loc_83112A5C;
	// lbz r11,28(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83112a5c
	if (!cr6.eq) goto loc_83112A5C;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r28,r31,52
	r28.s64 = r31.s64 + 52;
	// addi r30,r31,50
	r30.s64 = r31.s64 + 50;
	// addi r10,r31,56
	ctx.r10.s64 = r31.s64 + 56;
	// addi r3,r11,-7036
	ctx.r3.s64 = r11.s64 + -7036;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// addi r8,r31,44
	ctx.r8.s64 = r31.s64 + 44;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831102f8
	sub_831102F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8311299c
	if (!cr0.lt) goto loc_8311299C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83111928
	sub_83111928(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x83112a64
	goto loc_83112A64;
loc_8311299C:
	// stfs f30,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// li r25,0
	r25.s64 = 0;
	// stfs f30,12(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// sth r11,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r11.u16);
	// sth r25,46(r31)
	PPC_STORE_U16(r31.u32 + 46, r25.u16);
	// sth r25,48(r31)
	PPC_STORE_U16(r31.u32 + 48, r25.u16);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83112a48
	if (cr0.lt) goto loc_83112A48;
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lwz r11,172(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// b 0x83112a5c
	goto loc_83112A5C;
loc_83112A48:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83111928
	sub_83111928(ctx, base);
	// mr r31,r25
	r31.u64 = r25.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_83112A5C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83112c1c
	if (!cr6.eq) goto loc_83112C1C;
loc_83112A64:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplwi cr6,r23,65534
	cr6.compare<uint32_t>(r23.u32, 65534, xer);
	// lfs f29,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f29.f64 = double(temp.f32);
	// bne cr6,0x83112ab4
	if (!cr6.eq) goto loc_83112AB4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// fmr f12,f29
	ctx.f12.f64 = f29.f64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,5764(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5764);
	f0.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f11,-21116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-31000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31000);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fnmsubs f11,f10,f11,f0
	ctx.f11.f64 = double(float(-(ctx.f10.f64 * ctx.f11.f64 - f0.f64)));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// b 0x83112b1c
	goto loc_83112B1C;
loc_83112AB4:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,-7048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7048);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83112928
	if (cr0.lt) goto loc_83112928;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83112b10
	if (!cr6.eq) goto loc_83112B10;
	// cmplwi cr6,r23,65535
	cr6.compare<uint32_t>(r23.u32, 65535, xer);
	// beq cr6,0x83112b10
	if (cr6.eq) goto loc_83112B10;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83112928
	if (cr6.eq) goto loc_83112928;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x83112870
	sub_83112870(ctx, base);
	// b 0x83112c20
	goto loc_83112C20;
loc_83112B10:
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
loc_83112B1C:
	// fsubs f31,f13,f12
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,228(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// bne cr6,0x83112b4c
	if (!cr6.eq) goto loc_83112B4C;
	// lfs f31,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f31.f64 = double(temp.f32);
loc_83112B4C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-6992
	ctx.r3.s64 = r11.s64 + -6992;
	// bl 0x83111520
	sub_83111520(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83112928
	if (cr6.eq) goto loc_83112928;
	// sth r26,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r26.u16);
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lhz r7,102(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// sth r7,2(r31)
	PPC_STORE_U16(r31.u32 + 2, ctx.r7.u16);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// mr r11,r24
	r11.u64 = r24.u64;
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lhz r10,102(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// sth r10,50(r31)
	PPC_STORE_U16(r31.u32 + 50, ctx.r10.u16);
	// lhz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 56);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// sth r10,52(r31)
	PPC_STORE_U16(r31.u32 + 52, ctx.r10.u16);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// b 0x83112bf8
	goto loc_83112BF8;
loc_83112BEC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,72
	r11.s64 = r11.s64 + 72;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_83112BF8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83112bec
	if (!cr6.eq) goto loc_83112BEC;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83112320
	sub_83112320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt 0x83112c20
	if (cr0.lt) goto loc_83112C20;
loc_83112C1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83112C20:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_83112C38"))) PPC_WEAK_FUNC(sub_83112C38);
PPC_FUNC_IMPL(__imp__sub_83112C38) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r28,r11,-7088
	r28.s64 = r11.s64 + -7088;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r29,-31942
	r29.s64 = -2093350912;
loc_83112C58:
	// lwz r31,-7052(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + -7052);
	// li r30,0
	r30.s64 = 0;
	// b 0x83112cb0
	goto loc_83112CB0;
loc_83112C64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83110480
	sub_83110480(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83112ca8
	if (cr0.eq) goto loc_83112CA8;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83112c88
	if (!cr6.eq) goto loc_83112C88;
	// stw r11,-7052(r29)
	PPC_STORE_U32(r29.u32 + -7052, r11.u32);
	// b 0x83112c8c
	goto loc_83112C8C;
loc_83112C88:
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
loc_83112C8C:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bl 0x831116a0
	sub_831116A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// b 0x83112c58
	goto loc_83112C58;
loc_83112CA8:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
loc_83112CB0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83112c64
	if (!cr6.eq) goto loc_83112C64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83112CC8"))) PPC_WEAK_FUNC(sub_83112CC8);
PPC_FUNC_IMPL(__imp__sub_83112CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
loc_83112CD4:
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
	// bne 0x83112cd4
	if (!cr0.eq) goto loc_83112CD4;
	// b 0x83112c38
	sub_83112C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83112CF4"))) PPC_WEAK_FUNC(sub_83112CF4);
PPC_FUNC_IMPL(__imp__sub_83112CF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112CF8"))) PPC_WEAK_FUNC(sub_83112CF8);
PPC_FUNC_IMPL(__imp__sub_83112CF8) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// beq cr6,0x83113004
	if (cr6.eq) goto loc_83113004;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83113004
	if (cr6.eq) goto loc_83113004;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83113004
	if (cr6.eq) goto loc_83113004;
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83112d6c
	if (cr0.eq) goto loc_83112D6C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x8311300c
	goto loc_8311300C;
loc_83112D6C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d5ab8
	sub_830D5AB8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x83112fe8
	if (cr0.lt) goto loc_83112FE8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830d5a18
	sub_830D5A18(ctx, base);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// lbz r10,24464(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24464);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq 0x83112db8
	if (cr0.eq) goto loc_83112DB8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_83112DB8:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r28,r31,36
	r28.s64 = r31.s64 + 36;
	// addi r27,r11,-7056
	r27.s64 = r11.s64 + -7056;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x83112fe8
	if (cr0.lt) goto loc_83112FE8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r26,1
	r26.s64 = 1;
	// stb r26,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r26.u8);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83112e2c
	if (cr6.eq) goto loc_83112E2C;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83112e2c
	if (cr0.eq) goto loc_83112E2C;
	// addi r7,r31,28
	ctx.r7.s64 = r31.s64 + 28;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83113330
	sub_83113330(ctx, base);
loc_83112E2C:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x83112fe8
	if (cr0.lt) goto loc_83112FE8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// fsubs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 - f0.f64));
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// b 0x83112e94
	goto loc_83112E94;
loc_83112E78:
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x83112e8c
	if (cr6.gt) goto loc_83112E8C;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_83112E8C:
	// stfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
loc_83112E94:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83112e78
	if (!cr6.eq) goto loc_83112E78;
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f1,244(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// sth r11,56(r31)
	PPC_STORE_U16(r31.u32 + 56, r11.u16);
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,48(r31)
	PPC_STORE_U16(r31.u32 + 48, r11.u16);
	// beq 0x83112fd0
	if (cr0.eq) goto loc_83112FD0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-24688(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24688);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x83112ef8
	if (!cr6.lt) goto loc_83112EF8;
	// li r11,128
	r11.s64 = 128;
	// b 0x83112f10
	goto loc_83112F10;
loc_83112EF8:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,-20396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20396);
	f0.f64 = double(temp.f32);
	// li r11,256
	r11.s64 = 256;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x83112f10
	if (cr6.lt) goto loc_83112F10;
	// li r11,512
	r11.s64 = 512;
loc_83112F10:
	// sth r11,70(r31)
	PPC_STORE_U16(r31.u32 + 70, r11.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,72(r31)
	PPC_STORE_U16(r31.u32 + 72, r11.u16);
	// bl 0x831120f0
	sub_831120F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x83112fe8
	if (cr0.lt) goto loc_83112FE8;
	// lhz r11,72(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 72);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r9,70(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 70);
	// li r6,0
	ctx.r6.s64 = 0;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,216(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,220(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// bl 0x83112870
	sub_83112870(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83112fa0
	if (cr0.eq) goto loc_83112FA0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83112320
	sub_83112320(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r26,84(r29)
	PPC_STORE_U8(r29.u32 + 84, r26.u8);
loc_83112FA0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83112870
	sub_83112870(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83112fd0
	if (cr0.eq) goto loc_83112FD0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83112320
	sub_83112320(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r26,84(r29)
	PPC_STORE_U8(r29.u32 + 84, r26.u8);
loc_83112FD0:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-7036
	ctx.r3.s64 = r11.s64 + -7036;
	// bl 0x83112808
	sub_83112808(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x83112ff4
	if (!cr6.lt) goto loc_83112FF4;
loc_83112FE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831116a0
	sub_831116A0(ctx, base);
	// b 0x83112ffc
	goto loc_83112FFC;
loc_83112FF4:
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// stb r26,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r26.u8);
loc_83112FFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8311300c
	goto loc_8311300C;
loc_83113004:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8311300C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83113018"))) PPC_WEAK_FUNC(sub_83113018);
PPC_FUNC_IMPL(__imp__sub_83113018) {
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
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x831130b8
	if (cr0.eq) goto loc_831130B8;
	// clrlwi r27,r5,24
	r27.u64 = ctx.r5.u32 & 0xFF;
loc_83113048:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8311306c
	if (!cr6.eq) goto loc_8311306C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831110c8
	sub_831110C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831130b8
	if (!cr0.eq) goto loc_831130B8;
loc_8311306C:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x831130b8
	if (cr6.eq) goto loc_831130B8;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x831130b8
	if (cr6.eq) goto loc_831130B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83112870
	sub_83112870(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831130a4
	if (cr0.eq) goto loc_831130A4;
	// lhz r11,2(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
loc_831130A4:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83113048
	if (!cr0.eq) goto loc_83113048;
loc_831130B8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831130C8"))) PPC_WEAK_FUNC(sub_831130C8);
PPC_FUNC_IMPL(__imp__sub_831130C8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83112870
	sub_83112870(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831130f8
	if (cr0.eq) goto loc_831130F8;
	// lhz r3,2(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// b 0x83113130
	goto loc_83113130;
loc_831130F8:
	// lwz r11,200(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8311312c
	if (cr6.eq) goto loc_8311312C;
loc_83113104:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x8311311c
	if (cr6.eq) goto loc_8311311C;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83113104
	if (!cr6.eq) goto loc_83113104;
loc_8311311C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8311312c
	if (cr6.eq) goto loc_8311312C;
	// lhz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// b 0x83113130
	goto loc_83113130;
loc_8311312C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83113130:
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

__attribute__((alias("__imp__sub_83113148"))) PPC_WEAK_FUNC(sub_83113148);
PPC_FUNC_IMPL(__imp__sub_83113148) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x83112c38
	sub_83112C38(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	r11.s64 = 0;
	// addi r31,r10,-7060
	r31.s64 = ctx.r10.s64 + -7060;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83113198
	if (cr6.eq) goto loc_83113198;
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
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_83113198:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831131b8
	if (cr6.eq) goto loc_831131B8;
	// bl 0x830e61d8
	sub_830E61D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_831131B8:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-6992
	ctx.r3.s64 = r11.s64 + -6992;
	// bl 0x83110298
	sub_83110298(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831131d8
	if (!cr0.eq) goto loc_831131D8;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-7036
	ctx.r3.s64 = r11.s64 + -7036;
	// bl 0x83112080
	sub_83112080(ctx, base);
loc_831131D8:
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

__attribute__((alias("__imp__sub_831131F0"))) PPC_WEAK_FUNC(sub_831131F0);
PPC_FUNC_IMPL(__imp__sub_831131F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83113148
	sub_83113148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831131F8"))) PPC_WEAK_FUNC(sub_831131F8);
PPC_FUNC_IMPL(__imp__sub_831131F8) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,-7048
	r11.s64 = r11.s64 + -7048;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83113240
	if (!cr6.eq) goto loc_83113240;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,-7028
	ctx.r10.s64 = ctx.r10.s64 + -7028;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83113240
	if (!cr6.eq) goto loc_83113240;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83113148
	sub_83113148(ctx, base);
	// bl 0x83111ef8
	sub_83111EF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83113244
	goto loc_83113244;
loc_83113240:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83113244:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113258"))) PPC_WEAK_FUNC(sub_83113258);
PPC_FUNC_IMPL(__imp__sub_83113258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31942
	r31.s64 = -2093350912;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,-6168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -6168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83113294
	if (!cr6.eq) goto loc_83113294;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x83113320
	goto loc_83113320;
loc_83113294:
	// li r11,0
	r11.s64 = 0;
	// li r3,248
	ctx.r3.s64 = 248;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831132bc
	if (cr0.eq) goto loc_831132BC;
	// lwz r4,-6168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -6168);
	// bl 0x831103c8
	sub_831103C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x831132c0
	goto loc_831132C0;
loc_831132BC:
	// li r31,0
	r31.s64 = 0;
loc_831132C0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831132d4
	if (!cr6.eq) goto loc_831132D4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83113320
	goto loc_83113320;
loc_831132D4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83112cf8
	sub_83112CF8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83113308
	if (!cr0.lt) goto loc_83113308;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831116a0
	sub_831116A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83113320
	goto loc_83113320;
loc_83113308:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-7052(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7052);
	// stw r31,-7052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7052, r31.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
loc_83113320:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83113330"))) PPC_WEAK_FUNC(sub_83113330);
PPC_FUNC_IMPL(__imp__sub_83113330) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83113464
	if (cr6.eq) goto loc_83113464;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x83113464
	if (cr6.lt) goto loc_83113464;
	// rlwinm r28,r5,0,28,30
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83113380
	if (cr6.eq) goto loc_83113380;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83113380
	if (cr0.eq) goto loc_83113380;
	// bl 0x830d5c78
	sub_830D5C78(ctx, base);
	// b 0x83113384
	goto loc_83113384;
loc_83113380:
	// bl 0x830d5cf8
	sub_830D5CF8(ctx, base);
loc_83113384:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83113458
	if (cr6.eq) goto loc_83113458;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83113458
	if (cr6.eq) goto loc_83113458;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83113458
	if (cr6.eq) goto loc_83113458;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lbz r11,-7055(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -7055);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831133d8
	if (cr0.eq) goto loc_831133D8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,-13856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13856);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x831133e0
	if (!cr6.gt) goto loc_831133E0;
	// fmr f31,f0
	f31.f64 = f0.f64;
	// b 0x831133e0
	goto loc_831133E0;
loc_831133D8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_831133E0:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r29,r11,-7088
	r29.s64 = r11.s64 + -7088;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x83110fb8
	sub_83110FB8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bne 0x8311343c
	if (!cr0.eq) goto loc_8311343C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83113258
	sub_83113258(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x83113438
	if (!cr0.lt) goto loc_83113438;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8311346c
	goto loc_8311346C;
loc_83113438:
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8311343C:
	// bl 0x83118710
	sub_83118710(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8311346c
	goto loc_8311346C;
loc_83113458:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x8311346c
	goto loc_8311346C;
loc_83113464:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8311346C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83113478"))) PPC_WEAK_FUNC(sub_83113478);
PPC_FUNC_IMPL(__imp__sub_83113478) {
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
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// mr r16,r10
	r16.u64 = ctx.r10.u64;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x83113a14
	if (cr6.eq) goto loc_83113A14;
	// lwz r31,0(r18)
	r31.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83113a14
	if (cr6.eq) goto loc_83113A14;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x83113a14
	if (cr6.eq) goto loc_83113A14;
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x83113a14
	if (cr6.eq) goto loc_83113A14;
	// lwz r23,308(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x83113a14
	if (cr6.eq) goto loc_83113A14;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x83113a14
	if (cr6.eq) goto loc_83113A14;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge cr6,0x831134ec
	if (!cr6.lt) goto loc_831134EC;
	// lis r25,32767
	r25.s64 = 2147418112;
	// ori r25,r25,65535
	r25.u64 = r25.u64 | 65535;
loc_831134EC:
	// li r19,0
	r19.s64 = 0;
	// rlwinm. r11,r22,0,22,22
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r19,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r19.u32);
	// mr r26,r19
	r26.u64 = r19.u64;
	// stw r19,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r19.u32);
	// mr r29,r19
	r29.u64 = r19.u64;
	// stw r19,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r19.u32);
	// stw r19,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r19.u32);
	// beq 0x8311362c
	if (cr0.eq) goto loc_8311362C;
	// rlwinm. r11,r22,0,27,27
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8311362c
	if (cr0.eq) goto loc_8311362C;
	// rlwinm. r11,r22,0,17,17
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8311362c
	if (!cr0.eq) goto loc_8311362C;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r30,r19
	r30.u64 = r19.u64;
	// b 0x83113558
	goto loc_83113558;
loc_83113530:
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x83113560
	if (cr6.eq) goto loc_83113560;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x83113560
	if (cr6.eq) goto loc_83113560;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x831130c8
	sub_831130C8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
loc_83113558:
	// mr. r11,r4
	r11.u64 = ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83113530
	if (!cr0.eq) goto loc_83113530;
loc_83113560:
	// mr r27,r31
	r27.u64 = r31.u64;
	// mr r26,r30
	r26.u64 = r30.u64;
loc_83113568:
	// cmpw cr6,r26,r25
	cr6.compare<int32_t>(r26.s32, r25.s32, xer);
	// bgt cr6,0x83113578
	if (cr6.gt) goto loc_83113578;
	// cmpw cr6,r29,r24
	cr6.compare<int32_t>(r29.s32, r24.s32, xer);
	// ble cr6,0x831135a8
	if (!cr6.gt) goto loc_831135A8;
loc_83113578:
	// cmpw cr6,r28,r30
	cr6.compare<int32_t>(r28.s32, r30.s32, xer);
	// bge cr6,0x831135a8
	if (!cr6.lt) goto loc_831135A8;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// lhz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// bl 0x831130c8
	sub_831130C8(ctx, base);
	// subf r29,r3,r29
	r29.s64 = r29.s64 - ctx.r3.s64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// b 0x83113568
	goto loc_83113568;
loc_831135A8:
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r28,r30
	ctx.r9.s64 = r30.s64 - r28.s64;
	// add r8,r11,r31
	ctx.r8.u64 = r11.u64 + r31.u64;
	// stw r9,0(r21)
	PPC_STORE_U32(r21.u32 + 0, ctx.r9.u32);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// stw r29,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r29.u32);
	// stw r8,0(r18)
	PPC_STORE_U32(r18.u32 + 0, ctx.r8.u32);
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + r31.u32);
	// b 0x831135e8
	goto loc_831135E8;
loc_831135D0:
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// beq cr6,0x831135f0
	if (cr6.eq) goto loc_831135F0;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// beq cr6,0x831135f0
	if (cr6.eq) goto loc_831135F0;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_831135E8:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x831135d0
	if (!cr0.eq) goto loc_831135D0;
loc_831135F0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// bne cr6,0x83113600
	if (!cr6.eq) goto loc_83113600;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_83113600:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x83113610
	if (!cr6.eq) goto loc_83113610;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_83113610:
	// rlwinm. r10,r22,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83113620
	if (cr0.eq) goto loc_83113620;
	// stw r19,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r19.u32);
	// b 0x83113624
	goto loc_83113624;
loc_83113620:
	// stw r11,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r11.u32);
loc_83113624:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83113a1c
	goto loc_83113A1C;
loc_8311362C:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// b 0x8311367c
	goto loc_8311367C;
loc_83113638:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr. r11,r4
	r11.u64 = ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83113688
	if (cr0.eq) goto loc_83113688;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x83113688
	if (cr6.eq) goto loc_83113688;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x83113688
	if (cr6.eq) goto loc_83113688;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x831130c8
	sub_831130C8(ctx, base);
	// add r11,r3,r29
	r11.u64 = ctx.r3.u64 + r29.u64;
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// bgt cr6,0x83113688
	if (cr6.gt) goto loc_83113688;
	// lhz r26,0(r31)
	r26.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r29,r11
	r29.u64 = r11.u64;
	// subf r11,r10,r31
	r11.s64 = r31.s64 - ctx.r10.s64;
loc_8311367C:
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(r11.s32, r25.s32, xer);
	// blt cr6,0x83113638
	if (cr6.lt) goto loc_83113638;
loc_83113688:
	// lhz r28,0(r31)
	r28.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr. r11,r28
	r11.u64 = r28.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831139a4
	if (cr0.eq) goto loc_831139A4;
	// lwz r27,0(r18)
	r27.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// subf r10,r27,r31
	ctx.r10.s64 = r31.s64 - r27.s64;
	// srawi r30,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r30.s64 = ctx.r10.s32 >> 1;
	// cmpw cr6,r30,r25
	cr6.compare<int32_t>(r30.s32, r25.s32, xer);
	// beq cr6,0x831139a4
	if (cr6.eq) goto loc_831139A4;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x83113998
	if (cr6.eq) goto loc_83113998;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x83113998
	if (cr6.eq) goto loc_83113998;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x831136c8
	if (cr6.eq) goto loc_831136C8;
	// cmplwi cr6,r11,12288
	cr6.compare<uint32_t>(r11.u32, 12288, xer);
	// bne cr6,0x831136ec
	if (!cr6.eq) goto loc_831136EC;
loc_831136C8:
	// lhz r4,2(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8311389c
	if (cr0.eq) goto loc_8311389C;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x831110c8
	sub_831110C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8311389c
	if (!cr0.eq) goto loc_8311389C;
loc_831136EC:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x831110c8
	sub_831110C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83113768
	if (cr0.eq) goto loc_83113768;
	// stw r30,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r30.u32);
	// rlwinm. r11,r22,0,27,27
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r29,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r29.u32);
	// beq 0x831139b8
	if (cr0.eq) goto loc_831139B8;
	// b 0x83113730
	goto loc_83113730;
loc_8311371C:
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x8311373c
	if (cr6.eq) goto loc_8311373C;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x8311373c
	if (cr6.eq) goto loc_8311373C;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_83113730:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8311371c
	if (!cr0.eq) goto loc_8311371C;
loc_8311373C:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bne cr6,0x8311374c
	if (!cr6.eq) goto loc_8311374C;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_8311374C:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x8311375c
	if (!cr6.eq) goto loc_8311375C;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_8311375C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// b 0x831139b8
	goto loc_831139B8;
loc_83113768:
	// rlwinm. r11,r22,0,27,27
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831137c8
	if (cr0.eq) goto loc_831137C8;
	// li r11,1
	r11.s64 = 1;
	// stw r30,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r30.u32);
	// stw r29,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r29.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// b 0x83113798
	goto loc_83113798;
loc_83113784:
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x831137a4
	if (cr6.eq) goto loc_831137A4;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x831137a4
	if (cr6.eq) goto loc_831137A4;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_83113798:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83113784
	if (!cr0.eq) goto loc_83113784;
loc_831137A4:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bne cr6,0x831137b4
	if (!cr6.eq) goto loc_831137B4;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_831137B4:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x831139b8
	if (!cr6.eq) goto loc_831139B8;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// b 0x831139b8
	goto loc_831139B8;
loc_831137C8:
	// mr r30,r31
	r30.u64 = r31.u64;
	// mr r26,r29
	r26.u64 = r29.u64;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// ble cr6,0x8311381c
	if (!cr6.gt) goto loc_8311381C;
loc_831137D8:
	// lhz r27,-2(r30)
	r27.u64 = PPC_LOAD_U16(r30.u32 + -2);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r28,r30,-2
	r28.s64 = r30.s64 + -2;
	// bl 0x831110c8
	sub_831110C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8311381c
	if (!cr0.eq) goto loc_8311381C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x831130c8
	sub_831130C8(ctx, base);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// subf r26,r3,r26
	r26.s64 = r26.s64 - ctx.r3.s64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bgt cr6,0x831137d8
	if (cr6.gt) goto loc_831137D8;
loc_8311381C:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x83113884
	if (!cr6.gt) goto loc_83113884;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
	// stw r26,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r26.u32);
loc_83113838:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x8311384c
	if (cr6.eq) goto loc_8311384C;
	// cmplwi cr6,r11,12288
	cr6.compare<uint32_t>(r11.u32, 12288, xer);
	// bne cr6,0x83113854
	if (!cr6.eq) goto loc_83113854;
loc_8311384C:
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// b 0x83113838
	goto loc_83113838;
loc_83113854:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bne cr6,0x83113864
	if (!cr6.eq) goto loc_83113864;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
loc_83113864:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x83113874
	if (!cr6.eq) goto loc_83113874;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
loc_83113874:
	// rlwinm. r9,r22,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831139c0
	if (!cr0.eq) goto loc_831139C0;
	// stw r30,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r30.u32);
	// b 0x83113978
	goto loc_83113978;
loc_83113884:
	// stw r29,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r29.u32);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
	// b 0x831139b8
	goto loc_831139B8;
loc_8311389C:
	// stw r30,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r30.u32);
	// rlwinm. r9,r22,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r29,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r29.u32);
	// beq 0x831138bc
	if (cr0.eq) goto loc_831138BC;
	// rlwinm r11,r22,28,31,31
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 28) & 0x1;
	// stw r19,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r19.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// b 0x83113978
	goto loc_83113978;
loc_831138BC:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x831138d0
	if (cr6.eq) goto loc_831138D0;
	// cmplwi cr6,r11,12288
	cr6.compare<uint32_t>(r11.u32, 12288, xer);
	// bne cr6,0x831138d8
	if (!cr6.eq) goto loc_831138D8;
loc_831138D0:
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// b 0x831138bc
	goto loc_831138BC;
loc_831138D8:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r11,r19
	r11.u64 = r19.u64;
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// bne cr6,0x831138f0
	if (!cr6.eq) goto loc_831138F0;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// li r11,1
	r11.s64 = 1;
loc_831138F0:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x83113904
	if (!cr6.eq) goto loc_83113904;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// li r11,1
	r11.s64 = 1;
loc_83113904:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83113914
	if (!cr0.eq) goto loc_83113914;
	// li r11,1
	r11.s64 = 1;
loc_83113914:
	// rlwinm. r8,r22,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83113974
	if (cr0.eq) goto loc_83113974;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83113974
	if (!cr0.eq) goto loc_83113974;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8311394c
	if (cr6.eq) goto loc_8311394C;
loc_8311392C:
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// beq cr6,0x8311394c
	if (cr6.eq) goto loc_8311394C;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// beq cr6,0x8311394c
	if (cr6.eq) goto loc_8311394C;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8311392c
	if (!cr0.eq) goto loc_8311392C;
loc_8311394C:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bne cr6,0x8311395c
	if (!cr6.eq) goto loc_8311395C;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_8311395C:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x8311396c
	if (!cr6.eq) goto loc_8311396C;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_8311396C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
loc_83113974:
	// stw r31,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r31.u32);
loc_83113978:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83113624
	if (!cr6.eq) goto loc_83113624;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r10,-2
	r31.s64 = ctx.r10.s64 + -2;
	// b 0x83113a08
	goto loc_83113A08;
loc_83113998:
	// stw r30,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r30.u32);
	// stw r29,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r29.u32);
	// b 0x831137a4
	goto loc_831137A4;
loc_831139A4:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
	// stw r29,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r29.u32);
loc_831139B8:
	// rlwinm. r9,r22,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83113974
	if (cr0.eq) goto loc_83113974;
loc_831139C0:
	// stw r19,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r19.u32);
	// b 0x83113978
	goto loc_83113978;
loc_831139C8:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x831139e0
	if (cr6.eq) goto loc_831139E0;
	// cmplwi cr6,r11,12288
	cr6.compare<uint32_t>(r11.u32, 12288, xer);
	// bne cr6,0x83113624
	if (!cr6.eq) goto loc_83113624;
loc_831139E0:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x831130c8
	sub_831130C8(ctx, base);
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// addi r31,r31,-2
	r31.s64 = r31.s64 + -2;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
loc_83113A08:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x831139c8
	if (cr6.gt) goto loc_831139C8;
	// b 0x83113624
	goto loc_83113624;
loc_83113A14:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_83113A1C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b48
	return;
}

__attribute__((alias("__imp__sub_83113A28"))) PPC_WEAK_FUNC(sub_83113A28);
PPC_FUNC_IMPL(__imp__sub_83113A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b04
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83113ba4
	if (cr6.eq) goto loc_83113BA4;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x83113ba4
	if (cr6.lt) goto loc_83113BA4;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x83113ba4
	if (cr6.eq) goto loc_83113BA4;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// beq cr6,0x83113ba4
	if (cr6.eq) goto loc_83113BA4;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x83113ba4
	if (cr6.eq) goto loc_83113BA4;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x83113ba4
	if (cr6.eq) goto loc_83113BA4;
	// rlwinm r19,r26,0,26,26
	r19.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20;
	// li r30,0
	r30.s64 = 0;
loc_83113A8C:
	// mr r11,r27
	r11.u64 = r27.u64;
	// stw r30,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r30.u32);
	// stw r30,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r30.u32);
	// mr r28,r30
	r28.u64 = r30.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// bge cr6,0x83113ac0
	if (!cr6.lt) goto loc_83113AC0;
	// lis r25,32767
	r25.s64 = 2147418112;
	// ori r25,r25,65535
	r25.u64 = r25.u64 | 65535;
loc_83113AC0:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// bge cr6,0x83113ad0
	if (!cr6.lt) goto loc_83113AD0;
	// lis r20,32767
	r20.s64 = 2147418112;
	// ori r20,r20,65535
	r20.u64 = r20.u64 | 65535;
loc_83113AD0:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x83113adc
	if (cr6.eq) goto loc_83113ADC;
	// li r25,1
	r25.s64 = 1;
loc_83113ADC:
	// cmpw cr6,r28,r25
	cr6.compare<int32_t>(r28.s32, r25.s32, xer);
	// bge cr6,0x83113b94
	if (!cr6.lt) goto loc_83113B94;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83113b94
	if (cr6.eq) goto loc_83113B94;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83113b94
	if (cr0.eq) goto loc_83113B94;
	// subf r10,r27,r11
	ctx.r10.s64 = r11.s64 - r27.s64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// subf. r6,r10,r20
	ctx.r6.s64 = r20.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble 0x83113b94
	if (!cr0.gt) goto loc_83113B94;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r31,r11
	r31.u64 = r11.u64;
	// bl 0x83113478
	sub_83113478(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83113bac
	if (cr0.lt) goto loc_83113BAC;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83113b78
	if (!cr6.eq) goto loc_83113B78;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83113b5c
	if (!cr6.eq) goto loc_83113B5C;
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
loc_83113B5C:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// ble cr6,0x83113b70
	if (!cr6.gt) goto loc_83113B70;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_83113B70:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x83113adc
	goto loc_83113ADC;
loc_83113B78:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// rlwinm r5,r26,28,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 28) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x83113018
	sub_83113018(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// b 0x83113a8c
	goto loc_83113A8C;
loc_83113B94:
	// stw r28,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r29.u32);
	// b 0x83113bac
	goto loc_83113BAC;
loc_83113BA4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_83113BAC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_83113BB8"))) PPC_WEAK_FUNC(sub_83113BB8);
PPC_FUNC_IMPL(__imp__sub_83113BB8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83113d10
	if (cr6.eq) goto loc_83113D10;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x83113d10
	if (cr6.eq) goto loc_83113D10;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x83113d10
	if (cr6.eq) goto loc_83113D10;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// beq cr6,0x83113d08
	if (cr6.eq) goto loc_83113D08;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ble cr6,0x83113d08
	if (!cr6.gt) goto loc_83113D08;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x83113d08
	if (cr6.eq) goto loc_83113D08;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// mr r29,r11
	r29.u64 = r11.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r28,r11
	r28.u64 = r11.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x83113c4c
	if (!cr6.lt) goto loc_83113C4C;
	// lis r31,32767
	r31.s64 = 2147418112;
	// ori r31,r31,65535
	r31.u64 = r31.u64 | 65535;
loc_83113C4C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bge cr6,0x83113c5c
	if (!cr6.lt) goto loc_83113C5C;
	// lis r27,32767
	r27.s64 = 2147418112;
	// ori r27,r27,65535
	r27.u64 = r27.u64 | 65535;
loc_83113C5C:
	// rlwinm. r11,r24,0,26,26
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83113c68
	if (cr0.eq) goto loc_83113C68;
	// li r31,1
	r31.s64 = 1;
loc_83113C68:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x83113cf8
	if (!cr6.gt) goto loc_83113CF8;
loc_83113C70:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83113cf8
	if (cr6.eq) goto loc_83113CF8;
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83113cf8
	if (cr0.eq) goto loc_83113CF8;
	// subf r11,r30,r10
	r11.s64 = ctx.r10.s64 - r30.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// subf. r6,r11,r27
	ctx.r6.s64 = r27.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble 0x83113cf8
	if (!cr0.gt) goto loc_83113CF8;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x83113478
	sub_83113478(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83113d18
	if (cr0.lt) goto loc_83113D18;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83113cd8
	if (!cr6.eq) goto loc_83113CD8;
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
loc_83113CD8:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// ble cr6,0x83113cec
	if (!cr6.gt) goto loc_83113CEC;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_83113CEC:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r31
	cr6.compare<int32_t>(r29.s32, r31.s32, xer);
	// blt cr6,0x83113c70
	if (cr6.lt) goto loc_83113C70;
loc_83113CF8:
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r28.u32);
	// b 0x83113d18
	goto loc_83113D18;
loc_83113D08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83113d18
	goto loc_83113D18;
loc_83113D10:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_83113D18:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83113D20"))) PPC_WEAK_FUNC(sub_83113D20);
PPC_FUNC_IMPL(__imp__sub_83113D20) {
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
	PPCRegister f0{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
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
	// bl 0x831b1420
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r4,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r4.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r26,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, r26.u32);
	// mr r14,r7
	r14.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// lbz r11,20(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 20);
	// mr r15,r9
	r15.u64 = ctx.r9.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83113d70
	if (!cr0.eq) goto loc_83113D70;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x831146bc
	goto loc_831146BC;
loc_83113D70:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x831146b8
	if (cr6.eq) goto loc_831146B8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831146b8
	if (cr6.eq) goto loc_831146B8;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831146b8
	if (cr0.eq) goto loc_831146B8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83110bb0
	sub_83110BB0(ctx, base);
	// lwz r11,12(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 12);
	// lwz r10,4(r15)
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r9,0(r15)
	ctx.r9.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// lwz r8,8(r15)
	ctx.r8.u64 = PPC_LOAD_U32(r15.u32 + 8);
	// subf. r29,r10,r11
	r29.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// subf r16,r9,r8
	r16.s64 = ctx.r8.s64 - ctx.r9.s64;
	// ble 0x831146b8
	if (!cr0.gt) goto loc_831146B8;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// ble cr6,0x831146b8
	if (!cr6.gt) goto loc_831146B8;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r18,0
	r18.s64 = 0;
	// addi r11,r11,-7060
	r11.s64 = r11.s64 + -7060;
	// mr r28,r18
	r28.u64 = r18.u64;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// mr r17,r18
	r17.u64 = r18.u64;
	// stw r18,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r18.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83113e00
	if (cr0.eq) goto loc_83113E00;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// b 0x83113e40
	goto loc_83113E40;
loc_83113E00:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bge cr6,0x83113e18
	if (!cr6.lt) goto loc_83113E18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r26,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, r26.u32);
loc_83113E18:
	// mulli r3,r26,20
	ctx.r3.s64 = r26.s64 * 20;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// bne 0x83113e38
	if (!cr0.eq) goto loc_83113E38;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x831146bc
	goto loc_831146BC;
loc_83113E38:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830e61d8
	sub_830E61D8(ctx, base);
loc_83113E40:
	// rlwinm. r11,r14,0,19,19
	r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r18.u32);
	// mr r20,r18
	r20.u64 = r18.u64;
	// beq 0x83113ebc
	if (cr0.eq) goto loc_83113EBC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r18.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r18.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83113bb8
	sub_83113BB8(ctx, base);
	// lfs f1,52(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831b4548
	sub_831B4548(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, f0.u64);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// neg r11,r11
	r11.s64 = -r11.s64;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// ble cr6,0x83113ea4
	if (!cr6.gt) goto loc_83113EA4;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_83113EA4:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r20,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r20.s64 = temp.s64;
loc_83113EBC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r18.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r18.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r18,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r18.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lfs f23,2244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f23.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lfs f24,-22120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22120);
	f24.f64 = double(temp.f32);
	// mr r21,r18
	r21.u64 = r18.u64;
	// lfs f22,2240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f22.f64 = double(temp.f32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mr r19,r18
	r19.u64 = r18.u64;
loc_83113EF8:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83114618
	if (cr0.eq) goto loc_83114618;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83113478
	sub_83113478(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83114618
	if (cr0.lt) goto loc_83114618;
	// lwz r22,104(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x83114618
	if (cr6.eq) goto loc_83114618;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r28,r18
	r28.u64 = r18.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83113fd8
	if (cr6.eq) goto loc_83113FD8;
	// rlwinm. r11,r14,0,17,17
	r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83113fd8
	if (cr0.eq) goto loc_83113FD8;
	// li r4,8230
	ctx.r4.s64 = 8230;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831130c8
	sub_831130C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpw cr6,r16,r30
	cr6.compare<int32_t>(r16.s32, r30.s32, xer);
	// blt cr6,0x83113fd8
	if (cr6.lt) goto loc_83113FD8;
	// lwz r23,116(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r25,112(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// ble cr6,0x83113fbc
	if (!cr6.gt) goto loc_83113FBC;
	// rlwinm r11,r23,1,0,30
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r30,r16
	r29.s64 = r16.s64 - r30.s64;
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// addi r31,r11,-2
	r31.s64 = r11.s64 + -2;
loc_83113F90:
	// cmpw cr6,r25,r29
	cr6.compare<int32_t>(r25.s32, r29.s32, xer);
	// ble cr6,0x83113fbc
	if (!cr6.gt) goto loc_83113FBC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// bl 0x831130c8
	sub_831130C8(ctx, base);
	// addi r23,r23,-1
	r23.s64 = r23.s64 + -1;
	// subf r25,r3,r25
	r25.s64 = r25.s64 - ctx.r3.s64;
	// addi r31,r31,-2
	r31.s64 = r31.s64 + -2;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// bgt cr6,0x83113f90
	if (cr6.gt) goto loc_83113F90;
loc_83113FBC:
	// subf r11,r30,r16
	r11.s64 = r16.s64 - r30.s64;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bgt cr6,0x83113fe0
	if (cr6.gt) goto loc_83113FE0;
	// add r25,r30,r25
	r25.u64 = r30.u64 + r25.u64;
	// li r28,1
	r28.s64 = 1;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// b 0x83113fe0
	goto loc_83113FE0;
loc_83113FD8:
	// lwz r23,116(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r25,112(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83113FE0:
	// rlwinm. r11,r14,0,21,21
	r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83114000
	if (cr0.eq) goto loc_83114000;
	// subf r10,r25,r16
	ctx.r10.s64 = r16.s64 - r25.s64;
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8311401c
	goto loc_8311401C;
loc_83114000:
	// rlwinm. r11,r14,0,22,22
	r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83114018
	if (cr0.eq) goto loc_83114018;
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// add r29,r11,r16
	r29.u64 = r11.u64 + r16.u64;
	// b 0x8311401c
	goto loc_8311401C;
loc_83114018:
	// lwz r29,0(r15)
	r29.u64 = PPC_LOAD_U32(r15.u32 + 0);
loc_8311401C:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// subfe r28,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r28.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r24,r11,r23
	r24.u64 = r11.u64 + r23.u64;
	// cmpw cr6,r28,r24
	cr6.compare<int32_t>(r28.s32, r24.s32, xer);
	// bge cr6,0x83114578
	if (!cr6.lt) goto loc_83114578;
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r26,r11,r10
	r26.u64 = r11.u64 + ctx.r10.u64;
loc_83114058:
	// stfs f22,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// bne cr6,0x8311406c
	if (!cr6.eq) goto loc_8311406C;
	// li r4,-2
	ctx.r4.s64 = -2;
	// b 0x83114084
	goto loc_83114084;
loc_8311406C:
	// cmpw cr6,r28,r23
	cr6.compare<int32_t>(r28.s32, r23.s32, xer);
	// bge cr6,0x83114080
	if (!cr6.lt) goto loc_83114080;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r11,r22
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + r22.u32);
	// b 0x83114084
	goto loc_83114084;
loc_83114080:
	// li r4,8230
	ctx.r4.s64 = 8230;
loc_83114084:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83112870
	sub_83112870(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831140bc
	if (!cr6.eq) goto loc_831140BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83112870
	sub_83112870(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x83114608
	if (cr0.eq) goto loc_83114608;
loc_831140BC:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// fadds f1,f0,f24
	ctx.f1.f64 = double(float(f0.f64 + f24.f64));
	// bl 0x831b47b8
	sub_831B47B8(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831144e8
	if (cr0.eq) goto loc_831144E8;
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831b47b8
	sub_831B47B8(ctx, base);
	// extsw r11,r29
	r11.s64 = r29.s32;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// std r11,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, r11.u64);
	// lfd f13,312(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f26,f0,f13
	f26.f64 = double(float(f0.f64 + ctx.f13.f64));
	// beq 0x831141ec
	if (cr0.eq) goto loc_831141EC;
	// lhz r11,44(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8311412c
	if (!cr0.eq) goto loc_8311412C;
	// extsw r11,r20
	r11.s64 = r20.s32;
	// std r11,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, r11.u64);
	// lfd f0,368(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// b 0x831141f8
	goto loc_831141F8;
loc_8311412C:
	// lhz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 52);
	// lfs f0,228(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 228);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x83114168
	if (!cr6.eq) goto loc_83114168;
	// extsw r11,r20
	r11.s64 = r20.s32;
	// std r11,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, r11.u64);
	// extsw r11,r10
	r11.s64 = ctx.r10.s32;
	// std r11,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, r11.u64);
	// lfd f12,296(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// lfd f13,384(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 - f25.f64));
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// b 0x831141a0
	goto loc_831141A0;
loc_83114168:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// extsw r11,r20
	r11.s64 = r20.s32;
	// bne cr6,0x831141b0
	if (!cr6.eq) goto loc_831141B0;
	// std r11,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, r11.u64);
	// lfd f13,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// extsw r11,r10
	r11.s64 = ctx.r10.s32;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f11,232(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// std r11,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, r11.u64);
	// lfd f12,344(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// fsubs f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 - f25.f64));
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
loc_831141A0:
	// fcfid f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f0,f0,f12
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
	// b 0x83114204
	goto loc_83114204;
loc_831141B0:
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, r11.u64);
	// extsw r11,r10
	r11.s64 = ctx.r10.s32;
	// lfs f13,232(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// std r11,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, r11.u64);
	// lfd f12,232(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,192(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcfid f13,f11
	ctx.f13.f64 = double(ctx.f11.s64);
	// fsubs f0,f0,f12
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 - f25.f64));
	// fmadds f0,f0,f24,f13
	f0.f64 = double(float(f0.f64 * f24.f64 + ctx.f13.f64));
	// b 0x83114204
	goto loc_83114204;
loc_831141EC:
	// extsw r11,r20
	r11.s64 = r20.s32;
	// std r11,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, r11.u64);
	// lfd f0,248(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
loc_831141F8:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f25
	f0.f64 = double(float(f0.f64 - f25.f64));
loc_83114204:
	// lhz r11,52(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 52);
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f29,f0,f13
	f29.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// cmplwi cr6,r10,65534
	cr6.compare<uint32_t>(ctx.r10.u32, 65534, xer);
	// std r11,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, r11.u64);
	// lfd f0,376(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fadds f28,f0,f29
	f28.f64 = double(float(f0.f64 + f29.f64));
	// bne cr6,0x83114278
	if (!cr6.eq) goto loc_83114278;
	// extsw r11,r25
	r11.s64 = r25.s32;
	// lwa r10,8(r15)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r15.u32 + 8));
	// std r11,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, r11.u64);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// std r11,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, r11.u64);
	// lfd f12,328(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// lfd f0,264(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// fcfid f0,f12
	f0.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fadds f0,f0,f26
	f0.f64 = double(float(f0.f64 + f26.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x83114270
	if (cr6.lt) goto loc_83114270;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_83114270:
	// fadds f27,f0,f23
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(f0.f64 + f23.f64));
	// b 0x83114294
	goto loc_83114294;
loc_83114278:
	// lhz r11,50(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 50);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, r11.u64);
	// lfd f0,280(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fadds f27,f0,f26
	f27.f64 = double(float(f0.f64 + f26.f64));
loc_83114294:
	// lwa r11,4(r15)
	r11.s64 = int32_t(PPC_LOAD_U32(r15.u32 + 4));
	// std r11,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, r11.u64);
	// lfd f0,360(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f28,f0
	cr6.compare(f28.f64, f0.f64);
	// blt cr6,0x83114564
	if (cr6.lt) goto loc_83114564;
	// lwa r11,12(r15)
	r11.s64 = int32_t(PPC_LOAD_U32(r15.u32 + 12));
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, r11.u64);
	// lfd f0,200(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// bgt cr6,0x83114564
	if (cr6.gt) goto loc_83114564;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83112320
	sub_83112320(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83114314
	if (!cr0.lt) goto loc_83114314;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83112870
	sub_83112870(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x83114608
	if (cr0.eq) goto loc_83114608;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83112320
	sub_83112320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83114608
	if (cr0.lt) goto loc_83114608;
loc_83114314:
	// lwa r11,4(r15)
	r11.s64 = int32_t(PPC_LOAD_U32(r15.u32 + 4));
	// lfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, r11.u64);
	// lfs f12,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fmr f30,f13
	f30.f64 = ctx.f13.f64;
	// fmr f31,f12
	f31.f64 = ctx.f12.f64;
	// lfd f0,208(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// bge cr6,0x83114394
	if (!cr6.lt) goto loc_83114394;
	// lbz r11,28(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8311436c
	if (cr0.eq) goto loc_8311436C;
	// lhz r11,52(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 52);
	// fsubs f10,f0,f29
	ctx.f10.f64 = double(float(f0.f64 - f29.f64));
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, r11.u64);
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfd f10,224(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// b 0x83114380
	goto loc_83114380;
loc_8311436C:
	// lhz r11,72(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 72);
	// fsubs f11,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f0.f64 - f29.f64));
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, r11.u64);
	// lfd f10,240(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
loc_83114380:
	// fcfid f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmr f29,f0
	f29.f64 = f0.f64;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fadds f30,f11,f30
	f30.f64 = double(float(ctx.f11.f64 + f30.f64));
loc_83114394:
	// lwa r11,12(r15)
	r11.s64 = int32_t(PPC_LOAD_U32(r15.u32 + 12));
	// std r11,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, r11.u64);
	// lfd f0,256(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f28,f0
	cr6.compare(f28.f64, f0.f64);
	// ble cr6,0x83114404
	if (!cr6.gt) goto loc_83114404;
	// lbz r11,28(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831143dc
	if (cr0.eq) goto loc_831143DC;
	// lhz r11,52(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 52);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f11,f28,f0
	ctx.f11.f64 = double(float(f28.f64 - f0.f64));
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, r11.u64);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfd f12,272(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// b 0x831143f0
	goto loc_831143F0;
loc_831143DC:
	// lhz r11,72(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 72);
	// fsubs f13,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f28.f64 - f0.f64));
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, r11.u64);
	// lfd f12,288(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
loc_831143F0:
	// fcfid f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmr f28,f0
	f28.f64 = f0.f64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fsubs f31,f31,f13
	f31.f64 = double(float(f31.f64 - ctx.f13.f64));
loc_83114404:
	// lbz r11,28(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83114418
	if (cr0.eq) goto loc_83114418;
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// b 0x83114424
	goto loc_83114424;
loc_83114418:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_83114424:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8311446c
	if (cr6.eq) goto loc_8311446C;
	// cmplw cr6,r21,r30
	cr6.compare<uint32_t>(r21.u32, r30.u32, xer);
	// bne cr6,0x83114444
	if (!cr6.eq) goto loc_83114444;
	// addi r11,r17,4
	r11.s64 = r17.s64 + 4;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r11,6400
	cr6.compare<uint32_t>(r11.u32, 6400, xer);
	// blt cr6,0x83114470
	if (cr6.lt) goto loc_83114470;
loc_83114444:
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r4,652(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83110600
	sub_83110600(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r17,r18
	r17.u64 = r18.u64;
loc_8311446C:
	// mr r21,r30
	r21.u64 = r30.u64;
loc_83114470:
	// lwz r3,652(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// lbz r19,28(r31)
	r19.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f0,f26,f1
	f0.f64 = double(float(f26.f64 - ctx.f1.f64));
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fsubs f0,f29,f1
	f0.f64 = double(float(f29.f64 - ctx.f1.f64));
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f0,f27,f1
	f0.f64 = double(float(f27.f64 - ctx.f1.f64));
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f0,f28,f1
	f0.f64 = double(float(f28.f64 - ctx.f1.f64));
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stfs f30,180(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// subfic r9,r17,400
	xer.ca = r17.u32 <= 400;
	ctx.r9.s64 = 400 - r17.s64;
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// rlwinm r11,r17,4,0,27
	r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 4) & 0xFFFFFFF0;
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// rlwinm r6,r9,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stfs f0,172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83110568
	sub_83110568(ctx, base);
	// add r17,r3,r17
	r17.u64 = ctx.r3.u64 + r17.u64;
	// b 0x83114564
	goto loc_83114564;
loc_831144E8:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r10,65534
	cr6.compare<uint32_t>(ctx.r10.u32, 65534, xer);
	// beq cr6,0x83114564
	if (cr6.eq) goto loc_83114564;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r11,r26
	r11.u64 = r26.u64;
	// clrlwi. r8,r14,31
	ctx.r8.u64 = r14.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// addi r26,r26,20
	r26.s64 = r26.s64 + 20;
	// stw r18,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r18.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// beq 0x83114520
	if (cr0.eq) goto loc_83114520;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_83114520:
	// extsw r8,r29
	ctx.r8.s64 = r29.s32;
	// lwz r9,652(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// extsw r10,r20
	ctx.r10.s64 = r20.s32;
	// std r8,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r8.u64);
	// std r10,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r10.u64);
	// lfd f12,320(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f13,304(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// lwz r10,164(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 - f25.f64));
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
loc_83114564:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// cmpw cr6,r28,r24
	cr6.compare<int32_t>(r28.s32, r24.s32, xer);
	// blt cr6,0x83114058
	if (cr6.lt) goto loc_83114058;
loc_83114578:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// add r20,r20,r10
	r20.u64 = r20.u64 + ctx.r10.u64;
	// bne cr6,0x8311459c
	if (!cr6.eq) goto loc_8311459C;
	// lhz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U16(r22.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8311459c
	if (cr0.eq) goto loc_8311459C;
	// addi r11,r22,2
	r11.s64 = r22.s64 + 2;
loc_8311459C:
	// lwz r10,668(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x831145b8
	if (cr6.lt) goto loc_831145B8;
	// subf r6,r23,r10
	ctx.r6.s64 = ctx.r10.s64 - r23.s64;
	// stw r6,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r6.u32);
	// b 0x831145bc
	goto loc_831145BC;
loc_831145B8:
	// li r6,-1
	ctx.r6.s64 = -1;
loc_831145BC:
	// extsw r10,r20
	ctx.r10.s64 = r20.s32;
	// lwa r9,12(r15)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(r15.u32 + 12));
	// std r10,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r10.u64);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r28,108(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// std r10,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r10.u64);
	// lfd f13,352(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// lfd f0,336(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f25
	f0.f64 = double(float(f0.f64 - f25.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x83114618
	if (cr6.gt) goto loc_83114618;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83113ef8
	if (!cr6.eq) goto loc_83113EF8;
	// b 0x83114618
	goto loc_83114618;
loc_83114608:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// lwz r28,108(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
loc_83114618:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83114674
	if (!cr0.eq) goto loc_83114674;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x831146ac
	if (cr6.eq) goto loc_831146AC;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r31,96(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x83114660
	if (!cr6.gt) goto loc_83114660;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x83114660
	if (cr6.lt) goto loc_83114660;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// lwz r4,652(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83110968
	sub_83110968(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_83114660:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830e61d8
	sub_830E61D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// b 0x831146b0
	goto loc_831146B0;
loc_83114674:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// ble cr6,0x831146ac
	if (!cr6.gt) goto loc_831146AC;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x831146ac
	if (cr6.eq) goto loc_831146AC;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r4,652(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83110600
	sub_83110600(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x831146b0
	goto loc_831146B0;
loc_831146AC:
	// lwz r31,96(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_831146B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831146bc
	goto loc_831146BC;
loc_831146B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831146BC:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831b146c
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_831146D0"))) PPC_WEAK_FUNC(sub_831146D0);
PPC_FUNC_IMPL(__imp__sub_831146D0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x831147dc
	if (cr0.eq) goto loc_831147DC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831147dc
	if (cr6.eq) goto loc_831147DC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8311471c
	if (!cr6.eq) goto loc_8311471C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831147e4
	goto loc_831147E4;
loc_8311471C:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwz r31,152(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 152);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831147dc
	if (cr6.eq) goto loc_831147DC;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r28,r11,-7088
	r28.s64 = r11.s64 + -7088;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x83118710
	sub_83118710(ctx, base);
	// rlwinm. r11,r30,0,10,15
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3F0000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// bne 0x831147a4
	if (!cr0.eq) goto loc_831147A4;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lwz r11,24468(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24468);
	// or r30,r11,r30
	r30.u64 = r11.u64 | r30.u64;
loc_831147A4:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83113d20
	sub_83113D20(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831147e4
	goto loc_831147E4;
loc_831147DC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_831147E4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_831147F0"))) PPC_WEAK_FUNC(sub_831147F0);
PPC_FUNC_IMPL(__imp__sub_831147F0) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83114828
	if (!cr0.eq) goto loc_83114828;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x831148b0
	goto loc_831148B0;
loc_83114828:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x831148ac
	if (cr6.eq) goto loc_831148AC;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83110bb0
	sub_83110BB0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// rlwinm. r8,r29,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x831148b8
	if (cr0.eq) goto loc_831148B8;
	// bl 0x83113bb8
	sub_83113BB8(ctx, base);
loc_83114880:
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831148b0
	if (cr0.lt) goto loc_831148B0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mullw r11,r11,r26
	r11.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_831148AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831148B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_831148B8:
	// bl 0x83113a28
	sub_83113A28(ctx, base);
	// b 0x83114880
	goto loc_83114880;
}

__attribute__((alias("__imp__sub_831148C0"))) PPC_WEAK_FUNC(sub_831148C0);
PPC_FUNC_IMPL(__imp__sub_831148C0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x831148f4
	if (cr6.eq) goto loc_831148F4;
	// stw r30,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r30.u32);
loc_831148F4:
	// lwz r20,308(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x83114904
	if (cr6.eq) goto loc_83114904;
	// stw r30,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r30.u32);
loc_83114904:
	// lbz r11,20(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8311491c
	if (!cr0.eq) goto loc_8311491C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x83114aa4
	goto loc_83114AA4;
loc_8311491C:
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x83114930
	if (!cr6.eq) goto loc_83114930;
	// lis r24,32767
	r24.s64 = 2147418112;
	// ori r24,r24,65535
	r24.u64 = r24.u64 | 65535;
	// b 0x83114940
	goto loc_83114940;
loc_83114930:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83114aa0
	if (cr6.lt) goto loc_83114AA0;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// beq cr6,0x83114aa0
	if (cr6.eq) goto loc_83114AA0;
loc_83114940:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83110bb0
	sub_83110BB0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r28,r9,r10
	r28.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r7,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x83114974
	if (cr0.eq) goto loc_83114974;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83114aa0
	if (cr6.gt) goto loc_83114AA0;
loc_83114974:
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// beq cr6,0x831149a4
	if (cr6.eq) goto loc_831149A4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831149a4
	if (cr6.eq) goto loc_831149A4;
	// rotlwi r11,r10,1
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r7,r10,r3
	ctx.r7.s32 = ctx.r10.s32 / ctx.r3.s32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// twllei r3,0
	// andc r11,r3,r11
	r11.u64 = ctx.r3.u64 & ~r11.u64;
	// twlgei r11,-1
loc_831149A4:
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83113bb8
	sub_83113BB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83114aa4
	if (cr0.lt) goto loc_83114AA4;
	// lwz r27,96(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x83114aa0
	if (!cr6.gt) goto loc_83114AA0;
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// bne 0x831149fc
	if (!cr0.eq) goto loc_831149FC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83114aa4
	goto loc_83114AA4;
loc_831149FC:
	// mr r11,r25
	r11.u64 = r25.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// ble cr6,0x83114a88
	if (!cr6.gt) goto loc_83114A88;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_83114A20:
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// subf r6,r11,r24
	ctx.r6.s64 = r24.s64 - r11.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83113478
	sub_83113478(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x83114aac
	if (cr0.lt) goto loc_83114AAC;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83114a74
	if (!cr6.eq) goto loc_83114A74;
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
loc_83114A74:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(r29.s32, r27.s32, xer);
	// blt cr6,0x83114a20
	if (cr6.lt) goto loc_83114A20;
loc_83114A88:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x83114a94
	if (cr6.eq) goto loc_83114A94;
	// stw r27,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r27.u32);
loc_83114A94:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x83114aa0
	if (cr6.eq) goto loc_83114AA0;
	// stw r23,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r23.u32);
loc_83114AA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83114AA4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b58
	return;
loc_83114AAC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x83114aa4
	goto loc_83114AA4;
}

__attribute__((alias("__imp__sub_83114AC0"))) PPC_WEAK_FUNC(sub_83114AC0);
PPC_FUNC_IMPL(__imp__sub_83114AC0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83114af8
	if (!cr6.eq) goto loc_83114AF8;
loc_83114AEC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x83114c38
	goto loc_83114C38;
loc_83114AF8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83114c24
	if (cr6.eq) goto loc_83114C24;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83114c24
	if (cr0.eq) goto loc_83114C24;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// beq cr6,0x83114aec
	if (cr6.eq) goto loc_83114AEC;
	// rlwinm. r11,r29,0,10,15
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x3F0000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83114b78
	if (!cr0.eq) goto loc_83114B78;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lwz r11,24468(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24468);
	// or r29,r11,r29
	r29.u64 = r11.u64 | r29.u64;
loc_83114B78:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r25,r11,-7088
	r25.s64 = r11.s64 + -7088;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831147f0
	sub_831147F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x83118710
	sub_83118710(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwa r11,108(r1)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 108));
	// lwa r10,96(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 96));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwa r9,100(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 100));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lwa r8,104(r1)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 104));
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,96(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x83114c38
	goto loc_83114C38;
loc_83114C24:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_83114C38:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83114C40"))) PPC_WEAK_FUNC(sub_83114C40);
PPC_FUNC_IMPL(__imp__sub_83114C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// b 0x831146d0
	sub_831146D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83114C60"))) PPC_WEAK_FUNC(sub_83114C60);
PPC_FUNC_IMPL(__imp__sub_83114C60) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x83114ca0
	if (!cr6.eq) goto loc_83114CA0;
loc_83114C94:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x83114d8c
	goto loc_83114D8C;
loc_83114CA0:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// beq cr6,0x83114c94
	if (cr6.eq) goto loc_83114C94;
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(r25.s32, -1, xer);
	// blt cr6,0x83114c94
	if (cr6.lt) goto loc_83114C94;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83114c94
	if (cr6.eq) goto loc_83114C94;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x83114cd0
	if (!cr6.eq) goto loc_83114CD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83114d8c
	goto loc_83114D8C;
loc_83114CD0:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r29,r11,-7088
	r29.s64 = r11.s64 + -7088;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x83118710
	sub_83118710(ctx, base);
	// stw r3,16(r28)
	PPC_STORE_U32(r28.u32 + 16, ctx.r3.u32);
	// rlwinm. r11,r30,0,10,15
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3F0000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// bne 0x83114d4c
	if (!cr0.eq) goto loc_83114D4C;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lwz r11,24468(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24468);
	// or r30,r11,r30
	r30.u64 = r11.u64 | r30.u64;
loc_83114D4C:
	// lwz r11,292(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cntlzw r8,r23
	ctx.r8.u64 = r23.u32 == 0 ? 32 : __builtin_clz(r23.u32);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831148c0
	sub_831148C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83114D8C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83114D98"))) PPC_WEAK_FUNC(sub_83114D98);
PPC_FUNC_IMPL(__imp__sub_83114D98) {
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be6970
	sub_82BE6970(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83114dd4
	if (cr6.eq) goto loc_83114DD4;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_83114DD4:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
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

__attribute__((alias("__imp__sub_83114DF0"))) PPC_WEAK_FUNC(sub_83114DF0);
PPC_FUNC_IMPL(__imp__sub_83114DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114E00"))) PPC_WEAK_FUNC(sub_83114E00);
PPC_FUNC_IMPL(__imp__sub_83114E00) {
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
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83114e3c
	if (cr6.eq) goto loc_83114E3C;
loc_83114E24:
	// lwz r31,16(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x830d6e00
	sub_830D6E00(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x83114e24
	if (!cr6.eq) goto loc_83114E24;
loc_83114E3C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
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

__attribute__((alias("__imp__sub_83114E60"))) PPC_WEAK_FUNC(sub_83114E60);
PPC_FUNC_IMPL(__imp__sub_83114E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r3,24
	ctx.r3.s64 = 24;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// bl 0x830d6d68
	sub_830D6D68(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83114ea8
	if (cr0.eq) goto loc_83114EA8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r10.u8);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// b 0x83114eac
	goto loc_83114EAC;
loc_83114EA8:
	// li r11,0
	r11.s64 = 0;
loc_83114EAC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83114ec0
	if (!cr6.eq) goto loc_83114EC0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83114f5c
	goto loc_83114F5C;
loc_83114EC0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x83114ed0
	if (!cr6.lt) goto loc_83114ED0;
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
loc_83114ED0:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x83114ee0
	if (!cr6.gt) goto loc_83114EE0;
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
loc_83114EE0:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x83114ef0
	if (!cr6.lt) goto loc_83114EF0;
	// stfs f30,4(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
loc_83114EF0:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// ble cr6,0x83114f00
	if (!cr6.gt) goto loc_83114F00;
	// stfs f30,12(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_83114F00:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83114f48
	if (cr6.eq) goto loc_83114F48;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r11.u32);
	// b 0x83114f58
	goto loc_83114F58;
loc_83114F48:
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
loc_83114F58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83114F5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114F78"))) PPC_WEAK_FUNC(sub_83114F78);
PPC_FUNC_IMPL(__imp__sub_83114F78) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lfs f13,24(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// lfs f9,32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// lfs f11,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// lfs f12,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 - f0.f64));
	// fsubs f10,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f13,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmsubs f0,f0,f10,f12
	f0.f64 = double(float(f0.f64 * ctx.f10.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x83114fcc
	if (!cr6.gt) goto loc_83114FCC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83114FCC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lfs f13,-24784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24784);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114FE8"))) PPC_WEAK_FUNC(sub_83114FE8);
PPC_FUNC_IMPL(__imp__sub_83114FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// bl 0x83114f78
	sub_83114F78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83115014
	if (cr0.eq) goto loc_83115014;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83115068
	goto loc_83115068;
loc_83115014:
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x8311502c
	if (cr6.eq) goto loc_8311502C;
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// b 0x83115038
	goto loc_83115038;
loc_8311502C:
	// lfs f13,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	f0.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
loc_83115038:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x83115048
	if (cr6.gt) goto loc_83115048;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x83115058
	if (!cr6.gt) goto loc_83115058;
loc_83115048:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x83115060
	if (cr6.lt) goto loc_83115060;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x83115060
	if (cr6.lt) goto loc_83115060;
loc_83115058:
	// li r11,1
	r11.s64 = 1;
	// b 0x83115064
	goto loc_83115064;
loc_83115060:
	// li r11,0
	r11.s64 = 0;
loc_83115064:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_83115068:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115078"))) PPC_WEAK_FUNC(sub_83115078);
PPC_FUNC_IMPL(__imp__sub_83115078) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x83114f78
	sub_83114F78(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x8311521c
	if (cr0.eq) goto loc_8311521C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83114f78
	sub_83114F78(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8311521c
	if (cr0.eq) goto loc_8311521C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83114f78
	sub_83114F78(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// beq 0x8311521c
	if (cr0.eq) goto loc_8311521C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83114f78
	sub_83114F78(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq 0x8311521c
	if (cr0.eq) goto loc_8311521C;
	// lwz r23,24(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x8311511c
	if (cr6.eq) goto loc_8311511C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83114f78
	sub_83114F78(ctx, base);
	// b 0x83115120
	goto loc_83115120;
loc_8311511C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_83115120:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r28,1
	r28.s64 = 1;
	// bgt cr6,0x83115130
	if (cr6.gt) goto loc_83115130;
	// li r28,0
	r28.s64 = 0;
loc_83115130:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x83115150
	if (cr6.eq) goto loc_83115150;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83114f78
	sub_83114F78(ctx, base);
	// b 0x83115154
	goto loc_83115154;
loc_83115150:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_83115154:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x83115164
	if (cr6.gt) goto loc_83115164;
	// li r11,0
	r11.s64 = 0;
loc_83115164:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xor. r11,r11,r10
	r11.u64 = r11.u64 ^ ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83115210
	if (cr0.eq) goto loc_83115210;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x831151a4
	if (cr6.eq) goto loc_831151A4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83114f78
	sub_83114F78(ctx, base);
	// b 0x831151a8
	goto loc_831151A8;
loc_831151A4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_831151A8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r30,1
	r30.s64 = 1;
	// bgt cr6,0x831151b8
	if (cr6.gt) goto loc_831151B8;
	// li r30,0
	r30.s64 = 0;
loc_831151B8:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x831151d8
	if (cr6.eq) goto loc_831151D8;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83114f78
	sub_83114F78(ctx, base);
	// b 0x831151dc
	goto loc_831151DC;
loc_831151D8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_831151DC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x831151ec
	if (cr6.gt) goto loc_831151EC;
	// li r11,0
	r11.s64 = 0;
loc_831151EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xor. r11,r11,r10
	r11.u64 = r11.u64 ^ ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x83115214
	if (!cr0.eq) goto loc_83115214;
loc_83115210:
	// li r11,0
	r11.s64 = 0;
loc_83115214:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x83115220
	goto loc_83115220;
loc_8311521C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83115220:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83115228"))) PPC_WEAK_FUNC(sub_83115228);
PPC_FUNC_IMPL(__imp__sub_83115228) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x83115078
	sub_83115078(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831152c8
	if (!cr0.eq) goto loc_831152C8;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83114fe8
	sub_83114FE8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831152c8
	if (!cr0.eq) goto loc_831152C8;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83114fe8
	sub_83114FE8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831152c8
	if (!cr0.eq) goto loc_831152C8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83114fe8
	sub_83114FE8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831152c8
	if (!cr0.eq) goto loc_831152C8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83114fe8
	sub_83114FE8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x831152cc
	if (cr0.eq) goto loc_831152CC;
loc_831152C8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831152CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831152D8"))) PPC_WEAK_FUNC(sub_831152D8);
PPC_FUNC_IMPL(__imp__sub_831152D8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r27,16(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r26,24(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r28,20(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ld r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U64(r27.u32 + 4);
	// beq cr6,0x83115314
	if (cr6.eq) goto loc_83115314;
	// ld r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 4);
	// ld r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U64(r28.u32 + 4);
	// b 0x8311531c
	goto loc_8311531C;
loc_83115314:
	// ld r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U64(r28.u32 + 4);
	// ld r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 4);
loc_8311531C:
	// bl 0x83114f78
	sub_83114F78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ld r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U64(r29.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// blt cr6,0x831153b4
	if (cr6.lt) goto loc_831153B4;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x83115344
	if (cr6.eq) goto loc_83115344;
	// ld r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 4);
	// ld r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U64(r28.u32 + 4);
	// b 0x8311534c
	goto loc_8311534C;
loc_83115344:
	// ld r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U64(r28.u32 + 4);
	// ld r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 4);
loc_8311534C:
	// bl 0x83114f78
	sub_83114F78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x83115360
	if (cr6.gt) goto loc_83115360;
	// li r11,0
	r11.s64 = 0;
loc_83115360:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831153ac
	if (cr0.eq) goto loc_831153AC;
	// ld r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 4);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x83115384
	if (cr6.eq) goto loc_83115384;
	// ld r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U64(r29.u32 + 4);
	// ld r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U64(r27.u32 + 4);
	// b 0x8311538c
	goto loc_8311538C;
loc_83115384:
	// ld r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U64(r27.u32 + 4);
	// ld r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U64(r29.u32 + 4);
loc_8311538C:
	// bl 0x83114f78
	sub_83114F78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x831153a0
	if (cr6.gt) goto loc_831153A0;
	// li r11,0
	r11.s64 = 0;
loc_831153A0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x83115414
	if (!cr0.eq) goto loc_83115414;
loc_831153AC:
	// li r11,0
	r11.s64 = 0;
	// b 0x83115414
	goto loc_83115414;
loc_831153B4:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x831153c8
	if (cr6.eq) goto loc_831153C8;
	// ld r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 4);
	// ld r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U64(r27.u32 + 4);
	// b 0x831153d0
	goto loc_831153D0;
loc_831153C8:
	// ld r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U64(r27.u32 + 4);
	// ld r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 4);
loc_831153D0:
	// bl 0x83114f78
	sub_83114F78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83115410
	if (cr6.lt) goto loc_83115410;
	// ld r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 4);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x831153f8
	if (cr6.eq) goto loc_831153F8;
	// ld r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U64(r29.u32 + 4);
	// ld r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U64(r28.u32 + 4);
	// b 0x83115400
	goto loc_83115400;
loc_831153F8:
	// ld r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U64(r28.u32 + 4);
	// ld r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U64(r29.u32 + 4);
loc_83115400:
	// bl 0x83114f78
	sub_83114F78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bge cr6,0x83115414
	if (!cr6.lt) goto loc_83115414;
loc_83115410:
	// li r11,1
	r11.s64 = 1;
loc_83115414:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83115420"))) PPC_WEAK_FUNC(sub_83115420);
PPC_FUNC_IMPL(__imp__sub_83115420) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r27,16(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r11,r27
	r11.u64 = r27.u64;
loc_83115440:
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x83115484
	if (cr6.eq) goto loc_83115484;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x83115484
	if (cr6.eq) goto loc_83115484;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x83115484
	if (cr6.eq) goto loc_83115484;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x83115484
	if (cr6.eq) goto loc_83115484;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ld r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 4);
	// ld r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 4);
	// ld r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U64(r29.u32 + 4);
	// ld r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U64(r30.u32 + 4);
	// bl 0x83115228
	sub_83115228(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8311549c
	if (!cr0.eq) goto loc_8311549C;
loc_83115484:
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// bne cr6,0x83115440
	if (!cr6.eq) goto loc_83115440;
	// li r3,1
	ctx.r3.s64 = 1;
loc_83115494:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_8311549C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83115494
	goto loc_83115494;
}

__attribute__((alias("__imp__sub_831154A8"))) PPC_WEAK_FUNC(sub_831154A8);
PPC_FUNC_IMPL(__imp__sub_831154A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x831152d8
	sub_831152D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83115500
	if (cr0.eq) goto loc_83115500;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831152d8
	sub_831152D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83115500
	if (cr0.eq) goto loc_83115500;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83115420
	sub_83115420(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x83115504
	if (!cr0.eq) goto loc_83115504;
loc_83115500:
	// li r11,0
	r11.s64 = 0;
loc_83115504:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83115510"))) PPC_WEAK_FUNC(sub_83115510);
PPC_FUNC_IMPL(__imp__sub_83115510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r11,r11,-15524
	r11.s64 = r11.s64 + -15524;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x831131f0
	sub_831131F0(ctx, base);
	// bl 0x8311e888
	sub_8311E888(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83115554
	if (cr6.eq) goto loc_83115554;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83115554:
	// li r11,0
	r11.s64 = 0;
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

__attribute__((alias("__imp__sub_83115570"))) PPC_WEAK_FUNC(sub_83115570);
PPC_FUNC_IMPL(__imp__sub_83115570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x83122e58
	sub_83122E58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83115590"))) PPC_WEAK_FUNC(sub_83115590);
PPC_FUNC_IMPL(__imp__sub_83115590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115598"))) PPC_WEAK_FUNC(sub_83115598);
PPC_FUNC_IMPL(__imp__sub_83115598) {
	PPC_FUNC_PROLOGUE();
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831155A8"))) PPC_WEAK_FUNC(sub_831155A8);
PPC_FUNC_IMPL(__imp__sub_831155A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831155B0"))) PPC_WEAK_FUNC(sub_831155B0);
PPC_FUNC_IMPL(__imp__sub_831155B0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r31.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r31.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r31.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r31.u32);
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

__attribute__((alias("__imp__sub_83115620"))) PPC_WEAK_FUNC(sub_83115620);
PPC_FUNC_IMPL(__imp__sub_83115620) {
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
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x830d6d68
	sub_830D6D68(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83115654
	if (!cr0.eq) goto loc_83115654;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83115668
	goto loc_83115668;
loc_83115654:
	// li r11,1
	r11.s64 = 1;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_83115668:
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

__attribute__((alias("__imp__sub_83115680"))) PPC_WEAK_FUNC(sub_83115680);
PPC_FUNC_IMPL(__imp__sub_83115680) {
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// beq cr6,0x831156fc
	if (cr6.eq) goto loc_831156FC;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x831156c4
	if (!cr0.eq) goto loc_831156C4;
loc_831156B8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83115724
	goto loc_83115724;
loc_831156C4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x830d6e00
	sub_830D6E00(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x83115720
	goto loc_83115720;
loc_831156FC:
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831156b8
	if (cr0.eq) goto loc_831156B8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_83115720:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83115724:
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

__attribute__((alias("__imp__sub_83115740"))) PPC_WEAK_FUNC(sub_83115740);
PPC_FUNC_IMPL(__imp__sub_83115740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x83115780
	if (!cr6.gt) goto loc_83115780;
	// bl 0x83115680
	sub_83115680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831158f0
	if (cr0.lt) goto loc_831158F0;
loc_83115780:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x83115790
	if (!cr6.lt) goto loc_83115790;
	// stfs f31,20(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
loc_83115790:
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x831157a0
	if (!cr6.gt) goto loc_831157A0;
	// stfs f31,28(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
loc_831157A0:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x831157b0
	if (!cr6.lt) goto loc_831157B0;
	// stfs f30,24(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
loc_831157B0:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// ble cr6,0x831157c0
	if (!cr6.gt) goto loc_831157C0;
	// stfs f30,32(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
loc_831157C0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// beq cr6,0x831158ec
	if (cr6.eq) goto loc_831158EC;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// ble cr6,0x831158ec
	if (!cr6.gt) goto loc_831158EC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r29,r30,3,0,28
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// blt cr6,0x831158ec
	if (cr6.lt) goto loc_831158EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83120b00
	sub_83120B00(ctx, base);
	// addi r11,r30,-2
	r11.s64 = r30.s64 + -2;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r29,r10
	r11.u64 = r29.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fneg f0,f13
	f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x83120b00
	sub_83120B00(ctx, base);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-10412(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -10412);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f12,f11,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + f0.f64));
	// fabs f12,f0
	ctx.f12.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x831158ec
	if (cr6.lt) goto loc_831158EC;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831158cc
	if (!cr6.eq) goto loc_831158CC;
	// li r11,1
	r11.s64 = 1;
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// b 0x831158ec
	goto loc_831158EC;
loc_831158CC:
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x831158ec
	if (!cr6.lt) goto loc_831158EC;
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
loc_831158EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831158F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83115900"))) PPC_WEAK_FUNC(sub_83115900);
PPC_FUNC_IMPL(__imp__sub_83115900) {
	PPC_FUNC_PROLOGUE();
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
	PPCVRegister v54{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r3,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r3.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r10,-15496
	ctx.r10.s64 = ctx.r10.s64 + -15496;
	// vupkd3d128 v55,v63,4
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v55 = vTemp;
	// li r8,8
	ctx.r8.s64 = 8;
	// lvsr v0,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r5,1
	ctx.r5.s64 = 1;
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r31,32
	r31.s64 = 32;
	// vpermwi128 v63,v55,234
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x15));
	// li r6,16
	ctx.r6.s64 = 16;
	// vpermwi128 v61,v55,174
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x51));
	// li r30,36
	r30.s64 = 36;
	// vpermwi128 v60,v55,171
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x54));
	// li r5,20
	ctx.r5.s64 = 20;
	// vpermwi128 v62,v55,186
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x45));
	// li r29,40
	r29.s64 = 40;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r10,24
	ctx.r10.s64 = 24;
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r28,44
	r28.s64 = 44;
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r4,28
	ctx.r4.s64 = 28;
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r27,48
	r27.s64 = 48;
	// li r26,52
	r26.s64 = 52;
	// vpermwi128 v59,v55,234
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x15));
	// li r25,56
	r25.s64 = 56;
	// vpermwi128 v58,v55,186
	simde_mm_store_si128((simde__m128i*)v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x45));
	// vor128 v54,v60,v60
	simde_mm_store_si128((simde__m128i*)v54.u8, simde_mm_load_si128((simde__m128i*)v60.u8));
	// li r24,60
	r24.s64 = 60;
	// stvewx128 v63,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vpermwi128 v57,v55,174
	simde_mm_store_si128((simde__m128i*)v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x51));
	// stvewx128 v63,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vpermwi128 v56,v55,171
	simde_mm_store_si128((simde__m128i*)v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x54));
	// stvewx128 v63,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r23,-1
	r23.s64 = -1;
	// stvewx128 v63,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r22,-1
	r22.s64 = -1;
	// stvewx128 v62,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// lis r21,-32768
	r21.s64 = -2147483648;
	// stvewx128 v62,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stw r23,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, r23.u32);
	// stvewx128 v62,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r10,36
	ctx.r10.s64 = 36;
	// stvewx128 v62,r11,r4
	ea = (r11.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stw r22,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, r22.u32);
	// stvewx128 v61,r11,r31
	ea = (r11.u32 + r31.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// stvewx128 v61,r11,r30
	ea = (r11.u32 + r30.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stw r21,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, r21.u32);
	// stvewx128 v61,r11,r29
	ea = (r11.u32 + r29.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r29,-172(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// stvewx128 v61,r11,r28
	ea = (r11.u32 + r28.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// vpermwi128 v63,v55,234
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x15));
	// stvewx128 v54,r11,r27
	ea = (r11.u32 + r27.u32) & ~0x3;
	PPC_STORE_U32(ea, v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vpermwi128 v62,v55,186
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x45));
	// stvewx128 v54,r11,r26
	ea = (r11.u32 + r26.u32) & ~0x3;
	PPC_STORE_U32(ea, v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vpermwi128 v61,v55,174
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x51));
	// stvewx128 v54,r11,r25
	ea = (r11.u32 + r25.u32) & ~0x3;
	PPC_STORE_U32(ea, v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vpermwi128 v60,v55,171
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x54));
	// stvewx128 v54,r11,r24
	ea = (r11.u32 + r24.u32) & ~0x3;
	PPC_STORE_U32(ea, v54.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r3,72
	r11.s64 = ctx.r3.s64 + 72;
	// li r10,24
	ctx.r10.s64 = 24;
	// lvsr v0,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// vperm128 v59,v59,v59,v0
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v58,v58,v58,v0
	simde_mm_store_si128((simde__m128i*)v58.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v58.u8), simde_mm_load_si128((simde__m128i*)v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v57,v57,v57,v0
	simde_mm_store_si128((simde__m128i*)v57.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v57.u8), simde_mm_load_si128((simde__m128i*)v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v56,v56,v56,v0
	simde_mm_store_si128((simde__m128i*)v56.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v56.u8), simde_mm_load_si128((simde__m128i*)v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvewx128 v59,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v58.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r3,-176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r14,-160(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// li r28,40
	r28.s64 = 40;
	// stvewx128 v58,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v58.u32[3 - ((ea & 0xF) >> 2)]);
	// li r26,44
	r26.s64 = 44;
	// stvewx128 v58,r11,r4
	ea = (r11.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, v58.u32[3 - ((ea & 0xF) >> 2)]);
	// li r24,48
	r24.s64 = 48;
	// stvewx128 v57,r11,r31
	ea = (r11.u32 + r31.u32) & ~0x3;
	PPC_STORE_U32(ea, v57.u32[3 - ((ea & 0xF) >> 2)]);
	// li r23,52
	r23.s64 = 52;
	// li r22,56
	r22.s64 = 56;
	// lwz r27,-168(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stvewx128 v57,r11,r14
	ea = (r11.u32 + r14.u32) & ~0x3;
	PPC_STORE_U32(ea, v57.u32[3 - ((ea & 0xF) >> 2)]);
	// li r21,60
	r21.s64 = 60;
	// stvewx128 v57,r11,r28
	ea = (r11.u32 + r28.u32) & ~0x3;
	PPC_STORE_U32(ea, v57.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r25,-164(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// stvewx128 v57,r11,r26
	ea = (r11.u32 + r26.u32) & ~0x3;
	PPC_STORE_U32(ea, v57.u32[3 - ((ea & 0xF) >> 2)]);
	// li r10,0
	ctx.r10.s64 = 0;
	// stvewx128 v56,r11,r24
	ea = (r11.u32 + r24.u32) & ~0x3;
	PPC_STORE_U32(ea, v56.u32[3 - ((ea & 0xF) >> 2)]);
	// li r20,1
	r20.s64 = 1;
	// stvewx128 v56,r11,r23
	ea = (r11.u32 + r23.u32) & ~0x3;
	PPC_STORE_U32(ea, v56.u32[3 - ((ea & 0xF) >> 2)]);
	// li r19,24
	r19.s64 = 24;
	// stvewx128 v56,r11,r22
	ea = (r11.u32 + r22.u32) & ~0x3;
	PPC_STORE_U32(ea, v56.u32[3 - ((ea & 0xF) >> 2)]);
	// li r30,32
	r30.s64 = 32;
	// stvewx128 v56,r11,r21
	ea = (r11.u32 + r21.u32) & ~0x3;
	PPC_STORE_U32(ea, v56.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r3,200
	r11.s64 = ctx.r3.s64 + 200;
	// stw r10,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// li r31,36
	r31.s64 = 36;
	// stw r10,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// li r18,4
	r18.s64 = 4;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// li r17,8
	r17.s64 = 8;
	// lvsr v0,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// stw r10,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// stw r10,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r10,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r10.u32);
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v59,v63,v63
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// stw r10,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// vor128 v58,v62,v62
	simde_mm_store_si128((simde__m128i*)v58.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// vor128 v57,v61,v61
	simde_mm_store_si128((simde__m128i*)v57.u8, simde_mm_load_si128((simde__m128i*)v61.u8));
	// stw r29,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r29.u32);
	// vor128 v56,v60,v60
	simde_mm_store_si128((simde__m128i*)v56.u8, simde_mm_load_si128((simde__m128i*)v60.u8));
	// stw r27,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, r27.u32);
	// li r16,12
	r16.s64 = 12;
	// stw r25,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, r25.u32);
	// li r15,16
	r15.s64 = 16;
	// stw r20,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, r20.u32);
	// stvewx128 v59,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v59.u32[3 - ((ea & 0xF) >> 2)]);
	// vpermwi128 v63,v55,234
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x15));
	// stvewx128 v59,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v59.u32[3 - ((ea & 0xF) >> 2)]);
	// li r8,52
	ctx.r8.s64 = 52;
	// stvewx128 v59,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v59.u32[3 - ((ea & 0xF) >> 2)]);
	// li r7,48
	ctx.r7.s64 = 48;
	// stvewx128 v58,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v58.u32[3 - ((ea & 0xF) >> 2)]);
	// li r6,28
	ctx.r6.s64 = 28;
	// stvewx128 v58,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v58.u32[3 - ((ea & 0xF) >> 2)]);
	// li r5,44
	ctx.r5.s64 = 44;
	// stvewx128 v58,r11,r19
	ea = (r11.u32 + r19.u32) & ~0x3;
	PPC_STORE_U32(ea, v58.u32[3 - ((ea & 0xF) >> 2)]);
	// vpermwi128 v62,v55,186
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x45));
	// vpermwi128 v61,v55,174
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x51));
	// li r9,56
	ctx.r9.s64 = 56;
	// vpermwi128 v60,v55,171
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), 0x54));
	// li r10,60
	ctx.r10.s64 = 60;
	// stvewx128 v58,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v58.u32[3 - ((ea & 0xF) >> 2)]);
	// li r29,20
	r29.s64 = 20;
	// stvewx128 v57,r11,r30
	ea = (r11.u32 + r30.u32) & ~0x3;
	PPC_STORE_U32(ea, v57.u32[3 - ((ea & 0xF) >> 2)]);
	// li r28,24
	r28.s64 = 24;
	// stvewx128 v57,r11,r31
	ea = (r11.u32 + r31.u32) & ~0x3;
	PPC_STORE_U32(ea, v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r11,r4
	ea = (r11.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v56,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v56,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v56,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v56,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v56.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r3,264
	r11.s64 = ctx.r3.s64 + 264;
	// lvsr v0,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvewx128 v63,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r11,r18
	ea = (r11.u32 + r18.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r11,r17
	ea = (r11.u32 + r17.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r11,r16
	ea = (r11.u32 + r16.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r15
	ea = (r11.u32 + r15.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r29
	ea = (r11.u32 + r29.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r28
	ea = (r11.u32 + r28.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r30
	ea = (r11.u32 + r30.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r31
	ea = (r11.u32 + r31.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r4
	ea = (r11.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_83115BF8"))) PPC_WEAK_FUNC(sub_83115BF8);
PPC_FUNC_IMPL(__imp__sub_83115BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
loc_83115C0C:
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
	// bne 0x83115c0c
	if (!cr0.eq) goto loc_83115C0C;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x83115c50
	if (!cr6.eq) goto loc_83115C50;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83115c50
	if (cr6.eq) goto loc_83115C50;
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
loc_83115C50:
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

__attribute__((alias("__imp__sub_83115C68"))) PPC_WEAK_FUNC(sub_83115C68);
PPC_FUNC_IMPL(__imp__sub_83115C68) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83115c98
	if (cr6.eq) goto loc_83115C98;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x83115d28
	goto loc_83115D28;
loc_83115C98:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r30.u32);
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83115cec
	if (!cr6.eq) goto loc_83115CEC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83115d28
	if (cr0.lt) goto loc_83115D28;
loc_83115CEC:
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// bne cr6,0x83115d04
	if (!cr6.eq) goto loc_83115D04;
	// bl 0x83110f50
	sub_83110F50(ctx, base);
loc_83115D04:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83115d28
	if (cr0.lt) goto loc_83115D28;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83115D28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83115D30"))) PPC_WEAK_FUNC(sub_83115D30);
PPC_FUNC_IMPL(__imp__sub_83115D30) {
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
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83115d60
	if (cr6.eq) goto loc_83115D60;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x83115d80
	goto loc_83115D80;
loc_83115D60:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// li r30,0
	r30.s64 = 0;
	// stw r30,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83115d78
	if (!cr6.eq) goto loc_83115D78;
	// bl 0x83111f98
	sub_83111F98(ctx, base);
loc_83115D78:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r30.u32);
loc_83115D80:
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

__attribute__((alias("__imp__sub_83115D98"))) PPC_WEAK_FUNC(sub_83115D98);
PPC_FUNC_IMPL(__imp__sub_83115D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r31,0
	r31.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r31,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r31.u32);
	// stw r10,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r10.u32);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 156);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r31.u32);
	// lwz r11,168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r31.u32);
	// lwz r11,160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83115E60"))) PPC_WEAK_FUNC(sub_83115E60);
PPC_FUNC_IMPL(__imp__sub_83115E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f0,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83115f08
	if (!cr6.gt) goto loc_83115F08;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83115F08:
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

__attribute__((alias("__imp__sub_83115F20"))) PPC_WEAK_FUNC(sub_83115F20);
PPC_FUNC_IMPL(__imp__sub_83115F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 64);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115FB0"))) PPC_WEAK_FUNC(sub_83115FB0);
PPC_FUNC_IMPL(__imp__sub_83115FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f0,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,124(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lfs f0,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,132(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83116058
	if (!cr6.gt) goto loc_83116058;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83116058:
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

__attribute__((alias("__imp__sub_83116070"))) PPC_WEAK_FUNC(sub_83116070);
PPC_FUNC_IMPL(__imp__sub_83116070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 72);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,76(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 76);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,88(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,92(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 92);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,96(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,100(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 100);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f0,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f0,108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 108);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f0,112(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 112);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f0,116(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 116);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f0,120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 120);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f0,124(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f0,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f0,132(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 132);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116100"))) PPC_WEAK_FUNC(sub_83116100);
PPC_FUNC_IMPL(__imp__sub_83116100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
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
	// bl 0x831b0b1c
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r11,16
	r11.s64 = 16;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r8,r3,200
	ctx.r8.s64 = ctx.r3.s64 + 200;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x15));
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x45));
	// lvsr v0,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x51));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r6,4
	ctx.r6.s64 = 4;
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r3,8
	ctx.r3.s64 = 8;
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x54));
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r31,20
	r31.s64 = 20;
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// stvewx128 v63,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r27,24
	r27.s64 = 24;
	// stvewx128 v63,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stvewx128 v63,r28,r3
	ea = (r28.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r8,28
	ctx.r8.s64 = 28;
	// stvewx128 v63,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r3,32
	ctx.r3.s64 = 32;
	// stvewx128 v62,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r7,36
	ctx.r7.s64 = 36;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stvewx128 v62,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r30,40
	r30.s64 = 40;
	// stvewx128 v62,r29,r27
	ea = (r29.u32 + r27.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vperm128 v63,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvewx128 v61,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stvewx128 v61,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r10,44
	ctx.r10.s64 = 44;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stvewx128 v61,r31,r30
	ea = (r31.u32 + r30.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r31,52
	r31.s64 = 52;
	// stvewx128 v61,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// li r29,56
	r29.s64 = 56;
	// stvewx128 v63,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// li r27,60
	r27.s64 = 60;
	// lis r26,-32256
	r26.s64 = -2113929216;
	// stvewx128 v63,r6,r31
	ea = (ctx.r6.u32 + r31.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lis r25,-32255
	r25.s64 = -2113863680;
	// addi r5,r9,72
	ctx.r5.s64 = ctx.r9.s64 + 72;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stvewx128 v63,r30,r29
	ea = (r30.u32 + r29.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r28,r27
	ea = (r28.u32 + r27.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-21804(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + -21804);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2244(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831209d8
	sub_831209D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83120df0
	sub_83120DF0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_831162A0"))) PPC_WEAK_FUNC(sub_831162A0);
PPC_FUNC_IMPL(__imp__sub_831162A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x0)));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,4
	r11.s64 = 4;
	// addi r30,r31,264
	r30.s64 = r31.s64 + 264;
	// li r9,8
	ctx.r9.s64 = 8;
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
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r8,12
	ctx.r8.s64 = 12;
	// li r7,16
	ctx.r7.s64 = 16;
	// lvsr v0,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r6,20
	ctx.r6.s64 = 20;
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x15));
	// li r5,24
	ctx.r5.s64 = 24;
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x45));
	// li r29,28
	r29.s64 = 28;
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x51));
	// li r28,32
	r28.s64 = 32;
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0x54));
	// li r27,36
	r27.s64 = 36;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r26,40
	r26.s64 = 40;
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r25,44
	r25.s64 = 44;
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r24,48
	r24.s64 = 48;
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r23,52
	r23.s64 = 52;
	// li r22,56
	r22.s64 = 56;
	// li r21,60
	r21.s64 = 60;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stvewx128 v63,r0,r30
	ea = (r30.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r10,r11
	ea = (ctx.r10.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r10,r27
	ea = (ctx.r10.u32 + r27.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r10,r26
	ea = (ctx.r10.u32 + r26.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r10,r25
	ea = (ctx.r10.u32 + r25.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r24
	ea = (ctx.r10.u32 + r24.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r23
	ea = (ctx.r10.u32 + r23.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r22
	ea = (ctx.r10.u32 + r22.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r21
	ea = (ctx.r10.u32 + r21.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f12,-31000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lfs f13,-24780(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24780);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,312(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 312, temp.u32);
	// stfs f0,304(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 304, temp.u32);
	// stfs f0,316(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 316, temp.u32);
	// lfs f0,13456(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13456);
	f0.f64 = double(temp.f32);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// stfs f12,264(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 264, temp.u32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,284(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 284, temp.u32);
	// bl 0x83120df0
	sub_83120DF0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_831163F0"))) PPC_WEAK_FUNC(sub_831163F0);
PPC_FUNC_IMPL(__imp__sub_831163F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,164(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFF;
	// rlwinm r5,r11,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// lfs f0,-24904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24904);
	f0.f64 = double(temp.f32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lwz r9,64(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831164B0"))) PPC_WEAK_FUNC(sub_831164B0);
PPC_FUNC_IMPL(__imp__sub_831164B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831164e4
	if (!cr6.eq) goto loc_831164E4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831164fc
	goto loc_831164FC;
loc_831164E4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831164FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116510"))) PPC_WEAK_FUNC(sub_83116510);
PPC_FUNC_IMPL(__imp__sub_83116510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83116544
	if (!cr6.eq) goto loc_83116544;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8311655c
	goto loc_8311655C;
loc_83116544:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8311655C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116570"))) PPC_WEAK_FUNC(sub_83116570);
PPC_FUNC_IMPL(__imp__sub_83116570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83116614
	if (cr0.lt) goto loc_83116614;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 208);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83116614:
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

__attribute__((alias("__imp__sub_83116630"))) PPC_WEAK_FUNC(sub_83116630);
PPC_FUNC_IMPL(__imp__sub_83116630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bne cr6,0x83116650
	if (!cr6.eq) goto loc_83116650;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x83116670
	goto loc_83116670;
loc_83116650:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r4,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83116670:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116680"))) PPC_WEAK_FUNC(sub_83116680);
PPC_FUNC_IMPL(__imp__sub_83116680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,188(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r9,192(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r11,196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
	// stw r9,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r9.u32);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831166A8"))) PPC_WEAK_FUNC(sub_831166A8);
PPC_FUNC_IMPL(__imp__sub_831166A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831166B8"))) PPC_WEAK_FUNC(sub_831166B8);
PPC_FUNC_IMPL(__imp__sub_831166B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831166cc
	if (!cr6.eq) goto loc_831166CC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_831166CC:
	// lwz r11,168(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831166E0"))) PPC_WEAK_FUNC(sub_831166E0);
PPC_FUNC_IMPL(__imp__sub_831166E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,164(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x83116718
	if (cr6.eq) goto loc_83116718;
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// stw r4,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r4.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83116718
	if (!cr6.gt) goto loc_83116718;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83116718:
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

__attribute__((alias("__imp__sub_83116730"))) PPC_WEAK_FUNC(sub_83116730);
PPC_FUNC_IMPL(__imp__sub_83116730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,172(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// beq cr6,0x83116768
	if (cr6.eq) goto loc_83116768;
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// stw r4,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r4.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83116768
	if (!cr6.gt) goto loc_83116768;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83116768:
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

__attribute__((alias("__imp__sub_83116780"))) PPC_WEAK_FUNC(sub_83116780);
PPC_FUNC_IMPL(__imp__sub_83116780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x831167b8
	if (cr6.eq) goto loc_831167B8;
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// stw r4,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r4.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x831167b8
	if (!cr6.gt) goto loc_831167B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831167B8:
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

__attribute__((alias("__imp__sub_831167D0"))) PPC_WEAK_FUNC(sub_831167D0);
PPC_FUNC_IMPL(__imp__sub_831167D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,184(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,-1
	r11.s64 = -1;
	// stw r4,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r4.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831167F0"))) PPC_WEAK_FUNC(sub_831167F0);
PPC_FUNC_IMPL(__imp__sub_831167F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831167F8"))) PPC_WEAK_FUNC(sub_831167F8);
PPC_FUNC_IMPL(__imp__sub_831167F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b04
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// li r30,0
	r30.s64 = 0;
	// std r11,-256(r1)
	PPC_STORE_U64(ctx.r1.u32 + -256, r11.u64);
	// lfd f0,-256(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f9,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f10.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// fdivs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// ble cr6,0x83116ad4
	if (!cr6.gt) goto loc_83116AD4;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lis r27,-32255
	r27.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r7,12
	r11.s64 = ctx.r7.s64 + 12;
	// lfs f0,-24904(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -24904);
	f0.f64 = double(temp.f32);
	// subfic r31,r7,-4
	xer.ca = ctx.r7.u32 <= 4294967292;
	r31.s64 = -4 - ctx.r7.s64;
	// lfs f8,-10412(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + -10412);
	ctx.f8.f64 = double(temp.f32);
	// addi r29,r10,-22480
	r29.s64 = ctx.r10.s64 + -22480;
loc_83116864:
	// fmuls f13,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x83116890
	if (!cr6.gt) goto loc_83116890;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + r11.u64;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// bge cr6,0x83116a9c
	if (!cr6.lt) goto loc_83116A9C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_83116890:
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// beq cr6,0x83116a9c
	if (cr6.eq) goto loc_83116A9C;
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fcmpu cr6,f6,f8
	cr6.compare(ctx.f6.f64, ctx.f8.f64);
	// blt cr6,0x83116a9c
	if (cr6.lt) goto loc_83116A9C;
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x831168c0
	if (!cr6.lt) goto loc_831168C0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x83116aa0
	goto loc_83116AA0;
loc_831168C0:
	// lwz r28,0(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f11,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// rlwinm r27,r28,8,24,31
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFF;
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// clrlwi r24,r10,24
	r24.u64 = ctx.r10.u32 & 0xFF;
	// vspltisw128 v63,3
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x3)));
	// std r27,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, r27.u64);
	// rlwinm r26,r10,16,24,31
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// mr r27,r24
	r27.u64 = r24.u64;
	// lfd f11,-176(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// rlwinm r25,r10,24,24,31
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// std r26,-184(r1)
	PPC_STORE_U64(ctx.r1.u32 + -184, r26.u64);
	// rlwinm r22,r28,24,24,31
	r22.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 24) & 0xFF;
	// std r27,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, r27.u64);
	// rlwinm r10,r10,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// lfd f6,-184(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// mr r27,r22
	r27.u64 = r22.u64;
	// std r25,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, r25.u64);
	// std r10,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.r10.u64);
	// lfd f5,-168(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// std r27,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, r27.u64);
	// lfd f4,-152(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// rlwinm r23,r28,16,24,31
	r23.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 16) & 0xFF;
	// lfd f1,-144(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r10,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r10.u64);
	// lfd f3,-136(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// mr r26,r23
	r26.u64 = r23.u64;
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f13,-196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// std r26,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, r26.u64);
	// lfd f2,-192(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// stfs f13,-200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// stfs f13,-204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// stfs f13,-208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// addi r28,r1,-224
	r28.s64 = ctx.r1.s64 + -224;
	// fcfid f31,f31
	f31.f64 = double(f31.s64);
	// addi r27,r1,-240
	r27.s64 = ctx.r1.s64 + -240;
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// frsp f11,f6
	ctx.f11.f64 = double(float(ctx.f6.f64));
	// addi r26,r1,-225
	r26.s64 = ctx.r1.s64 + -225;
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// addi r25,r1,-240
	r25.s64 = ctx.r1.s64 + -240;
	// lvsl v0,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r28,r1,-272
	r28.s64 = ctx.r1.s64 + -272;
	// lvsl v7,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r27,r1,-224
	r27.s64 = ctx.r1.s64 + -224;
	// frsp f6,f5
	ctx.f6.f64 = double(float(ctx.f5.f64));
	// lvsr v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// frsp f5,f4
	ctx.f5.f64 = double(float(ctx.f4.f64));
	// addi r10,r1,-209
	ctx.r10.s64 = ctx.r1.s64 + -209;
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// frsp f4,f3
	ctx.f4.f64 = double(float(ctx.f3.f64));
	// frsp f31,f31
	f31.f64 = double(float(f31.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,-212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f13,-240(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// fmuls f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * f0.f64));
	// stfs f13,-236(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -236, temp.u32);
	// fmuls f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * f0.f64));
	// stfs f13,-232(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,-220(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * f0.f64));
	// stfs f12,-224(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fmuls f3,f31,f0
	ctx.f3.f64 = double(float(f31.f64 * f0.f64));
	// stfs f3,-216(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * f0.f64));
	// stfs f13,-228(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -228, temp.u32);
	// vcsxwfp128 v13,v63,0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v63.u32)));
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r27
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,-208
	r24.s64 = ctx.r1.s64 + -208;
	// vperm128 v0,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r26
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r25
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// vperm128 v63,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// li r27,4
	r27.s64 = 4;
	// addi r26,r1,-272
	r26.s64 = ctx.r1.s64 + -272;
	// lvx128 v12,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r25,8
	r25.s64 = 8;
	// addi r24,r1,-272
	r24.s64 = ctx.r1.s64 + -272;
	// vsubfp128 v11,v63,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// li r23,12
	r23.s64 = 12;
	// addi r22,r1,-257
	r22.s64 = ctx.r1.s64 + -257;
	// addi r21,r1,-272
	r21.s64 = ctx.r1.s64 + -272;
	// addi r20,r1,-272
	r20.s64 = ctx.r1.s64 + -272;
	// addi r19,r1,-256
	r19.s64 = ctx.r1.s64 + -256;
	// lvsl v7,r0,r20
	temp.u32 = r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmaddfp v0,v11,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v6
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// stvewx128 v63,r0,r28
	ea = (r28.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r10,r27
	ea = (ctx.r10.u32 + r27.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r26,r25
	ea = (r26.u32 + r25.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r24,r23
	ea = (r24.u32 + r23.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r22
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r21
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v61,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vnmsubfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v63,v0,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vpkd3d128 v63,v0,0,1,3
	vTemp.u32[0] = 0x404000FF;
	vTemp.f32[0] = ctx.v0.f32[0] < 3.0f ? 3.0f : (ctx.v0.f32[0] > vTemp.f32[0] ? vTemp.f32[0] : ctx.v0.f32[0]);
	temp.u32 = uint32_t(vTemp.u8[0]) << 24;
	vTemp.u32[1] = 0x404000FF;
	vTemp.f32[1] = ctx.v0.f32[1] < 3.0f ? 3.0f : (ctx.v0.f32[1] > vTemp.f32[1] ? vTemp.f32[1] : ctx.v0.f32[1]);
	temp.u32 |= uint32_t(vTemp.u8[4]) << 0;
	vTemp.u32[2] = 0x404000FF;
	vTemp.f32[2] = ctx.v0.f32[2] < 3.0f ? 3.0f : (ctx.v0.f32[2] > vTemp.f32[2] ? vTemp.f32[2] : ctx.v0.f32[2]);
	temp.u32 |= uint32_t(vTemp.u8[8]) << 8;
	vTemp.u32[3] = 0x404000FF;
	vTemp.f32[3] = ctx.v0.f32[3] < 3.0f ? 3.0f : (ctx.v0.f32[3] > vTemp.f32[3] ? vTemp.f32[3] : ctx.v0.f32[3]);
	temp.u32 |= uint32_t(vTemp.u8[12]) << 16;
	v63.u32[3] = temp.u32;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// stvewx128 v63,r0,r19
	ea = (r19.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r10,-256(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// b 0x83116aa0
	goto loc_83116AA0;
loc_83116A9C:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4);
loc_83116AA0:
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x83116ac0
	if (!cr6.eq) goto loc_83116AC0;
	// rlwinm r28,r10,16,24,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// rlwinm r27,r10,16,8,15
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF0000;
	// rlwinm r10,r10,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// or r28,r28,r27
	r28.u64 = r28.u64 | r27.u64;
	// rlwinm r10,r10,0,16,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// or r10,r28,r10
	ctx.r10.u64 = r28.u64 | ctx.r10.u64;
loc_83116AC0:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fadds f10,f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// bne 0x83116864
	if (!cr0.eq) goto loc_83116864;
loc_83116AD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_83116AE0"))) PPC_WEAK_FUNC(sub_83116AE0);
PPC_FUNC_IMPL(__imp__sub_83116AE0) {
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
	// bl 0x83115900
	sub_83115900(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-15248
	r11.s64 = r11.s64 + -15248;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(r31.u32 + 344, r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// stw r30,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r30.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,396(r31)
	PPC_STORE_U32(r31.u32 + 396, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
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

__attribute__((alias("__imp__sub_83116B68"))) PPC_WEAK_FUNC(sub_83116B68);
PPC_FUNC_IMPL(__imp__sub_83116B68) {
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
	// li r28,10
	r28.s64 = 10;
	// addi r29,r31,352
	r29.s64 = r31.s64 + 352;
	// li r30,0
	r30.s64 = 0;
loc_83116B84:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83116b94
	if (cr6.eq) goto loc_83116B94;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
loc_83116B94:
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x83116b84
	if (!cr0.eq) goto loc_83116B84;
	// lwz r3,340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// stw r30,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83116bb8
	if (cr6.eq) goto loc_83116BB8;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
loc_83116BB8:
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// stw r30,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83116bcc
	if (cr6.eq) goto loc_83116BCC;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
loc_83116BCC:
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// stw r30,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83116be0
	if (cr6.eq) goto loc_83116BE0;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
loc_83116BE0:
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// stw r30,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83116bf4
	if (cr6.eq) goto loc_83116BF4;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
loc_83116BF4:
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// stw r30,344(r31)
	PPC_STORE_U32(r31.u32 + 344, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83116c14
	if (cr6.eq) goto loc_83116C14;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83116C14:
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83116C28"))) PPC_WEAK_FUNC(sub_83116C28);
PPC_FUNC_IMPL(__imp__sub_83116C28) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r11,r11,-15248
	r11.s64 = r11.s64 + -15248;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x83116b68
	sub_83116B68(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r11,r11,-15496
	r11.s64 = r11.s64 + -15496;
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

__attribute__((alias("__imp__sub_83116C70"))) PPC_WEAK_FUNC(sub_83116C70);
PPC_FUNC_IMPL(__imp__sub_83116C70) {
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
	// bl 0x83115d30
	sub_83115D30(ctx, base);
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,32(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83116d64
	if (!cr6.eq) goto loc_83116D64;
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x83116d64
	if (cr6.lt) goto loc_83116D64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83116d64
	if (!cr6.lt) goto loc_83116D64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_83116D64:
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

__attribute__((alias("__imp__sub_83116D80"))) PPC_WEAK_FUNC(sub_83116D80);
PPC_FUNC_IMPL(__imp__sub_83116D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r11,328(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// andi. r5,r11,37
	ctx.r5.u64 = r11.u64 & 37;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,304
	ctx.r4.s64 = 304;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83116E48"))) PPC_WEAK_FUNC(sub_83116E48);
PPC_FUNC_IMPL(__imp__sub_83116E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r6,r11,28,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// lwz r11,52(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// lwz r11,52(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83116F20"))) PPC_WEAK_FUNC(sub_83116F20);
PPC_FUNC_IMPL(__imp__sub_83116F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r30,6
	r30.s64 = 6;
	// li r31,7
	r31.s64 = 7;
	// lwz r11,172(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 172);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83116f98
	if (cr6.eq) goto loc_83116F98;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83116f90
	if (cr6.eq) goto loc_83116F90;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x83116f80
	if (cr6.eq) goto loc_83116F80;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x83116f78
	if (cr6.eq) goto loc_83116F78;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x83116f88
	if (cr6.eq) goto loc_83116F88;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x83116fe8
	if (!cr6.eq) goto loc_83116FE8;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x83116f88
	goto loc_83116F88;
loc_83116F78:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x83116f84
	goto loc_83116F84;
loc_83116F80:
	// li r5,2
	ctx.r5.s64 = 2;
loc_83116F84:
	// li r30,1
	r30.s64 = 1;
loc_83116F88:
	// li r31,1
	r31.s64 = 1;
	// b 0x83116f98
	goto loc_83116F98;
loc_83116F90:
	// li r30,0
	r30.s64 = 0;
	// li r31,4
	r31.s64 = 4;
loc_83116F98:
	// lwz r3,332(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 332);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,332(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 332);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,332(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 332);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,76
	ctx.r4.s64 = 76;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83116FE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83116FF0"))) PPC_WEAK_FUNC(sub_83116FF0);
PPC_FUNC_IMPL(__imp__sub_83116FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r5,15
	ctx.r5.s64 = 15;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83117030
	if (cr6.eq) goto loc_83117030;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8311700c
	if (!cr0.eq) goto loc_8311700C;
	// li r5,7
	ctx.r5.s64 = 7;
loc_8311700C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83117018
	if (!cr0.eq) goto loc_83117018;
	// rlwinm r5,r5,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
loc_83117018:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83117024
	if (!cr0.eq) goto loc_83117024;
	// rlwinm r5,r5,0,31,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_83117024:
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83117030
	if (!cr0.eq) goto loc_83117030;
	// rlwinm r5,r5,0,30,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_83117030:
	// lwz r3,332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// li r4,212
	ctx.r4.s64 = 212;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83117048"))) PPC_WEAK_FUNC(sub_83117048);
PPC_FUNC_IMPL(__imp__sub_83117048) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x83117070
	if (!cr6.eq) goto loc_83117070;
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// b 0x83117100
	goto loc_83117100;
loc_83117070:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// beq cr6,0x831170a4
	if (cr6.eq) goto loc_831170A4;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// beq cr6,0x8311708c
	if (cr6.eq) goto loc_8311708C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x83117104
	goto loc_83117104;
loc_8311708C:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83117100
	if (cr6.eq) goto loc_83117100;
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// lwz r30,348(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// b 0x831170b8
	goto loc_831170B8;
loc_831170A4:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83117100
	if (cr6.eq) goto loc_83117100;
	// lwz r4,336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// lwz r30,340(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 340);
loc_831170B8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83117100
	if (cr6.eq) goto loc_83117100;
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83117104
	if (cr0.lt) goto loc_83117104;
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83117104
	if (cr0.lt) goto loc_83117104;
	// stw r29,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r29.u32);
loc_83117100:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83117104:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83117110"))) PPC_WEAK_FUNC(sub_83117110);
PPC_FUNC_IMPL(__imp__sub_83117110) {
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
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// beq cr6,0x83117204
	if (cr6.eq) goto loc_83117204;
	// stw r4,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r4.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83117204
	if (cr6.lt) goto loc_83117204;
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831171cc
	if (cr6.eq) goto loc_831171CC;
	// addi r11,r4,5
	r11.s64 = ctx.r4.s64 + 5;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// blt cr6,0x83117164
	if (cr6.lt) goto loc_83117164;
loc_83117158:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x83117208
	goto loc_83117208;
loc_83117164:
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// addi r11,r4,93
	r11.s64 = ctx.r4.s64 + 93;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r11,64(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83117194
	if (!cr0.lt) goto loc_83117194;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83117208
	goto loc_83117208;
loc_83117194:
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r11,r11,-15696
	r11.s64 = r11.s64 + -15696;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r5,r11,-64
	ctx.r5.s64 = r11.s64 + -64;
	// lwz r11,40(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x831171f8
	goto loc_831171F8;
loc_831171CC:
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// bge cr6,0x83117158
	if (!cr6.lt) goto loc_83117158;
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// addi r11,r4,88
	r11.s64 = ctx.r4.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r11,64(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_831171F8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// blt cr6,0x83117208
	if (cr6.lt) goto loc_83117208;
loc_83117204:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83117208:
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

