#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83184A78"))) PPC_WEAK_FUNC(sub_83184A78);
PPC_FUNC_IMPL(__imp__sub_83184A78) {
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
	// lwz r11,2384(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	// lwz r8,4104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4104);
	// lwz r9,4108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83184aac
	if (!cr6.eq) goto loc_83184AAC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83184AAC:
	// cmpwi cr6,r8,-5
	cr6.compare<int32_t>(ctx.r8.s32, -5, xer);
	// bne cr6,0x83184ac8
	if (!cr6.eq) goto loc_83184AC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83184AC8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x831841e0
	sub_831841E0(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mulli r11,r9,2000
	r11.s64 = ctx.r9.s64 * 2000;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r10,r10,59940
	ctx.r10.u64 = ctx.r10.u64 | 59940;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// add r3,r11,r8
	ctx.r3.u64 = r11.u64 + ctx.r8.u64;
	// bl 0x83198398
	sub_83198398(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184B18"))) PPC_WEAK_FUNC(sub_83184B18);
PPC_FUNC_IMPL(__imp__sub_83184B18) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4152, ctx.r4.u32);
	// stw r5,4156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4156, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184B28"))) PPC_WEAK_FUNC(sub_83184B28);
PPC_FUNC_IMPL(__imp__sub_83184B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4152);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,4156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4156);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184B40"))) PPC_WEAK_FUNC(sub_83184B40);
PPC_FUNC_IMPL(__imp__sub_83184B40) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83184b7c
	if (cr6.eq) goto loc_83184B7C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,299
	ctx.r4.u64 = ctx.r4.u64 | 299;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83184B7C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,4964(r31)
	PPC_STORE_U32(r31.u32 + 4964, r29.u32);
	// stw r30,4968(r31)
	PPC_STORE_U32(r31.u32 + 4968, r30.u32);
	// beq cr6,0x83184b9c
	if (cr6.eq) goto loc_83184B9C;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,4976(r31)
	PPC_STORE_U32(r31.u32 + 4976, r11.u32);
loc_83184B9C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83184BB0"))) PPC_WEAK_FUNC(sub_83184BB0);
PPC_FUNC_IMPL(__imp__sub_83184BB0) {
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
	// lwz r11,4968(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4968);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83184c30
	if (cr6.eq) goto loc_83184C30;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// lwz r11,4976(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4976);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x83184bf4
	if (!cr6.eq) goto loc_83184BF4;
	// stw r30,4976(r31)
	PPC_STORE_U32(r31.u32 + 4976, r30.u32);
	// stw r30,4972(r31)
	PPC_STORE_U32(r31.u32 + 4972, r30.u32);
loc_83184BF4:
	// lwz r9,4976(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4976);
	// lwz r10,4964(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4964);
	// lwz r11,4972(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4972);
	// lwz r8,4968(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4968);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r11,r8
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83184c20
	if (cr6.gt) goto loc_83184C20;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r30,1
	r30.s64 = 1;
	// stw r11,4972(r31)
	PPC_STORE_U32(r31.u32 + 4972, r11.u32);
loc_83184C20:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83184c34
	goto loc_83184C34;
loc_83184C30:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83184C34:
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

__attribute__((alias("__imp__sub_83184C50"))) PPC_WEAK_FUNC(sub_83184C50);
PPC_FUNC_IMPL(__imp__sub_83184C50) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4968(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4968);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83184cac
	if (cr6.eq) goto loc_83184CAC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// lwz r11,4976(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4976);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x83184ca4
	if (cr6.eq) goto loc_83184CA4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4968);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// stw r11,4976(r31)
	PPC_STORE_U32(r31.u32 + 4976, r11.u32);
	// blt cr6,0x83184ca4
	if (cr6.lt) goto loc_83184CA4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4976(r31)
	PPC_STORE_U32(r31.u32 + 4976, r11.u32);
	// stw r11,4972(r31)
	PPC_STORE_U32(r31.u32 + 4972, r11.u32);
loc_83184CA4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
loc_83184CAC:
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

__attribute__((alias("__imp__sub_83184CC0"))) PPC_WEAK_FUNC(sub_83184CC0);
PPC_FUNC_IMPL(__imp__sub_83184CC0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lwz r11,440(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 440);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfd f13,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,-16(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfs f13,5568(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5568);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x83184d34
	if (!cr6.lt) goto loc_83184D34;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
	// lfs f0,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r4
	PPC_STORE_U32(ctx.r4.u32, f0.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83184D34:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f13,-23212(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -23212);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x83184d58
	if (!cr6.lt) goto loc_83184D58;
	// li r11,2
	r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83184D58:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,5572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5572);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x83184d78
	if (!cr6.lt) goto loc_83184D78;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
loc_83184D78:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f13,-30364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30364);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x83184d9c
	if (!cr6.lt) goto loc_83184D9C;
	// li r11,5
	r11.s64 = 5;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83184D9C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f13,16276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16276);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x83184dc0
	if (!cr6.lt) goto loc_83184DC0;
	// li r11,1
	r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83184DC0:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lfs f13,-15820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15820);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x83184de4
	if (!cr6.lt) goto loc_83184DE4;
	// li r11,5
	r11.s64 = 5;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83184DE4:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lfs f13,-15824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15824);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x83184e08
	if (!cr6.lt) goto loc_83184E08;
	// li r11,2
	r11.s64 = 2;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83184E08:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,4948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4948);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x83184e2c
	if (!cr6.lt) goto loc_83184E2C;
	// li r11,1
	r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83184E2C:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f13,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r5
	PPC_STORE_U32(ctx.r5.u32, f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184E50"))) PPC_WEAK_FUNC(sub_83184E50);
PPC_FUNC_IMPL(__imp__sub_83184E50) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4980, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184E58"))) PPC_WEAK_FUNC(sub_83184E58);
PPC_FUNC_IMPL(__imp__sub_83184E58) {
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
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// lwz r11,4980(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4980);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x83184e90
	if (!cr6.eq) goto loc_83184E90;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x83184ea8
	goto loc_83184EA8;
loc_83184E90:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83184ea4
	if (cr6.eq) goto loc_83184EA4;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bge cr6,0x83184ea4
	if (!cr6.lt) goto loc_83184EA4;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_83184EA4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_83184EA8:
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

__attribute__((alias("__imp__sub_83184EC0"))) PPC_WEAK_FUNC(sub_83184EC0);
PPC_FUNC_IMPL(__imp__sub_83184EC0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x83183e78
	sub_83183E78(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r4,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r4.u32);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184F00"))) PPC_WEAK_FUNC(sub_83184F00);
PPC_FUNC_IMPL(__imp__sub_83184F00) {
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
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r31,r30,3464
	r31.s64 = r30.s64 + 3464;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// lwz r10,688(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 688);
	// lwz r11,448(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 448);
	// lwz r9,692(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 692);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// divw r29,r11,r9
	r29.s32 = r11.s32 / ctx.r9.s32;
	// bl 0x83183f70
	sub_83183F70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83184f50
	if (cr6.eq) goto loc_83184F50;
	// lwz r11,684(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 684);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,684(r31)
	PPC_STORE_U32(r31.u32 + 684, r11.u32);
	// bl 0x83184c50
	sub_83184C50(ctx, base);
loc_83184F50:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83183fa0
	sub_83183FA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83184f70
	if (cr6.eq) goto loc_83184F70;
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(r31.u32 + 724, r11.u32);
loc_83184F70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83184F78"))) PPC_WEAK_FUNC(sub_83184F78);
PPC_FUNC_IMPL(__imp__sub_83184F78) {
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
	// bl 0x83184080
	sub_83184080(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83184fc0
	if (cr6.eq) goto loc_83184FC0;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,546
	ctx.r4.u64 = ctx.r4.u64 | 546;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83184FC0:
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

__attribute__((alias("__imp__sub_83184FD8"))) PPC_WEAK_FUNC(sub_83184FD8);
PPC_FUNC_IMPL(__imp__sub_83184FD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x831841e0
	sub_831841E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83184FE0"))) PPC_WEAK_FUNC(sub_83184FE0);
PPC_FUNC_IMPL(__imp__sub_83184FE0) {
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
	// bl 0x83184200
	sub_83184200(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8318500c
	if (cr6.eq) goto loc_8318500C;
	// li r11,-2
	r11.s64 = -2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_8318500C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185020"))) PPC_WEAK_FUNC(sub_83185020);
PPC_FUNC_IMPL(__imp__sub_83185020) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x83184200
	sub_83184200(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83185058
	if (cr6.eq) goto loc_83185058;
	// lwz r11,4148(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4148);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// lwz r11,444(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 444);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_83185058:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185068"))) PPC_WEAK_FUNC(sub_83185068);
PPC_FUNC_IMPL(__imp__sub_83185068) {
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
	// bl 0x83184200
	sub_83184200(ctx, base);
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

__attribute__((alias("__imp__sub_83185090"))) PPC_WEAK_FUNC(sub_83185090);
PPC_FUNC_IMPL(__imp__sub_83185090) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x83184200
	sub_83184200(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831850bc
	if (!cr6.eq) goto loc_831850BC;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_831850BC:
	// lwz r11,4196(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831850ec
	if (!cr6.eq) goto loc_831850EC;
	// li r11,-2
	r11.s64 = -2;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_831850EC:
	// lwz r3,4200(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4200);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185108"))) PPC_WEAK_FUNC(sub_83185108);
PPC_FUNC_IMPL(__imp__sub_83185108) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x83184200
	sub_83184200(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83185134
	if (!cr6.eq) goto loc_83185134;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83185134:
	// addi r31,r30,3464
	r31.s64 = r30.s64 + 3464;
	// lwz r11,740(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 740);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83185160
	if (!cr6.eq) goto loc_83185160;
	// li r11,-2
	r11.s64 = -2;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83185160:
	// lwz r3,760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 760);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83183f70
	sub_83183F70(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831851c0
	if (cr6.eq) goto loc_831851C0;
	// lwz r11,744(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 744);
	// cmpwi cr6,r11,-5
	cr6.compare<int32_t>(r11.s32, -5, xer);
	// beq cr6,0x831851c0
	if (cr6.eq) goto loc_831851C0;
	// lwz r11,744(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 744);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x831851b4
	if (!cr6.lt) goto loc_831851B4;
	// lwz r10,756(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 756);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_831851B4:
	// lwz r10,748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 748);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,748(r31)
	PPC_STORE_U32(r31.u32 + 748, r11.u32);
loc_831851C0:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r9,744(r31)
	PPC_STORE_U32(r31.u32 + 744, ctx.r9.u32);
	// stw r11,752(r31)
	PPC_STORE_U32(r31.u32 + 752, r11.u32);
	// lwz r11,748(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 748);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,752(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 752);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831851E8"))) PPC_WEAK_FUNC(sub_831851E8);
PPC_FUNC_IMPL(__imp__sub_831851E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x83185230
	if (!cr6.eq) goto loc_83185230;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x831847e0
	sub_831847E0(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83184718
	sub_83184718(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83184788
	sub_83184788(ctx, base);
loc_83185230:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83185238"))) PPC_WEAK_FUNC(sub_83185238);
PPC_FUNC_IMPL(__imp__sub_83185238) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x831841e0
	sub_831841E0(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bne cr6,0x831852a4
	if (!cr6.eq) goto loc_831852A4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// bne cr6,0x83185288
	if (!cr6.eq) goto loc_83185288;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83185288:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x831848a0
	sub_831848A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_831852A4:
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r8,2632(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2632);
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// lwz r11,440(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 440);
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// beq cr6,0x831852f0
	if (cr6.eq) goto loc_831852F0;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83184930
	sub_83184930(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_831852F0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83198398
	sub_83198398(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83185318"))) PPC_WEAK_FUNC(sub_83185318);
PPC_FUNC_IMPL(__imp__sub_83185318) {
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
	// lis r11,-31976
	r11.s64 = -2095579136;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,20448
	ctx.r4.s64 = r11.s64 + 20448;
	// bl 0x83184368
	sub_83184368(ctx, base);
	// lis r11,-31976
	r11.s64 = -2095579136;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,20512
	ctx.r4.s64 = r11.s64 + 20512;
	// bl 0x83184368
	sub_83184368(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83184368
	sub_83184368(ctx, base);
	// lis r11,-31976
	r11.s64 = -2095579136;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,20584
	ctx.r4.s64 = r11.s64 + 20584;
	// bl 0x83184368
	sub_83184368(ctx, base);
	// lis r11,-31976
	r11.s64 = -2095579136;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,20624
	ctx.r4.s64 = r11.s64 + 20624;
	// bl 0x83184368
	sub_83184368(ctx, base);
	// lis r11,-31976
	r11.s64 = -2095579136;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,20744
	ctx.r4.s64 = r11.s64 + 20744;
	// bl 0x83184368
	sub_83184368(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r9,28
	ctx.r3.s64 = ctx.r9.s64 + 28;
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// bl 0x83183e78
	sub_83183E78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r9,192
	ctx.r3.s64 = ctx.r9.s64 + 192;
	// bl 0x83184ec0
	sub_83184EC0(ctx, base);
	// lis r11,32767
	r11.s64 = 2147418112;
	// addi r3,r9,60
	ctx.r3.s64 = ctx.r9.s64 + 60;
	// ori r7,r11,65535
	ctx.r7.u64 = r11.u64 | 65535;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x83184ec0
	sub_83184EC0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r9,104
	ctx.r3.s64 = ctx.r9.s64 + 104;
	// bl 0x83184ec0
	sub_83184EC0(ctx, base);
	// addi r3,r9,148
	ctx.r3.s64 = ctx.r9.s64 + 148;
	// bl 0x83184ec0
	sub_83184EC0(ctx, base);
	// addi r3,r9,236
	ctx.r3.s64 = ctx.r9.s64 + 236;
	// bl 0x83184ec0
	sub_83184EC0(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r9,280
	ctx.r3.s64 = ctx.r9.s64 + 280;
	// bl 0x83184ec0
	sub_83184EC0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r10,r9,364
	ctx.r10.s64 = ctx.r9.s64 + 364;
	// stw r8,324(r9)
	PPC_STORE_U32(ctx.r9.u32 + 324, ctx.r8.u32);
	// stw r8,328(r9)
	PPC_STORE_U32(ctx.r9.u32 + 328, ctx.r8.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r8,352(r9)
	PPC_STORE_U32(ctx.r9.u32 + 352, ctx.r8.u32);
	// stw r8,356(r9)
	PPC_STORE_U32(ctx.r9.u32 + 356, ctx.r8.u32);
	// std r11,336(r9)
	PPC_STORE_U64(ctx.r9.u32 + 336, r11.u64);
	// std r11,344(r9)
	PPC_STORE_U64(ctx.r9.u32 + 344, r11.u64);
	// stw r8,360(r9)
	PPC_STORE_U32(ctx.r9.u32 + 360, ctx.r8.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_83185408:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83185408
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83185408;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,496(r9)
	PPC_STORE_U32(ctx.r9.u32 + 496, ctx.r8.u32);
	// addi r6,r9,512
	ctx.r6.s64 = ctx.r9.s64 + 512;
	// stw r8,500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 500, ctx.r8.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r8,504(r9)
	PPC_STORE_U32(ctx.r9.u32 + 504, ctx.r8.u32);
	// stw r8,508(r9)
	PPC_STORE_U32(ctx.r9.u32 + 508, ctx.r8.u32);
	// stw r10,492(r9)
	PPC_STORE_U32(ctx.r9.u32 + 492, ctx.r10.u32);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_83185438:
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x83185438
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83185438;
	// li r6,-5
	ctx.r6.s64 = -5;
	// stw r8,684(r9)
	PPC_STORE_U32(ctx.r9.u32 + 684, ctx.r8.u32);
	// stw r11,724(r9)
	PPC_STORE_U32(ctx.r9.u32 + 724, r11.u32);
	// stw r7,668(r9)
	PPC_STORE_U32(ctx.r9.u32 + 668, ctx.r7.u32);
	// stw r7,676(r9)
	PPC_STORE_U32(ctx.r9.u32 + 676, ctx.r7.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// lwz r5,684(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 684);
	// stw r6,744(r9)
	PPC_STORE_U32(ctx.r9.u32 + 744, ctx.r6.u32);
	// stw r8,748(r9)
	PPC_STORE_U32(ctx.r9.u32 + 748, ctx.r8.u32);
	// stw r10,752(r9)
	PPC_STORE_U32(ctx.r9.u32 + 752, ctx.r10.u32);
	// stw r6,640(r9)
	PPC_STORE_U32(ctx.r9.u32 + 640, ctx.r6.u32);
	// stw r10,644(r9)
	PPC_STORE_U32(ctx.r9.u32 + 644, ctx.r10.u32);
	// stw r6,648(r9)
	PPC_STORE_U32(ctx.r9.u32 + 648, ctx.r6.u32);
	// stw r10,652(r9)
	PPC_STORE_U32(ctx.r9.u32 + 652, ctx.r10.u32);
	// stw r11,656(r9)
	PPC_STORE_U32(ctx.r9.u32 + 656, r11.u32);
	// stw r10,660(r9)
	PPC_STORE_U32(ctx.r9.u32 + 660, ctx.r10.u32);
	// stw r6,664(r9)
	PPC_STORE_U32(ctx.r9.u32 + 664, ctx.r6.u32);
	// stw r8,672(r9)
	PPC_STORE_U32(ctx.r9.u32 + 672, ctx.r8.u32);
	// stw r8,680(r9)
	PPC_STORE_U32(ctx.r9.u32 + 680, ctx.r8.u32);
	// stw r10,688(r9)
	PPC_STORE_U32(ctx.r9.u32 + 688, ctx.r10.u32);
	// stw r10,692(r9)
	PPC_STORE_U32(ctx.r9.u32 + 692, ctx.r10.u32);
	// stw r8,696(r9)
	PPC_STORE_U32(ctx.r9.u32 + 696, ctx.r8.u32);
	// stw r8,700(r9)
	PPC_STORE_U32(ctx.r9.u32 + 700, ctx.r8.u32);
	// stw r10,704(r9)
	PPC_STORE_U32(ctx.r9.u32 + 704, ctx.r10.u32);
	// stw r7,708(r9)
	PPC_STORE_U32(ctx.r9.u32 + 708, ctx.r7.u32);
	// stw r11,712(r9)
	PPC_STORE_U32(ctx.r9.u32 + 712, r11.u32);
	// stw r8,716(r9)
	PPC_STORE_U32(ctx.r9.u32 + 716, ctx.r8.u32);
	// stw r11,720(r9)
	PPC_STORE_U32(ctx.r9.u32 + 720, r11.u32);
	// stw r5,728(r9)
	PPC_STORE_U32(ctx.r9.u32 + 728, ctx.r5.u32);
	// stw r8,740(r9)
	PPC_STORE_U32(ctx.r9.u32 + 740, ctx.r8.u32);
	// stw r11,756(r9)
	PPC_STORE_U32(ctx.r9.u32 + 756, r11.u32);
	// stw r8,760(r9)
	PPC_STORE_U32(ctx.r9.u32 + 760, ctx.r8.u32);
	// stw r8,1488(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1488, ctx.r8.u32);
	// stw r8,1492(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1492, ctx.r8.u32);
	// stw r8,1496(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1496, ctx.r8.u32);
	// stw r8,1500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1500, ctx.r8.u32);
	// stw r8,1504(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1504, ctx.r8.u32);
	// stw r8,1508(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1508, ctx.r8.u32);
	// stw r8,1512(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1512, ctx.r8.u32);
	// stw r11,1516(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1516, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831854F8"))) PPC_WEAK_FUNC(sub_831854F8);
PPC_FUNC_IMPL(__imp__sub_831854F8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r9,r3,3464
	ctx.r9.s64 = ctx.r3.s64 + 3464;
	// bl 0x83184fd8
	sub_83184FD8(ctx, base);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x83185568
	if (cr6.eq) goto loc_83185568;
	// lwz r11,328(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 328);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bne cr6,0x83185544
	if (!cr6.eq) goto loc_83185544;
	// lwz r11,324(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 324);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x83185564
	goto loc_83185564;
loc_83185544:
	// lwz r11,280(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83185568
	if (cr6.eq) goto loc_83185568;
	// lwz r5,320(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 320);
	// lwz r3,316(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 316);
	// bl 0x831941d0
	sub_831941D0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
loc_83185564:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_83185568:
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

__attribute__((alias("__imp__sub_83185588"))) PPC_WEAK_FUNC(sub_83185588);
PPC_FUNC_IMPL(__imp__sub_83185588) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// addi r11,r3,866
	r11.s64 = ctx.r3.s64 + 866;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831855d0
	if (!cr6.eq) goto loc_831855D0;
	// lis r11,-31976
	r11.s64 = -2095579136;
	// addi r11,r11,20448
	r11.s64 = r11.s64 + 20448;
loc_831855D0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83185600"))) PPC_WEAK_FUNC(sub_83185600);
PPC_FUNC_IMPL(__imp__sub_83185600) {
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r30,3464
	r31.s64 = r30.s64 + 3464;
	// bl 0x83185588
	sub_83185588(ctx, base);
	// lwz r11,656(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 656);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83185648
	if (!cr6.eq) goto loc_83185648;
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x83185670
	if (cr6.eq) goto loc_83185670;
loc_83185648:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83183fc8
	sub_83183FC8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,656(r31)
	PPC_STORE_U32(r31.u32 + 656, r11.u32);
	// stw r10,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r10.u32);
	// stw r9,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r9.u32);
	// b 0x83185678
	goto loc_83185678;
loc_83185670:
	// li r11,1
	r11.s64 = 1;
	// stw r11,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r11.u32);
loc_83185678:
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

__attribute__((alias("__imp__sub_83185690"))) PPC_WEAK_FUNC(sub_83185690);
PPC_FUNC_IMPL(__imp__sub_83185690) {
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
	// lwz r11,2628(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2628);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831856bc
	if (cr6.eq) goto loc_831856BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_831856BC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,2748(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2748);
	// bl 0x83185238
	sub_83185238(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831856E0"))) PPC_WEAK_FUNC(sub_831856E0);
PPC_FUNC_IMPL(__imp__sub_831856E0) {
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
	// bl 0x83184f00
	sub_83184F00(ctx, base);
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83185714
	if (!cr6.eq) goto loc_83185714;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83185600
	sub_83185600(ctx, base);
loc_83185714:
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

__attribute__((alias("__imp__sub_83185728"))) PPC_WEAK_FUNC(sub_83185728);
PPC_FUNC_IMPL(__imp__sub_83185728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83185764
	if (cr6.eq) goto loc_83185764;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,289
	ctx.r4.u64 = ctx.r4.u64 | 289;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83185764:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831854f8
	sub_831854F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83185780"))) PPC_WEAK_FUNC(sub_83185780);
PPC_FUNC_IMPL(__imp__sub_83185780) {
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831857c4
	if (cr6.eq) goto loc_831857C4;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,298
	ctx.r4.u64 = ctx.r4.u64 | 298;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_831857C4:
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831857e0
	if (cr6.eq) goto loc_831857E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83185600
	sub_83185600(ctx, base);
loc_831857E0:
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

__attribute__((alias("__imp__sub_831857F8"))) PPC_WEAK_FUNC(sub_831857F8);
PPC_FUNC_IMPL(__imp__sub_831857F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83185808
	if (!cr6.eq) goto loc_83185808;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83185808:
	// lwz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// b 0x83185690
	sub_83185690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83185818"))) PPC_WEAK_FUNC(sub_83185818);
PPC_FUNC_IMPL(__imp__sub_83185818) {
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
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r30,r11,-21984
	r30.s64 = r11.s64 + -21984;
	// addi r31,r30,524
	r31.s64 = r30.s64 + 524;
	// lwz r11,432(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 432);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,432(r30)
	PPC_STORE_U32(r30.u32 + 432, r11.u32);
loc_8318583C:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83185858
	if (cr6.eq) goto loc_83185858;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831856e0
	sub_831856E0(ctx, base);
loc_83185858:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r30,556
	r11.s64 = r30.s64 + 556;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8318583c
	if (cr6.lt) goto loc_8318583C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83185870"))) PPC_WEAK_FUNC(sub_83185870);
PPC_FUNC_IMPL(__imp__sub_83185870) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831858cc
	if (!cr6.eq) goto loc_831858CC;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r11,-21984
	r30.s64 = r11.s64 + -21984;
	// addi r31,r30,524
	r31.s64 = r30.s64 + 524;
loc_83185894:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831858b0
	if (cr6.eq) goto loc_831858B0;
	// bl 0x83185780
	sub_83185780(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831858b0
	if (cr6.eq) goto loc_831858B0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_831858B0:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r30,556
	r11.s64 = r30.s64 + 556;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x83185894
	if (cr6.lt) goto loc_83185894;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831858CC:
	// bl 0x83185780
	sub_83185780(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831858D8"))) PPC_WEAK_FUNC(sub_831858D8);
PPC_FUNC_IMPL(__imp__sub_831858D8) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r31,r11,-20784
	r31.s64 = r11.s64 + -20784;
	// addi r3,r31,-292
	ctx.r3.s64 = r31.s64 + -292;
	// bl 0x83137798
	sub_83137798(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,-260(r31)
	PPC_STORE_U32(r31.u32 + -260, r11.u32);
	// stw r11,-296(r31)
	PPC_STORE_U32(r31.u32 + -296, r11.u32);
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

__attribute__((alias("__imp__sub_83185928"))) PPC_WEAK_FUNC(sub_83185928);
PPC_FUNC_IMPL(__imp__sub_83185928) {
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
	// lis r31,-31941
	r31.s64 = -2093285376;
	// lwz r3,-20776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -20776);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83185954
	if (cr6.eq) goto loc_83185954;
	// bl 0x83137878
	sub_83137878(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-20776(r31)
	PPC_STORE_U32(r31.u32 + -20776, r11.u32);
loc_83185954:
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

__attribute__((alias("__imp__sub_83185968"))) PPC_WEAK_FUNC(sub_83185968);
PPC_FUNC_IMPL(__imp__sub_83185968) {
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
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8312f430
	sub_8312F430(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r31,-21044(r11)
	PPC_STORE_U32(r11.u32 + -21044, r31.u32);
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

__attribute__((alias("__imp__sub_831859B0"))) PPC_WEAK_FUNC(sub_831859B0);
PPC_FUNC_IMPL(__imp__sub_831859B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r4,-21044(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -21044);
	// b 0x8312f380
	sub_8312F380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831859C0"))) PPC_WEAK_FUNC(sub_831859C0);
PPC_FUNC_IMPL(__imp__sub_831859C0) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8312f2a8
	sub_8312F2A8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r3,-21080(r11)
	PPC_STORE_U32(r11.u32 + -21080, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831859F8"))) PPC_WEAK_FUNC(sub_831859F8);
PPC_FUNC_IMPL(__imp__sub_831859F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r4,-21080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -21080);
	// b 0x8312f380
	sub_8312F380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83185A08"))) PPC_WEAK_FUNC(sub_83185A08);
PPC_FUNC_IMPL(__imp__sub_83185A08) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8312f2a8
	sub_8312F2A8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r3,-20784(r11)
	PPC_STORE_U32(r11.u32 + -20784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185A40"))) PPC_WEAK_FUNC(sub_83185A40);
PPC_FUNC_IMPL(__imp__sub_83185A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r4,-20784(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -20784);
	// b 0x8312f380
	sub_8312F380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83185A50"))) PPC_WEAK_FUNC(sub_83185A50);
PPC_FUNC_IMPL(__imp__sub_83185A50) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,-20776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -20776);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185A80"))) PPC_WEAK_FUNC(sub_83185A80);
PPC_FUNC_IMPL(__imp__sub_83185A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,-20776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -20776);
	// b 0x831379a0
	sub_831379A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83185A90"))) PPC_WEAK_FUNC(sub_83185A90);
PPC_FUNC_IMPL(__imp__sub_83185A90) {
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
	// lis r31,-31941
	r31.s64 = -2093285376;
	// lwz r3,-20772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -20772);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83185abc
	if (cr6.eq) goto loc_83185ABC;
	// bl 0x83137878
	sub_83137878(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-20772(r31)
	PPC_STORE_U32(r31.u32 + -20772, r11.u32);
loc_83185ABC:
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

__attribute__((alias("__imp__sub_83185AD0"))) PPC_WEAK_FUNC(sub_83185AD0);
PPC_FUNC_IMPL(__imp__sub_83185AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,-20772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -20772);
	// b 0x83137908
	sub_83137908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83185AE0"))) PPC_WEAK_FUNC(sub_83185AE0);
PPC_FUNC_IMPL(__imp__sub_83185AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,-20772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -20772);
	// b 0x831379a0
	sub_831379A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83185AF0"))) PPC_WEAK_FUNC(sub_83185AF0);
PPC_FUNC_IMPL(__imp__sub_83185AF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8312f228
	sub_8312F228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83185AF8"))) PPC_WEAK_FUNC(sub_83185AF8);
PPC_FUNC_IMPL(__imp__sub_83185AF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8312ecf0
	sub_8312ECF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83185B00"))) PPC_WEAK_FUNC(sub_83185B00);
PPC_FUNC_IMPL(__imp__sub_83185B00) {
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
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21040
	r31.s64 = r11.s64 + -21040;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831b48b0
	sub_831B48B0(ctx, base);
	// lis r30,-31930
	r30.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r29,r11,-10720
	r29.s64 = r11.s64 + -10720;
	// lwz r3,-21356(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83185b90
	if (cr6.eq) goto loc_83185B90;
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83185B90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83185af8
	sub_83185AF8(ctx, base);
	// lwz r3,-21356(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83185bb8
	if (cr6.eq) goto loc_83185BB8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,108
	ctx.r4.s64 = r29.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83185BB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83185BC0"))) PPC_WEAK_FUNC(sub_83185BC0);
PPC_FUNC_IMPL(__imp__sub_83185BC0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r31,r11,-21112
	r31.s64 = r11.s64 + -21112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83137798
	sub_83137798(ctx, base);
	// stw r3,340(r31)
	PPC_STORE_U32(r31.u32 + 340, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83185bfc
	if (!cr6.eq) goto loc_83185BFC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-15816
	ctx.r3.s64 = r11.s64 + -15816;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_83185BFC:
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

__attribute__((alias("__imp__sub_83185C10"))) PPC_WEAK_FUNC(sub_83185C10);
PPC_FUNC_IMPL(__imp__sub_83185C10) {
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
	// addi r3,r31,1184
	ctx.r3.s64 = r31.s64 + 1184;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83185c58
	if (!cr6.eq) goto loc_83185C58;
	// bl 0x8317b9d0
	sub_8317B9D0(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83185c58
	if (!cr6.eq) goto loc_83185C58;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83185C58:
	// addi r3,r31,1220
	ctx.r3.s64 = r31.s64 + 1220;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83185c78
	if (!cr6.eq) goto loc_83185C78;
	// bl 0x8317b9d0
	sub_8317B9D0(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x83185c7c
	if (cr6.eq) goto loc_83185C7C;
loc_83185C78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83185C7C:
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

__attribute__((alias("__imp__sub_83185C90"))) PPC_WEAK_FUNC(sub_83185C90);
PPC_FUNC_IMPL(__imp__sub_83185C90) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x83181d08
	sub_83181D08(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83185d9c
	if (!cr6.eq) goto loc_83185D9C;
	// addi r29,r31,1184
	r29.s64 = r31.s64 + 1184;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83185cf0
	if (!cr6.eq) goto loc_83185CF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8317b9d0
	sub_8317B9D0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83185cf0
	if (cr6.eq) goto loc_83185CF0;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83185d9c
	if (!cr6.eq) goto loc_83185D9C;
loc_83185CF0:
	// addi r30,r31,1220
	r30.s64 = r31.s64 + 1220;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83185d30
	if (!cr6.eq) goto loc_83185D30;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317b9d0
	sub_8317B9D0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83185d30
	if (cr6.eq) goto loc_83185D30;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83185d9c
	if (!cr6.eq) goto loc_83185D9C;
loc_83185D30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317eb48
	sub_8317EB48(ctx, base);
	// lbz r11,130(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 130);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83185d50
	if (!cr6.eq) goto loc_83185D50;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317eda0
	sub_8317EDA0(ctx, base);
loc_83185D50:
	// lbz r11,128(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83185d78
	if (!cr6.eq) goto loc_83185D78;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x83194378
	sub_83194378(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83185d78
	if (cr6.eq) goto loc_83185D78;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-15768
	ctx.r3.s64 = r11.s64 + -15768;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_83185D78:
	// lbz r11,130(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 130);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83185d9c
	if (!cr6.eq) goto loc_83185D9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8317ba40
	sub_8317BA40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317ba40
	sub_8317BA40(ctx, base);
loc_83185D9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83185DA8"))) PPC_WEAK_FUNC(sub_83185DA8);
PPC_FUNC_IMPL(__imp__sub_83185DA8) {
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
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x83181d08
	sub_83181D08(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83185e14
	if (!cr6.eq) goto loc_83185E14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317eb48
	sub_8317EB48(ctx, base);
	// lbz r11,130(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 130);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83185dec
	if (!cr6.eq) goto loc_83185DEC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317eda0
	sub_8317EDA0(ctx, base);
loc_83185DEC:
	// lbz r11,128(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83185e14
	if (!cr6.eq) goto loc_83185E14;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x83194378
	sub_83194378(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83185e14
	if (cr6.eq) goto loc_83185E14;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-15768
	ctx.r3.s64 = r11.s64 + -15768;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_83185E14:
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

__attribute__((alias("__imp__sub_83185E28"))) PPC_WEAK_FUNC(sub_83185E28);
PPC_FUNC_IMPL(__imp__sub_83185E28) {
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
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x83183e08
	sub_83183E08(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83185e64
	if (!cr6.eq) goto loc_83185E64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83185E64:
	// lwz r11,1336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1336);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83185efc
	if (cr6.eq) goto loc_83185EFC;
	// lwz r3,1104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83185e8c
	if (cr6.eq) goto loc_83185E8C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83185E8C:
	// lwz r7,1100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1100);
	// lwz r6,1096(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1096);
	// lwz r5,1092(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1092);
	// lwz r4,1080(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1080);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x83183d70
	sub_83183D70(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x83183dc8
	sub_83183DC8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x83185ef4
	if (!cr6.eq) goto loc_83185EF4;
	// li r11,4
	r11.s64 = 4;
	// li r3,-102
	ctx.r3.s64 = -102;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lwz r4,1080(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1080);
	// addi r3,r11,-15724
	ctx.r3.s64 = r11.s64 + -15724;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,1088(r31)
	PPC_STORE_U32(r31.u32 + 1088, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83185EF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317c9e0
	sub_8317C9E0(ctx, base);
loc_83185EFC:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_83185F18"))) PPC_WEAK_FUNC(sub_83185F18);
PPC_FUNC_IMPL(__imp__sub_83185F18) {
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
	// lwz r11,1336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1336);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83185fa8
	if (!cr6.eq) goto loc_83185FA8;
	// bl 0x83181d08
	sub_83181D08(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,4
	r30.s64 = 4;
	// li r29,4
	r29.s64 = 4;
	// bl 0x8317b600
	sub_8317B600(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83185f68
	if (cr6.eq) goto loc_83185F68;
	// addi r3,r31,1184
	ctx.r3.s64 = r31.s64 + 1184;
	// bl 0x8317b9d0
	sub_8317B9D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_83185F68:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b600
	sub_8317B600(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83185f88
	if (cr6.eq) goto loc_83185F88;
	// addi r3,r31,1220
	ctx.r3.s64 = r31.s64 + 1220;
	// bl 0x8317b9d0
	sub_8317B9D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_83185F88:
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(r28.s32, 6, xer);
	// bne cr6,0x83185fa8
	if (!cr6.eq) goto loc_83185FA8;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// beq cr6,0x83185fa8
	if (cr6.eq) goto loc_83185FA8;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// beq cr6,0x83185fa8
	if (cr6.eq) goto loc_83185FA8;
	// li r11,3
	r11.s64 = 3;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_83185FA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83185FB0"))) PPC_WEAK_FUNC(sub_83185FB0);
PPC_FUNC_IMPL(__imp__sub_83185FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r30,4
	r30.s64 = 4;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83185fe8
	if (cr6.eq) goto loc_83185FE8;
	// bl 0x83183d18
	sub_83183D18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83185fe8
	if (cr6.eq) goto loc_83185FE8;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_83185FE8:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83186004
	if (cr6.eq) goto loc_83186004;
	// bl 0x83181450
	sub_83181450(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83186004
	if (!cr6.eq) goto loc_83186004;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_83186004:
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

__attribute__((alias("__imp__sub_83186020"))) PPC_WEAK_FUNC(sub_83186020);
PPC_FUNC_IMPL(__imp__sub_83186020) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83186090
	if (cr6.eq) goto loc_83186090;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x83186090
	if (cr6.eq) goto loc_83186090;
	// bl 0x8317b478
	sub_8317B478(ctx, base);
	// bl 0x8318b878
	sub_8318B878(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83186090
	if (!cr6.eq) goto loc_83186090;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b600
	sub_8317B600(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83186074
	if (cr6.eq) goto loc_83186074;
	// addi r3,r31,1184
	ctx.r3.s64 = r31.s64 + 1184;
	// bl 0x8317bae0
	sub_8317BAE0(ctx, base);
loc_83186074:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b600
	sub_8317B600(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83186090
	if (cr6.eq) goto loc_83186090;
	// addi r3,r31,1220
	ctx.r3.s64 = r31.s64 + 1220;
	// bl 0x8317bae0
	sub_8317BAE0(ctx, base);
loc_83186090:
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

__attribute__((alias("__imp__sub_831860A8"))) PPC_WEAK_FUNC(sub_831860A8);
PPC_FUNC_IMPL(__imp__sub_831860A8) {
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
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831860D0"))) PPC_WEAK_FUNC(sub_831860D0);
PPC_FUNC_IMPL(__imp__sub_831860D0) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lis r31,-31941
	r31.s64 = -2093285376;
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// lwz r9,-20768(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -20768);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,-20768(r11)
	PPC_STORE_U32(r11.u32 + -20768, ctx.r9.u32);
	// lwz r11,-23660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -23660);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lwz r11,-21388(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21388);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-21388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21388, r11.u32);
	// bne cr6,0x83186144
	if (!cr6.eq) goto loc_83186144;
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// addi r30,r3,92
	r30.s64 = ctx.r3.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83185af0
	sub_83185AF0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83186144
	if (!cr6.eq) goto loc_83186144;
	// lwz r11,-23660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -23660);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8318613c
	if (!cr6.eq) goto loc_8318613C;
	// bl 0x8318b220
	sub_8318B220(ctx, base);
loc_8318613C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_83186144:
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

__attribute__((alias("__imp__sub_83186160"))) PPC_WEAK_FUNC(sub_83186160);
PPC_FUNC_IMPL(__imp__sub_83186160) {
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
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83186188
	if (cr6.eq) goto loc_83186188;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83186188:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186198"))) PPC_WEAK_FUNC(sub_83186198);
PPC_FUNC_IMPL(__imp__sub_83186198) {
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
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831861c0
	if (cr6.eq) goto loc_831861C0;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831861C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831861D0"))) PPC_WEAK_FUNC(sub_831861D0);
PPC_FUNC_IMPL(__imp__sub_831861D0) {
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
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831861f8
	if (cr6.eq) goto loc_831861F8;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831861F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186208"))) PPC_WEAK_FUNC(sub_83186208);
PPC_FUNC_IMPL(__imp__sub_83186208) {
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
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// stw r31,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r31.u32);
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

__attribute__((alias("__imp__sub_83186238"))) PPC_WEAK_FUNC(sub_83186238);
PPC_FUNC_IMPL(__imp__sub_83186238) {
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
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8318627c
	if (cr6.eq) goto loc_8318627C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-15680
	ctx.r3.s64 = r11.s64 + -15680;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
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
loc_8318627C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea2fc8
	sub_82EA2FC8(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_831862A8"))) PPC_WEAK_FUNC(sub_831862A8);
PPC_FUNC_IMPL(__imp__sub_831862A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831862d4
	if (cr6.eq) goto loc_831862D4;
	// stw r31,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r31.u32);
loc_831862D4:
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r31.u32);
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

__attribute__((alias("__imp__sub_831862F0"))) PPC_WEAK_FUNC(sub_831862F0);
PPC_FUNC_IMPL(__imp__sub_831862F0) {
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
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186318"))) PPC_WEAK_FUNC(sub_83186318);
PPC_FUNC_IMPL(__imp__sub_83186318) {
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
	// bl 0x8317b0b0
	sub_8317B0B0(ctx, base);
	// bl 0x83183d58
	sub_83183D58(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186350"))) PPC_WEAK_FUNC(sub_83186350);
PPC_FUNC_IMPL(__imp__sub_83186350) {
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
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// stw r31,10860(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10860, r31.u32);
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

__attribute__((alias("__imp__sub_83186380"))) PPC_WEAK_FUNC(sub_83186380);
PPC_FUNC_IMPL(__imp__sub_83186380) {
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
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// lwz r3,10860(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10860);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831863A8"))) PPC_WEAK_FUNC(sub_831863A8);
PPC_FUNC_IMPL(__imp__sub_831863A8) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r11,-23660(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -23660);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83186408
	if (!cr6.eq) goto loc_83186408;
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83186380
	sub_83186380(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83186408
	if (cr6.eq) goto loc_83186408;
	// addi r31,r31,108
	r31.s64 = r31.s64 + 108;
	// li r30,8
	r30.s64 = 8;
loc_831863E8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831863f8
	if (cr6.eq) goto loc_831863F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181c60
	sub_83181C60(ctx, base);
loc_831863F8:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,1344
	r31.s64 = r31.s64 + 1344;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831863e8
	if (!cr6.eq) goto loc_831863E8;
loc_83186408:
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

__attribute__((alias("__imp__sub_83186420"))) PPC_WEAK_FUNC(sub_83186420);
PPC_FUNC_IMPL(__imp__sub_83186420) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r11,-23660(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -23660);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x831864b8
	if (!cr6.eq) goto loc_831864B8;
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83186380
	sub_83186380(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831864b8
	if (cr6.eq) goto loc_831864B8;
	// addi r31,r31,108
	r31.s64 = r31.s64 + 108;
	// li r30,8
	r30.s64 = 8;
	// li r29,0
	r29.s64 = 0;
loc_8318645C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831864a8
	if (cr6.eq) goto loc_831864A8;
	// lwz r11,1088(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1088);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83186484
	if (!cr6.eq) goto loc_83186484;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83185e28
	sub_83185E28(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83186484
	if (!cr6.eq) goto loc_83186484;
	// stw r29,1088(r31)
	PPC_STORE_U32(r31.u32 + 1088, r29.u32);
loc_83186484:
	// lwz r11,1336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1336);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x831864a8
	if (!cr6.eq) goto loc_831864A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317f040
	sub_8317F040(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831864a8
	if (!cr6.eq) goto loc_831864A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317f260
	sub_8317F260(ctx, base);
loc_831864A8:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,1344
	r31.s64 = r31.s64 + 1344;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8318645c
	if (!cr6.eq) goto loc_8318645C;
loc_831864B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831864C0"))) PPC_WEAK_FUNC(sub_831864C0);
PPC_FUNC_IMPL(__imp__sub_831864C0) {
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
	// li r31,0
	r31.s64 = 0;
loc_831864DC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831862a8
	sub_831862A8(ctx, base);
	// bl 0x8312dbf8
	sub_8312DBF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831862a8
	sub_831862A8(ctx, base);
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83186510
	if (!cr6.eq) goto loc_83186510;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(r31.s32, 10, xer);
	// blt cr6,0x831864dc
	if (cr6.lt) goto loc_831864DC;
loc_83186510:
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

__attribute__((alias("__imp__sub_83186528"))) PPC_WEAK_FUNC(sub_83186528);
PPC_FUNC_IMPL(__imp__sub_83186528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1184(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1184);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83186544
	if (cr6.eq) goto loc_83186544;
	// lwz r11,1220(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1220);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83186544
	if (cr6.eq) goto loc_83186544;
	// b 0x83185da8
	sub_83185DA8(ctx, base);
	return;
loc_83186544:
	// b 0x83185c90
	sub_83185C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83186548"))) PPC_WEAK_FUNC(sub_83186548);
PPC_FUNC_IMPL(__imp__sub_83186548) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83186570
	if (cr6.eq) goto loc_83186570;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x831865cc
	if (!cr6.eq) goto loc_831865CC;
loc_83186570:
	// lbz r11,129(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 129);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8318659c
	if (!cr6.eq) goto loc_8318659C;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x8313e340
	sub_8313E340(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318659c
	if (!cr6.eq) goto loc_8318659C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317eba0
	sub_8317EBA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,129(r31)
	PPC_STORE_U8(r31.u32 + 129, r11.u8);
loc_8318659C:
	// lbz r11,128(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831865cc
	if (!cr6.eq) goto loc_831865CC;
	// lbz r11,129(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 129);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831865cc
	if (!cr6.eq) goto loc_831865CC;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x8313e340
	sub_8313E340(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831865cc
	if (!cr6.eq) goto loc_831865CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317ef10
	sub_8317EF10(ctx, base);
loc_831865CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186020
	sub_83186020(ctx, base);
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

__attribute__((alias("__imp__sub_831865E8"))) PPC_WEAK_FUNC(sub_831865E8);
PPC_FUNC_IMPL(__imp__sub_831865E8) {
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
	// lis r31,-31930
	r31.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-9424
	r30.s64 = r11.s64 + -9424;
	// lwz r3,-21356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83186628
	if (cr6.eq) goto loc_83186628;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83186628:
	// bl 0x831860d0
	sub_831860D0(ctx, base);
	// lwz r3,-21356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318664c
	if (cr6.eq) goto loc_8318664C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318664C:
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

__attribute__((alias("__imp__sub_83186668"))) PPC_WEAK_FUNC(sub_83186668);
PPC_FUNC_IMPL(__imp__sub_83186668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x831864c0
	sub_831864C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83186678"))) PPC_WEAK_FUNC(sub_83186678);
PPC_FUNC_IMPL(__imp__sub_83186678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186680"))) PPC_WEAK_FUNC(sub_83186680);
PPC_FUNC_IMPL(__imp__sub_83186680) {
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
	// lwz r30,72(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x8317b1c0
	sub_8317B1C0(ctx, base);
	// lwz r11,1088(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1088);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x831866d4
	if (cr6.eq) goto loc_831866D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186528
	sub_83186528(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83181d08
	sub_83181D08(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x831866cc
	if (cr6.eq) goto loc_831866CC;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x831866d4
	if (!cr6.eq) goto loc_831866D4;
loc_831866CC:
	// li r11,2
	r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_831866D4:
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

__attribute__((alias("__imp__sub_831866F0"))) PPC_WEAK_FUNC(sub_831866F0);
PPC_FUNC_IMPL(__imp__sub_831866F0) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83186720
	if (cr6.eq) goto loc_83186720;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83186728
	if (!cr6.eq) goto loc_83186728;
	// bl 0x83185f18
	sub_83185F18(ctx, base);
	// b 0x83186728
	goto loc_83186728;
loc_83186720:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186680
	sub_83186680(ctx, base);
loc_83186728:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83185fb0
	sub_83185FB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186548
	sub_83186548(ctx, base);
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

__attribute__((alias("__imp__sub_83186750"))) PPC_WEAK_FUNC(sub_83186750);
PPC_FUNC_IMPL(__imp__sub_83186750) {
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
	// bl 0x831865e8
	sub_831865E8(ctx, base);
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

__attribute__((alias("__imp__sub_83186778"))) PPC_WEAK_FUNC(sub_83186778);
PPC_FUNC_IMPL(__imp__sub_83186778) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83192968
	sub_83192968(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x831867b4
	if (cr6.eq) goto loc_831867B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83192968
	sub_83192968(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83186828
	goto loc_83186828;
loc_831867B4:
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r30,72(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,-21384(r11)
	PPC_STORE_U32(r11.u32 + -21384, r31.u32);
	// bl 0x831929a0
	sub_831929A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8318d6f0
	sub_8318D6F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831929a0
	sub_831929A0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831867f0
	if (!cr6.eq) goto loc_831867F0;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// b 0x83186800
	goto loc_83186800;
loc_831867F0:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// bl 0x831866f0
	sub_831866F0(ctx, base);
loc_83186800:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8318b228
	sub_8318B228(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r10,r11,1
	ctx.r10.u64 = r11.u64 ^ 1;
	// bl 0x83192968
	sub_83192968(ctx, base);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_83186828:
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

__attribute__((alias("__imp__sub_83186840"))) PPC_WEAK_FUNC(sub_83186840);
PPC_FUNC_IMPL(__imp__sub_83186840) {
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
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831862a8
	sub_831862A8(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831862a8
	sub_831862A8(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186668
	sub_83186668(ctx, base);
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

__attribute__((alias("__imp__sub_83186898"))) PPC_WEAK_FUNC(sub_83186898);
PPC_FUNC_IMPL(__imp__sub_83186898) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31930
	r31.s64 = -2092564480;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-10504
	r30.s64 = r11.s64 + -10504;
	// lwz r3,-21356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831868d4
	if (cr6.eq) goto loc_831868D4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831868D4:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x83186750
	sub_83186750(ctx, base);
	// lwz r11,-21356(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -21356);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83186918
	if (cr6.eq) goto loc_83186918;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// stw r10,116(r30)
	PPC_STORE_U32(r30.u32 + 116, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83186918:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83186920"))) PPC_WEAK_FUNC(sub_83186920);
PPC_FUNC_IMPL(__imp__sub_83186920) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-23660(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -23660);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83186954
	if (!cr6.eq) goto loc_83186954;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83186960
	if (!cr6.eq) goto loc_83186960;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-15628
	ctx.r3.s64 = r11.s64 + -15628;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_83186954:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83186960:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83186954
	if (!cr6.eq) goto loc_83186954;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea2fc8
	sub_82EA2FC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83186954
	if (cr6.eq) goto loc_83186954;
	// bl 0x831862f0
	sub_831862F0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83186954
	if (cr6.eq) goto loc_83186954;
	// lwz r11,1336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1336);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83186954
	if (cr6.eq) goto loc_83186954;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317d608
	sub_8317D608(ctx, base);
	// lis r29,-31930
	r29.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-9640
	r30.s64 = r11.s64 + -9640;
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831869cc
	if (cr6.eq) goto loc_831869CC;
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831869CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186778
	sub_83186778(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83186a00
	if (cr6.eq) goto loc_83186A00;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// stw r11,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83186A00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317d628
	sub_8317D628(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83186A18"))) PPC_WEAK_FUNC(sub_83186A18);
PPC_FUNC_IMPL(__imp__sub_83186A18) {
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
	// bl 0x83185ad0
	sub_83185AD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186920
	sub_83186920(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83185ae0
	sub_83185AE0(ctx, base);
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

__attribute__((alias("__imp__sub_83186A58"))) PPC_WEAK_FUNC(sub_83186A58);
PPC_FUNC_IMPL(__imp__sub_83186A58) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r11,-23660(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -23660);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83186a80
	if (cr6.eq) goto loc_83186A80;
loc_83186A74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83186A80:
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x83185af0
	sub_83185AF0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83186a74
	if (!cr6.eq) goto loc_83186A74;
	// bl 0x83186160
	sub_83186160(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// bl 0x83186380
	sub_83186380(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83186ae0
	if (cr6.eq) goto loc_83186AE0;
	// addi r31,r31,108
	r31.s64 = r31.s64 + 108;
	// li r30,8
	r30.s64 = 8;
loc_83186AB4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83186ad0
	if (cr6.eq) goto loc_83186AD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186a18
	sub_83186A18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83186ad0
	if (!cr6.eq) goto loc_83186AD0;
	// li r29,1
	r29.s64 = 1;
loc_83186AD0:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,1344
	r31.s64 = r31.s64 + 1344;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83186ab4
	if (!cr6.eq) goto loc_83186AB4;
loc_83186AE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83186208
	sub_83186208(ctx, base);
	// bl 0x83186198
	sub_83186198(ctx, base);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// beq cr6,0x83186b04
	if (cr6.eq) goto loc_83186B04;
	// bl 0x831862f0
	sub_831862F0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83186b04
	if (cr6.eq) goto loc_83186B04;
	// bl 0x831861d0
	sub_831861D0(ctx, base);
loc_83186B04:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83186B10"))) PPC_WEAK_FUNC(sub_83186B10);
PPC_FUNC_IMPL(__imp__sub_83186B10) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31930
	r31.s64 = -2092564480;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-9856
	r30.s64 = r11.s64 + -9856;
	// lwz r3,-21356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83186b4c
	if (cr6.eq) goto loc_83186B4C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83186B4C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83186a58
	sub_83186A58(ctx, base);
	// lwz r11,-21356(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -21356);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83186b88
	if (cr6.eq) goto loc_83186B88;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// stw r10,116(r30)
	PPC_STORE_U32(r30.u32 + 116, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83186B88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83186B90"))) PPC_WEAK_FUNC(sub_83186B90);
PPC_FUNC_IMPL(__imp__sub_83186B90) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31930
	r29.s64 = -2092564480;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-10288
	r30.s64 = r11.s64 + -10288;
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83186bcc
	if (cr6.eq) goto loc_83186BCC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83186BCC:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x831863a8
	sub_831863A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186420
	sub_83186420(ctx, base);
	// bl 0x831860a8
	sub_831860A8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83186bfc
	if (!cr6.eq) goto loc_83186BFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186b10
	sub_83186B10(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_83186BFC:
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83186c24
	if (cr6.eq) goto loc_83186C24;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// stw r11,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83186C24:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83186C30"))) PPC_WEAK_FUNC(sub_83186C30);
PPC_FUNC_IMPL(__imp__sub_83186C30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31930
	r30.s64 = -2092564480;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r31,r11,-10072
	r31.s64 = r11.s64 + -10072;
	// lwz r3,-21356(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83186c6c
	if (cr6.eq) goto loc_83186C6C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83186C6C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x831860a8
	sub_831860A8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83186c8c
	if (cr6.eq) goto loc_83186C8C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83186b10
	sub_83186B10(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_83186C8C:
	// lwz r3,-21356(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83186cb4
	if (cr6.eq) goto loc_83186CB4;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83186CB4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83186CC0"))) PPC_WEAK_FUNC(sub_83186CC0);
PPC_FUNC_IMPL(__imp__sub_83186CC0) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83186d10
	if (cr6.eq) goto loc_83186D10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83186d08
	if (cr6.eq) goto loc_83186D08;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,385
	ctx.r4.u64 = ctx.r4.u64 | 385;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83186D08:
	// lwz r11,6088(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 6088);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_83186D10:
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(r29.s32, 5, xer);
	// bne cr6,0x83186d1c
	if (!cr6.eq) goto loc_83186D1C;
	// li r30,0
	r30.s64 = 0;
loc_83186D1C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831989d0
	sub_831989D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83186d48
	if (cr6.eq) goto loc_83186D48;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,3858
	ctx.r4.u64 = ctx.r4.u64 | 3858;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83186D48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83186D58"))) PPC_WEAK_FUNC(sub_83186D58);
PPC_FUNC_IMPL(__imp__sub_83186D58) {
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
	// lwz r11,6088(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6088);
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x83186d80
	if (!cr6.eq) goto loc_83186D80;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83186D80:
	// rlwinm r29,r5,30,2,31
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(r29.u32, 16, xer);
	// ble cr6,0x83186d90
	if (!cr6.gt) goto loc_83186D90;
	// li r29,16
	r29.s64 = 16;
loc_83186D90:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x83186dc0
	if (!cr6.gt) goto loc_83186DC0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_83186DA0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83198a60
	sub_83198A60(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x83186da0
	if (cr6.lt) goto loc_83186DA0;
loc_83186DC0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83186DD0"))) PPC_WEAK_FUNC(sub_83186DD0);
PPC_FUNC_IMPL(__imp__sub_83186DD0) {
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
	// lwz r11,6088(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6088);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83186e20
	if (cr6.eq) goto loc_83186E20;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x83186e20
	if (!cr6.gt) goto loc_83186E20;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_83186E00:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831989d0
	sub_831989D0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x83186e00
	if (cr6.lt) goto loc_83186E00;
loc_83186E20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83186E28"))) PPC_WEAK_FUNC(sub_83186E28);
PPC_FUNC_IMPL(__imp__sub_83186E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,6088(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 6088);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r4,3452(r11)
	PPC_STORE_U32(r11.u32 + 3452, ctx.r4.u32);
	// stw r6,3448(r11)
	PPC_STORE_U32(r11.u32 + 3448, ctx.r6.u32);
	// stw r5,3444(r11)
	PPC_STORE_U32(r11.u32 + 3444, ctx.r5.u32);
	// b 0x83198760
	sub_83198760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83186E48"))) PPC_WEAK_FUNC(sub_83186E48);
PPC_FUNC_IMPL(__imp__sub_83186E48) {
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
	// bl 0x831988f8
	sub_831988F8(ctx, base);
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

__attribute__((alias("__imp__sub_83186E70"))) PPC_WEAK_FUNC(sub_83186E70);
PPC_FUNC_IMPL(__imp__sub_83186E70) {
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
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83186eb8
	if (cr6.eq) goto loc_83186EB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83197c08
	sub_83197C08(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83186eb8
	if (cr6.eq) goto loc_83186EB8;
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186cc0
	sub_83186CC0(ctx, base);
loc_83186EB8:
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

__attribute__((alias("__imp__sub_83186ED0"))) PPC_WEAK_FUNC(sub_83186ED0);
PPC_FUNC_IMPL(__imp__sub_83186ED0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,3456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 3456);
	// lwz r31,6088(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 6088);
	// lwz r11,3460(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 3460);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x83186f3c
	if (cr6.eq) goto loc_83186F3C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83186f3c
	if (cr6.eq) goto loc_83186F3C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,192
	cr6.compare<int32_t>(r11.s32, 192, xer);
	// bne cr6,0x83186f3c
	if (!cr6.eq) goto loc_83186F3C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8319af20
	sub_8319AF20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83186f3c
	if (!cr6.eq) goto loc_83186F3C;
	// li r11,2
	r11.s64 = 2;
	// li r10,200
	ctx.r10.s64 = 200;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_83186F3C:
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

__attribute__((alias("__imp__sub_83186F50"))) PPC_WEAK_FUNC(sub_83186F50);
PPC_FUNC_IMPL(__imp__sub_83186F50) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,6100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6100);
	// b 0x83196988
	sub_83196988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83186F58"))) PPC_WEAK_FUNC(sub_83186F58);
PPC_FUNC_IMPL(__imp__sub_83186F58) {
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
	// lwz r30,2664(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 2664);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x83186f88
	if (cr6.eq) goto loc_83186F88;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x83186f8c
	if (!cr6.lt) goto loc_83186F8C;
loc_83186F88:
	// mr r30,r11
	r30.u64 = r11.u64;
loc_83186F8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831907c8
	sub_831907C8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83186fa8
	if (!cr6.eq) goto loc_83186FA8;
	// lwz r11,2408(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2408);
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
loc_83186FA8:
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x83186fb8
	if (!cr6.lt) goto loc_83186FB8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83186FB8:
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

__attribute__((alias("__imp__sub_83186FD0"))) PPC_WEAK_FUNC(sub_83186FD0);
PPC_FUNC_IMPL(__imp__sub_83186FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,32767
	r11.s64 = 2147418112;
	// lwz r10,3780(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3780);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	r11.s64 = 1;
	// stw r11,3744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3744, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186FF0"))) PPC_WEAK_FUNC(sub_83186FF0);
PPC_FUNC_IMPL(__imp__sub_83186FF0) {
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
	// bl 0x831907b8
	sub_831907B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83187050
	if (cr6.eq) goto loc_83187050;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x83187028
	if (!cr6.eq) goto loc_83187028;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83187054
	goto loc_83187054;
loc_83187028:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83187050
	if (!cr6.eq) goto loc_83187050;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x83187050
	if (!cr6.eq) goto loc_83187050;
	// lwz r11,2408(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2408);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,2412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2412);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83187054
	if (cr6.gt) goto loc_83187054;
loc_83187050:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83187054:
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

__attribute__((alias("__imp__sub_83187070"))) PPC_WEAK_FUNC(sub_83187070);
PPC_FUNC_IMPL(__imp__sub_83187070) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,6100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6100);
	// b 0x83196970
	sub_83196970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83187080"))) PPC_WEAK_FUNC(sub_83187080);
PPC_FUNC_IMPL(__imp__sub_83187080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bgt cr6,0x831870a4
	if (cr6.gt) goto loc_831870A4;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x831870a4
	if (!cr6.lt) goto loc_831870A4;
	// subf r3,r11,r4
	ctx.r3.s64 = ctx.r4.s64 - r11.s64;
	// blr 
	return;
loc_831870A4:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bgt cr6,0x831870d0
	if (cr6.gt) goto loc_831870D0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x831870d0
	if (!cr6.lt) goto loc_831870D0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
	// blr 
	return;
loc_831870D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831870D8"))) PPC_WEAK_FUNC(sub_831870D8);
PPC_FUNC_IMPL(__imp__sub_831870D8) {
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
	// lwz r30,6096(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 6096);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831967b0
	sub_831967B0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83197140
	sub_83197140(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// subf r10,r3,r29
	ctx.r10.s64 = r29.s64 - ctx.r3.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x8318712c
	if (!cr6.lt) goto loc_8318712C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,3868
	ctx.r4.u64 = ctx.r4.u64 | 3868;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8318712C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83187138"))) PPC_WEAK_FUNC(sub_83187138);
PPC_FUNC_IMPL(__imp__sub_83187138) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8319b168
	sub_8319B168(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8318718c
	if (cr6.eq) goto loc_8318718C;
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_8318718C:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x83187270
	if (cr6.eq) goto loc_83187270;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// blt cr6,0x831871ac
	if (cr6.lt) goto loc_831871AC;
	// li r29,3
	r29.s64 = 3;
loc_831871AC:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// blt cr6,0x831871b8
	if (cr6.lt) goto loc_831871B8;
	// li r30,3
	r30.s64 = 3;
loc_831871B8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r11,-3
	r28.s64 = r11.s64 + -3;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8318721c
	if (!cr6.gt) goto loc_8318721C;
loc_831871F8:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
	// and r11,r3,r27
	r11.u64 = ctx.r3.u64 & r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83187250
	if (!cr6.eq) goto loc_83187250;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x831871f8
	if (cr6.lt) goto loc_831871F8;
loc_8318721C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8319b168
	sub_8319B168(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83187270
	if (cr6.eq) goto loc_83187270;
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_83187250:
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_83187270:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83187280"))) PPC_WEAK_FUNC(sub_83187280);
PPC_FUNC_IMPL(__imp__sub_83187280) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8318736c
	if (cr6.eq) goto loc_8318736C;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
	// bl 0x8319b0f8
	sub_8319B0F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831872e4
	if (cr6.eq) goto loc_831872E4;
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_831872E4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// blt cr6,0x831872f8
	if (cr6.lt) goto loc_831872F8;
	// li r29,3
	r29.s64 = 3;
loc_831872F8:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// blt cr6,0x83187308
	if (cr6.lt) goto loc_83187308;
	// li r30,3
	r30.s64 = 3;
loc_83187308:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r11,-3
	r28.s64 = r11.s64 + -3;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8318736c
	if (!cr6.gt) goto loc_8318736C;
loc_83187348:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
	// and r11,r3,r27
	r11.u64 = ctx.r3.u64 & r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831873a4
	if (!cr6.eq) goto loc_831873A4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x83187348
	if (cr6.lt) goto loc_83187348;
loc_8318736C:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
	// bl 0x8319b0f8
	sub_8319B0F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831873c4
	if (cr6.eq) goto loc_831873C4;
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_831873A4:
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_831873C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831873D0"))) PPC_WEAK_FUNC(sub_831873D0);
PPC_FUNC_IMPL(__imp__sub_831873D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,6096(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6096);
	// bl 0x83197030
	sub_83197030(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83187404
	if (cr6.eq) goto loc_83187404;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x83187410
	goto loc_83187410;
loc_83187404:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_83187410:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187428"))) PPC_WEAK_FUNC(sub_83187428);
PPC_FUNC_IMPL(__imp__sub_83187428) {
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
	// addi r31,r3,6080
	r31.s64 = ctx.r3.s64 + 6080;
	// addi r30,r3,3464
	r30.s64 = ctx.r3.s64 + 3464;
	// addi r29,r30,148
	r29.s64 = r30.s64 + 148;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x8318745c
	if (!cr6.lt) goto loc_8318745C;
	// bl 0x831967c0
	sub_831967C0(ctx, base);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_8318745C:
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x83187478
	if (!cr6.lt) goto loc_83187478;
	// addi r4,r30,104
	ctx.r4.s64 = r30.s64 + 104;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_83187478:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83187480"))) PPC_WEAK_FUNC(sub_83187480);
PPC_FUNC_IMPL(__imp__sub_83187480) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r11,r11,-14752
	r11.s64 = r11.s64 + -14752;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x83187504
	if (cr6.eq) goto loc_83187504;
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r11,0
	r11.s64 = 0;
	// ori r11,r11,44100
	r11.u64 = r11.u64 | 44100;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_831874C0:
	// lwz r11,3964(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3964);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,3564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 3564);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,3964(r31)
	PPC_STORE_U32(r31.u32 + 3964, ctx.r3.u32);
	// bl 0x831941d0
	sub_831941D0(ctx, base);
	// lwz r11,3820(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3820);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x831874f0
	if (!cr6.lt) goto loc_831874F0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_831874F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83187504:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831945e8
	sub_831945E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831874c0
	if (!cr6.eq) goto loc_831874C0;
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_83187538"))) PPC_WEAK_FUNC(sub_83187538);
PPC_FUNC_IMPL(__imp__sub_83187538) {
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
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,6096(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6096);
	// bl 0x83196880
	sub_83196880(ctx, base);
	// ld r10,2472(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 2472);
	// extsw r11,r30
	r11.s64 = r30.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// std r11,2472(r31)
	PPC_STORE_U64(r31.u32 + 2472, r11.u64);
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

__attribute__((alias("__imp__sub_83187588"))) PPC_WEAK_FUNC(sub_83187588);
PPC_FUNC_IMPL(__imp__sub_83187588) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,6096(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6096);
	// b 0x83196988
	sub_83196988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83187590"))) PPC_WEAK_FUNC(sub_83187590);
PPC_FUNC_IMPL(__imp__sub_83187590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,-3
	cr6.compare<int32_t>(r11.s32, -3, xer);
	// beq cr6,0x831875cc
	if (cr6.eq) goto loc_831875CC;
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x831875bc
	if (cr6.eq) goto loc_831875BC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831875b4
	if (cr6.eq) goto loc_831875B4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
loc_831875B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831875BC:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bgt cr6,0x831875b4
	if (cr6.gt) goto loc_831875B4;
	// li r4,-2
	ctx.r4.s64 = -2;
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
loc_831875CC:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bgt cr6,0x831875b4
	if (cr6.gt) goto loc_831875B4;
	// li r4,-3
	ctx.r4.s64 = -3;
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831875E0"))) PPC_WEAK_FUNC(sub_831875E0);
PPC_FUNC_IMPL(__imp__sub_831875E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187608"))) PPC_WEAK_FUNC(sub_83187608);
PPC_FUNC_IMPL(__imp__sub_83187608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,1373
	ctx.r10.s64 = 89980928;
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// ori r10,r10,19072
	ctx.r10.u64 = ctx.r10.u64 | 19072;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// mulld r11,r11,r10
	r11.s64 = r11.s64 * ctx.r10.s64;
	// divd r3,r11,r9
	ctx.r3.s64 = r11.s64 / ctx.r9.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187628"))) PPC_WEAK_FUNC(sub_83187628);
PPC_FUNC_IMPL(__imp__sub_83187628) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// addi r30,r11,3464
	r30.s64 = r11.s64 + 3464;
	// bl 0x83184378
	sub_83184378(ctx, base);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83187698
	if (cr6.gt) goto loc_83187698;
	// addi r3,r30,104
	ctx.r3.s64 = r30.s64 + 104;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_83187698:
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

__attribute__((alias("__imp__sub_831876B0"))) PPC_WEAK_FUNC(sub_831876B0);
PPC_FUNC_IMPL(__imp__sub_831876B0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r31,3464
	r11.s64 = r31.s64 + 3464;
	// addi r30,r11,104
	r30.s64 = r11.s64 + 104;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83187754
	if (cr6.eq) goto loc_83187754;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_831876EC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x831876ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831876EC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83184378
	sub_83184378(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x83184378
	sub_83184378(ctx, base);
	// li r4,53
	ctx.r4.s64 = 53;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x83187758
	if (!cr6.gt) goto loc_83187758;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83187758
	if (!cr6.lt) goto loc_83187758;
loc_83187754:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83187758:
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

__attribute__((alias("__imp__sub_83187770"))) PPC_WEAK_FUNC(sub_83187770);
PPC_FUNC_IMPL(__imp__sub_83187770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r27,r9,-15464
	r27.s64 = ctx.r9.s64 + -15464;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-15936
	ctx.r10.s64 = ctx.r10.s64 + -15936;
	// addi r9,r27,-68
	ctx.r9.s64 = r27.s64 + -68;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lis r5,1373
	ctx.r5.s64 = 89980928;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwzx r26,r11,r10
	r26.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// ori r5,r5,19072
	ctx.r5.u64 = ctx.r5.u64 | 19072;
	// lwzx r31,r11,r9
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// rlwinm r11,r26,1,0,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r11
	ctx.r4.s64 = r11.s32;
	// bl 0x8319b1d0
	sub_8319B1D0(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// stw r30,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r30.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// stw r28,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r28.u32);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// sth r10,30(r25)
	PPC_STORE_U16(r25.u32 + 30, ctx.r10.u16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x831877e8
	if (cr6.gt) goto loc_831877E8;
	// li r11,0
	r11.s64 = 0;
loc_831877E8:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x831878d8
	if (cr6.eq) goto loc_831878D8;
	// cmpwi cr6,r26,29970
	cr6.compare<int32_t>(r26.s32, 29970, xer);
	// beq cr6,0x83187860
	if (cr6.eq) goto loc_83187860;
	// cmplwi cr6,r26,59940
	cr6.compare<uint32_t>(r26.u32, 59940, xer);
	// bne cr6,0x831878d8
	if (!cr6.eq) goto loc_831878D8;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_83187804:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// divw r6,r11,r9
	ctx.r6.s32 = r11.s32 / ctx.r9.s32;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// divw r5,r11,r9
	ctx.r5.s32 = r11.s32 / ctx.r9.s32;
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// divw r9,r11,r8
	ctx.r9.s32 = r11.s32 / ctx.r8.s32;
	// divw r4,r11,r8
	ctx.r4.s32 = r11.s32 / ctx.r8.s32;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x83187868
	if (!cr6.lt) goto loc_83187868;
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// divw r7,r11,r8
	ctx.r7.s32 = r11.s32 / ctx.r8.s32;
	// divw r9,r11,r8
	ctx.r9.s32 = r11.s32 / ctx.r8.s32;
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// subf r7,r8,r11
	ctx.r7.s64 = r11.s64 - ctx.r8.s64;
	// lwz r11,24(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mullw r11,r11,r4
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// b 0x83187938
	goto loc_83187938;
loc_83187860:
	// addi r10,r27,-32
	ctx.r10.s64 = r27.s64 + -32;
	// b 0x83187804
	goto loc_83187804;
loc_83187868:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// divw r8,r11,r9
	ctx.r8.s32 = r11.s32 / ctx.r9.s32;
	// divw r6,r11,r9
	ctx.r6.s32 = r11.s32 / ctx.r9.s32;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r8,r9,r11
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bge cr6,0x831878ac
	if (!cr6.lt) goto loc_831878AC;
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r7,r11,r8
	ctx.r7.u64 = r11.u64 + ctx.r8.u64;
	// lwz r11,24(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mullw r11,r11,r4
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// b 0x83187938
	goto loc_83187938;
loc_831878AC:
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r7,r8,r11
	ctx.r7.s32 = ctx.r8.s32 / r11.s32;
	// divw r9,r8,r11
	ctx.r9.s32 = ctx.r8.s32 / r11.s32;
	// mullw r11,r7,r11
	r11.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
	// lwz r11,24(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r11,r11,r4
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// b 0x83187938
	goto loc_83187938;
loc_831878D8:
	// lis r9,-30584
	ctx.r9.s64 = -2004353024;
	// divw r10,r11,r31
	ctx.r10.s32 = r11.s32 / r31.s32;
	// ori r9,r9,34953
	ctx.r9.u64 = ctx.r9.u64 | 34953;
	// divw r7,r11,r31
	ctx.r7.s32 = r11.s32 / r31.s32;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mulhw r9,r10,r9
	ctx.r9.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32)) >> 32;
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r31.s32);
	// li r8,60
	ctx.r8.s64 = 60;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r7,r7,r11
	ctx.r7.s64 = r11.s64 - ctx.r7.s64;
	// divw r11,r10,r8
	r11.s32 = ctx.r10.s32 / ctx.r8.s32;
	// srawi r9,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 5;
	// divw r5,r11,r8
	ctx.r5.s32 = r11.s32 / ctx.r8.s32;
	// mulhw r8,r11,r6
	ctx.r8.s64 = (int64_t(r11.s32) * int64_t(ctx.r6.s32)) >> 32;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r8,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// mulli r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 * 60;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r10,r8,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_83187938:
	// stw r5,8(r25)
	PPC_STORE_U32(r25.u32 + 8, ctx.r5.u32);
	// stw r11,12(r25)
	PPC_STORE_U32(r25.u32 + 12, r11.u32);
	// stw r9,16(r25)
	PPC_STORE_U32(r25.u32 + 16, ctx.r9.u32);
	// stw r7,20(r25)
	PPC_STORE_U32(r25.u32 + 20, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83187950"))) PPC_WEAK_FUNC(sub_83187950);
PPC_FUNC_IMPL(__imp__sub_83187950) {
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
	// mflr r12
	// bl 0x831b0b20
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lhz r10,30(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// lhz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// li r30,60
	r30.s64 = 60;
	// addi r9,r11,-15532
	ctx.r9.s64 = r11.s64 + -15532;
	// lwz r31,24(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// extsh r11,r10
	r11.s64 = ctx.r10.s16;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r26,r29,2,0,29
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-30584
	r11.s64 = -2004353024;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r11,r11,34953
	r11.u64 = r11.u64 | 34953;
	// lwzx r9,r26,r9
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + ctx.r9.u32);
	// mr r28,r11
	r28.u64 = r11.u64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// srawi r11,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r11.s64 = ctx.r10.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// srawi r31,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r31.s64 = ctx.r10.s32 >> 1;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// divw r11,r8,r9
	r11.s32 = ctx.r8.s32 / ctx.r9.s32;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// addze r5,r31
	temp.s64 = r31.s64 + xer.ca;
	xer.ca = temp.u32 < r31.u32;
	ctx.r5.s64 = temp.s64;
	// divw r31,r8,r9
	r31.s32 = ctx.r8.s32 / ctx.r9.s32;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r9,r31,r9
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// subf r31,r5,r10
	r31.s64 = ctx.r10.s64 - ctx.r5.s64;
	// divw r10,r11,r30
	ctx.r10.s32 = r11.s32 / r30.s32;
	// subf r5,r9,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// divw r9,r10,r30
	ctx.r9.s32 = ctx.r10.s32 / r30.s32;
	// mulhw r8,r10,r27
	ctx.r8.s64 = (int64_t(ctx.r10.s32) * int64_t(r27.s32)) >> 32;
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mulhw r9,r11,r28
	ctx.r9.s64 = (int64_t(r11.s32) * int64_t(r28.s32)) >> 32;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r9,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 5;
	// srawi r8,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mulli r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 * 60;
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// rlwinm r11,r8,1,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// beq cr6,0x83187a7c
	if (cr6.eq) goto loc_83187A7C;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83187a7c
	if (!cr6.eq) goto loc_83187A7C;
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// ori r10,r10,26215
	ctx.r10.u64 = ctx.r10.u64 | 26215;
	// mulhw r10,r11,r10
	ctx.r10.s64 = (int64_t(r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83187a7c
	if (cr0.eq) goto loc_83187A7C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83187a78
	if (cr6.eq) goto loc_83187A78;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83187a7c
	if (!cr6.eq) goto loc_83187A7C;
loc_83187A78:
	// li r5,2
	ctx.r5.s64 = 2;
loc_83187A7C:
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// stw r5,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r5.u32);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// sth r31,30(r4)
	PPC_STORE_U16(ctx.r4.u32 + 30, r31.u16);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83187AA0"))) PPC_WEAK_FUNC(sub_83187AA0);
PPC_FUNC_IMPL(__imp__sub_83187AA0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,3464
	r11.s64 = ctx.r3.s64 + 3464;
	// addi r31,r11,60
	r31.s64 = r11.s64 + 60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83187b3c
	if (!cr6.eq) goto loc_83187B3C;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83187AD4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83187ad4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83187AD4;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// bl 0x83184378
	sub_83184378(ctx, base);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83187B10:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83187b10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83187B10;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_83187B3C:
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

__attribute__((alias("__imp__sub_83187B50"))) PPC_WEAK_FUNC(sub_83187B50);
PPC_FUNC_IMPL(__imp__sub_83187B50) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,3464
	r31.s64 = ctx.r3.s64 + 3464;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// addi r29,r31,104
	r29.s64 = r31.s64 + 104;
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83187B78:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83187b78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83187B78;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83184378
	sub_83184378(ctx, base);
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83187BAC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83187bac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83187BAC;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83187c00
	if (cr6.gt) goto loc_83187C00;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_83187C00:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83187C08"))) PPC_WEAK_FUNC(sub_83187C08);
PPC_FUNC_IMPL(__imp__sub_83187C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// lbz r11,84(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// sth r10,30(r4)
	PPC_STORE_U16(ctx.r4.u32 + 30, ctx.r10.u16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// sth r11,28(r4)
	PPC_STORE_U16(ctx.r4.u32 + 28, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187C58"))) PPC_WEAK_FUNC(sub_83187C58);
PPC_FUNC_IMPL(__imp__sub_83187C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187C90"))) PPC_WEAK_FUNC(sub_83187C90);
PPC_FUNC_IMPL(__imp__sub_83187C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,6088(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6088);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83187cb0
	if (cr6.eq) goto loc_83187CB0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x83187cb8
	goto loc_83187CB8;
loc_83187CB0:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x83187cc0
	if (cr6.eq) goto loc_83187CC0;
loc_83187CB8:
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_83187CC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187CC8"))) PPC_WEAK_FUNC(sub_83187CC8);
PPC_FUNC_IMPL(__imp__sub_83187CC8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r31,6088(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 6088);
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83187d48
	if (cr6.eq) goto loc_83187D48;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8319b3c0
	sub_8319B3C0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83187d18
	if (!cr6.eq) goto loc_83187D18;
	// li r29,5
	r29.s64 = 5;
	// b 0x83187d48
	goto loc_83187D48;
loc_83187D18:
	// lwz r11,3744(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 3744);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83187d38
	if (!cr6.eq) goto loc_83187D38;
	// li r4,73
	ctx.r4.s64 = 73;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83187d44
	if (cr6.eq) goto loc_83187D44;
loc_83187D38:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83187d48
	if (!cr6.eq) goto loc_83187D48;
loc_83187D44:
	// li r29,2
	r29.s64 = 2;
loc_83187D48:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x83187d74
	if (!cr6.eq) goto loc_83187D74;
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83187d64
	if (cr6.eq) goto loc_83187D64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83187d74
	if (!cr6.eq) goto loc_83187D74;
loc_83187D64:
	// li r11,2
	r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_83187D74:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83187D80"))) PPC_WEAK_FUNC(sub_83187D80);
PPC_FUNC_IMPL(__imp__sub_83187D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187D98"))) PPC_WEAK_FUNC(sub_83187D98);
PPC_FUNC_IMPL(__imp__sub_83187D98) {
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
	// addi r10,r11,3464
	ctx.r10.s64 = r11.s64 + 3464;
	// lwz r3,7728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 7728);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83187dcc
	if (!cr6.lt) goto loc_83187DCC;
loc_83187DB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83187DCC:
	// lwz r9,280(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83187db8
	if (!cr6.eq) goto loc_83187DB8;
	// lwz r6,232(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// lwz r5,228(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// lwz r4,7732(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 7732);
	// bl 0x83198398
	sub_83198398(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187E00"))) PPC_WEAK_FUNC(sub_83187E00);
PPC_FUNC_IMPL(__imp__sub_83187E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x83187e40
	if (cr6.eq) goto loc_83187E40;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x83187e30
	if (cr6.eq) goto loc_83187E30;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// beq cr6,0x83187e20
	if (cr6.eq) goto loc_83187E20;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83187E20:
	// lwz r11,2588(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2588);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_83187E30:
	// lwz r11,2584(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2584);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_83187E40:
	// lwz r11,2580(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2580);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187E50"))) PPC_WEAK_FUNC(sub_83187E50);
PPC_FUNC_IMPL(__imp__sub_83187E50) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83187ef0
	if (!cr6.eq) goto loc_83187EF0;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(r29.s32, 3, xer);
	// bne cr6,0x83187eb4
	if (!cr6.eq) goto loc_83187EB4;
	// lwz r11,2332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2332);
	// lwz r10,2328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2328);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8319b418
	sub_8319B418(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83187ef4
	if (cr6.eq) goto loc_83187EF4;
	// lwz r11,2400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2400);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,2400(r31)
	PPC_STORE_U32(r31.u32 + 2400, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83187EB4:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x83187ef0
	if (!cr6.eq) goto loc_83187EF0;
	// lwz r11,2332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2332);
	// lwz r10,2328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2328);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8319b6c8
	sub_8319B6C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83187ef4
	if (cr6.eq) goto loc_83187EF4;
	// lwz r11,2404(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2404);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,2404(r31)
	PPC_STORE_U32(r31.u32 + 2404, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83187EF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83187EF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83187F00"))) PPC_WEAK_FUNC(sub_83187F00);
PPC_FUNC_IMPL(__imp__sub_83187F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,2744(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2744);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r11,2740(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2740);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187F18"))) PPC_WEAK_FUNC(sub_83187F18);
PPC_FUNC_IMPL(__imp__sub_83187F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,3464
	r11.s64 = ctx.r3.s64 + 3464;
	// addi r4,r11,192
	ctx.r4.s64 = r11.s64 + 192;
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 316);
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r3,r11,236
	ctx.r3.s64 = r11.s64 + 236;
	// li r5,44
	ctx.r5.s64 = 44;
	// b 0x831b0ed0
	sub_831B0ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83187F3C"))) PPC_WEAK_FUNC(sub_83187F3C);
PPC_FUNC_IMPL(__imp__sub_83187F3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187F40"))) PPC_WEAK_FUNC(sub_83187F40);
PPC_FUNC_IMPL(__imp__sub_83187F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r30,6088(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 6088);
	// lwz r11,240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831880f0
	if (cr6.eq) goto loc_831880F0;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_83187F70:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sth r11,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, r11.u16);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// sth r11,14(r10)
	PPC_STORE_U16(ctx.r10.u32 + 14, r11.u16);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// sth r11,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, r11.u16);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// sth r11,18(r10)
	PPC_STORE_U16(ctx.r10.u32 + 18, r11.u16);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// ld r10,256(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 256);
	// std r10,232(r11)
	PPC_STORE_U64(r11.u32 + 232, ctx.r10.u64);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,52(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// stw r10,244(r11)
	PPC_STORE_U32(r11.u32 + 244, ctx.r10.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 104);
	// stw r10,248(r11)
	PPC_STORE_U32(r11.u32 + 248, ctx.r10.u32);
	// lwz r11,56(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 56);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bne cr6,0x83188148
	if (!cr6.eq) goto loc_83188148;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83188010
	if (cr6.eq) goto loc_83188010;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83188034
	if (!cr6.eq) goto loc_83188034;
loc_83188010:
	// lwz r11,240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83188034
	if (!cr6.eq) goto loc_83188034;
	// lwz r3,232(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// bl 0x83190978
	sub_83190978(ctx, base);
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// stw r11,232(r30)
	PPC_STORE_U32(r30.u32 + 232, r11.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,236(r30)
	PPC_STORE_U32(r30.u32 + 236, r11.u32);
loc_83188034:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// addi r9,r10,15
	ctx.r9.s64 = ctx.r10.s64 + 15;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r11,127
	ctx.r10.s64 = r11.s64 + 127;
	// srawi r10,r10,7
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 7;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r8,r10,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// sth r8,14(r31)
	PPC_STORE_U16(r31.u32 + 14, ctx.r8.u16);
	// srawi r9,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// rlwinm r7,r11,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// sth r7,12(r31)
	PPC_STORE_U16(r31.u32 + 12, ctx.r7.u16);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// lwz r9,232(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// sth r8,30(r31)
	PPC_STORE_U16(r31.u32 + 30, ctx.r8.u16);
	// sth r7,28(r31)
	PPC_STORE_U16(r31.u32 + 28, ctx.r7.u16);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lwz r9,236(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x831881d8
	goto loc_831881D8;
loc_831880F0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83190870
	sub_83190870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// bne cr6,0x83187f70
	if (!cr6.eq) goto loc_83187F70;
	// li r11,1
	r11.s64 = 1;
	// stw r11,2428(r27)
	PPC_STORE_U32(r27.u32 + 2428, r11.u32);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r3,-21428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318813c
	if (cr6.eq) goto loc_8318813C;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-4328
	r11.s64 = r11.s64 + -4328;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318813C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83188148:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83188158
	if (cr6.eq) goto loc_83188158;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83188178
	if (!cr6.eq) goto loc_83188178;
loc_83188158:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r11,192(r30)
	PPC_STORE_U32(r30.u32 + 192, r11.u32);
	// stw r10,196(r30)
	PPC_STORE_U32(r30.u32 + 196, ctx.r10.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,236(r30)
	PPC_STORE_U32(r30.u32 + 236, r11.u32);
loc_83188178:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r9,r30,200
	ctx.r9.s64 = r30.s64 + 200;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_831881D8:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// addi r10,r10,104
	ctx.r10.s64 = ctx.r10.s64 + 104;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// sth r11,64(r31)
	PPC_STORE_U16(r31.u32 + 64, r11.u16);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r11,2428(r27)
	PPC_STORE_U32(r27.u32 + 2428, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83188210"))) PPC_WEAK_FUNC(sub_83188210);
PPC_FUNC_IMPL(__imp__sub_83188210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x83188280
	if (!cr6.eq) goto loc_83188280;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83188264
	if (cr6.eq) goto loc_83188264;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x83188280
	if (!cr6.eq) goto loc_83188280;
	// lwz r11,236(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	// lwz r10,232(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,236(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	// lwz r10,232(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
loc_83188264:
	// lwz r11,232(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,232(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
loc_83188280:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188290"))) PPC_WEAK_FUNC(sub_83188290);
PPC_FUNC_IMPL(__imp__sub_83188290) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r30,r8,3464
	r30.s64 = ctx.r8.s64 + 3464;
	// addi r31,r30,280
	r31.s64 = r30.s64 + 280;
	// addi r11,r30,192
	r11.s64 = r30.s64 + 192;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83188364
	if (!cr6.eq) goto loc_83188364;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_831882D0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x831882d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831882D0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83187c90
	sub_83187C90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83188310
	if (!cr6.eq) goto loc_83188310;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83187e00
	sub_83187E00(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83188310
	if (!cr6.eq) goto loc_83188310;
	// li r11,0
	r11.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
loc_83188310:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83184378
	sub_83184378(ctx, base);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83188330:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83188330
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83188330;
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_83188364:
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

__attribute__((alias("__imp__sub_83188380"))) PPC_WEAK_FUNC(sub_83188380);
PPC_FUNC_IMPL(__imp__sub_83188380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// addi r11,r3,3464
	r11.s64 = ctx.r3.s64 + 3464;
	// stw r10,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r10.u32);
	// lwz r8,316(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 316);
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 356);
	// lwz r9,60(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,60(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r9,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r9.u32);
	// lwz r9,356(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 356);
	// lwz r8,60(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r9.u32);
	// lwz r9,648(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 648);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r10,648(r11)
	PPC_STORE_U32(r11.u32 + 648, ctx.r10.u32);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r10,652(r11)
	PPC_STORE_U32(r11.u32 + 652, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831883E0"))) PPC_WEAK_FUNC(sub_831883E0);
PPC_FUNC_IMPL(__imp__sub_831883E0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_83188430"))) PPC_WEAK_FUNC(sub_83188430);
PPC_FUNC_IMPL(__imp__sub_83188430) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,6096(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6096);
	// b 0x83197340
	sub_83197340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83188440"))) PPC_WEAK_FUNC(sub_83188440);
PPC_FUNC_IMPL(__imp__sub_83188440) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,6096(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6096);
	// bl 0x83196848
	sub_83196848(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83188488
	if (cr6.eq) goto loc_83188488;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83196e58
	sub_83196E58(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r3,2464(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 2464);
	// bl 0x83196ad0
	sub_83196AD0(ctx, base);
	// std r3,2464(r31)
	PPC_STORE_U64(r31.u32 + 2464, ctx.r3.u64);
loc_83188488:
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

__attribute__((alias("__imp__sub_831884A0"))) PPC_WEAK_FUNC(sub_831884A0);
PPC_FUNC_IMPL(__imp__sub_831884A0) {
	PPC_FUNC_PROLOGUE();
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x8319ba18
	sub_8319BA18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831884B0"))) PPC_WEAK_FUNC(sub_831884B0);
PPC_FUNC_IMPL(__imp__sub_831884B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,-3
	cr6.compare<int32_t>(ctx.r4.s32, -3, xer);
	// blt cr6,0x831884c8
	if (cr6.lt) goto loc_831884C8;
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_831884C8:
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831884CC"))) PPC_WEAK_FUNC(sub_831884CC);
PPC_FUNC_IMPL(__imp__sub_831884CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831884D0"))) PPC_WEAK_FUNC(sub_831884D0);
PPC_FUNC_IMPL(__imp__sub_831884D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83198958
	sub_83198958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831884D8"))) PPC_WEAK_FUNC(sub_831884D8);
PPC_FUNC_IMPL(__imp__sub_831884D8) {
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
	// lwz r11,6088(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6088);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831884f8
	if (cr6.eq) goto loc_831884F8;
	// bl 0x8319bc88
	sub_8319BC88(ctx, base);
loc_831884F8:
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

__attribute__((alias("__imp__sub_83188510"))) PPC_WEAK_FUNC(sub_83188510);
PPC_FUNC_IMPL(__imp__sub_83188510) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3853
	ctx.r4.u64 = ctx.r4.u64 | 3853;
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83188520"))) PPC_WEAK_FUNC(sub_83188520);
PPC_FUNC_IMPL(__imp__sub_83188520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,104(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,108(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lwz r11,112(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// lwz r11,116(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r11.u32);
	// lwz r11,128(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, r11.u32);
	// lwz r11,68(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, r11.u32);
	// lwz r11,72(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, r11.u32);
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r11,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, r11.u32);
	// lwz r11,76(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, r11.u32);
	// lwz r11,80(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r11,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, r11.u32);
	// lwz r11,84(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r11,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, r11.u32);
	// lwz r11,88(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r11,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, r11.u32);
	// lwz r11,92(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r11,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, r11.u32);
	// lwz r11,96(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r11,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, r11.u32);
	// lwz r11,168(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// stw r11,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, r11.u32);
	// lwz r11,172(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// stw r11,64(r5)
	PPC_STORE_U32(ctx.r5.u32 + 64, r11.u32);
	// lwz r11,168(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,2
	r11.s64 = 2;
	// beq cr6,0x831885bc
	if (cr6.eq) goto loc_831885BC;
	// li r11,1
	r11.s64 = 1;
loc_831885BC:
	// stw r11,72(r5)
	PPC_STORE_U32(ctx.r5.u32 + 72, r11.u32);
	// ld r11,232(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 232);
	// std r11,80(r5)
	PPC_STORE_U64(ctx.r5.u32 + 80, r11.u64);
	// lwz r11,160(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// stw r11,88(r5)
	PPC_STORE_U32(ctx.r5.u32 + 88, r11.u32);
	// lwz r11,164(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// stw r11,92(r5)
	PPC_STORE_U32(ctx.r5.u32 + 92, r11.u32);
	// lwz r11,176(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// stw r11,96(r5)
	PPC_STORE_U32(ctx.r5.u32 + 96, r11.u32);
	// lwz r11,180(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// stw r11,100(r5)
	PPC_STORE_U32(ctx.r5.u32 + 100, r11.u32);
	// lhz r11,184(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 184);
	// sth r11,104(r5)
	PPC_STORE_U16(ctx.r5.u32 + 104, r11.u16);
	// lhz r11,186(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 186);
	// sth r11,106(r5)
	PPC_STORE_U16(ctx.r5.u32 + 106, r11.u16);
	// lbz r11,189(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 189);
	// stb r11,108(r5)
	PPC_STORE_U8(ctx.r5.u32 + 108, r11.u8);
	// lbz r11,190(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 190);
	// stb r11,109(r5)
	PPC_STORE_U8(ctx.r5.u32 + 109, r11.u8);
	// lbz r11,191(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 191);
	// stb r11,110(r5)
	PPC_STORE_U8(ctx.r5.u32 + 110, r11.u8);
	// lbz r11,193(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 193);
	// stb r11,111(r5)
	PPC_STORE_U8(ctx.r5.u32 + 111, r11.u8);
	// lbz r11,194(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 194);
	// stb r11,112(r5)
	PPC_STORE_U8(ctx.r5.u32 + 112, r11.u8);
	// lbz r11,195(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 195);
	// stb r11,113(r5)
	PPC_STORE_U8(ctx.r5.u32 + 113, r11.u8);
	// lbz r11,196(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 196);
	// stb r11,114(r5)
	PPC_STORE_U8(ctx.r5.u32 + 114, r11.u8);
	// lbz r11,197(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 197);
	// stb r11,115(r5)
	PPC_STORE_U8(ctx.r5.u32 + 115, r11.u8);
	// lbz r11,198(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 198);
	// stb r11,116(r5)
	PPC_STORE_U8(ctx.r5.u32 + 116, r11.u8);
	// lbz r11,199(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 199);
	// stb r11,117(r5)
	PPC_STORE_U8(ctx.r5.u32 + 117, r11.u8);
	// lbz r11,200(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 200);
	// stb r11,118(r5)
	PPC_STORE_U8(ctx.r5.u32 + 118, r11.u8);
	// lbz r11,201(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 201);
	// stb r11,119(r5)
	PPC_STORE_U8(ctx.r5.u32 + 119, r11.u8);
	// lbz r11,202(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 202);
	// stb r11,120(r5)
	PPC_STORE_U8(ctx.r5.u32 + 120, r11.u8);
	// lbz r11,203(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 203);
	// stb r11,121(r5)
	PPC_STORE_U8(ctx.r5.u32 + 121, r11.u8);
	// lbz r11,204(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 204);
	// stb r11,122(r5)
	PPC_STORE_U8(ctx.r5.u32 + 122, r11.u8);
	// lhz r11,252(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 252);
	// sth r11,124(r5)
	PPC_STORE_U16(ctx.r5.u32 + 124, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188680"))) PPC_WEAK_FUNC(sub_83188680);
PPC_FUNC_IMPL(__imp__sub_83188680) {
	PPC_FUNC_PROLOGUE();
	// b 0x83190f68
	sub_83190F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83188688"))) PPC_WEAK_FUNC(sub_83188688);
PPC_FUNC_IMPL(__imp__sub_83188688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,7720(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7720);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8318869c
	if (!cr6.eq) goto loc_8318869C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8318869C:
	// lwz r10,6088(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6088);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r3,r11,2768
	ctx.r3.s64 = r11.s64 + 2768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831886B8"))) PPC_WEAK_FUNC(sub_831886B8);
PPC_FUNC_IMPL(__imp__sub_831886B8) {
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
	// bl 0x82e71e58
	sub_82E71E58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831886d4
	if (cr6.eq) goto loc_831886D4;
loc_831886D0:
	// b 0x831886d0
	goto loc_831886D0;
loc_831886D4:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r4,r11,-20760
	ctx.r4.s64 = r11.s64 + -20760;
	// bl 0x83198ad8
	sub_83198AD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83188738
	if (cr6.eq) goto loc_83188738;
	// lis r11,-253
	r11.s64 = -16580608;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r11,r11,65285
	r11.u64 = r11.u64 | 65285;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x8318871c
	if (!cr6.eq) goto loc_8318871C;
	// ori r4,r4,3859
	ctx.r4.u64 = ctx.r4.u64 | 3859;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8318871C:
	// ori r4,r4,3841
	ctx.r4.u64 = ctx.r4.u64 | 3841;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83188738:
	// lis r11,-31975
	r11.s64 = -2095513600;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-31568
	ctx.r4.s64 = r11.s64 + -31568;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8319bd90
	sub_8319BD90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83188774
	if (cr6.eq) goto loc_83188774;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,3851
	ctx.r4.u64 = ctx.r4.u64 | 3851;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83188774:
	// bl 0x83190340
	sub_83190340(ctx, base);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-21392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21392, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188798"))) PPC_WEAK_FUNC(sub_83188798);
PPC_FUNC_IMPL(__imp__sub_83188798) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,6088(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 6088);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x83187588
	sub_83187588(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831887c8
	if (!cr6.eq) goto loc_831887C8;
loc_831887BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_831887C8:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831887e0
	if (cr6.eq) goto loc_831887E0;
	// lwz r11,248(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831887bc
	if (cr6.eq) goto loc_831887BC;
loc_831887E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8319b2c0
	sub_8319B2C0(ctx, base);
	// lis r11,3
	r11.s64 = 196608;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x831887bc
	if (cr6.eq) goto loc_831887BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831967d0
	sub_831967D0(ctx, base);
	// lwz r11,156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 156);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bge cr6,0x831887bc
	if (!cr6.lt) goto loc_831887BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194860
	sub_83194860(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831967d0
	sub_831967D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831967b0
	sub_831967B0(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x8318885c
	if (!cr6.lt) goto loc_8318885C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8318885C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83188868"))) PPC_WEAK_FUNC(sub_83188868);
PPC_FUNC_IMPL(__imp__sub_83188868) {
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
	// bl 0x831907c8
	sub_831907C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x8318889c
	if (cr6.eq) goto loc_8318889C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186ff0
	sub_83186FF0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831888c4
	if (cr6.eq) goto loc_831888C4;
loc_8318889C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83187070
	sub_83187070(ctx, base);
	// lwz r11,2384(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2384);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831888c4
	if (!cr6.eq) goto loc_831888C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
loc_831888C4:
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

__attribute__((alias("__imp__sub_831888D8"))) PPC_WEAK_FUNC(sub_831888D8);
PPC_FUNC_IMPL(__imp__sub_831888D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83188bf4
	if (cr6.eq) goto loc_83188BF4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x83188bf4
	if (cr6.eq) goto loc_83188BF4;
	// ble cr6,0x83188914
	if (!cr6.gt) goto loc_83188914;
	// subf r10,r11,r31
	ctx.r10.s64 = r31.s64 - r11.s64;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// ble cr6,0x83188bf4
	if (!cr6.gt) goto loc_83188BF4;
loc_83188914:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x83188974
	if (cr6.lt) goto loc_83188974;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x83188974
	if (!cr6.lt) goto loc_83188974;
	// subf r10,r10,r31
	ctx.r10.s64 = r31.s64 - ctx.r10.s64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x831889a0
	if (!cr6.gt) goto loc_831889A0;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bgt cr6,0x83188bf4
	if (cr6.gt) goto loc_83188BF4;
	// subfic r5,r30,4
	xer.ca = r30.u32 <= 4;
	ctx.r5.s64 = 4 - r30.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r3,r30,r11
	ctx.r3.s64 = r11.s64 - r30.s64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// b 0x831889a8
	goto loc_831889A8;
loc_83188974:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x83188bf4
	if (cr6.lt) goto loc_83188BF4;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x83188bf4
	if (!cr6.lt) goto loc_83188BF4;
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addic. r11,r11,4
	xer.ca = r11.u32 > 4294967291;
	r11.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x83188bf4
	if (cr0.gt) goto loc_83188BF4;
loc_831889A0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_831889A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
	// addi r11,r3,-4
	r11.s64 = ctx.r3.s64 + -4;
	// cmplwi cr6,r11,124
	cr6.compare<uint32_t>(r11.u32, 124, xer);
	// bgt cr6,0x83188bf4
	if (cr6.gt) goto loc_83188BF4;
	// lis r12,-31975
	r12.s64 = -2095513600;
	// addi r12,r12,-30252
	r12.s64 = r12.s64 + -30252;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_83188C00;
	case 1:
		goto loc_83188BF4;
	case 2:
		goto loc_83188BF4;
	case 3:
		goto loc_83188BF4;
	case 4:
		goto loc_83188BC8;
	case 5:
		goto loc_83188BF4;
	case 6:
		goto loc_83188BF4;
	case 7:
		goto loc_83188BF4;
	case 8:
		goto loc_83188BF4;
	case 9:
		goto loc_83188BF4;
	case 10:
		goto loc_83188BF4;
	case 11:
		goto loc_83188BF4;
	case 12:
		goto loc_83188BF4;
	case 13:
		goto loc_83188BF4;
	case 14:
		goto loc_83188BF4;
	case 15:
		goto loc_83188BF4;
	case 16:
		goto loc_83188BF4;
	case 17:
		goto loc_83188BF4;
	case 18:
		goto loc_83188BF4;
	case 19:
		goto loc_83188BF4;
	case 20:
		goto loc_83188BF4;
	case 21:
		goto loc_83188BF4;
	case 22:
		goto loc_83188BF4;
	case 23:
		goto loc_83188BF4;
	case 24:
		goto loc_83188BF4;
	case 25:
		goto loc_83188BF4;
	case 26:
		goto loc_83188BF4;
	case 27:
		goto loc_83188BF4;
	case 28:
		goto loc_83188BF4;
	case 29:
		goto loc_83188BF4;
	case 30:
		goto loc_83188BF4;
	case 31:
		goto loc_83188BF4;
	case 32:
		goto loc_83188BF4;
	case 33:
		goto loc_83188BF4;
	case 34:
		goto loc_83188BF4;
	case 35:
		goto loc_83188BF4;
	case 36:
		goto loc_83188BF4;
	case 37:
		goto loc_83188BF4;
	case 38:
		goto loc_83188BF4;
	case 39:
		goto loc_83188BF4;
	case 40:
		goto loc_83188BF4;
	case 41:
		goto loc_83188BF4;
	case 42:
		goto loc_83188BF4;
	case 43:
		goto loc_83188BF4;
	case 44:
		goto loc_83188BF4;
	case 45:
		goto loc_83188BF4;
	case 46:
		goto loc_83188BF4;
	case 47:
		goto loc_83188BF4;
	case 48:
		goto loc_83188BF4;
	case 49:
		goto loc_83188BF4;
	case 50:
		goto loc_83188BF4;
	case 51:
		goto loc_83188BF4;
	case 52:
		goto loc_83188BF4;
	case 53:
		goto loc_83188BF4;
	case 54:
		goto loc_83188BF4;
	case 55:
		goto loc_83188BF4;
	case 56:
		goto loc_83188BF4;
	case 57:
		goto loc_83188BF4;
	case 58:
		goto loc_83188BF4;
	case 59:
		goto loc_83188BF4;
	case 60:
		goto loc_83188C2C;
	case 61:
		goto loc_83188BF4;
	case 62:
		goto loc_83188BF4;
	case 63:
		goto loc_83188BF4;
	case 64:
		goto loc_83188BF4;
	case 65:
		goto loc_83188BF4;
	case 66:
		goto loc_83188BF4;
	case 67:
		goto loc_83188BF4;
	case 68:
		goto loc_83188BF4;
	case 69:
		goto loc_83188BF4;
	case 70:
		goto loc_83188BF4;
	case 71:
		goto loc_83188BF4;
	case 72:
		goto loc_83188BF4;
	case 73:
		goto loc_83188BF4;
	case 74:
		goto loc_83188BF4;
	case 75:
		goto loc_83188BF4;
	case 76:
		goto loc_83188BF4;
	case 77:
		goto loc_83188BF4;
	case 78:
		goto loc_83188BF4;
	case 79:
		goto loc_83188BF4;
	case 80:
		goto loc_83188BF4;
	case 81:
		goto loc_83188BF4;
	case 82:
		goto loc_83188BF4;
	case 83:
		goto loc_83188BF4;
	case 84:
		goto loc_83188BF4;
	case 85:
		goto loc_83188BF4;
	case 86:
		goto loc_83188BF4;
	case 87:
		goto loc_83188BF4;
	case 88:
		goto loc_83188BF4;
	case 89:
		goto loc_83188BF4;
	case 90:
		goto loc_83188BF4;
	case 91:
		goto loc_83188BF4;
	case 92:
		goto loc_83188BF4;
	case 93:
		goto loc_83188BF4;
	case 94:
		goto loc_83188BF4;
	case 95:
		goto loc_83188BF4;
	case 96:
		goto loc_83188BF4;
	case 97:
		goto loc_83188BF4;
	case 98:
		goto loc_83188BF4;
	case 99:
		goto loc_83188BF4;
	case 100:
		goto loc_83188BF4;
	case 101:
		goto loc_83188BF4;
	case 102:
		goto loc_83188BF4;
	case 103:
		goto loc_83188BF4;
	case 104:
		goto loc_83188BF4;
	case 105:
		goto loc_83188BF4;
	case 106:
		goto loc_83188BF4;
	case 107:
		goto loc_83188BF4;
	case 108:
		goto loc_83188BF4;
	case 109:
		goto loc_83188BF4;
	case 110:
		goto loc_83188BF4;
	case 111:
		goto loc_83188BF4;
	case 112:
		goto loc_83188BF4;
	case 113:
		goto loc_83188BF4;
	case 114:
		goto loc_83188BF4;
	case 115:
		goto loc_83188BF4;
	case 116:
		goto loc_83188BF4;
	case 117:
		goto loc_83188BF4;
	case 118:
		goto loc_83188BF4;
	case 119:
		goto loc_83188BF4;
	case 120:
		goto loc_83188BF4;
	case 121:
		goto loc_83188BF4;
	case 122:
		goto loc_83188BF4;
	case 123:
		goto loc_83188BF4;
	case 124:
		goto loc_83188C2C;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-29696(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29696);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29752(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29752);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29652(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29652);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29708(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29708);
	// lwz r24,-29652(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -29652);
loc_83188BC8:
	// rlwinm r11,r28,0,25,25
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83188c2c
	if (cr6.eq) goto loc_83188C2C;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83187138
	sub_83187138(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83188bf4
	if (cr6.eq) goto loc_83188BF4;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bne cr6,0x83188c2c
	if (!cr6.eq) goto loc_83188C2C;
loc_83188BF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83188C00:
	// andi. r11,r28,72
	r11.u64 = r28.u64 & 72;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83188c2c
	if (cr6.eq) goto loc_83188C2C;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83187138
	sub_83187138(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83188bf4
	if (cr6.eq) goto loc_83188BF4;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// beq cr6,0x83188bf4
	if (cr6.eq) goto loc_83188BF4;
loc_83188C2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83188C38"))) PPC_WEAK_FUNC(sub_83188C38);
PPC_FUNC_IMPL(__imp__sub_83188C38) {
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
	// addi r31,r3,3464
	r31.s64 = ctx.r3.s64 + 3464;
	// addi r11,r31,104
	r11.s64 = r31.s64 + 104;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83188c74
	if (!cr6.eq) goto loc_83188C74;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83188C74:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x83187950
	sub_83187950(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// bl 0x83184378
	sub_83184378(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
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

__attribute__((alias("__imp__sub_83188CB8"))) PPC_WEAK_FUNC(sub_83188CB8);
PPC_FUNC_IMPL(__imp__sub_83188CB8) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
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
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x83188d64
	if (!cr6.eq) goto loc_83188D64;
loc_83188D00:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// bne cr6,0x83188d64
	if (!cr6.eq) goto loc_83188D64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83187538
	sub_83187538(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x83188d00
	if (cr6.eq) goto loc_83188D00;
loc_83188D64:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_83188D98"))) PPC_WEAK_FUNC(sub_83188D98);
PPC_FUNC_IMPL(__imp__sub_83188D98) {
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
	// cmpwi cr6,r5,128
	cr6.compare<int32_t>(ctx.r5.s32, 128, xer);
	// bne cr6,0x83188dc0
	if (!cr6.eq) goto loc_83188DC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83188DC0:
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bgt cr6,0x83188dd8
	if (cr6.gt) goto loc_83188DD8;
	// bl 0x83187588
	sub_83187588(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x83188ddc
	if (cr6.eq) goto loc_83188DDC;
loc_83188DD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83188DDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188DF0"))) PPC_WEAK_FUNC(sub_83188DF0);
PPC_FUNC_IMPL(__imp__sub_83188DF0) {
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
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lwz r29,20(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-15936
	r11.s64 = r11.s64 + -15936;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// ld r9,336(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 336);
	// li r27,0
	r27.s64 = 0;
	// cmpdi cr6,r9,0
	cr6.compare<int64_t>(ctx.r9.s64, 0, xer);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bge cr6,0x83188e4c
	if (!cr6.lt) goto loc_83188E4C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83187608
	sub_83187608(ctx, base);
	// ld r11,0(r6)
	r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bgt cr6,0x83188e48
	if (cr6.gt) goto loc_83188E48;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_83188E48:
	// std r11,336(r30)
	PPC_STORE_U64(r30.u32 + 336, r11.u64);
loc_83188E4C:
	// ld r11,0(r6)
	r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 336);
	// subf r28,r10,r11
	r28.s64 = r11.s64 - ctx.r10.s64;
	// cmpdi cr6,r28,0
	cr6.compare<int64_t>(r28.s64, 0, xer);
	// bgt cr6,0x83188e64
	if (cr6.gt) goto loc_83188E64;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_83188E64:
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
loc_83188E74:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r26,0(r10)
	r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r3,r26,r3
	ctx.r3.s64 = ctx.r3.s64 - r26.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83188e94
	if (!cr0.eq) goto loc_83188E94;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bne cr6,0x83188e74
	if (!cr6.eq) goto loc_83188E74;
loc_83188E94:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83188ef4
	if (cr6.eq) goto loc_83188EF4;
	// ld r11,0(r6)
	r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r11.u64);
	// ld r11,8(r6)
	r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, r11.u64);
	// lwz r11,24(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x83188edc
	if (!cr6.eq) goto loc_83188EDC;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// ld r11,0(r6)
	r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_83188EDC:
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ld r11,0(r6)
	r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_83188EF4:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x83188f18
	if (cr6.eq) goto loc_83188F18;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_83188F18:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bgt cr6,0x83188f30
	if (cr6.gt) goto loc_83188F30;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_83188F30:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x83187608
	sub_83187608(ctx, base);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// bgt cr6,0x83188f50
	if (cr6.gt) goto loc_83188F50;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_83188F50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83188F58"))) PPC_WEAK_FUNC(sub_83188F58);
PPC_FUNC_IMPL(__imp__sub_83188F58) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r6,r30,3464
	ctx.r6.s64 = r30.s64 + 3464;
	// addi r4,r6,28
	ctx.r4.s64 = ctx.r6.s64 + 28;
	// lwz r31,6088(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 6088);
	// addi r8,r6,1232
	ctx.r8.s64 = ctx.r6.s64 + 1232;
	// bl 0x83187c08
	sub_83187C08(ctx, base);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83188fb8
	if (cr6.eq) goto loc_83188FB8;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r11,64
	r11.s64 = 64;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_83188F9C:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83188f9c
	if (!cr6.eq) goto loc_83188F9C;
	// sth r7,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r7.u16);
	// b 0x8318901c
	goto loc_8318901C;
loc_83188FB8:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83188fcc
	if (cr6.eq) goto loc_83188FCC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8318901c
	if (!cr6.eq) goto loc_8318901C;
loc_83188FCC:
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bge cr6,0x83188fe4
	if (!cr6.lt) goto loc_83188FE4;
	// addi r9,r9,1024
	ctx.r9.s64 = ctx.r9.s64 + 1024;
loc_83188FE4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x8318901c
	if (!cr6.lt) goto loc_8318901C;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_83188FF4:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// srawi r4,r10,6
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 6;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// rlwinm r4,r4,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r7,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u16);
	// blt cr6,0x83188ff4
	if (cr6.lt) goto loc_83188FF4;
loc_8318901C:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lhz r9,56(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 56);
	// srawi r10,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = r11.s32 >> 6;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// beq cr6,0x83189050
	if (cr6.eq) goto loc_83189050;
	// li r11,0
	r11.s64 = 0;
	// b 0x831890c4
	goto loc_831890C4;
loc_83189050:
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83189074
	if (!cr6.eq) goto loc_83189074;
	// lhz r9,2(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bne cr6,0x83189074
	if (!cr6.eq) goto loc_83189074;
	// li r11,0
	r11.s64 = 0;
	// sth r11,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, r11.u16);
	// b 0x831890c8
	goto loc_831890C8;
loc_83189074:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,63
	r11.s64 = r11.s64 + 63;
loc_8318907C:
	// srawi r9,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = r11.s32 >> 6;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// cmplwi cr6,r5,65535
	cr6.compare<uint32_t>(ctx.r5.u32, 65535, xer);
	// bne cr6,0x831890b0
	if (!cr6.eq) goto loc_831890B0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r7,64
	cr6.compare<int32_t>(ctx.r7.s32, 64, xer);
	// blt cr6,0x8318907c
	if (cr6.lt) goto loc_8318907C;
	// b 0x831890c8
	goto loc_831890C8;
loc_831890B0:
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// add r11,r9,r7
	r11.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_831890C4:
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
loc_831890C8:
	// lhz r11,2(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r11,58(r6)
	PPC_STORE_U16(ctx.r6.u32 + 58, r11.u16);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8318913c
	if (!cr6.eq) goto loc_8318913C;
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8318913c
	if (cr6.eq) goto loc_8318913C;
	// lwz r7,236(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r11,2(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r10,124(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 124);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// srawi r9,r10,6
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// sth r11,58(r10)
	PPC_STORE_U16(ctx.r10.u32 + 58, r11.u16);
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// bl 0x83187628
	sub_83187628(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// bl 0x83188380
	sub_83188380(ctx, base);
loc_8318913C:
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

__attribute__((alias("__imp__sub_83189158"))) PPC_WEAK_FUNC(sub_83189158);
PPC_FUNC_IMPL(__imp__sub_83189158) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r31,r10,3464
	r31.s64 = ctx.r10.s64 + 3464;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r30,20(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// beq cr6,0x831891a8
	if (cr6.eq) goto loc_831891A8;
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// blt cr6,0x831891a8
	if (cr6.lt) goto loc_831891A8;
	// addi r7,r31,28
	ctx.r7.s64 = r31.s64 + 28;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x83187770
	sub_83187770(ctx, base);
	// b 0x83189248
	goto loc_83189248;
loc_831891A8:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831891dc
	if (!cr6.eq) goto loc_831891DC;
	// lwz r11,7720(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7720);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83189248
	if (!cr6.eq) goto loc_83189248;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// b 0x83189248
	goto loc_83189248;
loc_831891DC:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x83189218
	if (cr6.eq) goto loc_83189218;
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x83187950
	sub_83187950(ctx, base);
	// srawi r10,r30,6
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3F) != 0);
	ctx.r10.s64 = r30.s32 >> 6;
	// lhz r11,58(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 58);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// sth r11,1234(r31)
	PPC_STORE_U16(r31.u32 + 1234, r11.u16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// sth r11,1234(r10)
	PPC_STORE_U16(ctx.r10.u32 + 1234, r11.u16);
	// b 0x83189248
	goto loc_83189248;
loc_83189218:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r7.u32);
	// stw r6,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r6.u32);
loc_83189248:
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

__attribute__((alias("__imp__sub_83189260"))) PPC_WEAK_FUNC(sub_83189260);
PPC_FUNC_IMPL(__imp__sub_83189260) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// bl 0x83188688
	sub_83188688(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831892fc
	if (cr6.eq) goto loc_831892FC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831892fc
	if (!cr6.eq) goto loc_831892FC;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// addi r28,r9,3464
	r28.s64 = ctx.r9.s64 + 3464;
	// cmpwi cr6,r11,512
	cr6.compare<int32_t>(r11.s32, 512, xer);
	// blt cr6,0x831892ac
	if (cr6.lt) goto loc_831892AC;
	// li r11,512
	r11.s64 = 512;
loc_831892AC:
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// stw r11,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, r11.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x83197348
	sub_83197348(ctx, base);
	// lis r11,3
	r11.s64 = 196608;
	// li r30,1
	r30.s64 = 1;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x831892dc
	if (!cr6.eq) goto loc_831892DC;
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x831892e4
	goto loc_831892E4;
loc_831892DC:
	// mulli r11,r29,50
	r11.s64 = r29.s64 * 50;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_831892E4:
	// addi r4,r28,60
	ctx.r4.s64 = r28.s64 + 60;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_831892FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83189308"))) PPC_WEAK_FUNC(sub_83189308);
PPC_FUNC_IMPL(__imp__sub_83189308) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r31,r30,3464
	r31.s64 = r30.s64 + 3464;
	// lwz r26,6088(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 6088);
	// lwz r11,280(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83189338
	if (!cr6.eq) goto loc_83189338;
	// li r29,0
	r29.s64 = 0;
	// b 0x8318934c
	goto loc_8318934C;
loc_83189338:
	// lwz r11,356(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
loc_8318934C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r28,232(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8318937c
	if (cr6.eq) goto loc_8318937C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
loc_8318937C:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x83189394
	if (!cr6.eq) goto loc_83189394;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83183ea8
	sub_83183EA8(ctx, base);
	// b 0x8318939c
	goto loc_8318939C;
loc_83189394:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// bne cr6,0x831893ac
	if (!cr6.eq) goto loc_831893AC;
loc_8318939C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83183f38
	sub_83183F38(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_831893AC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83184b28
	sub_83184B28(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x831893e8
	if (cr6.gt) goto loc_831893E8;
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r10,2724(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 2724);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x831893e8
	if (cr6.lt) goto loc_831893E8;
loc_831893DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
loc_831893E8:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831841e0
	sub_831841E0(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x831893dc
	if (cr6.lt) goto loc_831893DC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83187f00
	sub_83187F00(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mullw r11,r11,r28
	r11.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// subf r5,r11,r29
	ctx.r5.s64 = r29.s64 - r11.s64;
	// bl 0x83198398
	sub_83198398(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831893dc
	if (!cr6.eq) goto loc_831893DC;
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r26)
	PPC_STORE_U32(r26.u32 + 12, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83189460"))) PPC_WEAK_FUNC(sub_83189460);
PPC_FUNC_IMPL(__imp__sub_83189460) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r29,6088(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 6088);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x83187f18
	sub_83187F18(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313d058
	sub_8313D058(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8319bbd8
	sub_8319BBD8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313d058
	sub_8313D058(ctx, base);
	// subf r30,r27,r3
	r30.s64 = ctx.r3.s64 - r27.s64;
	// lis r6,-256
	ctx.r6.s64 = -16777216;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// ori r6,r6,3847
	ctx.r6.u64 = ctx.r6.u64 | 3847;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x83187590
	sub_83187590(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83187538
	sub_83187538(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x831894f4
	if (cr6.eq) goto loc_831894F4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_831894F4:
	// lbz r11,108(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83189508
	if (!cr6.eq) goto loc_83189508;
	// li r11,1
	r11.s64 = 1;
	// stw r11,244(r29)
	PPC_STORE_U32(r29.u32 + 244, r11.u32);
loc_83189508:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,44(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318bd00
	sub_8318BD00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83189528"))) PPC_WEAK_FUNC(sub_83189528);
PPC_FUNC_IMPL(__imp__sub_83189528) {
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
	// addi r4,r31,3656
	ctx.r4.s64 = r31.s64 + 3656;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83188380
	sub_83188380(ctx, base);
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

__attribute__((alias("__imp__sub_83189578"))) PPC_WEAK_FUNC(sub_83189578);
PPC_FUNC_IMPL(__imp__sub_83189578) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,6096(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 6096);
	// bl 0x83197030
	sub_83197030(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831895b0
	if (cr6.eq) goto loc_831895B0;
loc_831895A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831896b8
	goto loc_831896B8;
loc_831895B0:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831895a8
	if (cr6.eq) goto loc_831895A8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83187138
	sub_83187138(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83189648
	if (!cr6.eq) goto loc_83189648;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addic. r31,r11,-3
	xer.ca = r11.u32 > 2;
	r31.s64 = r11.s64 + -3;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bgt 0x831895ec
	if (cr0.gt) goto loc_831895EC;
loc_831895E8:
	// li r31,0
	r31.s64 = 0;
loc_831895EC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83188430
	sub_83188430(ctx, base);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r11,0
	r11.s64 = 0;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r7,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
loc_8318960C:
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// blt cr6,0x8318961c
	if (cr6.lt) goto loc_8318961C;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8318961C:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x831896a4
	if (!cr6.lt) goto loc_831896A4;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// add r10,r11,r8
	ctx.r10.u64 = r11.u64 + ctx.r8.u64;
	// blt cr6,0x83189634
	if (cr6.lt) goto loc_83189634;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + r11.u64;
loc_83189634:
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83189694
	if (!cr6.eq) goto loc_83189694;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x8318960c
	goto loc_8318960C;
loc_83189648:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bgt cr6,0x8318966c
	if (cr6.gt) goto loc_8318966C;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x8318966c
	if (!cr6.lt) goto loc_8318966C;
	// subf r31,r11,r3
	r31.s64 = ctx.r3.s64 - r11.s64;
	// b 0x831895ec
	goto loc_831895EC;
loc_8318966C:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bgt cr6,0x831895e8
	if (cr6.gt) goto loc_831895E8;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x831895e8
	if (!cr6.lt) goto loc_831895E8;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// add r31,r11,r9
	r31.u64 = r11.u64 + ctx.r9.u64;
	// b 0x831895ec
	goto loc_831895EC;
loc_83189694:
	// ld r10,2480(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 2480);
	// extsw r11,r31
	r11.s64 = r31.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// std r11,2480(r30)
	PPC_STORE_U64(r30.u32 + 2480, r11.u64);
loc_831896A4:
	// ld r10,2472(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 2472);
	// extsw r11,r31
	r11.s64 = r31.s32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// std r11,2472(r30)
	PPC_STORE_U64(r30.u32 + 2472, r11.u64);
loc_831896B8:
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

__attribute__((alias("__imp__sub_831896D0"))) PPC_WEAK_FUNC(sub_831896D0);
PPC_FUNC_IMPL(__imp__sub_831896D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83189780
	if (!cr6.gt) goto loc_83189780;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// li r25,5
	r25.s64 = 5;
	// li r26,1
	r26.s64 = 1;
	// li r27,-1
	r27.s64 = -1;
loc_83189700:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// sth r30,12(r31)
	PPC_STORE_U16(r31.u32 + 12, r30.u16);
	// sth r30,14(r31)
	PPC_STORE_U16(r31.u32 + 14, r30.u16);
	// sth r30,16(r31)
	PPC_STORE_U16(r31.u32 + 16, r30.u16);
	// sth r30,18(r31)
	PPC_STORE_U16(r31.u32 + 18, r30.u16);
	// stw r25,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r25.u32);
	// bl 0x83184ec0
	sub_83184EC0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r26,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r26.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r27,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r27.u32);
	// bl 0x831884a0
	sub_831884A0(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// std r27,232(r31)
	PPC_STORE_U64(r31.u32 + 232, r27.u64);
	// stw r30,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r30.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r30.u32);
	// sth r30,252(r31)
	PPC_STORE_U16(r31.u32 + 252, r30.u16);
	// addi r31,r31,256
	r31.s64 = r31.s64 + 256;
	// bne cr6,0x83189700
	if (!cr6.eq) goto loc_83189700;
loc_83189780:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83189788"))) PPC_WEAK_FUNC(sub_83189788);
PPC_FUNC_IMPL(__imp__sub_83189788) {
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
	// lwz r29,6088(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 6088);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831897dc
	if (cr6.eq) goto loc_831897DC;
	// bl 0x83190568
	sub_83190568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831884d0
	sub_831884D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831897d4
	if (cr6.eq) goto loc_831897D4;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,3852
	ctx.r4.u64 = ctx.r4.u64 | 3852;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831897D4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_831897DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831897E8"))) PPC_WEAK_FUNC(sub_831897E8);
PPC_FUNC_IMPL(__imp__sub_831897E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31975
	r11.s64 = -2095513600;
	// addi r6,r11,-31456
	ctx.r6.s64 = r11.s64 + -31456;
	// b 0x83190ea0
	sub_83190EA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831897F8"))) PPC_WEAK_FUNC(sub_831897F8);
PPC_FUNC_IMPL(__imp__sub_831897F8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x83188688
	sub_83188688(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83189890
	if (cr6.eq) goto loc_83189890;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83189890
	if (cr6.eq) goto loc_83189890;
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// lwz r29,0(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r30,3524
	ctx.r3.s64 = r30.s64 + 3524;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r31,r11,56
	r31.s64 = r11.s64 + 56;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lwz r11,512(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 512);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x8319af20
	sub_8319AF20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83189888
	if (cr6.eq) goto loc_83189888;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r4,r4,3867
	ctx.r4.u64 = ctx.r4.u64 | 3867;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_83189888:
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_83189890:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831898A0"))) PPC_WEAK_FUNC(sub_831898A0);
PPC_FUNC_IMPL(__imp__sub_831898A0) {
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
	// bl 0x831907b8
	sub_831907B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831898d8
	if (cr6.eq) goto loc_831898D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_831898D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186f58
	sub_83186F58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831898fc
	if (cr6.eq) goto loc_831898FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83188798
	sub_83188798(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x83189900
	if (!cr6.eq) goto loc_83189900;
loc_831898FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83189900:
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

__attribute__((alias("__imp__sub_83189918"))) PPC_WEAK_FUNC(sub_83189918);
PPC_FUNC_IMPL(__imp__sub_83189918) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r29,6096(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 6096);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// bl 0x83197030
	sub_83197030(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83189b38
	if (!cr6.eq) goto loc_83189B38;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83189b34
	if (cr6.eq) goto loc_83189B34;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,206
	ctx.r4.s64 = 206;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83187138
	sub_83187138(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x831899dc
	if (cr6.eq) goto loc_831899DC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831899a0
	if (cr6.eq) goto loc_831899A0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83187080
	sub_83187080(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// b 0x831899bc
	goto loc_831899BC;
loc_831899A0:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addic. r11,r11,-3
	xer.ca = r11.u32 > 2;
	r11.s64 = r11.s64 + -3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x831899b8
	if (!cr0.lt) goto loc_831899B8;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_831899B8:
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_831899BC:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83189b34
	if (!cr6.gt) goto loc_83189B34;
	// li r11,1
	r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b70
	return;
loc_831899DC:
	// lwz r27,88(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,4
	r11.s64 = 4;
	// rlwinm r10,r27,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// bne cr6,0x83189b34
	if (!cr6.eq) goto loc_83189B34;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83196728
	sub_83196728(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831888d8
	sub_831888D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83189a80
	if (cr6.eq) goto loc_83189A80;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83189a40
	if (!cr6.eq) goto loc_83189A40;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x83189a44
	goto loc_83189A44;
loc_83189A40:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_83189A44:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x83189ad0
	if (cr6.eq) goto loc_83189AD0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83187280
	sub_83187280(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x83196770
	sub_83196770(ctx, base);
loc_83189A80:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83189ad0
	if (cr6.eq) goto loc_83189AD0;
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83189ae0
	if (cr6.eq) goto loc_83189AE0;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x83189b20
	if (!cr6.eq) goto loc_83189B20;
	// rlwinm r11,r27,0,25,25
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83189b20
	if (cr6.eq) goto loc_83189B20;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83187138
	sub_83187138(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83189ad0
	if (cr6.eq) goto loc_83189AD0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x83189b20
	if (!cr6.eq) goto loc_83189B20;
loc_83189AD0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831870d8
	sub_831870D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b70
	return;
loc_83189AE0:
	// andi. r11,r27,72
	r11.u64 = r27.u64 & 72;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83189b20
	if (cr6.eq) goto loc_83189B20;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83187138
	sub_83187138(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83189b10
	if (cr6.eq) goto loc_83189B10;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x83189b20
	if (!cr6.eq) goto loc_83189B20;
loc_83189B10:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831870d8
	sub_831870D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b70
	return;
loc_83189B20:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83187080
	sub_83187080(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_83189B34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83189B38:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83189B40"))) PPC_WEAK_FUNC(sub_83189B40);
PPC_FUNC_IMPL(__imp__sub_83189B40) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r30,r31,3464
	r30.s64 = r31.s64 + 3464;
	// lwz r29,6088(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 6088);
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x83189c14
	if (!cr6.eq) goto loc_83189C14;
	// bl 0x83188c38
	sub_83188C38(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
loc_83189B78:
	// ble cr6,0x83189be4
	if (!cr6.gt) goto loc_83189BE4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831944c8
	sub_831944C8(ctx, base);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r10,r29,16
	ctx.r10.s64 = r29.s64 + 16;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r3,-21428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83189be4
	if (cr6.eq) goto loc_83189BE4;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-4216
	r11.s64 = r11.s64 + -4216;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// addi r10,r30,356
	ctx.r10.s64 = r30.s64 + 356;
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// addi r10,r30,352
	ctx.r10.s64 = r30.s64 + 352;
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83189BE4:
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// addi r3,r30,60
	ctx.r3.s64 = r30.s64 + 60;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x83184ec0
	sub_83184EC0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r30,104
	ctx.r3.s64 = r30.s64 + 104;
	// bl 0x83184ec0
	sub_83184EC0(ctx, base);
	// li r11,192
	r11.s64 = 192;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83189C14:
	// bl 0x83187480
	sub_83187480(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83189b78
	if (!cr6.lt) goto loc_83189B78;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83189C30"))) PPC_WEAK_FUNC(sub_83189C30);
PPC_FUNC_IMPL(__imp__sub_83189C30) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,-1
	r11.s64 = -1;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r26,6088(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 6088);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lwz r4,6096(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6096);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// std r11,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r11.u64);
	// beq cr6,0x83189ca0
	if (cr6.eq) goto loc_83189CA0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x831976b8
	sub_831976B8(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// blt cr6,0x83189ca0
	if (cr6.lt) goto loc_83189CA0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r26,160
	ctx.r4.s64 = r26.s64 + 160;
	// addi r3,r31,3464
	ctx.r3.s64 = r31.s64 + 3464;
	// bl 0x83188df0
	sub_83188DF0(ctx, base);
	// std r3,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r3.u64);
loc_83189CA0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83189CA8"))) PPC_WEAK_FUNC(sub_83189CA8);
PPC_FUNC_IMPL(__imp__sub_83189CA8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83189d24
	if (!cr6.eq) goto loc_83189D24;
	// cmpdi cr6,r29,0
	cr6.compare<int64_t>(r29.s64, 0, xer);
	// bge cr6,0x83189d10
	if (!cr6.lt) goto loc_83189D10;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83189d10
	if (cr6.eq) goto loc_83189D10;
	// lbz r11,87(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 87);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83189d10
	if (!cr6.eq) goto loc_83189D10;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x83189d40
	if (cr6.eq) goto loc_83189D40;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831876b0
	sub_831876B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83189d40
	if (cr6.eq) goto loc_83189D40;
loc_83189D10:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
	// b 0x83189d2c
	goto loc_83189D2C;
loc_83189D24:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83189d40
	if (!cr6.eq) goto loc_83189D40;
loc_83189D2C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83189158
	sub_83189158(ctx, base);
loc_83189D40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83189D48"))) PPC_WEAK_FUNC(sub_83189D48);
PPC_FUNC_IMPL(__imp__sub_83189D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r31,7992
	r11.s64 = r31.s64 + 7992;
	// addi r6,r9,15
	ctx.r6.s64 = ctx.r9.s64 + 15;
	// addi r7,r10,15
	ctx.r7.s64 = ctx.r10.s64 + 15;
	// lwz r30,6088(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 6088);
	// lwz r24,8056(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 8056);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r8,15
	ctx.r9.s64 = ctx.r8.s64 + 15;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// srawi r9,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 4;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 4;
	// addi r7,r10,127
	ctx.r7.s64 = ctx.r10.s64 + 127;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r3,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// addi r29,r8,127
	r29.s64 = ctx.r8.s64 + 127;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// addi r8,r8,127
	ctx.r8.s64 = ctx.r8.s64 + 127;
	// srawi r8,r8,7
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 7;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r8,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 4;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r6,r6,1
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r29,r29,7
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7F) != 0);
	r29.s64 = r29.s32 >> 7;
	// mullw r28,r6,r3
	r28.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// addze r27,r29
	temp.s64 = r29.s64 + xer.ca;
	xer.ca = temp.u32 < r29.u32;
	r27.s64 = temp.s64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// mullw r26,r27,r8
	r26.s64 = int64_t(r27.s32) * int64_t(ctx.r8.s32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
	// srawi r10,r10,7
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 7;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r6,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r7,r7,7
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 7;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// addi r7,r10,256
	ctx.r7.s64 = ctx.r10.s64 + 256;
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r9,r10,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// ble cr6,0x83189e58
	if (!cr6.gt) goto loc_83189E58;
loc_83189E40:
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,3863
	ctx.r4.u64 = ctx.r4.u64 | 3863;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
loc_83189E58:
	// lwz r25,32(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x83189e6c
	if (!cr6.eq) goto loc_83189E6C;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// b 0x83189f68
	goto loc_83189F68;
loc_83189E6C:
	// lwz r9,8120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8120);
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// blt cr6,0x83189f18
	if (cr6.lt) goto loc_83189F18;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r7,r7,15
	ctx.r7.s64 = ctx.r7.s64 + 15;
	// addi r6,r9,128
	ctx.r6.s64 = ctx.r9.s64 + 128;
	// srawi r7,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// addi r8,r8,15
	ctx.r8.s64 = ctx.r8.s64 + 15;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r5,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// rlwinm r23,r8,4,0,27
	r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// addi r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 + 127;
	// addi r5,r5,127
	ctx.r5.s64 = ctx.r5.s64 + 127;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// srawi r5,r5,7
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 7;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r23,r23,1
	xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	r23.s64 = r23.s32 >> 1;
	// addze r23,r23
	temp.s64 = r23.s64 + xer.ca;
	xer.ca = temp.u32 < r23.u32;
	r23.s64 = temp.s64;
	// srawi r22,r9,7
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	r22.s64 = ctx.r9.s32 >> 7;
	// mullw r9,r5,r23
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(r23.s32);
	// addze r5,r22
	temp.s64 = r22.s64 + xer.ca;
	xer.ca = temp.u32 < r22.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r8,r5,r8
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
loc_83189EF4:
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bgt cr6,0x83189f14
	if (cr6.gt) goto loc_83189F14;
	// lwz r8,8120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8120);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmpw cr6,r29,r8
	cr6.compare<int32_t>(r29.s32, ctx.r8.s32, xer);
	// ble cr6,0x83189ef4
	if (!cr6.gt) goto loc_83189EF4;
	// b 0x83189f18
	goto loc_83189F18;
loc_83189F14:
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
loc_83189F18:
	// cmpw cr6,r29,r4
	cr6.compare<int32_t>(r29.s32, ctx.r4.s32, xer);
	// blt cr6,0x83189e40
	if (cr6.lt) goto loc_83189E40;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// addi r8,r10,128
	ctx.r8.s64 = ctx.r10.s64 + 128;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + r11.u64;
	// stw r11,8028(r31)
	PPC_STORE_U32(r31.u32 + 8028, r11.u32);
	// stw r10,8032(r31)
	PPC_STORE_U32(r31.u32 + 8032, ctx.r10.u32);
	// ble cr6,0x83189f68
	if (!cr6.gt) goto loc_83189F68;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_83189F4C:
	// lwz r7,8036(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8036);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stwx r10,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x83189f4c
	if (!cr6.eq) goto loc_83189F4C;
loc_83189F68:
	// rlwinm r11,r27,7,0,24
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r9,r26,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r8,r28,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 7) & 0xFFFFFF80;
	// addi r4,r31,8028
	ctx.r4.s64 = r31.s64 + 8028;
	// sth r11,214(r30)
	PPC_STORE_U16(r30.u32 + 214, r11.u16);
	// sth r10,212(r30)
	PPC_STORE_U16(r30.u32 + 212, ctx.r10.u16);
	// lwz r7,8028(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8028);
	// sth r11,230(r30)
	PPC_STORE_U16(r30.u32 + 230, r11.u16);
	// add r11,r9,r7
	r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// sth r10,228(r30)
	PPC_STORE_U16(r30.u32 + 228, ctx.r10.u16);
	// add r10,r11,r8
	ctx.r10.u64 = r11.u64 + ctx.r8.u64;
	// stw r7,208(r30)
	PPC_STORE_U32(r30.u32 + 208, ctx.r7.u32);
	// stw r11,200(r30)
	PPC_STORE_U32(r30.u32 + 200, r11.u32);
	// stw r10,204(r30)
	PPC_STORE_U32(r30.u32 + 204, ctx.r10.u32);
	// lwz r11,8032(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8032);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,224(r30)
	PPC_STORE_U32(r30.u32 + 224, r11.u32);
	// add r11,r10,r8
	r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,216(r30)
	PPC_STORE_U32(r30.u32 + 216, ctx.r10.u32);
	// stw r11,220(r30)
	PPC_STORE_U32(r30.u32 + 220, r11.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// lwz r11,8120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8120);
	// bne cr6,0x8318a030
	if (!cr6.eq) goto loc_8318A030;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83189fe4
	if (cr6.lt) goto loc_83189FE4;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_83189FE4:
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,8040(r31)
	PPC_STORE_U32(r31.u32 + 8040, r11.u32);
	// bl 0x831896d0
	sub_831896D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,8036(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8036);
	// addi r3,r24,512
	ctx.r3.s64 = r24.s64 + 512;
	// bl 0x831896d0
	sub_831896D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83190870
	sub_83190870(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,232(r30)
	PPC_STORE_U32(r30.u32 + 232, r11.u32);
	// bl 0x83190870
	sub_83190870(ctx, base);
	// stw r3,236(r30)
	PPC_STORE_U32(r30.u32 + 236, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
loc_8318A030:
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8318a03c
	if (cr6.lt) goto loc_8318A03C;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_8318A03C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,8036(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8036);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r29,8040(r31)
	PPC_STORE_U32(r31.u32 + 8040, r29.u32);
	// bl 0x831896d0
	sub_831896D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_8318A060"))) PPC_WEAK_FUNC(sub_8318A060);
PPC_FUNC_IMPL(__imp__sub_8318A060) {
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
	// li r4,47
	ctx.r4.s64 = 47;
	// lwz r30,6088(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 6088);
	// addi r28,r30,20
	r28.s64 = r30.s64 + 20;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318a094
	if (!cr6.eq) goto loc_8318A094;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8318A094:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318d7b0
	sub_8318D7B0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318a2b8
	if (!cr6.eq) goto loc_8318A2B8;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318a0cc
	if (!cr6.eq) goto loc_8318A0CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8318A0CC:
	// lbz r11,88(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8318a0e4
	if (cr6.eq) goto loc_8318A0E4;
	// lwz r3,244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8318A0E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,24(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x83187d98
	sub_83187D98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318a13c
	if (cr6.eq) goto loc_8318A13C;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r3,-21428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318a134
	if (cr6.eq) goto loc_8318A134;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r10,r11,-15400
	ctx.r10.s64 = r11.s64 + -15400;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-4552
	r11.s64 = r11.s64 + -4552;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318A134:
	// li r30,1
	r30.s64 = 1;
	// b 0x8318a2a4
	goto loc_8318A2A4;
loc_8318A13C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83187e00
	sub_83187E00(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318a194
	if (cr6.eq) goto loc_8318A194;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r3,-21428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318a18c
	if (cr6.eq) goto loc_8318A18C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r10,r11,-15408
	ctx.r10.s64 = r11.s64 + -15408;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-4552
	r11.s64 = r11.s64 + -4552;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318A18C:
	// li r30,1
	r30.s64 = 1;
	// b 0x8318a2a4
	goto loc_8318A2A4;
loc_8318A194:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83187e50
	sub_83187E50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318a1f0
	if (cr6.eq) goto loc_8318A1F0;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r3,-21428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318a1e8
	if (cr6.eq) goto loc_8318A1E8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r10,r11,-15416
	ctx.r10.s64 = r11.s64 + -15416;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-4552
	r11.s64 = r11.s64 + -4552;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318A1E8:
	// li r30,1
	r30.s64 = 1;
	// b 0x8318a2a4
	goto loc_8318A2A4;
loc_8318A1F0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83187c90
	sub_83187C90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318a248
	if (cr6.eq) goto loc_8318A248;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r3,-21428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318a240
	if (cr6.eq) goto loc_8318A240;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r10,r11,-15424
	ctx.r10.s64 = r11.s64 + -15424;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-4552
	r11.s64 = r11.s64 + -4552;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318A240:
	// li r30,1
	r30.s64 = 1;
	// b 0x8318a2a4
	goto loc_8318A2A4;
loc_8318A248:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83189308
	sub_83189308(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318a2a0
	if (cr6.eq) goto loc_8318A2A0;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r3,-21428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318a298
	if (cr6.eq) goto loc_8318A298;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r10,r11,-15432
	ctx.r10.s64 = r11.s64 + -15432;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-4552
	r11.s64 = r11.s64 + -4552;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318A298:
	// li r30,1
	r30.s64 = 1;
	// b 0x8318a2a4
	goto loc_8318A2A4;
loc_8318A2A0:
	// li r30,0
	r30.s64 = 0;
loc_8318A2A4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83187cc8
	sub_83187CC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8318A2B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8318A2C0"))) PPC_WEAK_FUNC(sub_8318A2C0);
PPC_FUNC_IMPL(__imp__sub_8318A2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r20,r31,2384
	r20.s64 = r31.s64 + 2384;
	// lwz r29,6088(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 6088);
	// addi r22,r29,20
	r22.s64 = r29.s64 + 20;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r21,0(r29)
	r21.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x83187f40
	sub_83187F40(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318a5a8
	if (!cr6.eq) goto loc_8318A5A8;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83188210
	sub_83188210(ctx, base);
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r31,8072
	ctx.r4.s64 = r31.s64 + 8072;
	// lwz r3,96(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 96);
	// bl 0x831883e0
	sub_831883E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83188290
	sub_83188290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319be08
	sub_8319BE08(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8313d058
	sub_8313D058(ctx, base);
	// lis r26,-31930
	r26.s64 = -2092564480;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-4992
	r30.s64 = r11.s64 + -4992;
	// lwz r3,-21428(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318a390
	if (cr6.eq) goto loc_8318A390;
	// addi r11,r22,24
	r11.s64 = r22.s64 + 24;
	// stw r21,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r21.u32);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// addi r11,r22,48
	r11.s64 = r22.s64 + 48;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// addi r11,r22,104
	r11.s64 = r22.s64 + 104;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318A390:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8319bae0
	sub_8319BAE0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8313d058
	sub_8313D058(ctx, base);
	// subf r10,r24,r3
	ctx.r10.s64 = ctx.r3.s64 - r24.s64;
	// lwz r11,-21428(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -21428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x8318a400
	if (cr6.eq) goto loc_8318A400;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// stw r10,116(r30)
	PPC_STORE_U32(r30.u32 + 116, ctx.r10.u32);
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// stw r10,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r10.u32);
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// stw r10,140(r30)
	PPC_STORE_U32(r30.u32 + 140, ctx.r10.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r10,152(r30)
	PPC_STORE_U32(r30.u32 + 152, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318A400:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319be08
	sub_8319BE08(ctx, base);
	// lwz r11,24(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 24);
	// subf r4,r23,r3
	ctx.r4.s64 = ctx.r3.s64 - r23.s64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,7768
	ctx.r3.s64 = r11.s64 + 7768;
	// bl 0x8319bf50
	sub_8319BF50(ctx, base);
	// lwz r10,2564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2564);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lis r6,-256
	ctx.r6.s64 = -16777216;
	// lwz r11,2568(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2568);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// ori r6,r6,3846
	ctx.r6.u64 = ctx.r6.u64 | 3846;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,2564(r31)
	PPC_STORE_U32(r31.u32 + 2564, ctx.r9.u32);
	// stw r11,2568(r31)
	PPC_STORE_U32(r31.u32 + 2568, r11.u32);
	// bl 0x83187590
	sub_83187590(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83187538
	sub_83187538(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8318a484
	if (cr6.eq) goto loc_8318A484;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83190900
	sub_83190900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831b0b58
	return;
loc_8318A484:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8318a594
	if (!cr6.gt) goto loc_8318A594;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831907c0
	sub_831907C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83189528
	sub_83189528(ctx, base);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r11,84(r28)
	PPC_STORE_U32(r28.u32 + 84, r11.u32);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,252(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 252);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,76(r28)
	PPC_STORE_U32(r28.u32 + 76, r11.u32);
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r11.u32);
	// lhz r11,160(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// sth r11,252(r28)
	PPC_STORE_U16(r28.u32 + 252, r11.u16);
	// lwz r10,240(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 240);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8318a4f8
	if (!cr6.eq) goto loc_8318A4F8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83187d80
	sub_83187D80(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
loc_8318A4F8:
	// lwz r11,56(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 56);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8318a518
	if (cr6.eq) goto loc_8318A518;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8318a518
	if (!cr6.eq) goto loc_8318A518;
	// stw r28,240(r29)
	PPC_STORE_U32(r29.u32 + 240, r28.u32);
	// b 0x8318a51c
	goto loc_8318A51C;
loc_8318A518:
	// stw r30,240(r29)
	PPC_STORE_U32(r29.u32 + 240, r30.u32);
loc_8318A51C:
	// lwz r11,240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 240);
	// stw r30,244(r29)
	PPC_STORE_U32(r29.u32 + 244, r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r30,248(r29)
	PPC_STORE_U32(r29.u32 + 248, r30.u32);
	// bne cr6,0x8318a578
	if (!cr6.eq) goto loc_8318A578;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8318a55c
	if (!cr6.eq) goto loc_8318A55C;
	// lwz r11,24(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8318a550
	if (cr6.eq) goto loc_8318A550;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8318a55c
	if (!cr6.eq) goto loc_8318A55C;
loc_8318A550:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83190930
	sub_83190930(ctx, base);
	// b 0x8318a564
	goto loc_8318A564;
loc_8318A55C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83190918
	sub_83190918(ctx, base);
loc_8318A564:
	// addi r5,r20,12
	ctx.r5.s64 = r20.s64 + 12;
	// addi r4,r20,8
	ctx.r4.s64 = r20.s64 + 8;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x831986e8
	sub_831986E8(ctx, base);
	// stw r30,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r30.u32);
loc_8318A578:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,24(r22)
	ctx.r5.u64 = PPC_LOAD_U32(r22.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318bcc8
	sub_8318BCC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831b0b58
	return;
loc_8318A594:
	// lwz r11,240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8318a5a8
	if (!cr6.eq) goto loc_8318A5A8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83190900
	sub_83190900(ctx, base);
loc_8318A5A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_8318A5B8"))) PPC_WEAK_FUNC(sub_8318A5B8);
PPC_FUNC_IMPL(__imp__sub_8318A5B8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x831904d8
	sub_831904D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318a6b8
	if (!cr6.eq) goto loc_8318A6B8;
	// li r29,0
	r29.s64 = 0;
	// li r11,5
	r11.s64 = 5;
	// li r10,192
	ctx.r10.s64 = 192;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,8052(r31)
	PPC_STORE_U32(r31.u32 + 8052, r29.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r29,192(r30)
	PPC_STORE_U32(r30.u32 + 192, r29.u32);
	// stw r9,196(r30)
	PPC_STORE_U32(r30.u32 + 196, ctx.r9.u32);
	// stw r29,8044(r31)
	PPC_STORE_U32(r31.u32 + 8044, r29.u32);
	// stw r29,8048(r31)
	PPC_STORE_U32(r31.u32 + 8048, r29.u32);
	// stw r29,232(r30)
	PPC_STORE_U32(r30.u32 + 232, r29.u32);
	// stw r29,236(r30)
	PPC_STORE_U32(r30.u32 + 236, r29.u32);
	// stw r29,240(r30)
	PPC_STORE_U32(r30.u32 + 240, r29.u32);
	// stw r29,244(r30)
	PPC_STORE_U32(r30.u32 + 244, r29.u32);
	// stw r29,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r29.u32);
	// stw r29,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r29.u32);
	// lwz r3,8136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8136);
	// lwz r5,8120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8120);
	// lwz r4,8036(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8036);
	// stw r3,8056(r31)
	PPC_STORE_U32(r31.u32 + 8056, ctx.r3.u32);
	// bl 0x831896d0
	sub_831896D0(ctx, base);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// bl 0x831884a0
	sub_831884A0(ctx, base);
	// lis r11,32767
	r11.s64 = 2147418112;
	// li r28,-1
	r28.s64 = -1;
	// stw r29,152(r30)
	PPC_STORE_U32(r30.u32 + 152, r29.u32);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// addi r3,r30,160
	ctx.r3.s64 = r30.s64 + 160;
	// stw r28,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r28.u32);
	// stw r11,156(r30)
	PPC_STORE_U32(r30.u32 + 156, r11.u32);
	// bl 0x831875e0
	sub_831875E0(ctx, base);
	// addi r4,r31,8060
	ctx.r4.s64 = r31.s64 + 8060;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83190640
	sub_83190640(ctx, base);
	// lwz r10,8120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8120);
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8318a6b0
	if (!cr6.gt) goto loc_8318A6B0;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8318A684:
	// lwz r8,8080(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8080);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,8056(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8056);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// stw r8,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r8.u32);
	// lwz r9,8120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8120);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8318a684
	if (cr6.lt) goto loc_8318A684;
loc_8318A6B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// std r28,256(r30)
	PPC_STORE_U64(r30.u32 + 256, r28.u64);
loc_8318A6B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8318A6C0"))) PPC_WEAK_FUNC(sub_8318A6C0);
PPC_FUNC_IMPL(__imp__sub_8318A6C0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r30,6088(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 6088);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831897f8
	sub_831897F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318a728
	if (!cr6.eq) goto loc_8318A728;
	// li r11,2
	r11.s64 = 2;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// beq cr6,0x8318a71c
	if (cr6.eq) goto loc_8318A71C;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,200
	r11.s64 = 200;
	// bne cr6,0x8318a720
	if (!cr6.eq) goto loc_8318A720;
loc_8318A71C:
	// li r11,192
	r11.s64 = 192;
loc_8318A720:
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8318A728:
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

__attribute__((alias("__imp__sub_8318A740"))) PPC_WEAK_FUNC(sub_8318A740);
PPC_FUNC_IMPL(__imp__sub_8318A740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,6100(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 6100);
	// lwz r29,6096(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 6096);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83196950
	sub_83196950(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8318a7a4
	if (cr6.eq) goto loc_8318A7A4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196950
	sub_83196950(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318a7a4
	if (!cr6.eq) goto loc_8318A7A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831898a0
	sub_831898A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318a7a4
	if (cr6.eq) goto loc_8318A7A4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196938
	sub_83196938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186fd0
	sub_83186FD0(ctx, base);
loc_8318A7A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318A7B0"))) PPC_WEAK_FUNC(sub_8318A7B0);
PPC_FUNC_IMPL(__imp__sub_8318A7B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x83189b40
	sub_83189B40(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8318a7e8
	if (cr6.eq) goto loc_8318A7E8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83188cb8
	sub_83188CB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8318A7E8:
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

__attribute__((alias("__imp__sub_8318A800"))) PPC_WEAK_FUNC(sub_8318A800);
PPC_FUNC_IMPL(__imp__sub_8318A800) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r31,2320
	r29.s64 = r31.s64 + 2320;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r28,6088(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 6088);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8318a83c
	if (cr6.eq) goto loc_8318A83C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
loc_8318A83C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8319b2c0
	sub_8319B2C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318a868
	if (cr6.eq) goto loc_8318A868;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,3862
	ctx.r4.u64 = ctx.r4.u64 | 3862;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
loc_8318A868:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8319b320
	sub_8319B320(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318a898
	if (!cr6.eq) goto loc_8318A898;
	// li r11,0
	r11.s64 = 0;
	// b 0x8318a8c4
	goto loc_8318A8C4;
loc_8318A898:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831967b0
	sub_831967B0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8318a8b8
	if (!cr6.eq) goto loc_8318A8B8;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_8318A8B8:
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// blt cr6,0x8318a8c4
	if (cr6.lt) goto loc_8318A8C4;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8318A8C4:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r11,156(r28)
	PPC_STORE_U32(r28.u32 + 156, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83189260
	sub_83189260(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83187c58
	sub_83187C58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83189d48
	sub_83189D48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8318A900"))) PPC_WEAK_FUNC(sub_8318A900);
PPC_FUNC_IMPL(__imp__sub_8318A900) {
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
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318a9fc
	if (cr6.eq) goto loc_8318A9FC;
	// addi r29,r31,7088
	r29.s64 = r31.s64 + 7088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r29,6088(r31)
	PPC_STORE_U32(r31.u32 + 6088, r29.u32);
	// bl 0x8318a5b8
	sub_8318A5B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318aa00
	if (!cr6.eq) goto loc_8318AA00;
	// bl 0x83198c78
	sub_83198C78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8318a960
	if (!cr6.eq) goto loc_8318A960;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3850
	ctx.r4.u64 = ctx.r4.u64 | 3850;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8318A960:
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-31568
	ctx.r4.s64 = r11.s64 + -31568;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8319bd90
	sub_8319BD90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318a99c
	if (cr6.eq) goto loc_8318A99C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831884d0
	sub_831884D0(ctx, base);
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,3851
	ctx.r4.u64 = ctx.r4.u64 | 3851;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8318A99C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831989d0
	sub_831989D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831989d0
	sub_831989D0(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x831989d0
	sub_831989D0(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// bl 0x8318bd98
	sub_8318BD98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318a9fc
	if (cr6.eq) goto loc_8318A9FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83190e88
	sub_83190E88(ctx, base);
loc_8318A9FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8318AA00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318AA08"))) PPC_WEAK_FUNC(sub_8318AA08);
PPC_FUNC_IMPL(__imp__sub_8318AA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r21,0
	r21.s64 = 0;
	// addi r11,r31,8060
	r11.s64 = r31.s64 + 8060;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r29,6088(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 6088);
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r30,r29,20
	r30.s64 = r29.s64 + 20;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r22,r11,16
	r22.s64 = r11.s64 + 16;
	// lwz r25,0(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r21,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r21.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83198e30
	sub_83198E30(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8313d058
	sub_8313D058(ctx, base);
	// lis r23,-31930
	r23.s64 = -2092564480;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r27,r11,-5208
	r27.s64 = r11.s64 + -5208;
	// lwz r3,-21428(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318aaa0
	if (cr6.eq) goto loc_8318AAA0;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// stw r25,12(r27)
	PPC_STORE_U32(r27.u32 + 12, r25.u32);
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// stw r11,24(r27)
	PPC_STORE_U32(r27.u32 + 24, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318AAA0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8319ac68
	sub_8319AC68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// bl 0x8313d058
	sub_8313D058(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r6,-256
	ctx.r6.s64 = -16777216;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// subf r5,r11,r3
	ctx.r5.s64 = ctx.r3.s64 - r11.s64;
	// ori r6,r6,3844
	ctx.r6.u64 = ctx.r6.u64 | 3844;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// bl 0x83187590
	sub_83187590(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,-21428(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318ab1c
	if (cr6.eq) goto loc_8318AB1C;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// addi r4,r27,108
	ctx.r4.s64 = r27.s64 + 108;
	// stw r11,116(r27)
	PPC_STORE_U32(r27.u32 + 116, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r26,128(r27)
	PPC_STORE_U32(r27.u32 + 128, r26.u32);
	// stw r11,140(r27)
	PPC_STORE_U32(r27.u32 + 140, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318AB1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83187538
	sub_83187538(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318ad80
	if (!cr6.eq) goto loc_8318AD80;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// bne cr6,0x8318ab4c
	if (!cr6.eq) goto loc_8318AB4C;
loc_8318AB40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b54
	return;
loc_8318AB4C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8319b258
	sub_8319B258(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8318ab7c
	if (cr6.eq) goto loc_8318AB7C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,3845
	ctx.r4.u64 = ctx.r4.u64 | 3845;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b54
	return;
loc_8318AB7C:
	// rlwinm r27,r19,0,25,25
	r27.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x8318abb4
	if (cr6.eq) goto loc_8318ABB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x83190a20
	sub_83190A20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318abb4
	if (cr6.eq) goto loc_8318ABB4;
	// li r11,-2
	r11.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b54
	return;
loc_8318ABB4:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r20,r30,24
	r20.s64 = r30.s64 + 24;
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8318abd0
	if (!cr6.eq) goto loc_8318ABD0;
	// stw r21,252(r29)
	PPC_STORE_U32(r29.u32 + 252, r21.u32);
	// b 0x8318ac24
	goto loc_8318AC24;
loc_8318ABD0:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x8318ac24
	if (!cr6.eq) goto loc_8318AC24;
	// lwz r10,236(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 236);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8318ac24
	if (cr6.eq) goto loc_8318AC24;
	// lwz r10,124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8318ac0c
	if (!cr6.eq) goto loc_8318AC0C;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8318ac24
	if (!cr6.lt) goto loc_8318AC24;
	// cmpwi cr6,r10,512
	cr6.compare<int32_t>(ctx.r10.s32, 512, xer);
	// bge cr6,0x8318ac24
	if (!cr6.lt) goto loc_8318AC24;
	// b 0x8318ac20
	goto loc_8318AC20;
loc_8318AC0C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8318ac24
	if (!cr6.eq) goto loc_8318AC24;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8318ac24
	if (cr6.lt) goto loc_8318AC24;
loc_8318AC20:
	// stw r28,252(r29)
	PPC_STORE_U32(r29.u32 + 252, r28.u32);
loc_8318AC24:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83198e48
	sub_83198E48(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,148(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 148);
	// addi r26,r30,48
	r26.s64 = r30.s64 + 48;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x8318ac54
	if (cr6.eq) goto loc_8318AC54;
	// stw r11,148(r29)
	PPC_STORE_U32(r29.u32 + 148, r11.u32);
	// stw r28,152(r29)
	PPC_STORE_U32(r29.u32 + 152, r28.u32);
	// b 0x8318ac58
	goto loc_8318AC58;
loc_8318AC54:
	// stw r21,152(r29)
	PPC_STORE_U32(r29.u32 + 152, r21.u32);
loc_8318AC58:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x8318aca4
	if (cr6.eq) goto loc_8318ACA4;
	// lwz r28,3412(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 3412);
	// lwz r27,3416(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 3416);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8318aca4
	if (cr6.eq) goto loc_8318ACA4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x8319b168
	sub_8319B168(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8318aca4
	if (cr6.eq) goto loc_8318ACA4;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r5,r11,4
	ctx.r5.s64 = r11.s64 + 4;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318ACA4:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x8319b168
	sub_8319B168(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r8,152(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 152);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83189c30
	sub_83189C30(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// and r11,r11,r19
	r11.u64 = r11.u64 & r19.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// std r10,256(r29)
	PPC_STORE_U64(r29.u32 + 256, ctx.r10.u64);
	// beq cr6,0x8318ab40
	if (cr6.eq) goto loc_8318AB40;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,152(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83188f58
	sub_83188F58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r6,152(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 152);
	// bl 0x83189ca8
	sub_83189CA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83187aa0
	sub_83187AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83187b50
	sub_83187B50(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318a800
	sub_8318A800(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,-21428(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318ad7c
	if (cr6.eq) goto loc_8318AD7C;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r10,r30,104
	ctx.r10.s64 = r30.s64 + 104;
	// addi r11,r11,-4776
	r11.s64 = r11.s64 + -4776;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// stw r20,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r20.u32);
	// stw r26,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r26.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// addi r10,r31,3692
	ctx.r10.s64 = r31.s64 + 3692;
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318AD7C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8318AD80:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_8318AD88"))) PPC_WEAK_FUNC(sub_8318AD88);
PPC_FUNC_IMPL(__imp__sub_8318AD88) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r29,r31,2384
	r29.s64 = r31.s64 + 2384;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r28,6088(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 6088);
	// lwz r4,6096(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6096);
	// stw r11,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r11.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,204
	cr6.compare<int32_t>(r11.s32, 204, xer);
	// bne cr6,0x8318add8
	if (!cr6.eq) goto loc_8318ADD8;
	// lwz r11,248(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 248);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318addc
	if (!cr6.eq) goto loc_8318ADDC;
loc_8318ADD8:
	// andi. r30,r30,204
	r30.u64 = r30.u64 & 204;
	cr0.compare<int32_t>(r30.s32, 0, xer);
loc_8318ADDC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196848
	sub_83196848(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x8318ae00
	if (cr6.eq) goto loc_8318AE00;
loc_8318ADF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
loc_8318AE00:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8318adf4
	if (cr6.eq) goto loc_8318ADF4;
	// andi. r11,r30,200
	r11.u64 = r30.u64 & 200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8318ae24
	if (cr6.eq) goto loc_8318AE24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831907c0
	sub_831907C0(ctx, base);
loc_8318AE24:
	// cmpwi cr6,r30,128
	cr6.compare<int32_t>(r30.s32, 128, xer);
	// bne cr6,0x8318ae98
	if (!cr6.eq) goto loc_8318AE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83187428
	sub_83187428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831943e8
	sub_831943E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8318ae6c
	if (cr6.eq) goto loc_8318AE6C;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8318a7b0
	sub_8318A7B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318b038
	if (!cr6.eq) goto loc_8318B038;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
loc_8318AE6C:
	// bl 0x83194470
	sub_83194470(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318ae98
	if (cr6.eq) goto loc_8318AE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83188cb8
	sub_83188CB8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
loc_8318AE98:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x8318af18
	if (!cr6.eq) goto loc_8318AF18;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83188d98
	sub_83188D98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318aecc
	if (cr6.eq) goto loc_8318AECC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831907a8
	sub_831907A8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
loc_8318AECC:
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(r27.s32, 4, xer);
	// bgt cr6,0x8318af18
	if (cr6.gt) goto loc_8318AF18;
	// li r11,1
	r11.s64 = 1;
	// stw r11,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r11.u32);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r3,-21428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318b038
	if (cr6.eq) goto loc_8318B038;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-4440
	r11.s64 = r11.s64 + -4440;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
loc_8318AF18:
	// andi. r11,r30,76
	r11.u64 = r30.u64 & 76;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8318afac
	if (cr6.eq) goto loc_8318AFAC;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831873d0
	sub_831873D0(ctx, base);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318aa08
	sub_8318AA08(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x8318b038
	if (!cr6.eq) goto loc_8318B038;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8318af80
	if (!cr6.eq) goto loc_8318AF80;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & r30.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8318af7c
	if (cr6.eq) goto loc_8318AF7C;
	// li r10,204
	ctx.r10.s64 = 204;
	// stw r10,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r10.u32);
loc_8318AF7C:
	// stw r11,248(r28)
	PPC_STORE_U32(r28.u32 + 248, r11.u32);
loc_8318AF80:
	// cmpwi cr6,r30,64
	cr6.compare<int32_t>(r30.s32, 64, xer);
	// bne cr6,0x8318b034
	if (!cr6.eq) goto loc_8318B034;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// bne cr6,0x8318b034
	if (!cr6.eq) goto loc_8318B034;
	// li r10,192
	ctx.r10.s64 = 192;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r10,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r10.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
loc_8318AFAC:
	// rlwinm r11,r30,0,30,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8318b010
	if (cr6.eq) goto loc_8318B010;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831873d0
	sub_831873D0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318a060
	sub_8318A060(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8318b000
	if (cr6.eq) goto loc_8318B000;
	// bl 0x83189460
	sub_83189460(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x8318b038
	if (!cr6.eq) goto loc_8318B038;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
loc_8318B000:
	// bl 0x8318a2c0
	sub_8318A2C0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
loc_8318B010:
	// cmpwi cr6,r30,128
	cr6.compare<int32_t>(r30.s32, 128, xer);
	// beq cr6,0x8318b038
	if (cr6.eq) goto loc_8318B038;
	// li r5,204
	ctx.r5.s64 = 204;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83189578
	sub_83189578(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8318b038
	if (!cr6.gt) goto loc_8318B038;
	// li r11,1
	r11.s64 = 1;
loc_8318B034:
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_8318B038:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8318B048"))) PPC_WEAK_FUNC(sub_8318B048);
PPC_FUNC_IMPL(__imp__sub_8318B048) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
loc_8318B064:
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318b0c0
	if (!cr6.eq) goto loc_8318B0C0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83189918
	sub_83189918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8318b0c0
	if (!cr6.eq) goto loc_8318B0C0;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8318ad88
	sub_8318AD88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8318b0c0
	if (!cr6.eq) goto loc_8318B0C0;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318b064
	if (!cr6.eq) goto loc_8318B064;
loc_8318B0C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83188440
	sub_83188440(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8318B0E8"))) PPC_WEAK_FUNC(sub_8318B0E8);
PPC_FUNC_IMPL(__imp__sub_8318B0E8) {
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
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318b118
	if (!cr6.eq) goto loc_8318B118;
loc_8318B110:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8318b164
	goto loc_8318B164;
loc_8318B118:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186f50
	sub_83186F50(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8318b110
	if (cr6.eq) goto loc_8318B110;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186e70
	sub_83186E70(ctx, base);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8318b144
	if (!cr6.eq) goto loc_8318B144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186ed0
	sub_83186ED0(ctx, base);
loc_8318B144:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318b048
	sub_8318B048(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318a740
	sub_8318A740(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83188868
	sub_83188868(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8318B164:
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

__attribute__((alias("__imp__sub_8318B180"))) PPC_WEAK_FUNC(sub_8318B180);
PPC_FUNC_IMPL(__imp__sub_8318B180) {
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
	// lis r28,-31930
	r28.s64 = -2092564480;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r31,r11,-5640
	r31.s64 = r11.s64 + -5640;
	// lwz r3,-21428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318b1c0
	if (cr6.eq) goto loc_8318B1C0;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318B1C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8318b0e8
	sub_8318B0E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-21428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318b204
	if (cr6.eq) goto loc_8318B204;
	// addi r11,r30,2464
	r11.s64 = r30.s64 + 2464;
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// addi r11,r30,2472
	r11.s64 = r30.s64 + 2472;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// addi r11,r30,2480
	r11.s64 = r30.s64 + 2480;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318B204:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8318B210"))) PPC_WEAK_FUNC(sub_8318B210);
PPC_FUNC_IMPL(__imp__sub_8318B210) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,513
	ctx.r4.u64 = ctx.r4.u64 | 513;
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318B220"))) PPC_WEAK_FUNC(sub_8318B220);
PPC_FUNC_IMPL(__imp__sub_8318B220) {
	PPC_FUNC_PROLOGUE();
	// b 0x83185818
	sub_83185818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318B228"))) PPC_WEAK_FUNC(sub_8318B228);
PPC_FUNC_IMPL(__imp__sub_8318B228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8318b254
	if (cr6.eq) goto loc_8318B254;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8318b254
	if (cr6.eq) goto loc_8318B254;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8318b254
	if (cr6.eq) goto loc_8318B254;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8318b254
	if (cr6.eq) goto loc_8318B254;
loc_8318B24C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8318B254:
	// lwz r11,88(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8318b24c
	if (cr6.eq) goto loc_8318B24C;
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B270"))) PPC_WEAK_FUNC(sub_8318B270);
PPC_FUNC_IMPL(__imp__sub_8318B270) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x83194770
	sub_83194770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318B278"))) PPC_WEAK_FUNC(sub_8318B278);
PPC_FUNC_IMPL(__imp__sub_8318B278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x8318b298
	if (!cr6.gt) goto loc_8318B298;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_8318B298:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B2A0"))) PPC_WEAK_FUNC(sub_8318B2A0);
PPC_FUNC_IMPL(__imp__sub_8318B2A0) {
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
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318b2c8
	if (!cr6.eq) goto loc_8318B2C8;
	// li r29,1
	r29.s64 = 1;
	// b 0x8318b2e8
	goto loc_8318B2E8;
loc_8318B2C8:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194830
	sub_83194830(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194850
	sub_83194850(ctx, base);
	// or r29,r3,r30
	r29.u64 = ctx.r3.u64 | r30.u64;
loc_8318B2E8:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318b304
	if (!cr6.eq) goto loc_8318B304;
	// li r11,1
	r11.s64 = 1;
	// b 0x8318b324
	goto loc_8318B324;
loc_8318B304:
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194830
	sub_83194830(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194850
	sub_83194850(ctx, base);
	// or r11,r3,r30
	r11.u64 = ctx.r3.u64 | r30.u64;
loc_8318B324:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8318b338
	if (cr6.eq) goto loc_8318B338;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8318b33c
	if (!cr6.eq) goto loc_8318B33C;
loc_8318B338:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8318B33C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318B348"))) PPC_WEAK_FUNC(sub_8318B348);
PPC_FUNC_IMPL(__imp__sub_8318B348) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,2592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2592);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8318b398
	if (!cr6.eq) goto loc_8318B398;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831967d0
	sub_831967D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318b398
	if (!cr6.eq) goto loc_8318B398;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831967c0
	sub_831967C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318b398
	if (!cr6.eq) goto loc_8318B398;
	// stw r30,2592(r31)
	PPC_STORE_U32(r31.u32 + 2592, r30.u32);
loc_8318B398:
	// lwz r11,2596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2596);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8318b3d0
	if (!cr6.eq) goto loc_8318B3D0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831967d0
	sub_831967D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318b3d0
	if (!cr6.eq) goto loc_8318B3D0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831967c0
	sub_831967C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318b3d0
	if (!cr6.eq) goto loc_8318B3D0;
	// stw r30,2596(r31)
	PPC_STORE_U32(r31.u32 + 2596, r30.u32);
loc_8318B3D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,2596(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2596);
	// lwz r4,2592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 2592);
	// bl 0x8319c010
	sub_8319C010(ctx, base);
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

__attribute__((alias("__imp__sub_8318B3F8"))) PPC_WEAK_FUNC(sub_8318B3F8);
PPC_FUNC_IMPL(__imp__sub_8318B3F8) {
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
	// lwz r11,2596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2596);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318b430
	if (!cr6.eq) goto loc_8318B430;
	// lwz r11,2632(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2632);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8318b430
	if (!cr6.eq) goto loc_8318B430;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
loc_8318B430:
	// lwz r11,2592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2592);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318b458
	if (!cr6.eq) goto loc_8318B458;
	// lwz r11,2632(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2632);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8318b458
	if (!cr6.eq) goto loc_8318B458;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
loc_8318B458:
	// lwz r11,2632(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2632);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8318b484
	if (!cr6.eq) goto loc_8318B484;
	// lwz r11,4204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4204);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r5,5
	ctx.r5.s64 = 5;
	// bne cr6,0x8318b480
	if (!cr6.eq) goto loc_8318B480;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8318B480:
	// bl 0x83181e10
	sub_83181E10(ctx, base);
loc_8318B484:
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

__attribute__((alias("__imp__sub_8318B498"))) PPC_WEAK_FUNC(sub_8318B498);
PPC_FUNC_IMPL(__imp__sub_8318B498) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r10,2596(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 2596);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8318b4c4
	if (!cr6.eq) goto loc_8318B4C4;
	// li r11,1
	r11.s64 = 1;
loc_8318B4C4:
	// lwz r10,2592(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 2592);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8318b4d4
	if (!cr6.eq) goto loc_8318B4D4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
loc_8318B4D4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8318b534
	if (cr6.eq) goto loc_8318B534;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8318b52c
	if (cr6.eq) goto loc_8318B52C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8318b524
	if (!cr6.eq) goto loc_8318B524;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8318b538
	if (!cr6.eq) goto loc_8318B538;
	// bl 0x8319c690
	sub_8319C690(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318b524
	if (!cr6.eq) goto loc_8318B524;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318b538
	if (!cr6.eq) goto loc_8318B538;
loc_8318B524:
	// li r31,3
	r31.s64 = 3;
	// b 0x8318b538
	goto loc_8318B538;
loc_8318B52C:
	// li r31,2
	r31.s64 = 2;
	// b 0x8318b538
	goto loc_8318B538;
loc_8318B534:
	// li r31,1
	r31.s64 = 1;
loc_8318B538:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
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

__attribute__((alias("__imp__sub_8318B560"))) PPC_WEAK_FUNC(sub_8318B560);
PPC_FUNC_IMPL(__imp__sub_8318B560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318b5a4
	if (cr6.eq) goto loc_8318B5A4;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83194850
	sub_83194850(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318b5a4
	if (cr6.eq) goto loc_8318B5A4;
loc_8318B59C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8318b5f0
	goto loc_8318B5F0;
loc_8318B5A4:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318b5cc
	if (cr6.eq) goto loc_8318B5CC;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83194850
	sub_83194850(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318b59c
	if (!cr6.eq) goto loc_8318B59C;
loc_8318B5CC:
	// li r31,0
	r31.s64 = 0;
loc_8318B5D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83196988
	sub_83196988(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318b59c
	if (!cr6.eq) goto loc_8318B59C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(r31.s32, 8, xer);
	// blt cr6,0x8318b5d0
	if (cr6.lt) goto loc_8318B5D0;
loc_8318B5F0:
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

__attribute__((alias("__imp__sub_8318B608"))) PPC_WEAK_FUNC(sub_8318B608);
PPC_FUNC_IMPL(__imp__sub_8318B608) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,6096(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 6096);
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// lwz r3,5036(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 5036);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,5044(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 5044);
	// li r9,100
	ctx.r9.s64 = 100;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x8318b680
	if (!cr6.lt) goto loc_8318B680;
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x8318b684
	if (cr6.lt) goto loc_8318B684;
loc_8318B680:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8318B684:
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

__attribute__((alias("__imp__sub_8318B6A0"))) PPC_WEAK_FUNC(sub_8318B6A0);
PPC_FUNC_IMPL(__imp__sub_8318B6A0) {
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
	// lwz r11,6164(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6164);
	// li r4,1
	ctx.r4.s64 = 1;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r31,r11,r3
	r31.u64 = r11.u64 + ctx.r3.u64;
	// lwz r3,5036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 5036);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,5044(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5044);
	// li r9,100
	ctx.r9.s64 = 100;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x8318b6fc
	if (!cr6.lt) goto loc_8318B6FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8318B6FC:
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

__attribute__((alias("__imp__sub_8318B710"))) PPC_WEAK_FUNC(sub_8318B710);
PPC_FUNC_IMPL(__imp__sub_8318B710) {
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
	// lwz r31,2652(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2652);
	// lwz r30,2656(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2656);
	// cmpwi cr6,r31,-4
	cr6.compare<int32_t>(r31.s32, -4, xer);
	// bne cr6,0x8318b73c
	if (!cr6.eq) goto loc_8318B73C;
loc_8318B734:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8318b76c
	goto loc_8318B76C;
loc_8318B73C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831841e0
	sub_831841E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8318b734
	if (cr6.lt) goto loc_8318B734;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x83198398
	sub_83198398(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8318B76C:
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

__attribute__((alias("__imp__sub_8318B788"))) PPC_WEAK_FUNC(sub_8318B788);
PPC_FUNC_IMPL(__imp__sub_8318B788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
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
	// lwz r11,2596(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2596);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318b7bc
	if (!cr6.eq) goto loc_8318B7BC;
	// lwz r11,2592(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2592);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318b7bc
	if (!cr6.eq) goto loc_8318B7BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_8318B7BC:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x83194850
	sub_83194850(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83194850
	sub_83194850(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83194850
	sub_83194850(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x8318b848
	if (cr6.gt) goto loc_8318B848;
	// lis r12,-31975
	r12.s64 = -2095513600;
	// addi r12,r12,-18404
	r12.s64 = r12.s64 + -18404;
	// rlwinm r0,r3,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_8318B844;
	case 1:
		goto loc_8318B82C;
	case 2:
		goto loc_8318B834;
	case 3:
		goto loc_8318B83C;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-18364(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -18364);
	// lwz r24,-18388(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -18388);
	// lwz r24,-18380(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -18380);
	// lwz r24,-18372(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -18372);
loc_8318B82C:
	// mr r31,r28
	r31.u64 = r28.u64;
	// b 0x8318b848
	goto loc_8318B848;
loc_8318B834:
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x8318b848
	goto loc_8318B848;
loc_8318B83C:
	// or r31,r28,r29
	r31.u64 = r28.u64 | r29.u64;
	// b 0x8318b848
	goto loc_8318B848;
loc_8318B844:
	// and r31,r28,r29
	r31.u64 = r28.u64 & r29.u64;
loc_8318B848:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83194860
	sub_83194860(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318b860
	if (cr6.eq) goto loc_8318B860;
	// and r31,r27,r31
	r31.u64 = r27.u64 & r31.u64;
loc_8318B860:
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8318B878"))) PPC_WEAK_FUNC(sub_8318B878);
PPC_FUNC_IMPL(__imp__sub_8318B878) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x83194860
	sub_83194860(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318b8ec
	if (cr6.eq) goto loc_8318B8EC;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x8318b8e4
	if (cr6.lt) goto loc_8318B8E4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x8318b8c8
	if (!cr6.gt) goto loc_8318B8C8;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x8318b8e4
	if (!cr6.eq) goto loc_8318B8E4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8318b8f0
	goto loc_8318B8F0;
loc_8318B8C8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194850
	sub_83194850(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318b8ec
	if (cr6.eq) goto loc_8318B8EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8318b8f0
	goto loc_8318B8F0;
loc_8318B8E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8318b8f0
	goto loc_8318B8F0;
loc_8318B8EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8318B8F0:
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

__attribute__((alias("__imp__sub_8318B908"))) PPC_WEAK_FUNC(sub_8318B908);
PPC_FUNC_IMPL(__imp__sub_8318B908) {
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
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8318b958
	if (!cr6.eq) goto loc_8318B958;
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8318b958
	if (cr6.eq) goto loc_8318B958;
	// lwz r11,2416(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8318b958
	if (cr6.eq) goto loc_8318B958;
	// bl 0x83184f78
	sub_83184F78(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8318B958:
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

__attribute__((alias("__imp__sub_8318B970"))) PPC_WEAK_FUNC(sub_8318B970);
PPC_FUNC_IMPL(__imp__sub_8318B970) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8318ba28
	if (!cr6.eq) goto loc_8318BA28;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// beq cr6,0x8318ba28
	if (cr6.eq) goto loc_8318BA28;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r31,r11,65535
	r31.u64 = r11.u64 | 65535;
	// lwz r11,3524(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 3524);
	// divw r10,r31,r30
	ctx.r10.s32 = r31.s32 / r30.s32;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mulli r11,r10,1000
	r11.s64 = ctx.r10.s64 * 1000;
	// addi r30,r11,-1000
	r30.s64 = r11.s64 + -1000;
	// beq cr6,0x8318b9e0
	if (cr6.eq) goto loc_8318B9E0;
	// lwz r11,3564(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 3564);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8318b9e0
	if (cr6.eq) goto loc_8318B9E0;
	// divw r11,r31,r11
	r11.s32 = r31.s32 / r11.s32;
	// mulli r11,r11,1000
	r11.s64 = r11.s64 * 1000;
	// addi r11,r11,-1000
	r11.s64 = r11.s64 + -1000;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x8318b9e0
	if (!cr6.gt) goto loc_8318B9E0;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8318B9E0:
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8318ba18
	if (!cr6.eq) goto loc_8318BA18;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// lwz r11,440(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 440);
	// divw r11,r31,r11
	r11.s32 = r31.s32 / r11.s32;
	// mulli r11,r11,1000
	r11.s64 = r11.s64 * 1000;
	// addi r11,r11,-1000
	r11.s64 = r11.s64 + -1000;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x8318ba18
	if (!cr6.gt) goto loc_8318BA18;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8318BA18:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
loc_8318BA28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318BA30"))) PPC_WEAK_FUNC(sub_8318BA30);
PPC_FUNC_IMPL(__imp__sub_8318BA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8318ba4c
	if (!cr6.eq) goto loc_8318BA4C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,516
	ctx.r4.u64 = ctx.r4.u64 | 516;
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
loc_8318BA4C:
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,8176
	cr6.compare<uint32_t>(r11.u32, 8176, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,517
	ctx.r4.u64 = ctx.r4.u64 | 517;
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318BA68"))) PPC_WEAK_FUNC(sub_8318BA68);
PPC_FUNC_IMPL(__imp__sub_8318BA68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BA70"))) PPC_WEAK_FUNC(sub_8318BA70);
PPC_FUNC_IMPL(__imp__sub_8318BA70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,-21984
	ctx.r10.s64 = r11.s64 + -21984;
	// addi r11,r10,524
	r11.s64 = ctx.r10.s64 + 524;
loc_8318BA80:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r9,r10,556
	ctx.r9.s64 = ctx.r10.s64 + 556;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8318ba80
	if (cr6.lt) goto loc_8318BA80;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BAA8"))) PPC_WEAK_FUNC(sub_8318BAA8);
PPC_FUNC_IMPL(__imp__sub_8318BAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,-12440
	ctx.r10.s64 = ctx.r10.s64 + -12440;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8318bb08
	if (cr6.eq) goto loc_8318BB08;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8318bb08
	if (!cr6.gt) goto loc_8318BB08;
	// stw r9,8112(r11)
	PPC_STORE_U32(r11.u32 + 8112, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,8116(r11)
	PPC_STORE_U32(r11.u32 + 8116, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8120(r11)
	PPC_STORE_U32(r11.u32 + 8120, ctx.r9.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,8124(r11)
	PPC_STORE_U32(r11.u32 + 8124, ctx.r9.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,8128(r11)
	PPC_STORE_U32(r11.u32 + 8128, ctx.r9.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,8132(r11)
	PPC_STORE_U32(r11.u32 + 8132, ctx.r9.u32);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r10,8136(r11)
	PPC_STORE_U32(r11.u32 + 8136, ctx.r10.u32);
	// blr 
	return;
loc_8318BB08:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BB10"))) PPC_WEAK_FUNC(sub_8318BB10);
PPC_FUNC_IMPL(__imp__sub_8318BB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r3,404
	r11.s64 = ctx.r3.s64 * 404;
	// addi r3,r11,512
	ctx.r3.s64 = r11.s64 + 512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BB20"))) PPC_WEAK_FUNC(sub_8318BB20);
PPC_FUNC_IMPL(__imp__sub_8318BB20) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8318bbbc
	if (cr6.eq) goto loc_8318BBBC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8318bb10
	sub_8318BB10(ctx, base);
	// cmpw cr6,r4,r3
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, xer);
	// blt cr6,0x8318bbbc
	if (cr6.lt) goto loc_8318BBBC;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x8318bbbc
	if (cr6.lt) goto loc_8318BBBC;
	// addi r10,r9,127
	ctx.r10.s64 = ctx.r9.s64 + 127;
	// lis r11,-31935
	r11.s64 = -2092892160;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// addi r11,r11,-12440
	r11.s64 = r11.s64 + -12440;
	// mulli r8,r5,136
	ctx.r8.s64 = ctx.r5.s64 * 136;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r7,r5,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8318BBBC:
	// b 0x8318bbbc
	goto loc_8318BBBC;
}

__attribute__((alias("__imp__sub_8318BBC0"))) PPC_WEAK_FUNC(sub_8318BBC0);
PPC_FUNC_IMPL(__imp__sub_8318BBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r3,r11,-12440
	ctx.r3.s64 = r11.s64 + -12440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BBD0"))) PPC_WEAK_FUNC(sub_8318BBD0);
PPC_FUNC_IMPL(__imp__sub_8318BBD0) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8319ba18
	sub_8319BA18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8318BC40"))) PPC_WEAK_FUNC(sub_8318BC40);
PPC_FUNC_IMPL(__imp__sub_8318BC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BC58"))) PPC_WEAK_FUNC(sub_8318BC58);
PPC_FUNC_IMPL(__imp__sub_8318BC58) {
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
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8319ba18
	sub_8319BA18(ctx, base);
	// mr r29,r31
	r29.u64 = r31.u64;
	// li r30,5
	r30.s64 = 5;
loc_8318BC7C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8319bf30
	sub_8319BF30(ctx, base);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8318bc7c
	if (!cr6.eq) goto loc_8318BC7C;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8319bf30
	sub_8319BF30(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,220(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// std r11,192(r31)
	PPC_STORE_U64(r31.u32 + 192, r11.u64);
	// std r11,200(r31)
	PPC_STORE_U64(r31.u32 + 200, r11.u64);
	// std r11,208(r31)
	PPC_STORE_U64(r31.u32 + 208, r11.u64);
	// stw r11,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318BCC8"))) PPC_WEAK_FUNC(sub_8318BCC8);
PPC_FUNC_IMPL(__imp__sub_8318BCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,2384(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,3420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3420);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r3,2384
	ctx.r5.s64 = ctx.r3.s64 + 2384;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,2384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2384, ctx.r10.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,3424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3424);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8318BCF8"))) PPC_WEAK_FUNC(sub_8318BCF8);
PPC_FUNC_IMPL(__imp__sub_8318BCF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BD00"))) PPC_WEAK_FUNC(sub_8318BD00);
PPC_FUNC_IMPL(__imp__sub_8318BD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r8,2388(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 2388);
	// lwz r10,3428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 3428);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,2388(r11)
	PPC_STORE_U32(r11.u32 + 2388, ctx.r9.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,3432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 3432);
	// addi r5,r11,2384
	ctx.r5.s64 = r11.s64 + 2384;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8318BD34"))) PPC_WEAK_FUNC(sub_8318BD34);
PPC_FUNC_IMPL(__imp__sub_8318BD34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BD38"))) PPC_WEAK_FUNC(sub_8318BD38);
PPC_FUNC_IMPL(__imp__sub_8318BD38) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x83194770
	sub_83194770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318BD40"))) PPC_WEAK_FUNC(sub_8318BD40);
PPC_FUNC_IMPL(__imp__sub_8318BD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// b 0x83194770
	sub_83194770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318BD58"))) PPC_WEAK_FUNC(sub_8318BD58);
PPC_FUNC_IMPL(__imp__sub_8318BD58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BD70"))) PPC_WEAK_FUNC(sub_8318BD70);
PPC_FUNC_IMPL(__imp__sub_8318BD70) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x831947e0
	sub_831947E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318BD88"))) PPC_WEAK_FUNC(sub_8318BD88);
PPC_FUNC_IMPL(__imp__sub_8318BD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// stw r3,516(r11)
	PPC_STORE_U32(r11.u32 + 516, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BD98"))) PPC_WEAK_FUNC(sub_8318BD98);
PPC_FUNC_IMPL(__imp__sub_8318BD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// lwz r3,516(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 516);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BDA8"))) PPC_WEAK_FUNC(sub_8318BDA8);
PPC_FUNC_IMPL(__imp__sub_8318BDA8) {
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
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8318bde4
	if (!cr6.eq) goto loc_8318BDE4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x831947e0
	sub_831947E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318bdf4
	if (!cr6.eq) goto loc_8318BDF4;
loc_8318BDE4:
	// li r11,1
	r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
loc_8318BDF4:
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

__attribute__((alias("__imp__sub_8318BE08"))) PPC_WEAK_FUNC(sub_8318BE08);
PPC_FUNC_IMPL(__imp__sub_8318BE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318be44
	if (cr6.eq) goto loc_8318BE44;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,308
	ctx.r4.u64 = ctx.r4.u64 | 308;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// b 0x8318be5c
	goto loc_8318BE5C;
loc_8318BE44:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831947e0
	sub_831947E0(ctx, base);
loc_8318BE5C:
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

__attribute__((alias("__imp__sub_8318BE78"))) PPC_WEAK_FUNC(sub_8318BE78);
PPC_FUNC_IMPL(__imp__sub_8318BE78) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318bec4
	if (cr6.eq) goto loc_8318BEC4;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,309
	ctx.r4.u64 = ctx.r4.u64 | 309;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8318BEC4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831947e0
	sub_831947E0(ctx, base);
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

__attribute__((alias("__imp__sub_8318BEF0"))) PPC_WEAK_FUNC(sub_8318BEF0);
PPC_FUNC_IMPL(__imp__sub_8318BEF0) {
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318bf28
	if (cr6.eq) goto loc_8318BF28;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,317
	ctx.r4.u64 = ctx.r4.u64 | 317;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// b 0x8318bf5c
	goto loc_8318BF5C;
loc_8318BF28:
	// lwz r30,5964(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 5964);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83196988
	sub_83196988(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8318bf58
	if (cr6.eq) goto loc_8318BF58;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196970
	sub_83196970(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
loc_8318BF58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8318BF5C:
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

__attribute__((alias("__imp__sub_8318BF78"))) PPC_WEAK_FUNC(sub_8318BF78);
PPC_FUNC_IMPL(__imp__sub_8318BF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8319be08
	sub_8319BE08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,7968(r31)
	PPC_STORE_U64(r31.u32 + 7968, r11.u64);
	// bl 0x8319bed8
	sub_8319BED8(ctx, base);
	// ld r10,7968(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 7968);
	// ld r9,7960(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 7960);
	// lwz r11,2408(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2408);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// std r3,7976(r31)
	PPC_STORE_U64(r31.u32 + 7976, ctx.r3.u64);
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// stw r11,7984(r31)
	PPC_STORE_U32(r31.u32 + 7984, r11.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// beq cr6,0x8318bff0
	if (cr6.eq) goto loc_8318BFF0;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mulld r11,r11,r3
	r11.s64 = r11.s64 * ctx.r3.s64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// stfs f0,7988(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 7988, temp.u32);
loc_8318BFF0:
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

__attribute__((alias("__imp__sub_8318C008"))) PPC_WEAK_FUNC(sub_8318C008);
PPC_FUNC_IMPL(__imp__sub_8318C008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,92(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318c024
	if (!cr6.eq) goto loc_8318C024;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r4.u32);
	// blr 
	return;
loc_8318C024:
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x8318c034
	if (!cr6.eq) goto loc_8318C034;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8318C034:
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// ori r4,r4,519
	ctx.r4.u64 = ctx.r4.u64 | 519;
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318C048"))) PPC_WEAK_FUNC(sub_8318C048);
PPC_FUNC_IMPL(__imp__sub_8318C048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318c084
	if (cr6.eq) goto loc_8318C084;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,313
	ctx.r4.u64 = ctx.r4.u64 | 313;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// b 0x8318c090
	goto loc_8318C090;
loc_8318C084:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83197288
	sub_83197288(ctx, base);
loc_8318C090:
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

__attribute__((alias("__imp__sub_8318C0A8"))) PPC_WEAK_FUNC(sub_8318C0A8);
PPC_FUNC_IMPL(__imp__sub_8318C0A8) {
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
	// bl 0x8318b210
	sub_8318B210(ctx, base);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-21400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21400, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C0D8"))) PPC_WEAK_FUNC(sub_8318C0D8);
PPC_FUNC_IMPL(__imp__sub_8318C0D8) {
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
	// bl 0x8318b270
	sub_8318B270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319c5c0
	sub_8319C5C0(ctx, base);
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

__attribute__((alias("__imp__sub_8318C110"))) PPC_WEAK_FUNC(sub_8318C110);
PPC_FUNC_IMPL(__imp__sub_8318C110) {
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
	// bl 0x8318b348
	sub_8318B348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318b3f8
	sub_8318B3F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318b498
	sub_8318B498(ctx, base);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r3,-21428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318c188
	if (cr6.eq) goto loc_8318C188;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r10,r31,2592
	ctx.r10.s64 = r31.s64 + 2592;
	// addi r11,r11,-4664
	r11.s64 = r11.s64 + -4664;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// addi r10,r31,2596
	ctx.r10.s64 = r31.s64 + 2596;
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// addi r10,r31,2632
	ctx.r10.s64 = r31.s64 + 2632;
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// addi r10,r31,2672
	ctx.r10.s64 = r31.s64 + 2672;
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318C188:
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

__attribute__((alias("__imp__sub_8318C1A0"))) PPC_WEAK_FUNC(sub_8318C1A0);
PPC_FUNC_IMPL(__imp__sub_8318C1A0) {
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
	// lwz r11,2628(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2628);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318c1cc
	if (!cr6.eq) goto loc_8318C1CC;
loc_8318C1B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8318C1CC:
	// lwz r11,2592(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2592);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8318c1b8
	if (cr6.eq) goto loc_8318C1B8;
	// lwz r11,4160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4160);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318c1b8
	if (!cr6.eq) goto loc_8318C1B8;
	// lwz r11,4188(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4188);
	// lwz r10,2752(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2752);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8318c1b8
	if (!cr6.lt) goto loc_8318C1B8;
	// bl 0x8318b788
	sub_8318B788(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C218"))) PPC_WEAK_FUNC(sub_8318C218);
PPC_FUNC_IMPL(__imp__sub_8318C218) {
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
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318c378
	if (cr6.eq) goto loc_8318C378;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318c378
	if (cr6.eq) goto loc_8318C378;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318c378
	if (!cr6.eq) goto loc_8318C378;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8318c378
	if (!cr6.eq) goto loc_8318C378;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318b560
	sub_8318B560(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318c378
	if (!cr6.eq) goto loc_8318C378;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318c29c
	if (!cr6.eq) goto loc_8318C29C;
	// lwz r11,2424(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2424);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8318c378
	if (cr6.eq) goto loc_8318C378;
loc_8318C29C:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318c2c4
	if (!cr6.eq) goto loc_8318C2C4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83197140
	sub_83197140(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x8318c378
	if (cr6.gt) goto loc_8318C378;
loc_8318C2C4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194860
	sub_83194860(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318c2ec
	if (cr6.eq) goto loc_8318C2EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83197140
	sub_83197140(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x8318c378
	if (cr6.gt) goto loc_8318C378;
loc_8318C2EC:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318c310
	if (!cr6.eq) goto loc_8318C310;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318b608
	sub_8318B608(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318c378
	if (!cr6.eq) goto loc_8318C378;
loc_8318C310:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831841e0
	sub_831841E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,68
	ctx.r4.s64 = 68;
	// lwz r30,4112(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4112);
	// lwz r31,4116(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4116);
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// lis r5,15
	ctx.r5.s64 = 983040;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ori r5,r5,16960
	ctx.r5.u64 = ctx.r5.u64 | 16960;
	// bl 0x831941d0
	sub_831941D0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r5,r3,r30
	ctx.r5.s64 = r30.s64 - ctx.r3.s64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8318c378
	if (!cr6.gt) goto loc_8318C378;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8318c378
	if (!cr6.gt) goto loc_8318C378;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x83198398
	sub_83198398(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x8318c37c
	goto loc_8318C37C;
loc_8318C378:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8318C37C:
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

__attribute__((alias("__imp__sub_8318C398"))) PPC_WEAK_FUNC(sub_8318C398);
PPC_FUNC_IMPL(__imp__sub_8318C398) {
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
	// bl 0x8318b560
	sub_8318B560(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318c3c4
	if (cr6.eq) goto loc_8318C3C4;
loc_8318C3BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8318c460
	goto loc_8318C460;
loc_8318C3C4:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318c3e8
	if (!cr6.eq) goto loc_8318C3E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318b608
	sub_8318B608(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318c3bc
	if (!cr6.eq) goto loc_8318C3BC;
loc_8318C3E8:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318c40c
	if (!cr6.eq) goto loc_8318C40C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318b6a0
	sub_8318B6A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318c3bc
	if (!cr6.eq) goto loc_8318C3BC;
loc_8318C40C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831841e0
	sub_831841E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,69
	ctx.r4.s64 = 69;
	// lwz r30,4112(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4112);
	// lwz r31,4116(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4116);
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// lis r5,15
	ctx.r5.s64 = 983040;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ori r5,r5,16960
	ctx.r5.u64 = ctx.r5.u64 | 16960;
	// bl 0x831941d0
	sub_831941D0(ctx, base);
	// subf r5,r3,r30
	ctx.r5.s64 = r30.s64 - ctx.r3.s64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83198398
	sub_83198398(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_8318C460:
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

__attribute__((alias("__imp__sub_8318C478"))) PPC_WEAK_FUNC(sub_8318C478);
PPC_FUNC_IMPL(__imp__sub_8318C478) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8318c524
	if (!cr6.eq) goto loc_8318C524;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8318c524
	if (cr6.eq) goto loc_8318C524;
	// lwz r11,2416(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2416);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8318c524
	if (cr6.eq) goto loc_8318C524;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x831854f8
	sub_831854F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318c524
	if (!cr6.eq) goto loc_8318C524;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8318c524
	if (cr6.lt) goto loc_8318C524;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8318b970
	sub_8318B970(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83184e58
	sub_83184E58(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8318c524
	if (cr6.eq) goto loc_8318C524;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83198398
	sub_83198398(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8318C524:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8318C540"))) PPC_WEAK_FUNC(sub_8318C540);
PPC_FUNC_IMPL(__imp__sub_8318C540) {
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
	// bl 0x8318bda8
	sub_8318BDA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318c574
	if (!cr6.eq) goto loc_8318C574;
	// li r11,6
	r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// bl 0x8318bf78
	sub_8318BF78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8318C574:
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

__attribute__((alias("__imp__sub_8318C588"))) PPC_WEAK_FUNC(sub_8318C588);
PPC_FUNC_IMPL(__imp__sub_8318C588) {
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
	// li r5,42
	ctx.r5.s64 = 42;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8319ba18
	sub_8319BA18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x8318bc40
	sub_8318BC40(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8318bc40
	sub_8318BC40(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8318bc40
	sub_8318BC40(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8318bc40
	sub_8318BC40(ctx, base);
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

__attribute__((alias("__imp__sub_8318C610"))) PPC_WEAK_FUNC(sub_8318C610);
PPC_FUNC_IMPL(__imp__sub_8318C610) {
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318c644
	if (cr6.eq) goto loc_8318C644;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,306
	ctx.r4.u64 = ctx.r4.u64 | 306;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8318C644:
	// lis r29,-31930
	r29.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-8016
	r30.s64 = r11.s64 + -8016;
	// lwz r3,-21428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318c674
	if (cr6.eq) goto loc_8318C674;
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318C674:
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8318c694
	if (!cr6.eq) goto loc_8318C694;
	// bl 0x8318d8e0
	sub_8318D8E0(ctx, base);
	// b 0x8318c698
	goto loc_8318C698;
loc_8318C694:
	// bl 0x8318bd58
	sub_8318BD58(ctx, base);
loc_8318C698:
	// li r11,1
	r11.s64 = 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// lwz r3,-21428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318c6c4
	if (cr6.eq) goto loc_8318C6C4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318C6C4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8318C6D0"))) PPC_WEAK_FUNC(sub_8318C6D0);
PPC_FUNC_IMPL(__imp__sub_8318C6D0) {
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
	// lis r30,-31930
	r30.s64 = -2092564480;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r29,r11,-7368
	r29.s64 = r11.s64 + -7368;
	// lwz r3,-21428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318c710
	if (cr6.eq) goto loc_8318C710;
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318C710:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318bef0
	sub_8318BEF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-21428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318c73c
	if (cr6.eq) goto loc_8318C73C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,108
	ctx.r4.s64 = r29.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318C73C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318C748"))) PPC_WEAK_FUNC(sub_8318C748);
PPC_FUNC_IMPL(__imp__sub_8318C748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318c788
	if (cr6.eq) goto loc_8318C788;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,310
	ctx.r4.u64 = ctx.r4.u64 | 310;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_8318C788:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8318c008
	sub_8318C008(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318c8a8
	if (!cr6.eq) goto loc_8318C8A8;
	// lis r28,-31930
	r28.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r31,r11,-7152
	r31.s64 = r11.s64 + -7152;
	// lwz r3,-21428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318c7cc
	if (cr6.eq) goto loc_8318C7CC;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318C7CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831947e0
	sub_831947E0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8318c850
	if (cr6.eq) goto loc_8318C850;
	// lwz r11,2408(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 2408);
	// lwz r10,2412(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 2412);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8318c824
	if (!cr6.eq) goto loc_8318C824;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318c818
	if (!cr6.eq) goto loc_8318C818;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8319be08
	sub_8319BE08(ctx, base);
	// std r3,7960(r29)
	PPC_STORE_U64(r29.u32 + 7960, ctx.r3.u64);
loc_8318C818:
	// lwz r11,2408(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 2408);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,2408(r29)
	PPC_STORE_U32(r29.u32 + 2408, r11.u32);
loc_8318C824:
	// lwz r3,-21428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318c880
	if (cr6.eq) goto loc_8318C880;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8318c868
	goto loc_8318C868;
loc_8318C850:
	// lwz r3,-21428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318c880
	if (cr6.eq) goto loc_8318C880;
	// li r11,0
	r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_8318C868:
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318C880:
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r10,-21400(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -21400);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8318c8a4
	if (cr6.eq) goto loc_8318C8A4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318C8A4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8318C8A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8318C8B0"))) PPC_WEAK_FUNC(sub_8318C8B0);
PPC_FUNC_IMPL(__imp__sub_8318C8B0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318c8e8
	if (cr6.eq) goto loc_8318C8E8;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,311
	ctx.r4.u64 = ctx.r4.u64 | 311;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8318C8E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318c008
	sub_8318C008(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318c988
	if (!cr6.eq) goto loc_8318C988;
	// lis r29,-31930
	r29.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-6936
	r30.s64 = r11.s64 + -6936;
	// lwz r3,-21428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318c930
	if (cr6.eq) goto loc_8318C930;
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// stw r28,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r28.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318C930:
	// lwz r11,2412(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2412);
	// lwz r10,2408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2408);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8318c948
	if (!cr6.lt) goto loc_8318C948;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,2412(r31)
	PPC_STORE_U32(r31.u32 + 2412, r11.u32);
loc_8318C948:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831947e0
	sub_831947E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-21428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318c984
	if (cr6.eq) goto loc_8318C984;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318C984:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8318C988:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8318C990"))) PPC_WEAK_FUNC(sub_8318C990);
PPC_FUNC_IMPL(__imp__sub_8318C990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
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
	// lwz r30,72(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r29,76(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x8318b2a0
	sub_8318B2A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318ca30
	if (cr6.eq) goto loc_8318CA30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318c110
	sub_8318C110(ctx, base);
	// addi r11,r29,-2
	r11.s64 = r29.s64 + -2;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x8318ca30
	if (cr6.gt) goto loc_8318CA30;
	// lis r12,-31975
	r12.s64 = -2095513600;
	// addi r12,r12,-13856
	r12.s64 = r12.s64 + -13856;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8318C9F4;
	case 1:
		goto loc_8318CA2C;
	case 2:
		goto loc_8318CA04;
	case 3:
		goto loc_8318CA30;
	case 4:
		goto loc_8318CA04;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-13836(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -13836);
	// lwz r24,-13780(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -13780);
	// lwz r24,-13820(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -13820);
	// lwz r24,-13776(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -13776);
	// lwz r24,-13820(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -13820);
loc_8318C9F4:
	// li r30,2
	r30.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8318CA04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318c1a0
	sub_8318C1A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318ca2c
	if (cr6.eq) goto loc_8318CA2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318bd70
	sub_8318BD70(ctx, base);
	// li r30,4
	r30.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8318CA2C:
	// li r30,3
	r30.s64 = 3;
loc_8318CA30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318CA40"))) PPC_WEAK_FUNC(sub_8318CA40);
PPC_FUNC_IMPL(__imp__sub_8318CA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
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
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r30,72(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x8318cac4
	if (cr6.gt) goto loc_8318CAC4;
	// lis r12,-31975
	r12.s64 = -2095513600;
	// addi r12,r12,-13692
	r12.s64 = r12.s64 + -13692;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8318CA98;
	case 1:
		goto loc_8318CAA0;
	case 2:
		goto loc_8318CAA8;
	case 3:
		goto loc_8318CAC4;
	case 4:
		goto loc_8318CAA8;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-13672(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -13672);
	// lwz r24,-13664(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -13664);
	// lwz r24,-13656(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -13656);
	// lwz r24,-13628(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -13628);
	// lwz r24,-13656(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -13656);
loc_8318CA98:
	// li r30,2
	r30.s64 = 2;
	// b 0x8318cac4
	goto loc_8318CAC4;
loc_8318CAA0:
	// li r30,3
	r30.s64 = 3;
	// b 0x8318cac4
	goto loc_8318CAC4;
loc_8318CAA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318c1a0
	sub_8318C1A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318cac4
	if (cr6.eq) goto loc_8318CAC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318bd70
	sub_8318BD70(ctx, base);
	// li r30,4
	r30.s64 = 4;
loc_8318CAC4:
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

__attribute__((alias("__imp__sub_8318CAE0"))) PPC_WEAK_FUNC(sub_8318CAE0);
PPC_FUNC_IMPL(__imp__sub_8318CAE0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// addi r31,r30,2384
	r31.s64 = r30.s64 + 2384;
	// li r29,0
	r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318cb38
	if (!cr6.eq) goto loc_8318CB38;
	// bl 0x8318c218
	sub_8318C218(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318cb58
	if (cr6.eq) goto loc_8318CB58;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// b 0x8318cb4c
	goto loc_8318CB4C;
loc_8318CB38:
	// bl 0x8318c398
	sub_8318C398(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318cb58
	if (cr6.eq) goto loc_8318CB58;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
loc_8318CB4C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8318da90
	sub_8318DA90(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8318CB58:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318CB70"))) PPC_WEAK_FUNC(sub_8318CB70);
PPC_FUNC_IMPL(__imp__sub_8318CB70) {
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
	// bl 0x8318b710
	sub_8318B710(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318cbe0
	if (!cr6.eq) goto loc_8318CBE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318b788
	sub_8318B788(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318cbe0
	if (!cr6.eq) goto loc_8318CBE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318b908
	sub_8318B908(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318cbe0
	if (!cr6.eq) goto loc_8318CBE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318c478
	sub_8318C478(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318cbe0
	if (!cr6.eq) goto loc_8318CBE0;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318cbe0
	if (!cr6.eq) goto loc_8318CBE0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8318CBE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318c540
	sub_8318C540(ctx, base);
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

__attribute__((alias("__imp__sub_8318CC00"))) PPC_WEAK_FUNC(sub_8318CC00);
PPC_FUNC_IMPL(__imp__sub_8318CC00) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r31,60(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// rlwinm r5,r11,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq cr6,0x8318cd9c
	if (cr6.eq) goto loc_8318CD9C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8318cd9c
	if (!cr6.gt) goto loc_8318CD9C;
	// cmplwi cr6,r11,16352
	cr6.compare<uint32_t>(r11.u32, 16352, xer);
	// bgt cr6,0x8318cd9c
	if (cr6.gt) goto loc_8318CD9C;
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// lwz r9,-21404(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21404);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8318cc50
	if (cr6.eq) goto loc_8318CC50;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bne cr6,0x8318cd9c
	if (!cr6.eq) goto loc_8318CD9C;
loc_8318CC50:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,-21404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21404, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319ba18
	sub_8319BA18(ctx, base);
	// addi r11,r31,31
	r11.s64 = r31.s64 + 31;
	// li r30,0
	r30.s64 = 0;
	// rlwinm r31,r11,0,0,26
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// bl 0x8318baa8
	sub_8318BAA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318cd9c
	if (!cr6.eq) goto loc_8318CD9C;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r28,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r28.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// bl 0x83197990
	sub_83197990(ctx, base);
	// addi r3,r31,2320
	ctx.r3.s64 = r31.s64 + 2320;
	// bl 0x8318bbd0
	sub_8318BBD0(ctx, base);
	// addi r3,r31,2384
	ctx.r3.s64 = r31.s64 + 2384;
	// bl 0x8318c588
	sub_8318C588(ctx, base);
	// addi r3,r31,7768
	ctx.r3.s64 = r31.s64 + 7768;
	// bl 0x8318bc58
	sub_8318BC58(ctx, base);
	// addi r3,r31,2552
	ctx.r3.s64 = r31.s64 + 2552;
	// bl 0x8318fc60
	sub_8318FC60(ctx, base);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// li r5,400
	ctx.r5.s64 = 400;
	// addi r30,r11,-21984
	r30.s64 = r11.s64 + -21984;
	// addi r3,r31,2572
	ctx.r3.s64 = r31.s64 + 2572;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83197348
	sub_83197348(ctx, base);
	// li r5,400
	ctx.r5.s64 = 400;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,2972
	ctx.r3.s64 = r31.s64 + 2972;
	// bl 0x83197348
	sub_83197348(ctx, base);
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3372
	ctx.r3.s64 = r31.s64 + 3372;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,32767
	r11.s64 = 2147418112;
	// addi r4,r31,3464
	ctx.r4.s64 = r31.s64 + 3464;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,3452(r31)
	PPC_STORE_U32(r31.u32 + 3452, r11.u32);
	// bl 0x83185318
	sub_83185318(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,5016
	ctx.r4.s64 = r31.s64 + 5016;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83197170
	sub_83197170(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318cd9c
	if (!cr6.eq) goto loc_8318CD9C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,5944
	ctx.r4.s64 = r31.s64 + 5944;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194c00
	sub_83194C00(ctx, base);
	// addi r3,r31,7736
	ctx.r3.s64 = r31.s64 + 7736;
	// bl 0x8318d788
	sub_8318D788(ctx, base);
	// addi r3,r31,7720
	ctx.r3.s64 = r31.s64 + 7720;
	// bl 0x8319bf98
	sub_8319BF98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318bd38
	sub_8318BD38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318cd9c
	if (!cr6.eq) goto loc_8318CD9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r28.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_8318CD9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8318CDA8"))) PPC_WEAK_FUNC(sub_8318CDA8);
PPC_FUNC_IMPL(__imp__sub_8318CDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r14,0
	r14.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r15,r14
	r15.u64 = r14.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r19,2604(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 2604);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// beq cr6,0x8318cdec
	if (cr6.eq) goto loc_8318CDEC;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318be08
	sub_8318BE08(ctx, base);
	// lwz r15,180(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
loc_8318CDEC:
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x831979b0
	sub_831979B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196b08
	sub_83196B08(ctx, base);
	// addi r4,r31,3372
	ctx.r4.s64 = r31.s64 + 3372;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r27,88(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r9,r31,4952
	ctx.r9.s64 = r31.s64 + 4952;
	// addi r10,r31,4964
	ctx.r10.s64 = r31.s64 + 4964;
	// lwz r28,7720(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 7720);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lwz r26,2552(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 2552);
	// lwz r25,2556(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 2556);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lwz r24,4196(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 4196);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r23,4200(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 4200);
	// lwz r22,4204(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 4204);
	// lwz r21,4220(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 4220);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r20,4224(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 4224);
	// lwz r18,3488(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 3488);
	// lwz r17,4152(r31)
	r17.u64 = PPC_LOAD_U32(r31.u32 + 4152);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r9,4980(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4980);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r16,4156(r31)
	r16.u64 = PPC_LOAD_U32(r31.u32 + 4156);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// beq cr6,0x8318ceb8
	if (cr6.eq) goto loc_8318CEB8;
	// lwz r11,3536(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 3536);
	// lwz r14,3540(r28)
	r14.u64 = PPC_LOAD_U32(r28.u32 + 3540);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,3524(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 3524);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,3528(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 3528);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,3532(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 3532);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// b 0x8318cec8
	goto loc_8318CEC8;
loc_8318CEB8:
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// stw r14,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r14.u32);
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// stw r14,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r14.u32);
loc_8318CEC8:
	// addi r10,r31,8096
	ctx.r10.s64 = r31.s64 + 8096;
	// lwz r6,5192(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 5192);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwz r9,5188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 5188);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x83186d58
	sub_83186D58(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318bd40
	sub_8318BD40(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318d1b4
	if (!cr6.eq) goto loc_8318D1B4;
	// li r5,400
	ctx.r5.s64 = 400;
	// addi r4,r31,2972
	ctx.r4.s64 = r31.s64 + 2972;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x83197348
	sub_83197348(ctx, base);
	// lis r11,-31935
	r11.s64 = -2092892160;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r30,r11,-12440
	r30.s64 = r11.s64 + -12440;
	// addi r11,r31,8112
	r11.s64 = r31.s64 + 8112;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8318CF50:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8318cf50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8318CF50;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8318cc00
	sub_8318CC00(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8318cf90
	if (!cr6.eq) goto loc_8318CF90;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,514
	ctx.r4.u64 = ctx.r4.u64 | 514;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831b0b40
	return;
loc_8318CF90:
	// addi r10,r31,8112
	ctx.r10.s64 = r31.s64 + 8112;
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8318CFA0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8318cfa0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8318CFA0;
	// li r5,400
	ctx.r5.s64 = 400;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r31,2572
	ctx.r3.s64 = r31.s64 + 2572;
	// bl 0x83197348
	sub_83197348(ctx, base);
	// li r5,400
	ctx.r5.s64 = 400;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r31,2972
	ctx.r3.s64 = r31.s64 + 2972;
	// bl 0x83197348
	sub_83197348(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186dd0
	sub_83186DD0(ctx, base);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// beq cr6,0x8318d020
	if (cr6.eq) goto loc_8318D020;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318be08
	sub_8318BE08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318d1b4
	if (!cr6.eq) goto loc_8318D1B4;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318be78
	sub_8318BE78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318d1b4
	if (!cr6.eq) goto loc_8318D1B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318c6d0
	sub_8318C6D0(ctx, base);
loc_8318D020:
	// addi r3,r31,3372
	ctx.r3.s64 = r31.s64 + 3372;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r5,3444(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 3444);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8318d050
	if (cr6.eq) goto loc_8318D050;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,3448(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 3448);
	// lwz r4,3452(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 3452);
	// bl 0x83186e28
	sub_83186E28(ctx, base);
loc_8318D050:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8318d068
	if (cr6.eq) goto loc_8318D068;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318ffa8
	sub_8318FFA8(ctx, base);
loc_8318D068:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8318d080
	if (cr6.eq) goto loc_8318D080;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831842a0
	sub_831842A0(ctx, base);
loc_8318D080:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x8318d09c
	if (cr6.eq) goto loc_8318D09C;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831842f0
	sub_831842F0(ctx, base);
loc_8318D09C:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x8318d0b0
	if (cr6.eq) goto loc_8318D0B0;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83184248
	sub_83184248(ctx, base);
loc_8318D0B0:
	// cmpw cr6,r17,r16
	cr6.compare<int32_t>(r17.s32, r16.s32, xer);
	// beq cr6,0x8318d0c8
	if (cr6.eq) goto loc_8318D0C8;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318d8f8
	sub_8318D8F8(ctx, base);
loc_8318D0C8:
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8318d10c
	if (cr6.eq) goto loc_8318D10C;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r31,4952
	ctx.r8.s64 = r31.s64 + 4952;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// lwz r10,-21396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -21396);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8318d10c
	if (cr6.eq) goto loc_8318D10C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318D10C:
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8318d124
	if (cr6.eq) goto loc_8318D124;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x83184b40
	sub_83184B40(ctx, base);
loc_8318D124:
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x8318d138
	if (cr6.eq) goto loc_8318D138;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83184e50
	sub_83184E50(ctx, base);
loc_8318D138:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8318d180
	if (cr6.eq) goto loc_8318D180;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319bfb8
	sub_8319BFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8319c488
	sub_8319C488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8319c3b0
	sub_8319C3B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8319c420
	sub_8319C420(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319c140
	sub_8319C140(ctx, base);
loc_8318D180:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8318d198
	if (cr6.eq) goto loc_8318D198;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x83197538
	sub_83197538(ctx, base);
loc_8318D198:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8318d1b0
	if (cr6.eq) goto loc_8318D1B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x83182208
	sub_83182208(ctx, base);
loc_8318D1B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8318D1B4:
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_8318D1C0"))) PPC_WEAK_FUNC(sub_8318D1C0);
PPC_FUNC_IMPL(__imp__sub_8318D1C0) {
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
	// bl 0x8318cb70
	sub_8318CB70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318d1f8
	if (cr6.eq) goto loc_8318D1F8;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8318D1F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318cae0
	sub_8318CAE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bne cr6,0x8318d21c
	if (!cr6.eq) goto loc_8318D21C;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x8318d21c
	if (!cr6.eq) goto loc_8318D21C;
	// li r3,6
	ctx.r3.s64 = 6;
loc_8318D21C:
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

__attribute__((alias("__imp__sub_8318D230"))) PPC_WEAK_FUNC(sub_8318D230);
PPC_FUNC_IMPL(__imp__sub_8318D230) {
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
	// bl 0x8318ba30
	sub_8318BA30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318d270
	if (!cr6.eq) goto loc_8318D270;
	// bl 0x8318ba70
	sub_8318BA70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// bne cr6,0x8318d27c
	if (!cr6.eq) goto loc_8318D27C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,518
	ctx.r4.u64 = ctx.r4.u64 | 518;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
loc_8318D270:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8318D27C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318cc00
	sub_8318CC00(ctx, base);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// addi r11,r11,524
	r11.s64 = r11.s64 + 524;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318D2A8"))) PPC_WEAK_FUNC(sub_8318D2A8);
PPC_FUNC_IMPL(__imp__sub_8318D2A8) {
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
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8318d2e0
	if (!cr6.eq) goto loc_8318D2E0;
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
loc_8318D2E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318bda8
	sub_8318BDA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318d31c
	if (!cr6.eq) goto loc_8318D31C;
	// li r11,0
	r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// bl 0x8318bd88
	sub_8318BD88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318cda8
	sub_8318CDA8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8318bd88
	sub_8318BD88(ctx, base);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8318D31C:
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

__attribute__((alias("__imp__sub_8318D330"))) PPC_WEAK_FUNC(sub_8318D330);
PPC_FUNC_IMPL(__imp__sub_8318D330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
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
	// lwz r30,72(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// beq cr6,0x8318d364
	if (cr6.eq) goto loc_8318D364;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// beq cr6,0x8318d364
	if (cr6.eq) goto loc_8318D364;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// beq cr6,0x8318d364
	if (cr6.eq) goto loc_8318D364;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// bne cr6,0x8318d448
	if (!cr6.eq) goto loc_8318D448;
loc_8318D364:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8318d448
	if (cr6.eq) goto loc_8318D448;
	// li r11,0
	r11.s64 = 0;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// beq cr6,0x8318d448
	if (cr6.eq) goto loc_8318D448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319be08
	sub_8319BE08(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// beq cr6,0x8318d3a8
	if (cr6.eq) goto loc_8318D3A8;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// beq cr6,0x8318d3a8
	if (cr6.eq) goto loc_8318D3A8;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// bne cr6,0x8318d3b0
	if (!cr6.eq) goto loc_8318D3B0;
loc_8318D3A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318c0d8
	sub_8318C0D8(ctx, base);
loc_8318D3B0:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bgt cr6,0x8318d42c
	if (cr6.gt) goto loc_8318D42C;
	// lis r12,-31975
	r12.s64 = -2095513600;
	// addi r12,r12,-11304
	r12.s64 = r12.s64 + -11304;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8318D3F0;
	case 1:
		goto loc_8318D3FC;
	case 2:
		goto loc_8318D408;
	case 3:
		goto loc_8318D414;
	case 4:
		goto loc_8318D42C;
	case 5:
		goto loc_8318D420;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-11280(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -11280);
	// lwz r24,-11268(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -11268);
	// lwz r24,-11256(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -11256);
	// lwz r24,-11244(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -11244);
	// lwz r24,-11220(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -11220);
	// lwz r24,-11232(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + -11232);
loc_8318D3F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318b278
	sub_8318B278(ctx, base);
	// b 0x8318d428
	goto loc_8318D428;
loc_8318D3FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318c990
	sub_8318C990(ctx, base);
	// b 0x8318d428
	goto loc_8318D428;
loc_8318D408:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318ca40
	sub_8318CA40(ctx, base);
	// b 0x8318d428
	goto loc_8318D428;
loc_8318D414:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318d1c0
	sub_8318D1C0(ctx, base);
	// b 0x8318d428
	goto loc_8318D428;
loc_8318D420:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317a7d0
	sub_8317A7D0(ctx, base);
loc_8318D428:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8318D42C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// bl 0x8319be08
	sub_8319BE08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,7928
	ctx.r3.s64 = r31.s64 + 7928;
	// subf r4,r29,r11
	ctx.r4.s64 = r11.s64 - r29.s64;
	// bl 0x8319bf50
	sub_8319BF50(ctx, base);
loc_8318D448:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318D450"))) PPC_WEAK_FUNC(sub_8318D450);
PPC_FUNC_IMPL(__imp__sub_8318D450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31930
	r30.s64 = -2092564480;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,-21428(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -21428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r29,r11,-8448
	r29.s64 = r11.s64 + -8448;
	// beq cr6,0x8318d51c
	if (cr6.eq) goto loc_8318D51C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lwz r27,64(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r26,60(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-14968
	ctx.r4.s64 = r11.s64 + -14968;
	// lwz r25,52(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r24,48(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r23,44(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r22,40(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r21,36(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r20,32(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r19,28(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r27.u32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r26.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r24.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r23.u32);
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r22.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// bl 0x831b1630
	sub_831B1630(ctx, base);
	// lwz r3,-21428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318d51c
	if (cr6.eq) goto loc_8318D51C;
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318D51C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318d230
	sub_8318D230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-21428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318d550
	if (cr6.eq) goto loc_8318D550;
	// stw r31,116(r29)
	PPC_STORE_U32(r29.u32 + 116, r31.u32);
	// addi r4,r29,108
	ctx.r4.s64 = r29.s64 + 108;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318D550:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_8318D560"))) PPC_WEAK_FUNC(sub_8318D560);
PPC_FUNC_IMPL(__imp__sub_8318D560) {
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318d594
	if (cr6.eq) goto loc_8318D594;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,305
	ctx.r4.u64 = ctx.r4.u64 | 305;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8318D594:
	// lis r28,-31930
	r28.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-8232
	r30.s64 = r11.s64 + -8232;
	// lwz r3,-21428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318d5c4
	if (cr6.eq) goto loc_8318D5C4;
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318D5C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318d2a8
	sub_8318D2A8(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x831979b0
	sub_831979B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196b08
	sub_83196B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318bd40
	sub_8318BD40(ctx, base);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r11,-21984
	ctx.r10.s64 = r11.s64 + -21984;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,524
	r11.s64 = ctx.r10.s64 + 524;
loc_8318D5F8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, xer);
	// bne cr6,0x8318d608
	if (!cr6.eq) goto loc_8318D608;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_8318D608:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r10,556
	ctx.r8.s64 = ctx.r10.s64 + 556;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x8318d5f8
	if (cr6.lt) goto loc_8318D5F8;
	// lwz r3,-21428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318d638
	if (cr6.eq) goto loc_8318D638;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318D638:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8318D648"))) PPC_WEAK_FUNC(sub_8318D648);
PPC_FUNC_IMPL(__imp__sub_8318D648) {
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318d67c
	if (cr6.eq) goto loc_8318D67C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,307
	ctx.r4.u64 = ctx.r4.u64 | 307;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8318D67C:
	// lis r30,-31930
	r30.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r29,r11,-7800
	r29.s64 = r11.s64 + -7800;
	// lwz r3,-21428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318d6ac
	if (cr6.eq) goto loc_8318D6AC;
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318D6AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318d2a8
	sub_8318D2A8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// lwz r3,-21428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318d6e0
	if (cr6.eq) goto loc_8318D6E0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,108
	ctx.r4.s64 = r29.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318D6E0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8318D6F0"))) PPC_WEAK_FUNC(sub_8318D6F0);
PPC_FUNC_IMPL(__imp__sub_8318D6F0) {
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318d724
	if (cr6.eq) goto loc_8318D724;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,312
	ctx.r4.u64 = ctx.r4.u64 | 312;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8318D724:
	// lis r30,-31930
	r30.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r31,r11,-6288
	r31.s64 = r11.s64 + -6288;
	// lwz r3,-21428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318d754
	if (cr6.eq) goto loc_8318D754;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318D754:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8318d330
	sub_8318D330(ctx, base);
	// lwz r3,-21428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318d77c
	if (cr6.eq) goto loc_8318D77C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318D77C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318D788"))) PPC_WEAK_FUNC(sub_8318D788);
PPC_FUNC_IMPL(__imp__sub_8318D788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D7B0"))) PPC_WEAK_FUNC(sub_8318D7B0);
PPC_FUNC_IMPL(__imp__sub_8318D7B0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,7736(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7736);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,7736(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7736);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8318d894
	if (cr6.eq) goto loc_8318D894;
	// lwz r11,2388(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2388);
	// lwz r9,7760(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7760);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8318d834
	if (!cr6.lt) goto loc_8318D834;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r3,-21428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318d820
	if (cr6.eq) goto loc_8318D820;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r9,r11,-14880
	ctx.r9.s64 = r11.s64 + -14880;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-4552
	r11.s64 = r11.s64 + -4552;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r9.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318D820:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8318D834:
	// lwz r11,2384(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2384);
	// lwz r9,7744(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7744);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8318d894
	if (cr6.lt) goto loc_8318D894;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r3,-21428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318d880
	if (cr6.eq) goto loc_8318D880;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r9,r11,-14892
	ctx.r9.s64 = r11.s64 + -14892;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-4552
	r11.s64 = r11.s64 + -4552;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r9.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318D880:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8318D894:
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

__attribute__((alias("__imp__sub_8318D8A8"))) PPC_WEAK_FUNC(sub_8318D8A8);
PPC_FUNC_IMPL(__imp__sub_8318D8A8) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x831947e0
	sub_831947E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

