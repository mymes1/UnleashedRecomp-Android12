#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830DFF70"))) PPC_WEAK_FUNC(sub_830DFF70);
PPC_FUNC_IMPL(__imp__sub_830DFF70) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x830dca28
	sub_830DCA28(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x830dc498
	sub_830DC498(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f0,192(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// stfs f0,188(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// stfs f13,204(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// stfs f13,208(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// stw r31,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r31.u32);
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

__attribute__((alias("__imp__sub_830E0000"))) PPC_WEAK_FUNC(sub_830E0000);
PPC_FUNC_IMPL(__imp__sub_830E0000) {
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
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e0024
	if (cr6.eq) goto loc_830E0024;
	// bl 0x8311aec0
	sub_8311AEC0(ctx, base);
loc_830E0024:
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x830d6420
	sub_830D6420(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x830dcb70
	sub_830DCB70(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x830d7930
	sub_830D7930(ctx, base);
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

__attribute__((alias("__imp__sub_830E0050"))) PPC_WEAK_FUNC(sub_830E0050);
PPC_FUNC_IMPL(__imp__sub_830E0050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x830e0068
	if (cr6.eq) goto loc_830E0068;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_830E0068:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x830df840
	sub_830DF840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E0078"))) PPC_WEAK_FUNC(sub_830E0078);
PPC_FUNC_IMPL(__imp__sub_830E0078) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x830df7e8
	sub_830DF7E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310b218
	sub_8310B218(ctx, base);
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

__attribute__((alias("__imp__sub_830E00B8"))) PPC_WEAK_FUNC(sub_830E00B8);
PPC_FUNC_IMPL(__imp__sub_830E00B8) {
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
	// addi r31,r11,22336
	r31.s64 = r11.s64 + 22336;
	// lwz r11,-10716(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10716);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e0328
	if (!cr0.eq) goto loc_830E0328;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-26228
	ctx.r9.s64 = ctx.r10.s64 + -26228;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-10716(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10716, r11.u32);
	// li r11,4
	r11.s64 = 4;
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
	// addi r9,r11,-26248
	ctx.r9.s64 = r11.s64 + -26248;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
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
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
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
	// addi r9,r11,-26264
	ctx.r9.s64 = r11.s64 + -26264;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,44
	ctx.r9.s64 = 44;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
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
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// addi r11,r31,124
	r11.s64 = r31.s64 + 124;
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// addi r9,r11,-26292
	ctx.r9.s64 = r11.s64 + -26292;
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r9,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r9.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// addi r9,r11,-26316
	ctx.r9.s64 = r11.s64 + -26316;
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r10,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// addi r11,r31,172
	r11.s64 = r31.s64 + 172;
	// stw r9,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// stw r3,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// addi r9,r11,-26360
	ctx.r9.s64 = r11.s64 + -26360;
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
	// li r11,8
	r11.s64 = 8;
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// li r9,60
	ctx.r9.s64 = 60;
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// addi r11,r31,220
	r11.s64 = r31.s64 + 220;
	// stw r9,248(r31)
	PPC_STORE_U32(r31.u32 + 248, ctx.r9.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// addi r9,r9,-30584
	ctx.r9.s64 = ctx.r9.s64 + -30584;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r10.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r9,276(r31)
	PPC_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r11.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r8,-26388
	ctx.r9.s64 = ctx.r8.s64 + -26388;
	// std r30,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r30.u64);
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// stw r9,304(r31)
	PPC_STORE_U32(r31.u32 + 304, ctx.r9.u32);
	// li r11,56
	r11.s64 = 56;
	// stw r10,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// stw r9,300(r31)
	PPC_STORE_U32(r31.u32 + 300, ctx.r9.u32);
	// addi r11,r31,280
	r11.s64 = r31.s64 + 280;
	// stw r10,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
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
loc_830E0328:
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

__attribute__((alias("__imp__sub_830E0340"))) PPC_WEAK_FUNC(sub_830E0340);
PPC_FUNC_IMPL(__imp__sub_830E0340) {
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
	// addi r31,r11,22672
	r31.s64 = r11.s64 + 22672;
	// lwz r11,-10712(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10712);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e04ac
	if (!cr0.eq) goto loc_830E04AC;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-26116
	ctx.r9.s64 = ctx.r10.s64 + -26116;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-10712(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10712, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r11,4
	r11.s64 = 4;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r9,r11,-26140
	ctx.r9.s64 = r11.s64 + -26140;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
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
	// addi r9,r11,-26168
	ctx.r9.s64 = r11.s64 + -26168;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,12
	ctx.r9.s64 = 12;
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
	// addi r8,r11,-26200
	ctx.r8.s64 = r11.s64 + -26200;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// stw r9,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r9.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// stw r8,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r8.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// addi r11,r31,172
	r11.s64 = r31.s64 + 172;
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
loc_830E04AC:
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

__attribute__((alias("__imp__sub_830E04C0"))) PPC_WEAK_FUNC(sub_830E04C0);
PPC_FUNC_IMPL(__imp__sub_830E04C0) {
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
	// addi r31,r11,-10704
	r31.s64 = r11.s64 + -10704;
	// lwz r11,-10368(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10368);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e074c
	if (!cr0.eq) goto loc_830E074C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-26420
	ctx.r9.s64 = ctx.r10.s64 + -26420;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-10368(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10368, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830dc038
	sub_830DC038(ctx, base);
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
	// addi r9,r11,-26452
	ctx.r9.s64 = r11.s64 + -26452;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
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
	// bl 0x830dc0a8
	sub_830DC0A8(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r9,r11,-26472
	ctx.r9.s64 = r11.s64 + -26472;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// li r11,12
	r11.s64 = 12;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r11,r31,76
	r11.s64 = r31.s64 + 76;
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x830dc118
	sub_830DC118(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// addi r9,r9,-30112
	ctx.r9.s64 = ctx.r9.s64 + -30112;
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r9.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r8,-26484
	ctx.r9.s64 = ctx.r8.s64 + -26484;
	// std r30,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r30.u64);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// li r11,16
	r11.s64 = 16;
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// stw r9,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-30208
	ctx.r9.s64 = ctx.r9.s64 + -30208;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// stw r9,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,-26504
	ctx.r9.s64 = r11.s64 + -26504;
	// std r30,184(r31)
	PPC_STORE_U64(r31.u32 + 184, r30.u64);
	// li r11,8
	r11.s64 = 8;
	// stw r9,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// addi r11,r31,184
	r11.s64 = r31.s64 + 184;
	// stw r9,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// bl 0x830dc180
	sub_830DC180(ctx, base);
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
	// addi r9,r9,-32168
	ctx.r9.s64 = ctx.r9.s64 + -32168;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r10.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,-26540
	ctx.r9.s64 = r11.s64 + -26540;
	// std r30,232(r31)
	PPC_STORE_U64(r31.u32 + 232, r30.u64);
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// stw r9,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,28
	ctx.r9.s64 = 28;
	// li r10,2
	ctx.r10.s64 = 2;
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
	// bl 0x830dc1e0
	sub_830DC1E0(ctx, base);
	// stw r3,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r30.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r30.u32);
	// addi r8,r11,-27380
	ctx.r8.s64 = r11.s64 + -27380;
	// stw r30,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r30.u32);
	// stw r10,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r11.u32);
	// addi r11,r31,268
	r11.s64 = r31.s64 + 268;
	// stw r9,296(r31)
	PPC_STORE_U32(r31.u32 + 296, ctx.r9.u32);
	// stw r8,304(r31)
	PPC_STORE_U32(r31.u32 + 304, ctx.r8.u32);
	// stw r10,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
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
loc_830E074C:
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

__attribute__((alias("__imp__sub_830E0760"))) PPC_WEAK_FUNC(sub_830E0760);
PPC_FUNC_IMPL(__imp__sub_830E0760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x830e078c
	if (cr6.eq) goto loc_830E078C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830e07ac
	goto loc_830E07AC;
loc_830E078C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7fe0
	sub_830D7FE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
loc_830E07AC:
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

__attribute__((alias("__imp__sub_830E07C0"))) PPC_WEAK_FUNC(sub_830E07C0);
PPC_FUNC_IMPL(__imp__sub_830E07C0) {
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
	// addi r31,r11,-10360
	r31.s64 = r11.s64 + -10360;
	// lwz r11,-10168(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10168);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e0948
	if (!cr0.eq) goto loc_830E0948;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-26052
	ctx.r9.s64 = ctx.r10.s64 + -26052;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-10168(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10168, r11.u32);
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
	// bl 0x830dd380
	sub_830DD380(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31983
	ctx.r9.s64 = -2096037888;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r9,r9,-21472
	ctx.r9.s64 = ctx.r9.s64 + -21472;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// addi r9,r11,-26064
	ctx.r9.s64 = r11.s64 + -26064;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// li r11,8
	r11.s64 = 8;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r11,4
	r11.s64 = 4;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
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
	// addi r9,r11,-26080
	ctx.r9.s64 = r11.s64 + -26080;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// li r11,8
	r11.s64 = 8;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// addi r11,r31,124
	r11.s64 = r31.s64 + 124;
	// stw r30,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r30.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// addi r8,r11,-26096
	ctx.r8.s64 = r11.s64 + -26096;
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r8,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r8.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r9,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r9.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x830dd3e0
	sub_830DD3E0(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,1888
	ctx.r9.s64 = ctx.r9.s64 + 1888;
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// addi r11,r31,184
	r11.s64 = r31.s64 + 184;
	// stw r9,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// std r30,184(r31)
	PPC_STORE_U64(r31.u32 + 184, r30.u64);
loc_830E0948:
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

__attribute__((alias("__imp__sub_830E0960"))) PPC_WEAK_FUNC(sub_830E0960);
PPC_FUNC_IMPL(__imp__sub_830E0960) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// bl 0x830dd500
	sub_830DD500(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// bl 0x830dd568
	sub_830DD568(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// bl 0x830dd5d0
	sub_830DD5D0(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
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

__attribute__((alias("__imp__sub_830E09E0"))) PPC_WEAK_FUNC(sub_830E09E0);
PPC_FUNC_IMPL(__imp__sub_830E09E0) {
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
	// addi r31,r11,-10160
	r31.s64 = r11.s64 + -10160;
	// lwz r11,-9728(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9728);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e0d00
	if (!cr0.eq) goto loc_830E0D00;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-25752
	ctx.r9.s64 = ctx.r10.s64 + -25752;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-9728(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9728, r11.u32);
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
	// bl 0x830dd4a0
	sub_830DD4A0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r9,r9,-29744
	ctx.r9.s64 = ctx.r9.s64 + -29744;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// addi r9,r11,-25772
	ctx.r9.s64 = r11.s64 + -25772;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r11,2
	r11.s64 = 2;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
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
	// addi r9,r11,-25800
	ctx.r9.s64 = r11.s64 + -25800;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r10,7
	ctx.r10.s64 = 7;
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
	// bl 0x830eb910
	sub_830EB910(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r8,-25836
	ctx.r9.s64 = ctx.r8.s64 + -25836;
	// std r30,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r30.u64);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// li r11,8
	r11.s64 = 8;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// stw r9,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// addi r9,r11,-25872
	ctx.r9.s64 = r11.s64 + -25872;
	// stw r30,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r10,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// addi r11,r31,172
	r11.s64 = r31.s64 + 172;
	// stw r9,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// bl 0x830eb910
	sub_830EB910(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r3,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r9,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// stw r10,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,-25900
	ctx.r9.s64 = r11.s64 + -25900;
	// std r30,232(r31)
	PPC_STORE_U64(r31.u32 + 232, r30.u64);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// li r11,8
	r11.s64 = 8;
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// addi r11,r31,232
	r11.s64 = r31.s64 + 232;
	// stw r9,248(r31)
	PPC_STORE_U32(r31.u32 + 248, ctx.r9.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// stw r3,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// addi r11,r31,268
	r11.s64 = r31.s64 + 268;
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r30.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r30.u32);
	// addi r9,r11,-25944
	ctx.r9.s64 = r11.s64 + -25944;
	// stw r30,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r30.u32);
	// stw r9,304(r31)
	PPC_STORE_U32(r31.u32 + 304, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// stw r9,296(r31)
	PPC_STORE_U32(r31.u32 + 296, ctx.r9.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r11.u32);
	// stw r10,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// bl 0x830dd500
	sub_830DD500(ctx, base);
	// stw r3,312(r31)
	PPC_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r30.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// addi r9,r11,-25988
	ctx.r9.s64 = r11.s64 + -25988;
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r11.u32);
	// stw r9,352(r31)
	PPC_STORE_U32(r31.u32 + 352, ctx.r9.u32);
	// stw r10,340(r31)
	PPC_STORE_U32(r31.u32 + 340, ctx.r10.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r11.u32);
	// stw r9,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r9.u32);
	// addi r11,r31,316
	r11.s64 = r31.s64 + 316;
	// stw r10,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r10.u32);
	// bl 0x830dd568
	sub_830DD568(ctx, base);
	// stw r3,360(r31)
	PPC_STORE_U32(r31.u32 + 360, ctx.r3.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r30.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,368(r31)
	PPC_STORE_U32(r31.u32 + 368, r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,372(r31)
	PPC_STORE_U32(r31.u32 + 372, r30.u32);
	// addi r9,r11,-26040
	ctx.r9.s64 = r11.s64 + -26040;
	// stw r30,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,380(r31)
	PPC_STORE_U32(r31.u32 + 380, r30.u32);
	// stw r9,400(r31)
	PPC_STORE_U32(r31.u32 + 400, ctx.r9.u32);
	// li r9,44
	ctx.r9.s64 = 44;
	// stw r10,388(r31)
	PPC_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,384(r31)
	PPC_STORE_U32(r31.u32 + 384, r11.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(r31.u32 + 396, r11.u32);
	// addi r11,r31,364
	r11.s64 = r31.s64 + 364;
	// stw r9,392(r31)
	PPC_STORE_U32(r31.u32 + 392, ctx.r9.u32);
	// stw r10,404(r31)
	PPC_STORE_U32(r31.u32 + 404, ctx.r10.u32);
	// bl 0x830dd5d0
	sub_830DD5D0(ctx, base);
	// stw r3,408(r31)
	PPC_STORE_U32(r31.u32 + 408, ctx.r3.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r30.u32);
	// addi r11,r31,412
	r11.s64 = r31.s64 + 412;
	// stw r30,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(r31.u32 + 424, r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r30.u32);
loc_830E0D00:
	// li r11,9
	r11.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E0D18"))) PPC_WEAK_FUNC(sub_830E0D18);
PPC_FUNC_IMPL(__imp__sub_830E0D18) {
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
	// addi r31,r11,-9724
	r31.s64 = r11.s64 + -9724;
	// lwz r11,-9676(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9676);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e0d98
	if (!cr0.eq) goto loc_830E0D98;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-25736
	ctx.r9.s64 = ctx.r10.s64 + -25736;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-9676(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9676, r11.u32);
	// li r11,244
	r11.s64 = 244;
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
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
loc_830E0D98:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E0DB0"))) PPC_WEAK_FUNC(sub_830E0DB0);
PPC_FUNC_IMPL(__imp__sub_830E0DB0) {
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
	// addi r31,r11,22864
	r31.s64 = r11.s64 + 22864;
	// lwz r11,-9672(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9672);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e0ef4
	if (!cr0.eq) goto loc_830E0EF4;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-25672
	ctx.r9.s64 = ctx.r10.s64 + -25672;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-9672(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9672, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r11,4
	r11.s64 = 4;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
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
	// addi r9,r9,-29144
	ctx.r9.s64 = ctx.r9.s64 + -29144;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-25696
	ctx.r9.s64 = r11.s64 + -25696;
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
	// li r10,5
	ctx.r10.s64 = 5;
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
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
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
	// addi r9,r9,-29024
	ctx.r9.s64 = ctx.r9.s64 + -29024;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-25724
	ctx.r9.s64 = r11.s64 + -25724;
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r10,5
	ctx.r10.s64 = 5;
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
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
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
	// addi r11,r9,-28904
	r11.s64 = ctx.r9.s64 + -28904;
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// std r30,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r30.u64);
loc_830E0EF4:
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

__attribute__((alias("__imp__sub_830E0F08"))) PPC_WEAK_FUNC(sub_830E0F08);
PPC_FUNC_IMPL(__imp__sub_830E0F08) {
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
	// addi r31,r11,23008
	r31.s64 = r11.s64 + 23008;
	// lwz r11,-9668(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9668);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e104c
	if (!cr0.eq) goto loc_830E104C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-25620
	ctx.r9.s64 = ctx.r10.s64 + -25620;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-9668(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9668, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r11,8
	r11.s64 = 8;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830dec20
	sub_830DEC20(ctx, base);
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
	// addi r9,r9,-28456
	ctx.r9.s64 = ctx.r9.s64 + -28456;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-25640
	ctx.r9.s64 = r11.s64 + -25640;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// li r11,8
	r11.s64 = 8;
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
	// bl 0x830dd908
	sub_830DD908(ctx, base);
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
	// addi r9,r9,-28368
	ctx.r9.s64 = ctx.r9.s64 + -28368;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-25652
	ctx.r9.s64 = r11.s64 + -25652;
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x830dec20
	sub_830DEC20(ctx, base);
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
	// addi r11,r9,-28280
	r11.s64 = ctx.r9.s64 + -28280;
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// std r30,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r30.u64);
loc_830E104C:
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

__attribute__((alias("__imp__sub_830E1060"))) PPC_WEAK_FUNC(sub_830E1060);
PPC_FUNC_IMPL(__imp__sub_830E1060) {
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
	// addi r31,r11,23152
	r31.s64 = r11.s64 + 23152;
	// lwz r11,-9664(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9664);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e130c
	if (!cr0.eq) goto loc_830E130C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-25620
	ctx.r9.s64 = ctx.r10.s64 + -25620;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-9664(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9664, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r11,16
	r11.s64 = 16;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830dec20
	sub_830DEC20(ctx, base);
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
	// addi r9,r9,-28192
	ctx.r9.s64 = ctx.r9.s64 + -28192;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-25640
	ctx.r9.s64 = r11.s64 + -25640;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// li r11,8
	r11.s64 = 8;
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,20
	ctx.r9.s64 = 20;
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
	// bl 0x830dd970
	sub_830DD970(ctx, base);
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
	// addi r9,r9,-28104
	ctx.r9.s64 = ctx.r9.s64 + -28104;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-25652
	ctx.r9.s64 = r11.s64 + -25652;
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x830dec20
	sub_830DEC20(ctx, base);
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
	// addi r11,r9,-28016
	r11.s64 = ctx.r9.s64 + -28016;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r9,r10,-25540
	ctx.r9.s64 = ctx.r10.s64 + -25540;
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
	// li r11,28
	r11.s64 = 28;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x830dd9d8
	sub_830DD9D8(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r9,r9,-27928
	ctx.r9.s64 = ctx.r9.s64 + -27928;
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
	// li r9,72
	ctx.r9.s64 = 72;
	// addi r8,r8,-25560
	ctx.r8.s64 = ctx.r8.s64 + -25560;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// addi r9,r9,-27840
	ctx.r9.s64 = ctx.r9.s64 + -27840;
	// addi r10,r10,-27728
	ctx.r10.s64 = ctx.r10.s64 + -27728;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r9,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// stw r10,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,-25580
	ctx.r9.s64 = r11.s64 + -25580;
	// std r30,232(r31)
	PPC_STORE_U64(r31.u32 + 232, r30.u64);
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// stw r9,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,2
	ctx.r10.s64 = 2;
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
	// bl 0x830dec20
	sub_830DEC20(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r31,280
	r11.s64 = r31.s64 + 280;
	// stw r3,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r10.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r10,276(r31)
	PPC_STORE_U32(r31.u32 + 276, ctx.r10.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r9,-25600
	ctx.r9.s64 = ctx.r9.s64 + -25600;
	// std r30,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r30.u64);
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// stw r9,304(r31)
	PPC_STORE_U32(r31.u32 + 304, ctx.r9.u32);
	// li r11,36
	r11.s64 = 36;
	// stw r10,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// stw r9,300(r31)
	PPC_STORE_U32(r31.u32 + 300, ctx.r9.u32);
	// stw r10,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r3,312(r31)
	PPC_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// addi r11,r31,328
	r11.s64 = r31.s64 + 328;
	// stw r10,320(r31)
	PPC_STORE_U32(r31.u32 + 320, ctx.r10.u32);
	// stw r9,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r9.u32);
	// std r30,328(r31)
	PPC_STORE_U64(r31.u32 + 328, r30.u64);
loc_830E130C:
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

__attribute__((alias("__imp__sub_830E1320"))) PPC_WEAK_FUNC(sub_830E1320);
PPC_FUNC_IMPL(__imp__sub_830E1320) {
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
	// addi r31,r11,-9656
	r31.s64 = r11.s64 + -9656;
	// lwz r11,-9368(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9368);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e1584
	if (!cr0.eq) goto loc_830E1584;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-25432
	ctx.r9.s64 = ctx.r10.s64 + -25432;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-9368(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9368, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r11,144
	r11.s64 = 144;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830dda40
	sub_830DDA40(ctx, base);
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
	// addi r9,r9,-27320
	ctx.r9.s64 = ctx.r9.s64 + -27320;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-25460
	ctx.r9.s64 = r11.s64 + -25460;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// li r11,4
	r11.s64 = 4;
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
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
	// addi r9,r9,-27232
	ctx.r9.s64 = ctx.r9.s64 + -27232;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-25488
	ctx.r9.s64 = r11.s64 + -25488;
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,104
	ctx.r9.s64 = 104;
	// li r10,5
	ctx.r10.s64 = 5;
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
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r9,-27144
	r11.s64 = ctx.r9.s64 + -27144;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r9,r9,-25508
	ctx.r9.s64 = ctx.r9.s64 + -25508;
	// std r30,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r30.u64);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// li r11,148
	r11.s64 = 148;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// stw r9,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r9,r9,-27056
	ctx.r9.s64 = ctx.r9.s64 + -27056;
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
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// li r9,148
	ctx.r9.s64 = 148;
	// stw r10,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// li r11,2
	r11.s64 = 2;
	// addi r8,r8,-25528
	ctx.r8.s64 = ctx.r8.s64 + -25528;
	// stw r9,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// stw r8,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r8.u32);
	// addi r11,r31,184
	r11.s64 = r31.s64 + 184;
	// stw r10,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
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
	// addi r9,r9,-26968
	ctx.r9.s64 = ctx.r9.s64 + -26968;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r10.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,-25900
	ctx.r9.s64 = r11.s64 + -25900;
	// std r30,232(r31)
	PPC_STORE_U64(r31.u32 + 232, r30.u64);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// li r9,148
	ctx.r9.s64 = 148;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// addi r11,r31,232
	r11.s64 = r31.s64 + 232;
	// stw r9,248(r31)
	PPC_STORE_U32(r31.u32 + 248, ctx.r9.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// addi r11,r31,280
	r11.s64 = r31.s64 + 280;
	// stw r3,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-26880
	ctx.r9.s64 = ctx.r9.s64 + -26880;
	// stw r11,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r11.u32);
	// stw r10,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r10.u32);
	// stw r9,276(r31)
	PPC_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// std r30,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r30.u64);
loc_830E1584:
	// li r11,6
	r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E1598"))) PPC_WEAK_FUNC(sub_830E1598);
PPC_FUNC_IMPL(__imp__sub_830E1598) {
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
	// addi r31,r11,-9360
	r31.s64 = r11.s64 + -9360;
	// lwz r11,-9216(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9216);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e16e0
	if (!cr0.eq) goto loc_830E16E0;
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
	// stw r11,-9216(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9216, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r11,8
	r11.s64 = 8;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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
	// addi r9,r11,-25412
	ctx.r9.s64 = r11.s64 + -25412;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// li r11,16
	r11.s64 = 16;
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
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
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
	// addi r9,r9,-9312
	ctx.r9.s64 = ctx.r9.s64 + -9312;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-27404
	ctx.r9.s64 = r11.s64 + -27404;
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,132
	ctx.r9.s64 = 132;
	// li r10,3
	ctx.r10.s64 = 3;
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
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-26688
	ctx.r9.s64 = ctx.r9.s64 + -26688;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// stw r9,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r9.u32);
	// std r30,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r30.u64);
loc_830E16E0:
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

__attribute__((alias("__imp__sub_830E16F8"))) PPC_WEAK_FUNC(sub_830E16F8);
PPC_FUNC_IMPL(__imp__sub_830E16F8) {
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
	// addi r31,r11,-9208
	r31.s64 = r11.s64 + -9208;
	// lwz r11,-8920(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8920);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e1948
	if (!cr0.eq) goto loc_830E1948;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-25288
	ctx.r9.s64 = ctx.r10.s64 + -25288;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-8920(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8920, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r11,8
	r11.s64 = 8;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830ddc60
	sub_830DDC60(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r9,r9,-26024
	ctx.r9.s64 = ctx.r9.s64 + -26024;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// addi r9,r11,-25736
	ctx.r9.s64 = r11.s64 + -25736;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r11,1
	r11.s64 = 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-25316
	ctx.r9.s64 = r11.s64 + -25316;
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r11,2
	r11.s64 = 2;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// addi r9,r10,-25344
	ctx.r9.s64 = ctx.r10.s64 + -25344;
	// std r30,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r30.u64);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// stw r9,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r9,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,-25368
	ctx.r9.s64 = r11.s64 + -25368;
	// std r30,184(r31)
	PPC_STORE_U64(r31.u32 + 184, r30.u64);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// li r11,32
	r11.s64 = 32;
	// stw r10,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// addi r11,r31,184
	r11.s64 = r31.s64 + 184;
	// stw r9,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r3,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r9,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// stw r10,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,-25392
	ctx.r9.s64 = r11.s64 + -25392;
	// std r30,232(r31)
	PPC_STORE_U64(r31.u32 + 232, r30.u64);
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// stw r9,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r10,3
	ctx.r10.s64 = 3;
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
	// bl 0x830ddc00
	sub_830DDC00(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r3,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-26144
	ctx.r9.s64 = ctx.r9.s64 + -26144;
	// stw r11,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r11.u32);
	// stw r10,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r10.u32);
	// addi r11,r31,280
	r11.s64 = r31.s64 + 280;
	// stw r9,276(r31)
	PPC_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// std r30,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r30.u64);
loc_830E1948:
	// li r11,6
	r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E1960"))) PPC_WEAK_FUNC(sub_830E1960);
PPC_FUNC_IMPL(__imp__sub_830E1960) {
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
	// addi r31,r11,23488
	r31.s64 = r11.s64 + 23488;
	// lwz r11,-8916(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8916);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e1bc8
	if (!cr0.eq) goto loc_830E1BC8;
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
	// stw r11,-8916(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8916, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r11,8
	r11.s64 = 8;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
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
	// addi r9,r9,-25912
	ctx.r9.s64 = ctx.r9.s64 + -25912;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-25176
	ctx.r9.s64 = r11.s64 + -25176;
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// li r11,8
	r11.s64 = 8;
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
	// li r10,3
	ctx.r10.s64 = 3;
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
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-25688
	ctx.r9.s64 = ctx.r9.s64 + -25688;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-25196
	ctx.r9.s64 = r11.s64 + -25196;
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
	// li r11,8
	r11.s64 = 8;
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
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,-25680
	ctx.r10.s64 = ctx.r10.s64 + -25680;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// li r11,8
	r11.s64 = 8;
	// addi r9,r9,-25220
	ctx.r9.s64 = ctx.r9.s64 + -25220;
	// std r30,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r30.u64);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r11,20
	r11.s64 = 20;
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// stw r9,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-25672
	ctx.r9.s64 = ctx.r9.s64 + -25672;
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// li r11,8
	r11.s64 = 8;
	// stw r9,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// std r30,184(r31)
	PPC_STORE_U64(r31.u32 + 184, r30.u64);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r8,r8,-25248
	ctx.r8.s64 = ctx.r8.s64 + -25248;
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// stw r8,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r8.u32);
	// addi r11,r31,184
	r11.s64 = r31.s64 + 184;
	// stw r10,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
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
	// addi r9,r9,-25664
	ctx.r9.s64 = ctx.r9.s64 + -25664;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r10.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,-25268
	ctx.r9.s64 = r11.s64 + -25268;
	// std r30,232(r31)
	PPC_STORE_U64(r31.u32 + 232, r30.u64);
	// li r11,8
	r11.s64 = 8;
	// stw r9,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// addi r11,r31,232
	r11.s64 = r31.s64 + 232;
	// stw r9,248(r31)
	PPC_STORE_U32(r31.u32 + 248, ctx.r9.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// stw r3,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r11.u32);
	// addi r11,r31,280
	r11.s64 = r31.s64 + 280;
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,-25656
	ctx.r10.s64 = ctx.r10.s64 + -25656;
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// stw r10,276(r31)
	PPC_STORE_U32(r31.u32 + 276, ctx.r10.u32);
	// std r30,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r30.u64);
loc_830E1BC8:
	// li r11,6
	r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E1BE0"))) PPC_WEAK_FUNC(sub_830E1BE0);
PPC_FUNC_IMPL(__imp__sub_830E1BE0) {
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
	// addi r31,r11,-8912
	r31.s64 = r11.s64 + -8912;
	// lwz r11,-8864(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8864);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e1c74
	if (!cr0.eq) goto loc_830E1C74;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r10,-25152
	ctx.r9.s64 = ctx.r10.s64 + -25152;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-8864(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8864, r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
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
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// li r11,0
	r11.s64 = 0;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-25544
	ctx.r9.s64 = ctx.r9.s64 + -25544;
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
loc_830E1C74:
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

__attribute__((alias("__imp__sub_830E1C98"))) PPC_WEAK_FUNC(sub_830E1C98);
PPC_FUNC_IMPL(__imp__sub_830E1C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne cr6,0x830e1ccc
	if (!cr6.eq) goto loc_830E1CCC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830e1f78
	goto loc_830E1F78;
loc_830E1CCC:
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r22,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r22.u32);
	// bne cr6,0x830e1ce4
	if (!cr6.eq) goto loc_830E1CE4;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x830e1cf0
	goto loc_830E1CF0;
loc_830E1CE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de6d0
	sub_830DE6D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_830E1CF0:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830e1d44
	if (!cr6.eq) goto loc_830E1D44;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,-13652(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -13652);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e1d38
	if (cr6.eq) goto loc_830E1D38;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e1d38
	if (cr0.lt) goto loc_830E1D38;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830e1d44
	if (!cr6.eq) goto loc_830E1D44;
loc_830E1D38:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// b 0x830e1f78
	goto loc_830E1F78;
loc_830E1D44:
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x830e1d8c
	if (cr6.eq) goto loc_830E1D8C;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x830d7618
	sub_830D7618(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830e1d8c
	if (cr0.eq) goto loc_830E1D8C;
	// stw r24,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r24.u32);
	// stw r27,12(r25)
	PPC_STORE_U32(r25.u32 + 12, r27.u32);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// b 0x830e1d78
	goto loc_830E1D78;
loc_830E1D70:
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_830E1D78:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830e1d70
	if (!cr6.eq) goto loc_830E1D70;
	// stw r25,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e1f78
	goto loc_830E1F78;
loc_830E1D8C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r23,r11,-13720
	r23.s64 = r11.s64 + -13720;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r11,-13636
	r30.s64 = r11.s64 + -13636;
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e1dbc
	if (cr6.eq) goto loc_830E1DBC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// b 0x830e1dc8
	goto loc_830E1DC8;
loc_830E1DBC:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_830E1DC8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e1de4
	if (!cr6.eq) goto loc_830E1DE4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830e1f78
	goto loc_830E1F78;
loc_830E1DE4:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r28,r11,-13616
	r28.s64 = r11.s64 + -13616;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8310c000
	sub_8310C000(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830e1e6c
	if (!cr0.eq) goto loc_830E1E6C;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x830e1e4c
	if (cr6.lt) goto loc_830E1E4C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x830e1e4c
	if (!cr6.lt) goto loc_830E1E4C;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// b 0x830e1e54
	goto loc_830E1E54;
loc_830E1E4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E1E54:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
loc_830E1E5C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830e1f78
	goto loc_830E1F78;
loc_830E1E6C:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x830e1e7c
	if (!cr6.eq) goto loc_830E1E7C;
	// mr r27,r31
	r27.u64 = r31.u64;
loc_830E1E7C:
	// stw r26,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r26.u32);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// stw r24,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r24.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e1f14
	if (cr6.eq) goto loc_830E1F14;
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830e1c98
	sub_830E1C98(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bge 0x830e1f14
	if (!cr0.lt) goto loc_830E1F14;
loc_830E1EBC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8310c158
	sub_8310C158(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x830e1f04
	if (cr6.lt) goto loc_830E1F04;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x830e1f04
	if (!cr6.lt) goto loc_830E1F04;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// b 0x830e1f0c
	goto loc_830E1F0C;
loc_830E1F04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E1F0C:
	// mr r31,r27
	r31.u64 = r27.u64;
	// b 0x830e1e5c
	goto loc_830E1E5C;
loc_830E1F14:
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bge 0x830e1f48
	if (!cr0.lt) goto loc_830E1F48;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e1ebc
	if (cr6.eq) goto loc_830E1EBC;
	// bl 0x830daa20
	sub_830DAA20(ctx, base);
	// b 0x830e1ebc
	goto loc_830E1EBC;
loc_830E1F48:
	// addi r11,r26,52
	r11.s64 = r26.s64 + 52;
loc_830E1F4C:
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
	// bne 0x830e1f4c
	if (!cr0.eq) goto loc_830E1F4C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r31,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r31.u32);
loc_830E1F78:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_830E1F80"))) PPC_WEAK_FUNC(sub_830E1F80);
PPC_FUNC_IMPL(__imp__sub_830E1F80) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x830e2000
	if (cr6.eq) goto loc_830E2000;
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
	// bge cr6,0x830e2000
	if (!cr6.lt) goto loc_830E2000;
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
	// bne cr6,0x830e2000
	if (!cr6.eq) goto loc_830E2000;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r9,r4,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830e2000
	if (!cr6.eq) goto loc_830E2000;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x830e200c
	if (!cr6.eq) goto loc_830E200C;
loc_830E2000:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x830e2030
	goto loc_830E2030;
loc_830E200C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830e1c98
	sub_830E1C98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e2030
	if (cr6.eq) goto loc_830E2030;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_830E2030:
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

__attribute__((alias("__imp__sub_830E2048"))) PPC_WEAK_FUNC(sub_830E2048);
PPC_FUNC_IMPL(__imp__sub_830E2048) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r31,32(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830e215c
	if (cr6.eq) goto loc_830E215C;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r29,r11,-13616
	r29.s64 = r11.s64 + -13616;
loc_830E207C:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// clrlwi r11,r9,16
	r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e20d8
	if (cr6.eq) goto loc_830E20D8;
	// lwz r10,544(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 544);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x830e20d8
	if (!cr6.lt) goto loc_830E20D8;
	// rlwinm r8,r11,25,7,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFC;
	// clrlwi r11,r11,23
	r11.u64 = r11.u32 & 0x1FF;
	// mulli r10,r11,12
	ctx.r10.s64 = r11.s64 * 12;
	// lwzx r11,r8,r29
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r29.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x830e20d8
	if (!cr6.eq) goto loc_830E20D8;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830e20d8
	if (!cr6.eq) goto loc_830E20D8;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_830E20D8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_830E20E0:
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
	// bne 0x830e20e0
	if (!cr0.eq) goto loc_830E20E0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r30,32(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e2048
	sub_830E2048(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_830E2114:
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
	// bne 0x830e2114
	if (!cr0.eq) goto loc_830E2114;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830e2154
	if (cr0.eq) goto loc_830E2154;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830e2154
	if (!cr6.eq) goto loc_830E2154;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x830de618
	sub_830DE618(ctx, base);
loc_830E2154:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830e207c
	if (!cr6.eq) goto loc_830E207C;
loc_830E215C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830E2168"))) PPC_WEAK_FUNC(sub_830E2168);
PPC_FUNC_IMPL(__imp__sub_830E2168) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830e23d4
	if (cr6.eq) goto loc_830E23D4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x830e23d4
	if (cr6.eq) goto loc_830E23D4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e23d4
	if (cr6.eq) goto loc_830E23D4;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830e23d4
	if (cr0.eq) goto loc_830E23D4;
	// bl 0x830de6d0
	sub_830DE6D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e21bc
	if (cr0.eq) goto loc_830E21BC;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x830e23dc
	goto loc_830E23DC;
loc_830E21BC:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e23d4
	if (cr6.eq) goto loc_830E23D4;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e23d4
	if (cr6.eq) goto loc_830E23D4;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e23d4
	if (cr6.eq) goto loc_830E23D4;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e221c
	if (cr6.eq) goto loc_830E221C;
	// bl 0x830de6d0
	sub_830DE6D0(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x830e23bc
	if (cr0.eq) goto loc_830E23BC;
	// addi r11,r27,52
	r11.s64 = r27.s64 + 52;
loc_830E2200:
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
	// bne 0x830e2200
	if (!cr0.eq) goto loc_830E2200;
loc_830E221C:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x830e235c
	if (cr0.eq) goto loc_830E235C;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x830e2364
	if (cr0.lt) goto loc_830E2364;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x830e2364
	if (cr0.lt) goto loc_830E2364;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x830e2364
	if (cr0.lt) goto loc_830E2364;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r27.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e2318
	if (cr6.eq) goto loc_830E2318;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e2318
	if (cr6.eq) goto loc_830E2318;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lwz r11,-13780(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13780);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r6,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r6.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// ble cr6,0x830e2318
	if (!cr6.gt) goto loc_830E2318;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_830E22F8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x830e22f8
	if (cr6.lt) goto loc_830E22F8;
	// stw r11,-13780(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13780, r11.u32);
loc_830E2318:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r30,r10,-13776
	r30.s64 = ctx.r10.s64 + -13776;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-13056
	ctx.r3.s64 = r11.s64 + -13056;
	// bl 0x830dece0
	sub_830DECE0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x830e23c8
	if (!cr6.eq) goto loc_830E23C8;
loc_830E235C:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
loc_830E2364:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x830e238c
	if (cr6.eq) goto loc_830E238C;
	// addi r11,r27,52
	r11.s64 = r27.s64 + 52;
loc_830E2370:
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
	// bne 0x830e2370
	if (!cr0.eq) goto loc_830E2370;
loc_830E238C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e23b4
	if (cr6.eq) goto loc_830E23B4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E23B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x830e23dc
	goto loc_830E23DC;
loc_830E23BC:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x830e23dc
	goto loc_830E23DC;
loc_830E23C8:
	// stw r31,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e23dc
	goto loc_830E23DC;
loc_830E23D4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830E23DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830E23E8"))) PPC_WEAK_FUNC(sub_830E23E8);
PPC_FUNC_IMPL(__imp__sub_830E23E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e240c
	if (!cr6.eq) goto loc_830E240C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830e24cc
	goto loc_830E24CC;
loc_830E240C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830de6d0
	sub_830DE6D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830e2428
	if (!cr0.eq) goto loc_830E2428;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// b 0x830e24cc
	goto loc_830E24CC;
loc_830E2428:
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e2440
	if (cr6.eq) goto loc_830E2440;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,36
	ctx.r3.u64 = ctx.r3.u64 | 36;
	// b 0x830e24cc
	goto loc_830E24CC;
loc_830E2440:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e246c
	if (cr6.eq) goto loc_830E246C;
	// addi r11,r11,52
	r11.s64 = r11.s64 + 52;
loc_830E2450:
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
	// bne 0x830e2450
	if (!cr0.eq) goto loc_830E2450;
loc_830E246C:
	// lis r11,-31942
	r11.s64 = -2093350912;
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
	// addi r31,r11,-13056
	r31.s64 = r11.s64 + -13056;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d7a70
	sub_830D7A70(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x830e24a0
	if (cr0.eq) goto loc_830E24A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830dbfb0
	sub_830DBFB0(ctx, base);
loc_830E24A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E24CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E24D8"))) PPC_WEAK_FUNC(sub_830E24D8);
PPC_FUNC_IMPL(__imp__sub_830E24D8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e2500
	if (!cr6.eq) goto loc_830E2500;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830e2530
	goto loc_830E2530;
loc_830E2500:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830e1c98
	sub_830E1C98(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e2528
	if (cr6.eq) goto loc_830E2528;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x830e252c
	goto loc_830E252C;
loc_830E2528:
	// li r11,0
	r11.s64 = 0;
loc_830E252C:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_830E2530:
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

__attribute__((alias("__imp__sub_830E2548"))) PPC_WEAK_FUNC(sub_830E2548);
PPC_FUNC_IMPL(__imp__sub_830E2548) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// clrlwi r11,r8,16
	r11.u64 = ctx.r8.u32 & 0xFFFF;
	// beq 0x830e25c0
	if (cr0.eq) goto loc_830E25C0;
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
	// bge cr6,0x830e25c0
	if (!cr6.lt) goto loc_830E25C0;
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
	// bne cr6,0x830e25c0
	if (!cr6.eq) goto loc_830E25C0;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r9,r8,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830e25c0
	if (!cr6.eq) goto loc_830E25C0;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e25cc
	if (!cr6.eq) goto loc_830E25CC;
loc_830E25C0:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x830e2620
	goto loc_830E2620;
loc_830E25CC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830e25c0
	if (!cr0.eq) goto loc_830E25C0;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x830de8a0
	sub_830DE8A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e2620
	if (cr0.lt) goto loc_830E2620;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bne cr6,0x830e261c
	if (!cr6.eq) goto loc_830E261C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830daa20
	sub_830DAA20(ctx, base);
	// b 0x830e2620
	goto loc_830E2620;
loc_830E261C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E2620:
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

__attribute__((alias("__imp__sub_830E2638"))) PPC_WEAK_FUNC(sub_830E2638);
PPC_FUNC_IMPL(__imp__sub_830E2638) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830d7698
	sub_830D7698(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e26b8
	if (cr0.eq) goto loc_830E26B8;
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
	// bge cr6,0x830e26b8
	if (!cr6.lt) goto loc_830E26B8;
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
	// bne cr6,0x830e26b8
	if (!cr6.eq) goto loc_830E26B8;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830e26b8
	if (!cr6.eq) goto loc_830E26B8;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_830E26B8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_830E26C0:
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
	// bne 0x830e26c0
	if (!cr0.eq) goto loc_830E26C0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e2048
	sub_830E2048(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_830E26F0:
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
	// bne 0x830e26f0
	if (!cr0.eq) goto loc_830E26F0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830e2730
	if (cr0.eq) goto loc_830E2730;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830e2730
	if (!cr6.eq) goto loc_830E2730;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x830de618
	sub_830DE618(ctx, base);
loc_830E2730:
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

__attribute__((alias("__imp__sub_830E2748"))) PPC_WEAK_FUNC(sub_830E2748);
PPC_FUNC_IMPL(__imp__sub_830E2748) {
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
	// bl 0x830edd28
	sub_830EDD28(ctx, base);
	// bl 0x830e23e8
	sub_830E23E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E2770"))) PPC_WEAK_FUNC(sub_830E2770);
PPC_FUNC_IMPL(__imp__sub_830E2770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r6,-31986
	ctx.r6.s64 = -2096234496;
	// addi r9,r9,-28672
	ctx.r9.s64 = ctx.r9.s64 + -28672;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// lis r5,-31987
	ctx.r5.s64 = -2096300032;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r11.u64);
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// addi r8,r8,-28652
	ctx.r8.s64 = ctx.r8.s64 + -28652;
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, r11.u64);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r7,-18664
	ctx.r7.s64 = ctx.r7.s64 + -18664;
	// addi r10,r6,-18536
	ctx.r10.s64 = ctx.r6.s64 + -18536;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r9,r5,30936
	ctx.r9.s64 = ctx.r5.s64 + 30936;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r8,-13936
	ctx.r4.s64 = ctx.r8.s64 + -13936;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e2800
	if (cr0.lt) goto loc_830E2800;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E2800:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E2810"))) PPC_WEAK_FUNC(sub_830E2810);
PPC_FUNC_IMPL(__imp__sub_830E2810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28672
	ctx.r3.s64 = r11.s64 + -28672;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2820"))) PPC_WEAK_FUNC(sub_830E2820);
PPC_FUNC_IMPL(__imp__sub_830E2820) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-28628
	ctx.r10.s64 = ctx.r10.s64 + -28628;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-31987
	ctx.r6.s64 = -2096300032;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-28652
	ctx.r9.s64 = ctx.r9.s64 + -28652;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-4656
	ctx.r8.s64 = ctx.r8.s64 + -4656;
	// addi r11,r7,-18456
	r11.s64 = ctx.r7.s64 + -18456;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,30944
	ctx.r10.s64 = ctx.r6.s64 + 30944;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830dfcb8
	sub_830DFCB8(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13948
	ctx.r4.s64 = r11.s64 + -13948;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e28b8
	if (cr0.lt) goto loc_830E28B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E28B8:
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

__attribute__((alias("__imp__sub_830E28D0"))) PPC_WEAK_FUNC(sub_830E28D0);
PPC_FUNC_IMPL(__imp__sub_830E28D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28628
	ctx.r3.s64 = r11.s64 + -28628;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E28E0"))) PPC_WEAK_FUNC(sub_830E28E0);
PPC_FUNC_IMPL(__imp__sub_830E28E0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-28612
	ctx.r10.s64 = ctx.r10.s64 + -28612;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// addi r9,r9,-28592
	ctx.r9.s64 = ctx.r9.s64 + -28592;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31987
	ctx.r10.s64 = -2096300032;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r11,r11,-4552
	r11.s64 = r11.s64 + -4552;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r10,r10,31112
	ctx.r10.s64 = ctx.r10.s64 + 31112;
	// addi r9,r9,30952
	ctx.r9.s64 = ctx.r9.s64 + 30952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13944
	ctx.r4.s64 = r11.s64 + -13944;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e2978
	if (cr0.lt) goto loc_830E2978;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E2978:
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

__attribute__((alias("__imp__sub_830E2990"))) PPC_WEAK_FUNC(sub_830E2990);
PPC_FUNC_IMPL(__imp__sub_830E2990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28612
	ctx.r3.s64 = r11.s64 + -28612;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E29A0"))) PPC_WEAK_FUNC(sub_830E29A0);
PPC_FUNC_IMPL(__imp__sub_830E29A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28540
	ctx.r3.s64 = r11.s64 + -28540;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E29B0"))) PPC_WEAK_FUNC(sub_830E29B0);
PPC_FUNC_IMPL(__imp__sub_830E29B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28592
	ctx.r3.s64 = r11.s64 + -28592;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E29C0"))) PPC_WEAK_FUNC(sub_830E29C0);
PPC_FUNC_IMPL(__imp__sub_830E29C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r6,-31986
	ctx.r6.s64 = -2096234496;
	// addi r9,r9,-28520
	ctx.r9.s64 = ctx.r9.s64 + -28520;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// lis r5,-31987
	ctx.r5.s64 = -2096300032;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r11.u64);
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// addi r8,r8,-28652
	ctx.r8.s64 = ctx.r8.s64 + -28652;
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, r11.u64);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r7,-17808
	ctx.r7.s64 = ctx.r7.s64 + -17808;
	// addi r10,r6,-18144
	ctx.r10.s64 = ctx.r6.s64 + -18144;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r9,r5,31008
	ctx.r9.s64 = ctx.r5.s64 + 31008;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r8,-13924
	ctx.r4.s64 = ctx.r8.s64 + -13924;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e2a50
	if (cr0.lt) goto loc_830E2A50;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E2A50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E2A60"))) PPC_WEAK_FUNC(sub_830E2A60);
PPC_FUNC_IMPL(__imp__sub_830E2A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28520
	ctx.r3.s64 = r11.s64 + -28520;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2A70"))) PPC_WEAK_FUNC(sub_830E2A70);
PPC_FUNC_IMPL(__imp__sub_830E2A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28500
	ctx.r3.s64 = r11.s64 + -28500;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2A80"))) PPC_WEAK_FUNC(sub_830E2A80);
PPC_FUNC_IMPL(__imp__sub_830E2A80) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-28480
	ctx.r10.s64 = ctx.r10.s64 + -28480;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// addi r9,r9,-28592
	ctx.r9.s64 = ctx.r9.s64 + -28592;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// addi r11,r11,-18072
	r11.s64 = r11.s64 + -18072;
	// addi r10,r10,-17408
	ctx.r10.s64 = ctx.r10.s64 + -17408;
	// addi r9,r9,31104
	ctx.r9.s64 = ctx.r9.s64 + 31104;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x830d69a0
	sub_830D69A0(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13916
	ctx.r4.s64 = r11.s64 + -13916;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e2b1c
	if (cr0.lt) goto loc_830E2B1C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E2B1C:
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

__attribute__((alias("__imp__sub_830E2B30"))) PPC_WEAK_FUNC(sub_830E2B30);
PPC_FUNC_IMPL(__imp__sub_830E2B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28480
	ctx.r3.s64 = r11.s64 + -28480;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2B40"))) PPC_WEAK_FUNC(sub_830E2B40);
PPC_FUNC_IMPL(__imp__sub_830E2B40) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-28440
	ctx.r10.s64 = ctx.r10.s64 + -28440;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-31986
	ctx.r6.s64 = -2096234496;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-28480
	ctx.r9.s64 = ctx.r9.s64 + -28480;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-17952
	ctx.r8.s64 = ctx.r8.s64 + -17952;
	// addi r11,r7,-18144
	r11.s64 = ctx.r7.s64 + -18144;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,-17816
	ctx.r10.s64 = ctx.r6.s64 + -17816;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830e0340
	sub_830E0340(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13912
	ctx.r4.s64 = r11.s64 + -13912;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e2bd8
	if (cr0.lt) goto loc_830E2BD8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E2BD8:
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

__attribute__((alias("__imp__sub_830E2BF0"))) PPC_WEAK_FUNC(sub_830E2BF0);
PPC_FUNC_IMPL(__imp__sub_830E2BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28440
	ctx.r3.s64 = r11.s64 + -28440;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2C00"))) PPC_WEAK_FUNC(sub_830E2C00);
PPC_FUNC_IMPL(__imp__sub_830E2C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r6,-31987
	ctx.r6.s64 = -2096300032;
	// addi r9,r9,-28412
	ctx.r9.s64 = ctx.r9.s64 + -28412;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// lis r5,-32185
	ctx.r5.s64 = -2109276160;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r11.u64);
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// addi r8,r8,-28480
	ctx.r8.s64 = ctx.r8.s64 + -28480;
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, r11.u64);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r7,-4552
	ctx.r7.s64 = ctx.r7.s64 + -4552;
	// addi r10,r6,31112
	ctx.r10.s64 = ctx.r6.s64 + 31112;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r9,r5,-6592
	ctx.r9.s64 = ctx.r5.s64 + -6592;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r8,-13908
	ctx.r4.s64 = ctx.r8.s64 + -13908;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e2c90
	if (cr0.lt) goto loc_830E2C90;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E2C90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E2CA0"))) PPC_WEAK_FUNC(sub_830E2CA0);
PPC_FUNC_IMPL(__imp__sub_830E2CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28412
	ctx.r3.s64 = r11.s64 + -28412;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2CB0"))) PPC_WEAK_FUNC(sub_830E2CB0);
PPC_FUNC_IMPL(__imp__sub_830E2CB0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-28384
	ctx.r10.s64 = ctx.r10.s64 + -28384;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// addi r9,r9,-28592
	ctx.r9.s64 = ctx.r9.s64 + -28592;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31987
	ctx.r10.s64 = -2096300032;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// addi r11,r11,-4456
	r11.s64 = r11.s64 + -4456;
	// addi r10,r10,31112
	ctx.r10.s64 = ctx.r10.s64 + 31112;
	// addi r9,r9,31152
	ctx.r9.s64 = ctx.r9.s64 + 31152;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x830d6a38
	sub_830D6A38(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13904
	ctx.r4.s64 = r11.s64 + -13904;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e2d4c
	if (cr0.lt) goto loc_830E2D4C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E2D4C:
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

__attribute__((alias("__imp__sub_830E2D60"))) PPC_WEAK_FUNC(sub_830E2D60);
PPC_FUNC_IMPL(__imp__sub_830E2D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28384
	ctx.r3.s64 = r11.s64 + -28384;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2D70"))) PPC_WEAK_FUNC(sub_830E2D70);
PPC_FUNC_IMPL(__imp__sub_830E2D70) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-28360
	ctx.r10.s64 = ctx.r10.s64 + -28360;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// addi r9,r9,-28592
	ctx.r9.s64 = ctx.r9.s64 + -28592;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31987
	ctx.r10.s64 = -2096300032;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// addi r11,r11,-4456
	r11.s64 = r11.s64 + -4456;
	// addi r10,r10,31112
	ctx.r10.s64 = ctx.r10.s64 + 31112;
	// addi r9,r9,31152
	ctx.r9.s64 = ctx.r9.s64 + 31152;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x830d6ad0
	sub_830D6AD0(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13900
	ctx.r4.s64 = r11.s64 + -13900;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e2e0c
	if (cr0.lt) goto loc_830E2E0C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E2E0C:
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

__attribute__((alias("__imp__sub_830E2E20"))) PPC_WEAK_FUNC(sub_830E2E20);
PPC_FUNC_IMPL(__imp__sub_830E2E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28360
	ctx.r3.s64 = r11.s64 + -28360;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2E30"))) PPC_WEAK_FUNC(sub_830E2E30);
PPC_FUNC_IMPL(__imp__sub_830E2E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r6,-31986
	ctx.r6.s64 = -2096234496;
	// addi r9,r9,-28328
	ctx.r9.s64 = ctx.r9.s64 + -28328;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// lis r5,-31987
	ctx.r5.s64 = -2096300032;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r11.u64);
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// addi r8,r8,-28592
	ctx.r8.s64 = ctx.r8.s64 + -28592;
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, r11.u64);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r7,-18664
	ctx.r7.s64 = ctx.r7.s64 + -18664;
	// addi r10,r6,-17408
	ctx.r10.s64 = ctx.r6.s64 + -17408;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r9,r5,31160
	ctx.r9.s64 = ctx.r5.s64 + 31160;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r8,-13896
	ctx.r4.s64 = ctx.r8.s64 + -13896;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e2ec0
	if (cr0.lt) goto loc_830E2EC0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E2EC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E2ED0"))) PPC_WEAK_FUNC(sub_830E2ED0);
PPC_FUNC_IMPL(__imp__sub_830E2ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28328
	ctx.r3.s64 = r11.s64 + -28328;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2EE0"))) PPC_WEAK_FUNC(sub_830E2EE0);
PPC_FUNC_IMPL(__imp__sub_830E2EE0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-28300
	ctx.r10.s64 = ctx.r10.s64 + -28300;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-31987
	ctx.r6.s64 = -2096300032;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-28652
	ctx.r9.s64 = ctx.r9.s64 + -28652;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-4328
	ctx.r8.s64 = ctx.r8.s64 + -4328;
	// addi r11,r7,-4208
	r11.s64 = ctx.r7.s64 + -4208;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,31168
	ctx.r10.s64 = ctx.r6.s64 + 31168;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830e04c0
	sub_830E04C0(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13892
	ctx.r4.s64 = r11.s64 + -13892;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e2f78
	if (cr0.lt) goto loc_830E2F78;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E2F78:
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

__attribute__((alias("__imp__sub_830E2F90"))) PPC_WEAK_FUNC(sub_830E2F90);
PPC_FUNC_IMPL(__imp__sub_830E2F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28300
	ctx.r3.s64 = r11.s64 + -28300;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2FA0"))) PPC_WEAK_FUNC(sub_830E2FA0);
PPC_FUNC_IMPL(__imp__sub_830E2FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r6,-31986
	ctx.r6.s64 = -2096234496;
	// addi r9,r9,-28264
	ctx.r9.s64 = ctx.r9.s64 + -28264;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// lis r5,-31987
	ctx.r5.s64 = -2096300032;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r11.u64);
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// addi r8,r8,-28652
	ctx.r8.s64 = ctx.r8.s64 + -28652;
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, r11.u64);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r7,-17808
	ctx.r7.s64 = ctx.r7.s64 + -17808;
	// addi r10,r6,-17408
	ctx.r10.s64 = ctx.r6.s64 + -17408;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r9,r5,31176
	ctx.r9.s64 = ctx.r5.s64 + 31176;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r8,-13888
	ctx.r4.s64 = ctx.r8.s64 + -13888;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e3030
	if (cr0.lt) goto loc_830E3030;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E3030:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E3040"))) PPC_WEAK_FUNC(sub_830E3040);
PPC_FUNC_IMPL(__imp__sub_830E3040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28264
	ctx.r3.s64 = r11.s64 + -28264;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3050"))) PPC_WEAK_FUNC(sub_830E3050);
PPC_FUNC_IMPL(__imp__sub_830E3050) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31987
	ctx.r7.s64 = -2096300032;
	// addi r10,r10,-28244
	ctx.r10.s64 = ctx.r10.s64 + -28244;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-31987
	ctx.r6.s64 = -2096300032;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-28652
	ctx.r9.s64 = ctx.r9.s64 + -28652;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-17688
	ctx.r8.s64 = ctx.r8.s64 + -17688;
	// addi r11,r7,31112
	r11.s64 = ctx.r7.s64 + 31112;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,31184
	ctx.r10.s64 = ctx.r6.s64 + 31184;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830e07c0
	sub_830E07C0(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13884
	ctx.r4.s64 = r11.s64 + -13884;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e30e8
	if (cr0.lt) goto loc_830E30E8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E30E8:
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

__attribute__((alias("__imp__sub_830E3100"))) PPC_WEAK_FUNC(sub_830E3100);
PPC_FUNC_IMPL(__imp__sub_830E3100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28244
	ctx.r3.s64 = r11.s64 + -28244;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3110"))) PPC_WEAK_FUNC(sub_830E3110);
PPC_FUNC_IMPL(__imp__sub_830E3110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28224
	ctx.r3.s64 = r11.s64 + -28224;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3120"))) PPC_WEAK_FUNC(sub_830E3120);
PPC_FUNC_IMPL(__imp__sub_830E3120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28196
	ctx.r3.s64 = r11.s64 + -28196;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3130"))) PPC_WEAK_FUNC(sub_830E3130);
PPC_FUNC_IMPL(__imp__sub_830E3130) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-28172
	ctx.r10.s64 = ctx.r10.s64 + -28172;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// addi r9,r9,-28592
	ctx.r9.s64 = ctx.r9.s64 + -28592;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// addi r11,r11,-17952
	r11.s64 = r11.s64 + -17952;
	// addi r10,r10,-17408
	ctx.r10.s64 = ctx.r10.s64 + -17408;
	// addi r9,r9,31208
	ctx.r9.s64 = ctx.r9.s64 + 31208;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x830dd698
	sub_830DD698(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13872
	ctx.r4.s64 = r11.s64 + -13872;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e31cc
	if (cr0.lt) goto loc_830E31CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E31CC:
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

__attribute__((alias("__imp__sub_830E31E0"))) PPC_WEAK_FUNC(sub_830E31E0);
PPC_FUNC_IMPL(__imp__sub_830E31E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28172
	ctx.r3.s64 = r11.s64 + -28172;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E31F0"))) PPC_WEAK_FUNC(sub_830E31F0);
PPC_FUNC_IMPL(__imp__sub_830E31F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-28144
	ctx.r10.s64 = ctx.r10.s64 + -28144;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// addi r9,r9,-28592
	ctx.r9.s64 = ctx.r9.s64 + -28592;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// addi r11,r11,-17568
	r11.s64 = r11.s64 + -17568;
	// addi r10,r10,-17408
	ctx.r10.s64 = ctx.r10.s64 + -17408;
	// addi r9,r9,31216
	ctx.r9.s64 = ctx.r9.s64 + 31216;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x830dd810
	sub_830DD810(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13868
	ctx.r4.s64 = r11.s64 + -13868;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e328c
	if (cr0.lt) goto loc_830E328C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E328C:
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

__attribute__((alias("__imp__sub_830E32A0"))) PPC_WEAK_FUNC(sub_830E32A0);
PPC_FUNC_IMPL(__imp__sub_830E32A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28144
	ctx.r3.s64 = r11.s64 + -28144;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E32B0"))) PPC_WEAK_FUNC(sub_830E32B0);
PPC_FUNC_IMPL(__imp__sub_830E32B0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-28116
	ctx.r10.s64 = ctx.r10.s64 + -28116;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// addi r9,r9,-28592
	ctx.r9.s64 = ctx.r9.s64 + -28592;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// addi r11,r11,-4144
	r11.s64 = r11.s64 + -4144;
	// addi r10,r10,-4024
	ctx.r10.s64 = ctx.r10.s64 + -4024;
	// addi r9,r9,31224
	ctx.r9.s64 = ctx.r9.s64 + 31224;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x830e0d18
	sub_830E0D18(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13864
	ctx.r4.s64 = r11.s64 + -13864;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e334c
	if (cr0.lt) goto loc_830E334C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E334C:
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

__attribute__((alias("__imp__sub_830E3360"))) PPC_WEAK_FUNC(sub_830E3360);
PPC_FUNC_IMPL(__imp__sub_830E3360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28116
	ctx.r3.s64 = r11.s64 + -28116;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3370"))) PPC_WEAK_FUNC(sub_830E3370);
PPC_FUNC_IMPL(__imp__sub_830E3370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28100
	ctx.r3.s64 = r11.s64 + -28100;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3380"))) PPC_WEAK_FUNC(sub_830E3380);
PPC_FUNC_IMPL(__imp__sub_830E3380) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-28072
	ctx.r10.s64 = ctx.r10.s64 + -28072;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-31987
	ctx.r6.s64 = -2096300032;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-28592
	ctx.r9.s64 = ctx.r9.s64 + -28592;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-17360
	ctx.r8.s64 = ctx.r8.s64 + -17360;
	// addi r11,r7,-17120
	r11.s64 = ctx.r7.s64 + -17120;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,31240
	ctx.r10.s64 = ctx.r6.s64 + 31240;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830d8fe0
	sub_830D8FE0(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13856
	ctx.r4.s64 = r11.s64 + -13856;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e3418
	if (cr0.lt) goto loc_830E3418;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E3418:
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

__attribute__((alias("__imp__sub_830E3430"))) PPC_WEAK_FUNC(sub_830E3430);
PPC_FUNC_IMPL(__imp__sub_830E3430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28072
	ctx.r3.s64 = r11.s64 + -28072;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3440"))) PPC_WEAK_FUNC(sub_830E3440);
PPC_FUNC_IMPL(__imp__sub_830E3440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r6,-31986
	ctx.r6.s64 = -2096234496;
	// addi r9,r9,-28048
	ctx.r9.s64 = ctx.r9.s64 + -28048;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// lis r5,-31987
	ctx.r5.s64 = -2096300032;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r11.u64);
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// addi r8,r8,-28116
	ctx.r8.s64 = ctx.r8.s64 + -28116;
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, r11.u64);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r7,-17240
	ctx.r7.s64 = ctx.r7.s64 + -17240;
	// addi r10,r6,-17120
	ctx.r10.s64 = ctx.r6.s64 + -17120;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r9,r5,31248
	ctx.r9.s64 = ctx.r5.s64 + 31248;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r8,-13852
	ctx.r4.s64 = ctx.r8.s64 + -13852;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e34d0
	if (cr0.lt) goto loc_830E34D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E34D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E34E0"))) PPC_WEAK_FUNC(sub_830E34E0);
PPC_FUNC_IMPL(__imp__sub_830E34E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28048
	ctx.r3.s64 = r11.s64 + -28048;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E34F0"))) PPC_WEAK_FUNC(sub_830E34F0);
PPC_FUNC_IMPL(__imp__sub_830E34F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-28016
	ctx.r10.s64 = ctx.r10.s64 + -28016;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// addi r9,r9,-28592
	ctx.r9.s64 = ctx.r9.s64 + -28592;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// addi r11,r11,-17056
	r11.s64 = r11.s64 + -17056;
	// addi r10,r10,-17120
	ctx.r10.s64 = ctx.r10.s64 + -17120;
	// addi r9,r9,31256
	ctx.r9.s64 = ctx.r9.s64 + 31256;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x830e0f08
	sub_830E0F08(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7664
	ctx.r4.s64 = r11.s64 + -7664;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e358c
	if (cr0.lt) goto loc_830E358C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E358C:
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

__attribute__((alias("__imp__sub_830E35A0"))) PPC_WEAK_FUNC(sub_830E35A0);
PPC_FUNC_IMPL(__imp__sub_830E35A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-28016
	ctx.r3.s64 = r11.s64 + -28016;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E35B0"))) PPC_WEAK_FUNC(sub_830E35B0);
PPC_FUNC_IMPL(__imp__sub_830E35B0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-27984
	ctx.r10.s64 = ctx.r10.s64 + -27984;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// addi r9,r9,-28592
	ctx.r9.s64 = ctx.r9.s64 + -28592;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// addi r11,r11,-16936
	r11.s64 = r11.s64 + -16936;
	// addi r10,r10,-17120
	ctx.r10.s64 = ctx.r10.s64 + -17120;
	// addi r9,r9,31264
	ctx.r9.s64 = ctx.r9.s64 + 31264;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x830e1060
	sub_830E1060(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7668
	ctx.r4.s64 = r11.s64 + -7668;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e364c
	if (cr0.lt) goto loc_830E364C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E364C:
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

__attribute__((alias("__imp__sub_830E3660"))) PPC_WEAK_FUNC(sub_830E3660);
PPC_FUNC_IMPL(__imp__sub_830E3660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27984
	ctx.r3.s64 = r11.s64 + -27984;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3670"))) PPC_WEAK_FUNC(sub_830E3670);
PPC_FUNC_IMPL(__imp__sub_830E3670) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-27964
	ctx.r10.s64 = ctx.r10.s64 + -27964;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// addi r9,r9,-28592
	ctx.r9.s64 = ctx.r9.s64 + -28592;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// addi r11,r11,-3944
	r11.s64 = r11.s64 + -3944;
	// addi r10,r10,-3824
	ctx.r10.s64 = ctx.r10.s64 + -3824;
	// addi r9,r9,31272
	ctx.r9.s64 = ctx.r9.s64 + 31272;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x830e1320
	sub_830E1320(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13848
	ctx.r4.s64 = r11.s64 + -13848;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e370c
	if (cr0.lt) goto loc_830E370C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E370C:
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

__attribute__((alias("__imp__sub_830E3720"))) PPC_WEAK_FUNC(sub_830E3720);
PPC_FUNC_IMPL(__imp__sub_830E3720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27964
	ctx.r3.s64 = r11.s64 + -27964;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3730"))) PPC_WEAK_FUNC(sub_830E3730);
PPC_FUNC_IMPL(__imp__sub_830E3730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r6,-31987
	ctx.r6.s64 = -2096300032;
	// addi r9,r9,-27948
	ctx.r9.s64 = ctx.r9.s64 + -27948;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// lis r5,-31987
	ctx.r5.s64 = -2096300032;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r11.u64);
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// addi r8,r8,-28592
	ctx.r8.s64 = ctx.r8.s64 + -28592;
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, r11.u64);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r7,-4552
	ctx.r7.s64 = ctx.r7.s64 + -4552;
	// addi r10,r6,31112
	ctx.r10.s64 = ctx.r6.s64 + 31112;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r9,r5,31280
	ctx.r9.s64 = ctx.r5.s64 + 31280;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r8,-13844
	ctx.r4.s64 = ctx.r8.s64 + -13844;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e37c0
	if (cr0.lt) goto loc_830E37C0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E37C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E37D0"))) PPC_WEAK_FUNC(sub_830E37D0);
PPC_FUNC_IMPL(__imp__sub_830E37D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27948
	ctx.r3.s64 = r11.s64 + -27948;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E37E0"))) PPC_WEAK_FUNC(sub_830E37E0);
PPC_FUNC_IMPL(__imp__sub_830E37E0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-27928
	ctx.r10.s64 = ctx.r10.s64 + -27928;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// addi r9,r9,-28500
	ctx.r9.s64 = ctx.r9.s64 + -28500;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x830ef090
	sub_830EF090(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31987
	ctx.r10.s64 = -2096300032;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r11,r11,-3760
	r11.s64 = r11.s64 + -3760;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r10,r10,31112
	ctx.r10.s64 = ctx.r10.s64 + 31112;
	// addi r9,r9,31288
	ctx.r9.s64 = ctx.r9.s64 + 31288;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13840
	ctx.r4.s64 = r11.s64 + -13840;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e3878
	if (cr0.lt) goto loc_830E3878;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E3878:
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

__attribute__((alias("__imp__sub_830E3890"))) PPC_WEAK_FUNC(sub_830E3890);
PPC_FUNC_IMPL(__imp__sub_830E3890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27928
	ctx.r3.s64 = r11.s64 + -27928;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E38A0"))) PPC_WEAK_FUNC(sub_830E38A0);
PPC_FUNC_IMPL(__imp__sub_830E38A0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-27900
	ctx.r10.s64 = ctx.r10.s64 + -27900;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-31987
	ctx.r6.s64 = -2096300032;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-28652
	ctx.r9.s64 = ctx.r9.s64 + -28652;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-3664
	ctx.r8.s64 = ctx.r8.s64 + -3664;
	// addi r11,r7,-3520
	r11.s64 = ctx.r7.s64 + -3520;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,31296
	ctx.r10.s64 = ctx.r6.s64 + 31296;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830d9818
	sub_830D9818(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13836
	ctx.r4.s64 = r11.s64 + -13836;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e3938
	if (cr0.lt) goto loc_830E3938;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E3938:
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

__attribute__((alias("__imp__sub_830E3950"))) PPC_WEAK_FUNC(sub_830E3950);
PPC_FUNC_IMPL(__imp__sub_830E3950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27900
	ctx.r3.s64 = r11.s64 + -27900;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3960"))) PPC_WEAK_FUNC(sub_830E3960);
PPC_FUNC_IMPL(__imp__sub_830E3960) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-27864
	ctx.r10.s64 = ctx.r10.s64 + -27864;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-31987
	ctx.r6.s64 = -2096300032;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-28652
	ctx.r9.s64 = ctx.r9.s64 + -28652;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-3440
	ctx.r8.s64 = ctx.r8.s64 + -3440;
	// addi r11,r7,-3520
	r11.s64 = ctx.r7.s64 + -3520;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,31304
	ctx.r10.s64 = ctx.r6.s64 + 31304;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830e1598
	sub_830E1598(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13832
	ctx.r4.s64 = r11.s64 + -13832;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e39f8
	if (cr0.lt) goto loc_830E39F8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E39F8:
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

__attribute__((alias("__imp__sub_830E3A10"))) PPC_WEAK_FUNC(sub_830E3A10);
PPC_FUNC_IMPL(__imp__sub_830E3A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27864
	ctx.r3.s64 = r11.s64 + -27864;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3A20"))) PPC_WEAK_FUNC(sub_830E3A20);
PPC_FUNC_IMPL(__imp__sub_830E3A20) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-27844
	ctx.r10.s64 = ctx.r10.s64 + -27844;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// addi r9,r9,-28500
	ctx.r9.s64 = ctx.r9.s64 + -28500;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// addi r11,r11,-16816
	r11.s64 = r11.s64 + -16816;
	// addi r10,r10,-17408
	ctx.r10.s64 = ctx.r10.s64 + -17408;
	// addi r9,r9,31312
	ctx.r9.s64 = ctx.r9.s64 + 31312;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x830e16f8
	sub_830E16F8(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13828
	ctx.r4.s64 = r11.s64 + -13828;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e3abc
	if (cr0.lt) goto loc_830E3ABC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E3ABC:
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

__attribute__((alias("__imp__sub_830E3AD0"))) PPC_WEAK_FUNC(sub_830E3AD0);
PPC_FUNC_IMPL(__imp__sub_830E3AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27844
	ctx.r3.s64 = r11.s64 + -27844;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3AE0"))) PPC_WEAK_FUNC(sub_830E3AE0);
PPC_FUNC_IMPL(__imp__sub_830E3AE0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-27820
	ctx.r10.s64 = ctx.r10.s64 + -27820;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-31987
	ctx.r6.s64 = -2096300032;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-28652
	ctx.r9.s64 = ctx.r9.s64 + -28652;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-3264
	ctx.r8.s64 = ctx.r8.s64 + -3264;
	// addi r11,r7,-16680
	r11.s64 = ctx.r7.s64 + -16680;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,31320
	ctx.r10.s64 = ctx.r6.s64 + 31320;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830e1960
	sub_830E1960(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13824
	ctx.r4.s64 = r11.s64 + -13824;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e3b78
	if (cr0.lt) goto loc_830E3B78;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E3B78:
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

__attribute__((alias("__imp__sub_830E3B90"))) PPC_WEAK_FUNC(sub_830E3B90);
PPC_FUNC_IMPL(__imp__sub_830E3B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27820
	ctx.r3.s64 = r11.s64 + -27820;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3BA0"))) PPC_WEAK_FUNC(sub_830E3BA0);
PPC_FUNC_IMPL(__imp__sub_830E3BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27796
	ctx.r3.s64 = r11.s64 + -27796;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3BB0"))) PPC_WEAK_FUNC(sub_830E3BB0);
PPC_FUNC_IMPL(__imp__sub_830E3BB0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-27776
	ctx.r10.s64 = ctx.r10.s64 + -27776;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-31987
	ctx.r6.s64 = -2096300032;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-27796
	ctx.r9.s64 = ctx.r9.s64 + -27796;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-16632
	ctx.r8.s64 = ctx.r8.s64 + -16632;
	// addi r11,r7,-16512
	r11.s64 = ctx.r7.s64 + -16512;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,31336
	ctx.r10.s64 = ctx.r6.s64 + 31336;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830ddf68
	sub_830DDF68(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13816
	ctx.r4.s64 = r11.s64 + -13816;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e3c48
	if (cr0.lt) goto loc_830E3C48;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E3C48:
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

__attribute__((alias("__imp__sub_830E3C60"))) PPC_WEAK_FUNC(sub_830E3C60);
PPC_FUNC_IMPL(__imp__sub_830E3C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27776
	ctx.r3.s64 = r11.s64 + -27776;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3C70"))) PPC_WEAK_FUNC(sub_830E3C70);
PPC_FUNC_IMPL(__imp__sub_830E3C70) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-27740
	ctx.r10.s64 = ctx.r10.s64 + -27740;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-27796
	ctx.r9.s64 = ctx.r9.s64 + -27796;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-3112
	ctx.r8.s64 = ctx.r8.s64 + -3112;
	// addi r11,r7,-2632
	r11.s64 = ctx.r7.s64 + -2632;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,-6592
	ctx.r10.s64 = ctx.r6.s64 + -6592;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830da338
	sub_830DA338(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13812
	ctx.r4.s64 = r11.s64 + -13812;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e3d08
	if (cr0.lt) goto loc_830E3D08;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E3D08:
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

__attribute__((alias("__imp__sub_830E3D20"))) PPC_WEAK_FUNC(sub_830E3D20);
PPC_FUNC_IMPL(__imp__sub_830E3D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27740
	ctx.r3.s64 = r11.s64 + -27740;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3D30"))) PPC_WEAK_FUNC(sub_830E3D30);
PPC_FUNC_IMPL(__imp__sub_830E3D30) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-27700
	ctx.r10.s64 = ctx.r10.s64 + -27700;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-27796
	ctx.r9.s64 = ctx.r9.s64 + -27796;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-2992
	ctx.r8.s64 = ctx.r8.s64 + -2992;
	// addi r11,r7,-2632
	r11.s64 = ctx.r7.s64 + -2632;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,-6592
	ctx.r10.s64 = ctx.r6.s64 + -6592;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830de3d8
	sub_830DE3D8(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13808
	ctx.r4.s64 = r11.s64 + -13808;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e3dc8
	if (cr0.lt) goto loc_830E3DC8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E3DC8:
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

__attribute__((alias("__imp__sub_830E3DE0"))) PPC_WEAK_FUNC(sub_830E3DE0);
PPC_FUNC_IMPL(__imp__sub_830E3DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27700
	ctx.r3.s64 = r11.s64 + -27700;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3DF0"))) PPC_WEAK_FUNC(sub_830E3DF0);
PPC_FUNC_IMPL(__imp__sub_830E3DF0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-27664
	ctx.r10.s64 = ctx.r10.s64 + -27664;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-27796
	ctx.r9.s64 = ctx.r9.s64 + -27796;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-2872
	ctx.r8.s64 = ctx.r8.s64 + -2872;
	// addi r11,r7,-2632
	r11.s64 = ctx.r7.s64 + -2632;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,-6592
	ctx.r10.s64 = ctx.r6.s64 + -6592;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830de500
	sub_830DE500(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13804
	ctx.r4.s64 = r11.s64 + -13804;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e3e88
	if (cr0.lt) goto loc_830E3E88;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E3E88:
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

__attribute__((alias("__imp__sub_830E3EA0"))) PPC_WEAK_FUNC(sub_830E3EA0);
PPC_FUNC_IMPL(__imp__sub_830E3EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27664
	ctx.r3.s64 = r11.s64 + -27664;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3EB0"))) PPC_WEAK_FUNC(sub_830E3EB0);
PPC_FUNC_IMPL(__imp__sub_830E3EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r6,-31986
	ctx.r6.s64 = -2096234496;
	// addi r9,r9,-27624
	ctx.r9.s64 = ctx.r9.s64 + -27624;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// lis r5,-32185
	ctx.r5.s64 = -2109276160;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r11.u64);
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// addi r8,r8,-27796
	ctx.r8.s64 = ctx.r8.s64 + -27796;
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, r11.u64);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r7,-2752
	ctx.r7.s64 = ctx.r7.s64 + -2752;
	// addi r10,r6,-2632
	ctx.r10.s64 = ctx.r6.s64 + -2632;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r9,r5,-6592
	ctx.r9.s64 = ctx.r5.s64 + -6592;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r8,-13800
	ctx.r4.s64 = ctx.r8.s64 + -13800;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e3f40
	if (cr0.lt) goto loc_830E3F40;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E3F40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E3F50"))) PPC_WEAK_FUNC(sub_830E3F50);
PPC_FUNC_IMPL(__imp__sub_830E3F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27624
	ctx.r3.s64 = r11.s64 + -27624;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3F60"))) PPC_WEAK_FUNC(sub_830E3F60);
PPC_FUNC_IMPL(__imp__sub_830E3F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27596
	ctx.r3.s64 = r11.s64 + -27596;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3F70"))) PPC_WEAK_FUNC(sub_830E3F70);
PPC_FUNC_IMPL(__imp__sub_830E3F70) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-27564
	ctx.r10.s64 = ctx.r10.s64 + -27564;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-27796
	ctx.r9.s64 = ctx.r9.s64 + -27796;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-2560
	ctx.r8.s64 = ctx.r8.s64 + -2560;
	// addi r11,r7,-2632
	r11.s64 = ctx.r7.s64 + -2632;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,-6592
	ctx.r10.s64 = ctx.r6.s64 + -6592;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830da7c0
	sub_830DA7C0(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13792
	ctx.r4.s64 = r11.s64 + -13792;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e4008
	if (cr0.lt) goto loc_830E4008;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E4008:
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

__attribute__((alias("__imp__sub_830E4020"))) PPC_WEAK_FUNC(sub_830E4020);
PPC_FUNC_IMPL(__imp__sub_830E4020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27564
	ctx.r3.s64 = r11.s64 + -27564;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E4030"))) PPC_WEAK_FUNC(sub_830E4030);
PPC_FUNC_IMPL(__imp__sub_830E4030) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-27532
	ctx.r10.s64 = ctx.r10.s64 + -27532;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-27796
	ctx.r9.s64 = ctx.r9.s64 + -27796;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-2440
	ctx.r8.s64 = ctx.r8.s64 + -2440;
	// addi r11,r7,-2632
	r11.s64 = ctx.r7.s64 + -2632;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,-6592
	ctx.r10.s64 = ctx.r6.s64 + -6592;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830da920
	sub_830DA920(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13788
	ctx.r4.s64 = r11.s64 + -13788;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e40c8
	if (cr0.lt) goto loc_830E40C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E40C8:
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

__attribute__((alias("__imp__sub_830E40E0"))) PPC_WEAK_FUNC(sub_830E40E0);
PPC_FUNC_IMPL(__imp__sub_830E40E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-27532
	ctx.r3.s64 = r11.s64 + -27532;
	// b 0x830e23e8
	sub_830E23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E40F0"))) PPC_WEAK_FUNC(sub_830E40F0);
PPC_FUNC_IMPL(__imp__sub_830E40F0) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e4140
	if (cr0.eq) goto loc_830E4140;
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
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// b 0x830e4144
	goto loc_830E4144;
loc_830E4140:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830E4144:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e4158
	if (!cr6.eq) goto loc_830E4158;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830e4164
	goto loc_830E4164;
loc_830E4158:
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_830E4164:
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

__attribute__((alias("__imp__sub_830E4180"))) PPC_WEAK_FUNC(sub_830E4180);
PPC_FUNC_IMPL(__imp__sub_830E4180) {
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
	// beq cr6,0x830e41a8
	if (cr6.eq) goto loc_830E41A8;
	// bl 0x830dd448
	sub_830DD448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E41A8:
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

__attribute__((alias("__imp__sub_830E41C0"))) PPC_WEAK_FUNC(sub_830E41C0);
PPC_FUNC_IMPL(__imp__sub_830E41C0) {
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
	// beq 0x830e41f8
	if (cr0.eq) goto loc_830E41F8;
	// bl 0x830e0960
	sub_830E0960(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830e41fc
	goto loc_830E41FC;
loc_830E41F8:
	// li r11,0
	r11.s64 = 0;
loc_830E41FC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830e4210
	if (!cr6.eq) goto loc_830E4210;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830e421c
	goto loc_830E421C;
loc_830E4210:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830E421C:
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

__attribute__((alias("__imp__sub_830E4238"))) PPC_WEAK_FUNC(sub_830E4238);
PPC_FUNC_IMPL(__imp__sub_830E4238) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x830e4270
	if (cr0.eq) goto loc_830E4270;
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// b 0x830e4274
	goto loc_830E4274;
loc_830E4270:
	// li r11,0
	r11.s64 = 0;
loc_830E4274:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830e4288
	if (!cr6.eq) goto loc_830E4288;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830e4294
	goto loc_830E4294;
loc_830E4288:
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_830E4294:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E42A0"))) PPC_WEAK_FUNC(sub_830E42A0);
PPC_FUNC_IMPL(__imp__sub_830E42A0) {
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
	// beq 0x830e42d8
	if (cr0.eq) goto loc_830E42D8;
	// bl 0x830de5b8
	sub_830DE5B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830e42dc
	goto loc_830E42DC;
loc_830E42D8:
	// li r11,0
	r11.s64 = 0;
loc_830E42DC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830e42f0
	if (!cr6.eq) goto loc_830E42F0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830e42fc
	goto loc_830E42FC;
loc_830E42F0:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830E42FC:
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

__attribute__((alias("__imp__sub_830E4318"))) PPC_WEAK_FUNC(sub_830E4318);
PPC_FUNC_IMPL(__imp__sub_830E4318) {
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
	// li r28,0
	r28.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e437c
	if (cr6.eq) goto loc_830E437C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830e4370
	if (!cr6.gt) goto loc_830E4370;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_830E434C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x830d5c18
	sub_830D5C18(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x830e434c
	if (cr6.lt) goto loc_830E434C;
loc_830E4370:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
loc_830E437C:
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830E4390"))) PPC_WEAK_FUNC(sub_830E4390);
PPC_FUNC_IMPL(__imp__sub_830E4390) {
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
	// addi r31,r11,-8856
	r31.s64 = r11.s64 + -8856;
	// lwz r11,-8040(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8040);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e49d0
	if (!cr0.eq) goto loc_830E49D0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-25152
	ctx.r9.s64 = ctx.r10.s64 + -25152;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-8040(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8040, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r11,4
	r11.s64 = 4;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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
	// addi r9,r11,-24824
	ctx.r9.s64 = r11.s64 + -24824;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
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
	// bl 0x830f9430
	sub_830F9430(ctx, base);
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
	// addi r9,r9,-1496
	ctx.r9.s64 = ctx.r9.s64 + -1496;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-24840
	ctx.r9.s64 = r11.s64 + -24840;
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,4
	ctx.r10.s64 = 4;
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
	// bl 0x830f9498
	sub_830F9498(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r9,r9,-1328
	ctx.r9.s64 = ctx.r9.s64 + -1328;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// stw r9,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r9.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// std r30,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r30.u64);
	// addi r9,r8,-24860
	ctx.r9.s64 = ctx.r8.s64 + -24860;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// li r11,48
	r11.s64 = 48;
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// stw r9,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x830eb910
	sub_830EB910(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,24672
	ctx.r9.s64 = ctx.r9.s64 + 24672;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// stw r9,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,-26884
	ctx.r9.s64 = r11.s64 + -26884;
	// std r30,184(r31)
	PPC_STORE_U64(r31.u32 + 184, r30.u64);
	// stw r10,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,60
	ctx.r9.s64 = 60;
	// li r10,7
	ctx.r10.s64 = 7;
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
	// bl 0x830eb988
	sub_830EB988(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// stw r3,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,24688
	ctx.r9.s64 = ctx.r9.s64 + 24688;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r10.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,-26904
	ctx.r9.s64 = r11.s64 + -26904;
	// std r30,232(r31)
	PPC_STORE_U64(r31.u32 + 232, r30.u64);
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// stw r9,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,72
	ctx.r9.s64 = 72;
	// li r10,8
	ctx.r10.s64 = 8;
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
	// bl 0x830eba00
	sub_830EBA00(ctx, base);
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// addi r9,r9,24784
	ctx.r9.s64 = ctx.r9.s64 + 24784;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r10.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r9,276(r31)
	PPC_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r11.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r8,-24876
	ctx.r9.s64 = ctx.r8.s64 + -24876;
	// std r30,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r30.u64);
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// stw r9,304(r31)
	PPC_STORE_U32(r31.u32 + 304, ctx.r9.u32);
	// li r11,20
	r11.s64 = 20;
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
	// addi r11,r31,280
	r11.s64 = r31.s64 + 280;
	// stw r10,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// bl 0x830eb8a8
	sub_830EB8A8(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r3,312(r31)
	PPC_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// addi r9,r11,-24892
	ctx.r9.s64 = r11.s64 + -24892;
	// stw r30,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
	// stw r9,352(r31)
	PPC_STORE_U32(r31.u32 + 352, ctx.r9.u32);
	// li r9,232
	ctx.r9.s64 = 232;
	// stw r10,340(r31)
	PPC_STORE_U32(r31.u32 + 340, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r11.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r11.u32);
	// addi r11,r31,316
	r11.s64 = r31.s64 + 316;
	// stw r9,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r9.u32);
	// stw r10,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,360(r31)
	PPC_STORE_U32(r31.u32 + 360, ctx.r3.u32);
	// addi r9,r9,24944
	ctx.r9.s64 = ctx.r9.s64 + 24944;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,368(r31)
	PPC_STORE_U32(r31.u32 + 368, ctx.r10.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r9,372(r31)
	PPC_STORE_U32(r31.u32 + 372, ctx.r9.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r11.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r8,-24904
	ctx.r9.s64 = ctx.r8.s64 + -24904;
	// std r30,376(r31)
	PPC_STORE_U64(r31.u32 + 376, r30.u64);
	// stw r11,384(r31)
	PPC_STORE_U32(r31.u32 + 384, r11.u32);
	// stw r9,400(r31)
	PPC_STORE_U32(r31.u32 + 400, ctx.r9.u32);
	// li r11,88
	r11.s64 = 88;
	// stw r10,388(r31)
	PPC_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r11.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(r31.u32 + 396, ctx.r9.u32);
	// addi r11,r31,376
	r11.s64 = r31.s64 + 376;
	// stw r10,404(r31)
	PPC_STORE_U32(r31.u32 + 404, ctx.r10.u32);
	// bl 0x830eb910
	sub_830EB910(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// stw r3,408(r31)
	PPC_STORE_U32(r31.u32 + 408, ctx.r3.u32);
	// stw r11,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,24800
	ctx.r9.s64 = ctx.r9.s64 + 24800;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,416(r31)
	PPC_STORE_U32(r31.u32 + 416, ctx.r10.u32);
	// stw r9,420(r31)
	PPC_STORE_U32(r31.u32 + 420, ctx.r9.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r9,r11,-24916
	ctx.r9.s64 = r11.s64 + -24916;
	// std r30,424(r31)
	PPC_STORE_U64(r31.u32 + 424, r30.u64);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,448(r31)
	PPC_STORE_U32(r31.u32 + 448, ctx.r9.u32);
	// li r9,240
	ctx.r9.s64 = 240;
	// stw r11,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r10,436(r31)
	PPC_STORE_U32(r31.u32 + 436, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,444(r31)
	PPC_STORE_U32(r31.u32 + 444, r11.u32);
	// addi r11,r31,424
	r11.s64 = r31.s64 + 424;
	// stw r9,440(r31)
	PPC_STORE_U32(r31.u32 + 440, ctx.r9.u32);
	// stw r10,452(r31)
	PPC_STORE_U32(r31.u32 + 452, ctx.r10.u32);
	// bl 0x830debb0
	sub_830DEBB0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,456(r31)
	PPC_STORE_U32(r31.u32 + 456, ctx.r3.u32);
	// stw r11,460(r31)
	PPC_STORE_U32(r31.u32 + 460, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-912
	ctx.r9.s64 = ctx.r9.s64 + -912;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,464(r31)
	PPC_STORE_U32(r31.u32 + 464, ctx.r10.u32);
	// stw r9,468(r31)
	PPC_STORE_U32(r31.u32 + 468, ctx.r9.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r11,-24936
	ctx.r9.s64 = r11.s64 + -24936;
	// std r30,472(r31)
	PPC_STORE_U64(r31.u32 + 472, r30.u64);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,496(r31)
	PPC_STORE_U32(r31.u32 + 496, ctx.r9.u32);
	// li r9,236
	ctx.r9.s64 = 236;
	// stw r11,480(r31)
	PPC_STORE_U32(r31.u32 + 480, r11.u32);
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
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r3,504(r31)
	PPC_STORE_U32(r31.u32 + 504, ctx.r3.u32);
	// stw r11,508(r31)
	PPC_STORE_U32(r31.u32 + 508, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-32536
	ctx.r9.s64 = ctx.r9.s64 + -32536;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,512(r31)
	PPC_STORE_U32(r31.u32 + 512, ctx.r10.u32);
	// stw r9,516(r31)
	PPC_STORE_U32(r31.u32 + 516, ctx.r9.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r9,r11,-24988
	ctx.r9.s64 = r11.s64 + -24988;
	// std r30,520(r31)
	PPC_STORE_U64(r31.u32 + 520, r30.u64);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,544(r31)
	PPC_STORE_U32(r31.u32 + 544, ctx.r9.u32);
	// li r9,240
	ctx.r9.s64 = 240;
	// stw r11,528(r31)
	PPC_STORE_U32(r31.u32 + 528, r11.u32);
	// li r11,128
	r11.s64 = 128;
	// stw r10,532(r31)
	PPC_STORE_U32(r31.u32 + 532, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r11.u32);
	// addi r11,r31,520
	r11.s64 = r31.s64 + 520;
	// stw r9,536(r31)
	PPC_STORE_U32(r31.u32 + 536, ctx.r9.u32);
	// stw r10,548(r31)
	PPC_STORE_U32(r31.u32 + 548, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r3,552(r31)
	PPC_STORE_U32(r31.u32 + 552, ctx.r3.u32);
	// stw r11,556(r31)
	PPC_STORE_U32(r31.u32 + 556, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r9,564(r31)
	PPC_STORE_U32(r31.u32 + 564, ctx.r9.u32);
	// stw r10,560(r31)
	PPC_STORE_U32(r31.u32 + 560, ctx.r10.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r9,r11,-25012
	ctx.r9.s64 = r11.s64 + -25012;
	// std r30,568(r31)
	PPC_STORE_U64(r31.u32 + 568, r30.u64);
	// li r11,8
	r11.s64 = 8;
	// stw r9,592(r31)
	PPC_STORE_U32(r31.u32 + 592, ctx.r9.u32);
	// li r9,240
	ctx.r9.s64 = 240;
	// stw r11,576(r31)
	PPC_STORE_U32(r31.u32 + 576, r11.u32);
	// li r11,64
	r11.s64 = 64;
	// stw r10,580(r31)
	PPC_STORE_U32(r31.u32 + 580, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,588(r31)
	PPC_STORE_U32(r31.u32 + 588, r11.u32);
	// addi r11,r31,568
	r11.s64 = r31.s64 + 568;
	// stw r9,584(r31)
	PPC_STORE_U32(r31.u32 + 584, ctx.r9.u32);
	// stw r10,596(r31)
	PPC_STORE_U32(r31.u32 + 596, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r3,600(r31)
	PPC_STORE_U32(r31.u32 + 600, ctx.r3.u32);
	// stw r11,604(r31)
	PPC_STORE_U32(r31.u32 + 604, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r9,612(r31)
	PPC_STORE_U32(r31.u32 + 612, ctx.r9.u32);
	// stw r10,608(r31)
	PPC_STORE_U32(r31.u32 + 608, ctx.r10.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r11,-25044
	ctx.r9.s64 = r11.s64 + -25044;
	// std r30,616(r31)
	PPC_STORE_U64(r31.u32 + 616, r30.u64);
	// stw r10,628(r31)
	PPC_STORE_U32(r31.u32 + 628, ctx.r10.u32);
	// stw r9,640(r31)
	PPC_STORE_U32(r31.u32 + 640, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,240
	ctx.r9.s64 = 240;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,624(r31)
	PPC_STORE_U32(r31.u32 + 624, r11.u32);
	// stw r11,636(r31)
	PPC_STORE_U32(r31.u32 + 636, r11.u32);
	// addi r11,r31,616
	r11.s64 = r31.s64 + 616;
	// stw r9,632(r31)
	PPC_STORE_U32(r31.u32 + 632, ctx.r9.u32);
	// stw r10,644(r31)
	PPC_STORE_U32(r31.u32 + 644, ctx.r10.u32);
	// bl 0x830eba80
	sub_830EBA80(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// stw r11,652(r31)
	PPC_STORE_U32(r31.u32 + 652, r11.u32);
	// addi r9,r9,-32464
	ctx.r9.s64 = ctx.r9.s64 + -32464;
	// stw r3,648(r31)
	PPC_STORE_U32(r31.u32 + 648, ctx.r3.u32);
	// addi r10,r10,-32392
	ctx.r10.s64 = ctx.r10.s64 + -32392;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r9,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r9.u32);
	// stw r10,656(r31)
	PPC_STORE_U32(r31.u32 + 656, ctx.r10.u32);
	// li r10,14
	ctx.r10.s64 = 14;
	// addi r9,r11,-25072
	ctx.r9.s64 = r11.s64 + -25072;
	// std r30,664(r31)
	PPC_STORE_U64(r31.u32 + 664, r30.u64);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,688(r31)
	PPC_STORE_U32(r31.u32 + 688, ctx.r9.u32);
	// li r9,240
	ctx.r9.s64 = 240;
	// stw r11,672(r31)
	PPC_STORE_U32(r31.u32 + 672, r11.u32);
	// li r11,4096
	r11.s64 = 4096;
	// stw r10,676(r31)
	PPC_STORE_U32(r31.u32 + 676, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,684(r31)
	PPC_STORE_U32(r31.u32 + 684, r11.u32);
	// addi r11,r31,664
	r11.s64 = r31.s64 + 664;
	// stw r9,680(r31)
	PPC_STORE_U32(r31.u32 + 680, ctx.r9.u32);
	// stw r10,692(r31)
	PPC_STORE_U32(r31.u32 + 692, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,696(r31)
	PPC_STORE_U32(r31.u32 + 696, ctx.r3.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,708(r31)
	PPC_STORE_U32(r31.u32 + 708, ctx.r9.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r10,704(r31)
	PPC_STORE_U32(r31.u32 + 704, ctx.r10.u32);
	// stw r11,700(r31)
	PPC_STORE_U32(r31.u32 + 700, r11.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r9,r8,-25100
	ctx.r9.s64 = ctx.r8.s64 + -25100;
	// std r30,712(r31)
	PPC_STORE_U64(r31.u32 + 712, r30.u64);
	// stw r11,720(r31)
	PPC_STORE_U32(r31.u32 + 720, r11.u32);
	// stw r9,736(r31)
	PPC_STORE_U32(r31.u32 + 736, ctx.r9.u32);
	// li r11,240
	r11.s64 = 240;
	// stw r10,724(r31)
	PPC_STORE_U32(r31.u32 + 724, ctx.r10.u32);
	// li r9,16384
	ctx.r9.s64 = 16384;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,728(r31)
	PPC_STORE_U32(r31.u32 + 728, r11.u32);
	// stw r9,732(r31)
	PPC_STORE_U32(r31.u32 + 732, ctx.r9.u32);
	// addi r11,r31,712
	r11.s64 = r31.s64 + 712;
	// stw r10,740(r31)
	PPC_STORE_U32(r31.u32 + 740, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// stw r3,744(r31)
	PPC_STORE_U32(r31.u32 + 744, ctx.r3.u32);
	// stw r11,748(r31)
	PPC_STORE_U32(r31.u32 + 748, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,24816
	ctx.r9.s64 = ctx.r9.s64 + 24816;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,752(r31)
	PPC_STORE_U32(r31.u32 + 752, ctx.r10.u32);
	// stw r9,756(r31)
	PPC_STORE_U32(r31.u32 + 756, ctx.r9.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,-25144
	ctx.r9.s64 = r11.s64 + -25144;
	// std r30,760(r31)
	PPC_STORE_U64(r31.u32 + 760, r30.u64);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,784(r31)
	PPC_STORE_U32(r31.u32 + 784, ctx.r9.u32);
	// li r9,240
	ctx.r9.s64 = 240;
	// stw r11,768(r31)
	PPC_STORE_U32(r31.u32 + 768, r11.u32);
	// lis r11,1
	r11.s64 = 65536;
	// stw r10,772(r31)
	PPC_STORE_U32(r31.u32 + 772, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,780(r31)
	PPC_STORE_U32(r31.u32 + 780, r11.u32);
	// addi r11,r31,760
	r11.s64 = r31.s64 + 760;
	// stw r9,776(r31)
	PPC_STORE_U32(r31.u32 + 776, ctx.r9.u32);
	// stw r10,788(r31)
	PPC_STORE_U32(r31.u32 + 788, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r3,792(r31)
	PPC_STORE_U32(r31.u32 + 792, ctx.r3.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,-1160
	ctx.r9.s64 = ctx.r9.s64 + -1160;
	// stw r11,796(r31)
	PPC_STORE_U32(r31.u32 + 796, r11.u32);
	// stw r10,800(r31)
	PPC_STORE_U32(r31.u32 + 800, ctx.r10.u32);
	// addi r11,r31,808
	r11.s64 = r31.s64 + 808;
	// stw r9,804(r31)
	PPC_STORE_U32(r31.u32 + 804, ctx.r9.u32);
	// std r30,808(r31)
	PPC_STORE_U64(r31.u32 + 808, r30.u64);
loc_830E49D0:
	// li r11,17
	r11.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E49E8"))) PPC_WEAK_FUNC(sub_830E49E8);
PPC_FUNC_IMPL(__imp__sub_830E49E8) {
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
	// addi r31,r11,23776
	r31.s64 = r11.s64 + 23776;
	// lwz r11,-8036(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8036);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830e4e64
	if (!cr0.eq) goto loc_830E4E64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,-24624
	ctx.r9.s64 = ctx.r10.s64 + -24624;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,-8036(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8036, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r11,4
	r11.s64 = 4;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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
	// addi r9,r11,-24640
	ctx.r9.s64 = r11.s64 + -24640;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
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
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lis r9,-31985
	ctx.r9.s64 = -2096168960;
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,13224
	ctx.r9.s64 = ctx.r9.s64 + 13224;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-24656
	ctx.r9.s64 = r11.s64 + -24656;
	// std r30,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r30.u64);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x830debb0
	sub_830DEBB0(ctx, base);
	// lis r9,-31985
	ctx.r9.s64 = -2096168960;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// addi r9,r9,13464
	ctx.r9.s64 = ctx.r9.s64 + 13464;
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r9.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r8,-24688
	ctx.r9.s64 = ctx.r8.s64 + -24688;
	// std r30,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r30.u64);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// li r11,16
	r11.s64 = 16;
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// stw r9,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x830deb40
	sub_830DEB40(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r9,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r8,-24704
	ctx.r9.s64 = ctx.r8.s64 + -24704;
	// std r30,184(r31)
	PPC_STORE_U64(r31.u32 + 184, r30.u64);
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// li r11,20
	r11.s64 = 20;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,204(r31)
	PPC_STORE_U32(r31.u32 + 204, ctx.r9.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r11.u32);
	// addi r11,r31,184
	r11.s64 = r31.s64 + 184;
	// stw r10,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// stw r3,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// addi r9,r11,-24724
	ctx.r9.s64 = r11.s64 + -24724;
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r9,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// addi r11,r31,220
	r11.s64 = r31.s64 + 220;
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// stw r9,248(r31)
	PPC_STORE_U32(r31.u32 + 248, ctx.r9.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// stw r3,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// addi r11,r31,268
	r11.s64 = r31.s64 + 268;
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r30.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r30.u32);
	// addi r9,r11,-24736
	ctx.r9.s64 = r11.s64 + -24736;
	// stw r30,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r30.u32);
	// stw r9,304(r31)
	PPC_STORE_U32(r31.u32 + 304, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// stw r9,296(r31)
	PPC_STORE_U32(r31.u32 + 296, ctx.r9.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r11.u32);
	// stw r10,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// stw r3,312(r31)
	PPC_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r30.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// addi r9,r11,-24752
	ctx.r9.s64 = r11.s64 + -24752;
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r11.u32);
	// stw r9,352(r31)
	PPC_STORE_U32(r31.u32 + 352, ctx.r9.u32);
	// stw r10,340(r31)
	PPC_STORE_U32(r31.u32 + 340, ctx.r10.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r11.u32);
	// stw r9,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r9.u32);
	// addi r11,r31,316
	r11.s64 = r31.s64 + 316;
	// stw r10,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// stw r3,360(r31)
	PPC_STORE_U32(r31.u32 + 360, ctx.r3.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r30.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,368(r31)
	PPC_STORE_U32(r31.u32 + 368, r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,372(r31)
	PPC_STORE_U32(r31.u32 + 372, r30.u32);
	// addi r9,r11,-24780
	ctx.r9.s64 = r11.s64 + -24780;
	// stw r30,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,380(r31)
	PPC_STORE_U32(r31.u32 + 380, r30.u32);
	// stw r9,400(r31)
	PPC_STORE_U32(r31.u32 + 400, ctx.r9.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// stw r10,388(r31)
	PPC_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,384(r31)
	PPC_STORE_U32(r31.u32 + 384, r11.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(r31.u32 + 396, r11.u32);
	// addi r11,r31,364
	r11.s64 = r31.s64 + 364;
	// stw r9,392(r31)
	PPC_STORE_U32(r31.u32 + 392, ctx.r9.u32);
	// stw r10,404(r31)
	PPC_STORE_U32(r31.u32 + 404, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// stw r3,408(r31)
	PPC_STORE_U32(r31.u32 + 408, ctx.r3.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r30.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r30.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r30,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r30.u32);
	// addi r9,r11,-24812
	ctx.r9.s64 = r11.s64 + -24812;
	// stw r30,424(r31)
	PPC_STORE_U32(r31.u32 + 424, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r30.u32);
	// stw r9,448(r31)
	PPC_STORE_U32(r31.u32 + 448, ctx.r9.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r10,436(r31)
	PPC_STORE_U32(r31.u32 + 436, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r11.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(r31.u32 + 444, r11.u32);
	// addi r11,r31,412
	r11.s64 = r31.s64 + 412;
	// stw r9,440(r31)
	PPC_STORE_U32(r31.u32 + 440, ctx.r9.u32);
	// stw r10,452(r31)
	PPC_STORE_U32(r31.u32 + 452, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// stw r3,456(r31)
	PPC_STORE_U32(r31.u32 + 456, ctx.r3.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,460(r31)
	PPC_STORE_U32(r31.u32 + 460, r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(r31.u32 + 464, r30.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r30,468(r31)
	PPC_STORE_U32(r31.u32 + 468, r30.u32);
	// addi r9,r11,-26400
	ctx.r9.s64 = r11.s64 + -26400;
	// stw r30,472(r31)
	PPC_STORE_U32(r31.u32 + 472, r30.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r30,476(r31)
	PPC_STORE_U32(r31.u32 + 476, r30.u32);
	// stw r11,480(r31)
	PPC_STORE_U32(r31.u32 + 480, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,496(r31)
	PPC_STORE_U32(r31.u32 + 496, ctx.r9.u32);
	// li r9,44
	ctx.r9.s64 = 44;
	// stw r10,484(r31)
	PPC_STORE_U32(r31.u32 + 484, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,492(r31)
	PPC_STORE_U32(r31.u32 + 492, r11.u32);
	// addi r11,r31,460
	r11.s64 = r31.s64 + 460;
	// stw r9,488(r31)
	PPC_STORE_U32(r31.u32 + 488, ctx.r9.u32);
	// stw r10,500(r31)
	PPC_STORE_U32(r31.u32 + 500, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 + 120;
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// stw r11,508(r31)
	PPC_STORE_U32(r31.u32 + 508, r11.u32);
	// stw r10,512(r31)
	PPC_STORE_U32(r31.u32 + 512, ctx.r10.u32);
	// li r11,6
	r11.s64 = 6;
	// stw r9,516(r31)
	PPC_STORE_U32(r31.u32 + 516, ctx.r9.u32);
	// stw r3,504(r31)
	PPC_STORE_U32(r31.u32 + 504, ctx.r3.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// std r30,520(r31)
	PPC_STORE_U64(r31.u32 + 520, r30.u64);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// stw r11,528(r31)
	PPC_STORE_U32(r31.u32 + 528, r11.u32);
	// stw r10,532(r31)
	PPC_STORE_U32(r31.u32 + 532, ctx.r10.u32);
	// addi r11,r31,520
	r11.s64 = r31.s64 + 520;
	// li r9,48
	ctx.r9.s64 = 48;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r10,r7,-26472
	ctx.r10.s64 = ctx.r7.s64 + -26472;
	// stw r9,536(r31)
	PPC_STORE_U32(r31.u32 + 536, ctx.r9.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r8,540(r31)
	PPC_STORE_U32(r31.u32 + 540, ctx.r8.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(r31.u32 + 544, ctx.r10.u32);
	// stw r11,548(r31)
	PPC_STORE_U32(r31.u32 + 548, r11.u32);
	// bl 0x830dd228
	sub_830DD228(ctx, base);
	// stw r3,552(r31)
	PPC_STORE_U32(r31.u32 + 552, ctx.r3.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,556(r31)
	PPC_STORE_U32(r31.u32 + 556, r30.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(r31.u32 + 560, r30.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r30,564(r31)
	PPC_STORE_U32(r31.u32 + 564, r30.u32);
	// addi r9,r11,-25412
	ctx.r9.s64 = r11.s64 + -25412;
	// stw r30,568(r31)
	PPC_STORE_U32(r31.u32 + 568, r30.u32);
	// li r11,16
	r11.s64 = 16;
	// stw r30,572(r31)
	PPC_STORE_U32(r31.u32 + 572, r30.u32);
	// stw r11,576(r31)
	PPC_STORE_U32(r31.u32 + 576, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,592(r31)
	PPC_STORE_U32(r31.u32 + 592, ctx.r9.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r10,580(r31)
	PPC_STORE_U32(r31.u32 + 580, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,588(r31)
	PPC_STORE_U32(r31.u32 + 588, r11.u32);
	// addi r11,r31,556
	r11.s64 = r31.s64 + 556;
	// stw r9,584(r31)
	PPC_STORE_U32(r31.u32 + 584, ctx.r9.u32);
	// stw r10,596(r31)
	PPC_STORE_U32(r31.u32 + 596, ctx.r10.u32);
	// bl 0x830dead0
	sub_830DEAD0(ctx, base);
	// stw r3,600(r31)
	PPC_STORE_U32(r31.u32 + 600, ctx.r3.u32);
	// stw r30,604(r31)
	PPC_STORE_U32(r31.u32 + 604, r30.u32);
	// addi r11,r31,604
	r11.s64 = r31.s64 + 604;
	// stw r30,608(r31)
	PPC_STORE_U32(r31.u32 + 608, r30.u32);
	// stw r30,612(r31)
	PPC_STORE_U32(r31.u32 + 612, r30.u32);
	// stw r30,616(r31)
	PPC_STORE_U32(r31.u32 + 616, r30.u32);
	// stw r30,620(r31)
	PPC_STORE_U32(r31.u32 + 620, r30.u32);
loc_830E4E64:
	// li r11,13
	r11.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E4E78"))) PPC_WEAK_FUNC(sub_830E4E78);
PPC_FUNC_IMPL(__imp__sub_830E4E78) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e4ecc
	if (cr6.eq) goto loc_830E4ECC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830e4ecc
	if (!cr6.eq) goto loc_830E4ECC;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x830e2548
	sub_830E2548(ctx, base);
loc_830E4ECC:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x830d7930
	sub_830D7930(ctx, base);
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

__attribute__((alias("__imp__sub_830E4F08"))) PPC_WEAK_FUNC(sub_830E4F08);
PPC_FUNC_IMPL(__imp__sub_830E4F08) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830e4f3c
	if (cr6.eq) goto loc_830E4F3C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8310cdc0
	sub_8310CDC0(ctx, base);
	// b 0x830e50b0
	goto loc_830E50B0;
loc_830E4F3C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830df6f0
	sub_830DF6F0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x830e4f58
	if (!cr0.eq) goto loc_830E4F58;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830e50b0
	goto loc_830E50B0;
loc_830E4F58:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r31,0
	r31.s64 = 0;
	// lwz r29,-13656(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + -13656);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x830e4f74
	if (cr0.eq) goto loc_830E4F74;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x830e5048
	if (cr6.eq) goto loc_830E5048;
loc_830E4F74:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8310a688
	sub_8310A688(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830e5048
	if (cr0.lt) goto loc_830E5048;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830ecbc8
	sub_830ECBC8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830e5008
	if (cr0.lt) goto loc_830E5008;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e4fc4
	if (cr0.eq) goto loc_830E4FC4;
	// bl 0x8310c290
	sub_8310C290(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x830e4fc8
	goto loc_830E4FC8;
loc_830E4FC4:
	// li r30,0
	r30.s64 = 0;
loc_830E4FC8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830e4fdc
	if (!cr6.eq) goto loc_830E4FDC;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x830e5000
	goto loc_830E5000;
loc_830E4FDC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310cdd0
	sub_8310CDD0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830e5000
	if (cr0.lt) goto loc_830E5000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
loc_830E5000:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e2548
	sub_830E2548(ctx, base);
loc_830E5008:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e5024
	if (cr6.eq) goto loc_830E5024;
	// bl 0x8310bb48
	sub_8310BB48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E5024:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x830e5048
	if (cr6.lt) goto loc_830E5048;
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8310cdc0
	sub_8310CDC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x830e9030
	sub_830E9030(ctx, base);
loc_830E5048:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830e50ac
	if (cr6.eq) goto loc_830E50AC;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830daef0
	sub_830DAEF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830e50ac
	if (cr0.lt) goto loc_830E50AC;
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ea728
	sub_830EA728(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x830e50ac
	if (cr6.lt) goto loc_830E50AC;
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8310cdc0
	sub_8310CDC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x830e9030
	sub_830E9030(ctx, base);
loc_830E50AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_830E50B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830E50B8"))) PPC_WEAK_FUNC(sub_830E50B8);
PPC_FUNC_IMPL(__imp__sub_830E50B8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af8
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31942
	r29.s64 = -2093350912;
	// lwz r11,-13660(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -13660);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830e50dc
	if (!cr6.eq) goto loc_830E50DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830e5468
	goto loc_830E5468;
loc_830E50DC:
	// lis r30,-31942
	r30.s64 = -2093350912;
	// lwz r3,-13656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -13656);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lis r31,-31947
	r31.s64 = -2093678592;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-13656(r30)
	PPC_STORE_U32(r30.u32 + -13656, r11.u32);
	// lwz r3,24408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24408);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x830e510c
	if (cr6.eq) goto loc_830E510C;
	// bl 0x8324b88c
	__imp__KeTlsFree(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,24408(r31)
	PPC_STORE_U32(r31.u32 + 24408, r11.u32);
loc_830E510C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-13616
	r31.s64 = r11.s64 + -13616;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310bf00
	sub_8310BF00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310beb8
	sub_8310BEB8(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// addi r11,r11,16608
	r11.s64 = r11.s64 + 16608;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r10,r10,16416
	ctx.r10.s64 = ctx.r10.s64 + 16416;
	// addi r9,r9,16224
	ctx.r9.s64 = ctx.r9.s64 + 16224;
	// addi r11,r8,16208
	r11.s64 = ctx.r8.s64 + 16208;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r6,-31986
	ctx.r6.s64 = -2096234496;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lis r5,-31986
	ctx.r5.s64 = -2096234496;
	// addi r10,r7,16032
	ctx.r10.s64 = ctx.r7.s64 + 16032;
	// addi r9,r6,15840
	ctx.r9.s64 = ctx.r6.s64 + 15840;
	// addi r11,r5,15648
	r11.s64 = ctx.r5.s64 + 15648;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r4,-31986
	ctx.r4.s64 = -2096234496;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lis r3,-31986
	ctx.r3.s64 = -2096234496;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lis r31,-31986
	r31.s64 = -2096234496;
	// addi r10,r4,15456
	ctx.r10.s64 = ctx.r4.s64 + 15456;
	// addi r9,r3,15264
	ctx.r9.s64 = ctx.r3.s64 + 15264;
	// addi r11,r31,13360
	r11.s64 = r31.s64 + 13360;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r30,-31986
	r30.s64 = -2096234496;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// lis r28,-31986
	r28.s64 = -2096234496;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// lis r27,-31986
	r27.s64 = -2096234496;
	// addi r10,r30,13536
	ctx.r10.s64 = r30.s64 + 13536;
	// addi r9,r28,15248
	ctx.r9.s64 = r28.s64 + 15248;
	// addi r11,r27,15056
	r11.s64 = r27.s64 + 15056;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lis r26,-31986
	r26.s64 = -2096234496;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// lis r25,-31986
	r25.s64 = -2096234496;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// lis r24,-31986
	r24.s64 = -2096234496;
	// addi r10,r26,10640
	ctx.r10.s64 = r26.s64 + 10640;
	// addi r9,r25,14480
	ctx.r9.s64 = r25.s64 + 14480;
	// addi r11,r24,14864
	r11.s64 = r24.s64 + 14864;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lis r23,-31986
	r23.s64 = -2096234496;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// lis r22,-31986
	r22.s64 = -2096234496;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// lis r21,-31986
	r21.s64 = -2096234496;
	// addi r10,r23,14672
	ctx.r10.s64 = r23.s64 + 14672;
	// addi r9,r22,14112
	ctx.r9.s64 = r22.s64 + 14112;
	// addi r11,r21,14288
	r11.s64 = r21.s64 + 14288;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// lis r11,-31986
	r11.s64 = -2096234496;
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// lis r6,-31986
	ctx.r6.s64 = -2096234496;
	// lis r5,-31986
	ctx.r5.s64 = -2096234496;
	// lis r4,-31986
	ctx.r4.s64 = -2096234496;
	// lis r3,-31986
	ctx.r3.s64 = -2096234496;
	// lis r31,-31986
	r31.s64 = -2096234496;
	// lis r30,-31986
	r30.s64 = -2096234496;
	// lis r28,-31986
	r28.s64 = -2096234496;
	// lis r27,-31986
	r27.s64 = -2096234496;
	// lis r26,-31986
	r26.s64 = -2096234496;
	// lis r25,-31986
	r25.s64 = -2096234496;
	// lis r24,-31986
	r24.s64 = -2096234496;
	// lis r23,-31986
	r23.s64 = -2096234496;
	// lis r22,-31986
	r22.s64 = -2096234496;
	// addi r10,r10,13920
	ctx.r10.s64 = ctx.r10.s64 + 13920;
	// addi r9,r9,13728
	ctx.r9.s64 = ctx.r9.s64 + 13728;
	// addi r11,r11,13168
	r11.s64 = r11.s64 + 13168;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// addi r10,r8,13152
	ctx.r10.s64 = ctx.r8.s64 + 13152;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// addi r9,r7,12768
	ctx.r9.s64 = ctx.r7.s64 + 12768;
	// addi r11,r6,12960
	r11.s64 = ctx.r6.s64 + 12960;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// addi r10,r5,12576
	ctx.r10.s64 = ctx.r5.s64 + 12576;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
	// addi r9,r4,12560
	ctx.r9.s64 = ctx.r4.s64 + 12560;
	// addi r11,r3,12544
	r11.s64 = ctx.r3.s64 + 12544;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// addi r10,r31,12352
	ctx.r10.s64 = r31.s64 + 12352;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r11.u32);
	// addi r9,r30,10848
	ctx.r9.s64 = r30.s64 + 10848;
	// addi r11,r28,12176
	r11.s64 = r28.s64 + 12176;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// addi r10,r27,10448
	ctx.r10.s64 = r27.s64 + 10448;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// addi r9,r26,11984
	ctx.r9.s64 = r26.s64 + 11984;
	// addi r11,r25,11808
	r11.s64 = r25.s64 + 11808;
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// addi r10,r24,11616
	ctx.r10.s64 = r24.s64 + 11616;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r11.u32);
	// addi r9,r23,11248
	ctx.r9.s64 = r23.s64 + 11248;
	// addi r11,r22,11424
	r11.s64 = r22.s64 + 11424;
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// lis r21,-31986
	r21.s64 = -2096234496;
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// lis r20,-31986
	r20.s64 = -2096234496;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r11.u32);
	// lis r19,-31986
	r19.s64 = -2096234496;
	// addi r10,r21,11056
	ctx.r10.s64 = r21.s64 + 11056;
	// addi r9,r20,10864
	ctx.r9.s64 = r20.s64 + 10864;
	// addi r11,r19,10672
	r11.s64 = r19.s64 + 10672;
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// lis r18,-31986
	r18.s64 = -2096234496;
	// stw r9,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// lis r17,-31986
	r17.s64 = -2096234496;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r11.u32);
	// lis r16,-31986
	r16.s64 = -2096234496;
	// addi r10,r18,10656
	ctx.r10.s64 = r18.s64 + 10656;
	// addi r9,r17,10256
	ctx.r9.s64 = r17.s64 + 10256;
	// addi r11,r16,10056
	r11.s64 = r16.s64 + 10056;
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// stw r9,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r11.u32);
	// li r31,43
	r31.s64 = 43;
loc_830E5330:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x830e5330
	if (!cr0.eq) goto loc_830E5330;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,-13056
	r31.s64 = r11.s64 + -13056;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_830E5358:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830e5384
	if (!cr6.eq) goto loc_830E5384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r9,r31,108
	ctx.r9.s64 = r31.s64 + 108;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x830e5358
	if (cr6.lt) goto loc_830E5358;
	// li r11,0
	r11.s64 = 0;
loc_830E537C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x830e53c4
	goto loc_830E53C4;
loc_830E5384:
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// b 0x830e537c
	goto loc_830E537C;
loc_830E5390:
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7850
	sub_830D7850(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830E53C4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830e5390
	if (!cr6.eq) goto loc_830E5390;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830dec80
	sub_830DEC80(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830ed8f8
	sub_830ED8F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830ed730
	sub_830ED730(ctx, base);
	// bl 0x830ed0d0
	sub_830ED0D0(ctx, base);
	// bl 0x83108988
	sub_83108988(ctx, base);
	// bl 0x83107d68
	sub_83107D68(ctx, base);
	// bl 0x830e72f0
	sub_830E72F0(ctx, base);
	// bl 0x830e7770
	sub_830E7770(ctx, base);
	// lis r31,-31942
	r31.s64 = -2093350912;
	// addi r30,r31,-13648
	r30.s64 = r31.s64 + -13648;
	// lwz r3,-13648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -13648);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-13648(r31)
	PPC_STORE_U32(r31.u32 + -13648, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lis r31,-31942
	r31.s64 = -2093350912;
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// addi r30,r31,-13636
	r30.s64 = r31.s64 + -13636;
	// lwz r3,-13636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -13636);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-13636(r31)
	PPC_STORE_U32(r31.u32 + -13636, r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r10,-13780(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13780, ctx.r10.u32);
	// stw r9,-13652(r7)
	PPC_STORE_U32(ctx.r7.u32 + -13652, ctx.r9.u32);
	// stw r11,-13660(r29)
	PPC_STORE_U32(r29.u32 + -13660, r11.u32);
loc_830E5468:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831b0b48
	return;
}

__attribute__((alias("__imp__sub_830E5470"))) PPC_WEAK_FUNC(sub_830E5470);
PPC_FUNC_IMPL(__imp__sub_830E5470) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x830e4f08
	sub_830E4F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5478"))) PPC_WEAK_FUNC(sub_830E5478);
PPC_FUNC_IMPL(__imp__sub_830E5478) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e556c
	if (cr6.eq) goto loc_830E556C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830e556c
	if (cr6.eq) goto loc_830E556C;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8310a688
	sub_8310A688(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e5574
	if (cr0.lt) goto loc_830E5574;
	// not r11,r30
	r11.u64 = ~r30.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,31
	ctx.r6.u64 = r11.u32 & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830ecbc8
	sub_830ECBC8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830e5548
	if (cr0.lt) goto loc_830E5548;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830df748
	sub_830DF748(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830e5534
	if (cr0.lt) goto loc_830E5534;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,-13656(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13656);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e5518
	if (cr6.eq) goto loc_830E5518;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830e4f08
	sub_830E4F08(ctx, base);
loc_830E5518:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x830e5540
	if (cr6.eq) goto loc_830E5540;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830ea908
	sub_830EA908(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x830e5540
	if (!cr0.lt) goto loc_830E5540;
loc_830E5534:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e2548
	sub_830E2548(ctx, base);
	// b 0x830e5548
	goto loc_830E5548;
loc_830E5540:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_830E5548:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e5564
	if (cr6.eq) goto loc_830E5564;
	// bl 0x8310bb48
	sub_8310BB48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E5564:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830e5574
	goto loc_830E5574;
loc_830E556C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830E5574:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830E5580"))) PPC_WEAK_FUNC(sub_830E5580);
PPC_FUNC_IMPL(__imp__sub_830E5580) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x830e5478
	sub_830E5478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5588"))) PPC_WEAK_FUNC(sub_830E5588);
PPC_FUNC_IMPL(__imp__sub_830E5588) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// bl 0x830edd28
	sub_830EDD28(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r11,r11,-18848
	r11.s64 = r11.s64 + -18848;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r10,r10,-18728
	ctx.r10.s64 = ctx.r10.s64 + -18728;
	// addi r9,r9,30928
	ctx.r9.s64 = ctx.r9.s64 + 30928;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x830e4390
	sub_830E4390(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13940
	ctx.r4.s64 = r11.s64 + -13940;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e5614
	if (cr0.lt) goto loc_830E5614;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E5614:
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

__attribute__((alias("__imp__sub_830E5628"))) PPC_WEAK_FUNC(sub_830E5628);
PPC_FUNC_IMPL(__imp__sub_830E5628) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-28592
	ctx.r10.s64 = ctx.r10.s64 + -28592;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// addi r9,r9,-28652
	ctx.r9.s64 = ctx.r9.s64 + -28652;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// addi r11,r11,-18408
	r11.s64 = r11.s64 + -18408;
	// addi r10,r10,-18208
	ctx.r10.s64 = ctx.r10.s64 + -18208;
	// addi r9,r9,31000
	ctx.r9.s64 = ctx.r9.s64 + 31000;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x830e49e8
	sub_830E49E8(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13928
	ctx.r4.s64 = r11.s64 + -13928;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e56c4
	if (cr0.lt) goto loc_830E56C4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E56C4:
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

__attribute__((alias("__imp__sub_830E56D8"))) PPC_WEAK_FUNC(sub_830E56D8);
PPC_FUNC_IMPL(__imp__sub_830E56D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r6,-31986
	ctx.r6.s64 = -2096234496;
	// addi r9,r9,-28224
	ctx.r9.s64 = ctx.r9.s64 + -28224;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// lis r5,-31987
	ctx.r5.s64 = -2096300032;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r11.u64);
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// addi r8,r8,-28652
	ctx.r8.s64 = ctx.r8.s64 + -28652;
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, r11.u64);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r7,16624
	ctx.r7.s64 = ctx.r7.s64 + 16624;
	// addi r10,r6,16768
	ctx.r10.s64 = ctx.r6.s64 + 16768;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r9,r5,31192
	ctx.r9.s64 = ctx.r5.s64 + 31192;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r8,-13880
	ctx.r4.s64 = ctx.r8.s64 + -13880;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e5768
	if (cr0.lt) goto loc_830E5768;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E5768:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E5778"))) PPC_WEAK_FUNC(sub_830E5778);
PPC_FUNC_IMPL(__imp__sub_830E5778) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-28196
	ctx.r10.s64 = ctx.r10.s64 + -28196;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// addi r9,r9,-28384
	ctx.r9.s64 = ctx.r9.s64 + -28384;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// addi r11,r11,16832
	r11.s64 = r11.s64 + 16832;
	// addi r10,r10,-17408
	ctx.r10.s64 = ctx.r10.s64 + -17408;
	// addi r9,r9,31200
	ctx.r9.s64 = ctx.r9.s64 + 31200;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x830e09e0
	sub_830E09E0(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13876
	ctx.r4.s64 = r11.s64 + -13876;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e5814
	if (cr0.lt) goto loc_830E5814;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E5814:
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

__attribute__((alias("__imp__sub_830E5828"))) PPC_WEAK_FUNC(sub_830E5828);
PPC_FUNC_IMPL(__imp__sub_830E5828) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-27796
	ctx.r10.s64 = ctx.r10.s64 + -27796;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-31987
	ctx.r6.s64 = -2096300032;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-28652
	ctx.r9.s64 = ctx.r9.s64 + -28652;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,16952
	ctx.r8.s64 = ctx.r8.s64 + 16952;
	// addi r11,r7,-18144
	r11.s64 = ctx.r7.s64 + -18144;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,31328
	ctx.r10.s64 = ctx.r6.s64 + 31328;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830e1be0
	sub_830E1BE0(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13820
	ctx.r4.s64 = r11.s64 + -13820;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e58c0
	if (cr0.lt) goto loc_830E58C0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E58C0:
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

__attribute__((alias("__imp__sub_830E58D8"))) PPC_WEAK_FUNC(sub_830E58D8);
PPC_FUNC_IMPL(__imp__sub_830E58D8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-27596
	ctx.r10.s64 = ctx.r10.s64 + -27596;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-27796
	ctx.r9.s64 = ctx.r9.s64 + -27796;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,17056
	ctx.r8.s64 = ctx.r8.s64 + 17056;
	// addi r11,r7,-2632
	r11.s64 = ctx.r7.s64 + -2632;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,-6592
	ctx.r10.s64 = ctx.r6.s64 + -6592;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830da5f8
	sub_830DA5F8(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13796
	ctx.r4.s64 = r11.s64 + -13796;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e5970
	if (cr0.lt) goto loc_830E5970;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E5970:
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

__attribute__((alias("__imp__sub_830E5988"))) PPC_WEAK_FUNC(sub_830E5988);
PPC_FUNC_IMPL(__imp__sub_830E5988) {
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
	// li r3,212
	ctx.r3.s64 = 212;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e59c0
	if (cr0.eq) goto loc_830E59C0;
	// bl 0x830dff70
	sub_830DFF70(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830e59c4
	goto loc_830E59C4;
loc_830E59C0:
	// li r11,0
	r11.s64 = 0;
loc_830E59C4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830e59d8
	if (!cr6.eq) goto loc_830E59D8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830e59e8
	goto loc_830E59E8;
loc_830E59D8:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r31.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830E59E8:
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

__attribute__((alias("__imp__sub_830E5A00"))) PPC_WEAK_FUNC(sub_830E5A00);
PPC_FUNC_IMPL(__imp__sub_830E5A00) {
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
	// beq cr6,0x830e5a28
	if (cr6.eq) goto loc_830E5A28;
	// bl 0x830e0000
	sub_830E0000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E5A28:
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

__attribute__((alias("__imp__sub_830E5A40"))) PPC_WEAK_FUNC(sub_830E5A40);
PPC_FUNC_IMPL(__imp__sub_830E5A40) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-28540
	ctx.r10.s64 = ctx.r10.s64 + -28540;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-31987
	ctx.r6.s64 = -2096300032;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-28652
	ctx.r9.s64 = ctx.r9.s64 + -28652;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,22920
	ctx.r8.s64 = ctx.r8.s64 + 22920;
	// addi r11,r7,23040
	r11.s64 = ctx.r7.s64 + 23040;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,30992
	ctx.r10.s64 = ctx.r6.s64 + 30992;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830dd0b0
	sub_830DD0B0(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13932
	ctx.r4.s64 = r11.s64 + -13932;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e5ad8
	if (cr0.lt) goto loc_830E5AD8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E5AD8:
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

__attribute__((alias("__imp__sub_830E5AF0"))) PPC_WEAK_FUNC(sub_830E5AF0);
PPC_FUNC_IMPL(__imp__sub_830E5AF0) {
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
	// li r3,84
	ctx.r3.s64 = 84;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e5b28
	if (cr0.eq) goto loc_830E5B28;
	// bl 0x830dd290
	sub_830DD290(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830e5b2c
	goto loc_830E5B2C;
loc_830E5B28:
	// li r11,0
	r11.s64 = 0;
loc_830E5B2C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830e5b40
	if (!cr6.eq) goto loc_830E5B40;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830e5b4c
	goto loc_830E5B4C;
loc_830E5B40:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_830E5B4C:
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

__attribute__((alias("__imp__sub_830E5B68"))) PPC_WEAK_FUNC(sub_830E5B68);
PPC_FUNC_IMPL(__imp__sub_830E5B68) {
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
	// beq cr6,0x830e5b90
	if (cr6.eq) goto loc_830E5B90;
	// bl 0x830e4e78
	sub_830E4E78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E5B90:
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

__attribute__((alias("__imp__sub_830E5BA8"))) PPC_WEAK_FUNC(sub_830E5BA8);
PPC_FUNC_IMPL(__imp__sub_830E5BA8) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830e5c20
	if (!cr6.gt) goto loc_830E5C20;
	// li r30,0
	r30.s64 = 0;
loc_830E5BE4:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e5c0c
	if (cr6.eq) goto loc_830E5C0C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E5C0C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x830e5be4
	if (cr6.lt) goto loc_830E5BE4;
loc_830E5C20:
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x830d7930
	sub_830D7930(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x830d7930
	sub_830D7930(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x830e4318
	sub_830E4318(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x830e4318
	sub_830E4318(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E5C48"))) PPC_WEAK_FUNC(sub_830E5C48);
PPC_FUNC_IMPL(__imp__sub_830E5C48) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-28500
	ctx.r10.s64 = ctx.r10.s64 + -28500;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// addi r9,r9,-28592
	ctx.r9.s64 = ctx.r9.s64 + -28592;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// addi r11,r11,23280
	r11.s64 = r11.s64 + 23280;
	// addi r10,r10,23400
	ctx.r10.s64 = ctx.r10.s64 + 23400;
	// addi r9,r9,31016
	ctx.r9.s64 = ctx.r9.s64 + 31016;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x830e00b8
	sub_830E00B8(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13920
	ctx.r4.s64 = r11.s64 + -13920;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e5ce4
	if (cr0.lt) goto loc_830E5CE4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E5CE4:
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

__attribute__((alias("__imp__sub_830E5CF8"))) PPC_WEAK_FUNC(sub_830E5CF8);
PPC_FUNC_IMPL(__imp__sub_830E5CF8) {
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
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e5d6c
	if (cr0.eq) goto loc_830E5D6C;
	// li r11,0
	r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
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
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// b 0x830e5d70
	goto loc_830E5D70;
loc_830E5D6C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830E5D70:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e5d84
	if (!cr6.eq) goto loc_830E5D84;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830e5d90
	goto loc_830E5D90;
loc_830E5D84:
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_830E5D90:
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

__attribute__((alias("__imp__sub_830E5DA8"))) PPC_WEAK_FUNC(sub_830E5DA8);
PPC_FUNC_IMPL(__imp__sub_830E5DA8) {
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
	// beq cr6,0x830e5dd0
	if (cr6.eq) goto loc_830E5DD0;
	// bl 0x830e5ba8
	sub_830E5BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E5DD0:
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

__attribute__((alias("__imp__sub_830E5DE8"))) PPC_WEAK_FUNC(sub_830E5DE8);
PPC_FUNC_IMPL(__imp__sub_830E5DE8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// addi r10,r10,-28100
	ctx.r10.s64 = ctx.r10.s64 + -28100;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r6,-31987
	ctx.r6.s64 = -2096300032;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r9,r9,-28116
	ctx.r9.s64 = ctx.r9.s64 + -28116;
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,23800
	ctx.r8.s64 = ctx.r8.s64 + 23800;
	// addi r11,r7,23976
	r11.s64 = ctx.r7.s64 + 23976;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,31232
	ctx.r10.s64 = ctx.r6.s64 + 31232;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x830e0db0
	sub_830E0DB0(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13860
	ctx.r4.s64 = r11.s64 + -13860;
	// bl 0x830e2168
	sub_830E2168(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e5e80
	if (cr0.lt) goto loc_830E5E80;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E5E80:
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

__attribute__((alias("__imp__sub_830E5E98"))) PPC_WEAK_FUNC(sub_830E5E98);
PPC_FUNC_IMPL(__imp__sub_830E5E98) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e5ec8
	if (cr6.eq) goto loc_830E5EC8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// ble cr6,0x830e5ec8
	if (!cr6.gt) goto loc_830E5EC8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x830e61c8
	goto loc_830E61C8;
loc_830E5EC8:
	// lis r30,-31942
	r30.s64 = -2093350912;
	// lwz r11,-13660(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13660);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830e5ee0
	if (cr6.eq) goto loc_830E5EE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830e61c8
	goto loc_830E61C8;
loc_830E5EE0:
	// bl 0x8324b87c
	__imp__KeTlsAlloc(ctx, base);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,24408(r11)
	PPC_STORE_U32(r11.u32 + 24408, ctx.r3.u32);
	// bne cr6,0x830e5f00
	if (!cr6.eq) goto loc_830E5F00;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830e61c8
	goto loc_830E61C8;
loc_830E5F00:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e5f34
	if (cr6.eq) goto loc_830E5F34;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// blt cr6,0x830e5f20
	if (cr6.lt) goto loc_830E5F20;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x830e5f24
	goto loc_830E5F24;
loc_830E5F20:
	// li r11,0
	r11.s64 = 0;
loc_830E5F24:
	// stw r11,-13652(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13652, r11.u32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,-13664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13664, r11.u32);
loc_830E5F34:
	// li r11,1
	r11.s64 = 1;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,-13660(r30)
	PPC_STORE_U32(r30.u32 + -13660, r11.u32);
	// addi r3,r10,-13616
	ctx.r3.s64 = ctx.r10.s64 + -13616;
	// bl 0x8310c1f8
	sub_8310C1F8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830e61c0
	if (cr0.lt) goto loc_830E61C0;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-13648
	ctx.r3.s64 = r11.s64 + -13648;
	// bl 0x830d6be0
	sub_830D6BE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830e61c0
	if (cr0.lt) goto loc_830E61C0;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r11,-13636
	ctx.r3.s64 = r11.s64 + -13636;
	// li r4,768
	ctx.r4.s64 = 768;
	// bl 0x830d8030
	sub_830D8030(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830e61c0
	if (cr0.lt) goto loc_830E61C0;
	// lis r11,-31986
	r11.s64 = -2096234496;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r11,r11,21896
	r11.s64 = r11.s64 + 21896;
	// addi r10,r10,10096
	ctx.r10.s64 = ctx.r10.s64 + 10096;
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// addi r11,r8,22056
	r11.s64 = ctx.r8.s64 + 22056;
	// addi r9,r9,23104
	ctx.r9.s64 = ctx.r9.s64 + 23104;
	// addi r10,r7,23624
	ctx.r10.s64 = ctx.r7.s64 + 23624;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lis r6,-31986
	ctx.r6.s64 = -2096234496;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lis r5,-31986
	ctx.r5.s64 = -2096234496;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r4,-31986
	ctx.r4.s64 = -2096234496;
	// addi r9,r6,10880
	ctx.r9.s64 = ctx.r6.s64 + 10880;
	// addi r11,r5,11264
	r11.s64 = ctx.r5.s64 + 11264;
	// addi r10,r4,11072
	ctx.r10.s64 = ctx.r4.s64 + 11072;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lis r3,-31986
	ctx.r3.s64 = -2096234496;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lis r31,-31986
	r31.s64 = -2096234496;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lis r30,-31986
	r30.s64 = -2096234496;
	// addi r9,r3,11440
	ctx.r9.s64 = ctx.r3.s64 + 11440;
	// addi r11,r31,11632
	r11.s64 = r31.s64 + 11632;
	// addi r10,r30,11824
	ctx.r10.s64 = r30.s64 + 11824;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lis r29,-31986
	r29.s64 = -2096234496;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lis r28,-31986
	r28.s64 = -2096234496;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lis r27,-31986
	r27.s64 = -2096234496;
	// addi r9,r29,10272
	ctx.r9.s64 = r29.s64 + 10272;
	// addi r11,r28,12000
	r11.s64 = r28.s64 + 12000;
	// addi r10,r27,10688
	ctx.r10.s64 = r27.s64 + 10688;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lis r26,-31986
	r26.s64 = -2096234496;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// lis r25,-31986
	r25.s64 = -2096234496;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lis r24,-31986
	r24.s64 = -2096234496;
	// addi r9,r26,12192
	ctx.r9.s64 = r26.s64 + 12192;
	// addi r11,r25,12368
	r11.s64 = r25.s64 + 12368;
	// addi r10,r24,22232
	ctx.r10.s64 = r24.s64 + 22232;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lis r23,-31986
	r23.s64 = -2096234496;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lis r22,-31986
	r22.s64 = -2096234496;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lis r21,-31986
	r21.s64 = -2096234496;
	// addi r9,r23,22392
	ctx.r9.s64 = r23.s64 + 22392;
	// addi r11,r22,12592
	r11.s64 = r22.s64 + 12592;
	// addi r10,r21,12784
	ctx.r10.s64 = r21.s64 + 12784;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lis r11,-31986
	r11.s64 = -2096234496;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// lis r6,-31986
	ctx.r6.s64 = -2096234496;
	// lis r5,-31986
	ctx.r5.s64 = -2096234496;
	// lis r4,-31986
	ctx.r4.s64 = -2096234496;
	// lis r3,-31986
	ctx.r3.s64 = -2096234496;
	// lis r31,-31986
	r31.s64 = -2096234496;
	// lis r30,-31986
	r30.s64 = -2096234496;
	// lis r29,-31986
	r29.s64 = -2096234496;
	// lis r28,-31986
	r28.s64 = -2096234496;
	// lis r27,-31986
	r27.s64 = -2096234496;
	// lis r26,-31986
	r26.s64 = -2096234496;
	// lis r25,-31986
	r25.s64 = -2096234496;
	// lis r24,-31986
	r24.s64 = -2096234496;
	// lis r23,-31986
	r23.s64 = -2096234496;
	// lis r22,-31986
	r22.s64 = -2096234496;
	// lis r21,-31986
	r21.s64 = -2096234496;
	// lis r20,-31986
	r20.s64 = -2096234496;
	// addi r9,r9,12976
	ctx.r9.s64 = ctx.r9.s64 + 12976;
	// addi r11,r11,24040
	r11.s64 = r11.s64 + 24040;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// addi r10,r10,13552
	ctx.r10.s64 = ctx.r10.s64 + 13552;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// addi r9,r8,13744
	ctx.r9.s64 = ctx.r8.s64 + 13744;
	// addi r11,r7,14128
	r11.s64 = ctx.r7.s64 + 14128;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// addi r10,r6,13936
	ctx.r10.s64 = ctx.r6.s64 + 13936;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// addi r9,r5,14496
	ctx.r9.s64 = ctx.r5.s64 + 14496;
	// addi r11,r4,14688
	r11.s64 = ctx.r4.s64 + 14688;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// addi r10,r3,14304
	ctx.r10.s64 = ctx.r3.s64 + 14304;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r11.u32);
	// addi r11,r30,14880
	r11.s64 = r30.s64 + 14880;
	// addi r9,r31,10464
	ctx.r9.s64 = r31.s64 + 10464;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// addi r10,r29,15072
	ctx.r10.s64 = r29.s64 + 15072;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// addi r9,r28,13184
	ctx.r9.s64 = r28.s64 + 13184;
	// addi r11,r27,13376
	r11.s64 = r27.s64 + 13376;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// addi r10,r26,22568
	ctx.r10.s64 = r26.s64 + 22568;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// addi r9,r25,15280
	ctx.r9.s64 = r25.s64 + 15280;
	// addi r11,r24,15472
	r11.s64 = r24.s64 + 15472;
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// addi r10,r23,15664
	ctx.r10.s64 = r23.s64 + 15664;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r11.u32);
	// addi r9,r22,15856
	ctx.r9.s64 = r22.s64 + 15856;
	// addi r11,r21,16048
	r11.s64 = r21.s64 + 16048;
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// lis r19,-31986
	r19.s64 = -2096234496;
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// lis r18,-31986
	r18.s64 = -2096234496;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r11.u32);
	// addi r10,r20,22744
	ctx.r10.s64 = r20.s64 + 22744;
	// addi r9,r19,16240
	ctx.r9.s64 = r19.s64 + 16240;
	// addi r11,r18,16432
	r11.s64 = r18.s64 + 16432;
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r11.u32);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
loc_830E618C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830e61c0
	if (cr0.lt) goto loc_830E61C0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r29,43
	cr6.compare<uint32_t>(r29.u32, 43, xer);
	// blt cr6,0x830e618c
	if (cr6.lt) goto loc_830E618C;
	// bl 0x83108978
	sub_83108978(ctx, base);
	// bl 0x830e7558
	sub_830E7558(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x830e61c4
	if (!cr0.lt) goto loc_830E61C4;
loc_830E61C0:
	// bl 0x830e50b8
	sub_830E50B8(ctx, base);
loc_830E61C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_830E61C8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_830E61D0"))) PPC_WEAK_FUNC(sub_830E61D0);
PPC_FUNC_IMPL(__imp__sub_830E61D0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9358
	ctx.r4.s64 = 613285888;
	// b 0x831cc9c8
	sub_831CC9C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E61D8"))) PPC_WEAK_FUNC(sub_830E61D8);
PPC_FUNC_IMPL(__imp__sub_830E61D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r4,9358
	ctx.r4.s64 = 613285888;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x831cca80
	sub_831CCA80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E61F4"))) PPC_WEAK_FUNC(sub_830E61F4);
PPC_FUNC_IMPL(__imp__sub_830E61F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E61F8"))) PPC_WEAK_FUNC(sub_830E61F8);
PPC_FUNC_IMPL(__imp__sub_830E61F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r4,9358
	ctx.r4.s64 = 613285888;
	// b 0x831cca60
	sub_831CCA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E6208"))) PPC_WEAK_FUNC(sub_830E6208);
PPC_FUNC_IMPL(__imp__sub_830E6208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E6210"))) PPC_WEAK_FUNC(sub_830E6210);
PPC_FUNC_IMPL(__imp__sub_830E6210) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e6244
	if (cr6.eq) goto loc_830E6244;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830e6244
	if (!cr6.eq) goto loc_830E6244;
	// lis r4,9358
	ctx.r4.s64 = 613285888;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
loc_830E623C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e6298
	goto loc_830E6298;
loc_830E6244:
	// lis r4,9358
	ctx.r4.s64 = 613285888;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830e623c
	if (cr0.eq) goto loc_830E623C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e6294
	if (cr6.eq) goto loc_830E6294;
	// lis r4,9358
	ctx.r4.s64 = 613285888;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831cca80
	sub_831CCA80(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// blt cr6,0x830e627c
	if (cr6.lt) goto loc_830E627C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_830E627C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lis r4,9358
	ctx.r4.s64 = 613285888;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
loc_830E6294:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_830E6298:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E62A0"))) PPC_WEAK_FUNC(sub_830E62A0);
PPC_FUNC_IMPL(__imp__sub_830E62A0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830e62d0
	if (!cr6.eq) goto loc_830E62D0;
loc_830E62C4:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,18
	ctx.r3.u64 = ctx.r3.u64 | 18;
	// b 0x830e6340
	goto loc_830E6340;
loc_830E62D0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,-24568
	r29.s64 = r11.s64 + -24568;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831baad8
	sub_831BAAD8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x830e62c4
	if (cr0.eq) goto loc_830E62C4;
	// li r28,0
	r28.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r28,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r28.u16);
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,35
	ctx.r4.s64 = 35;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// bl 0x831ba8a0
	sub_831BA8A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e6338
	if (cr0.eq) goto loc_830E6338;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	r11.s64 = ctx.r3.s64 + 2;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830e6330
	if (cr0.eq) goto loc_830E6330;
	// sth r28,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r28.u16);
loc_830E6330:
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x830e633c
	goto loc_830E633C;
loc_830E6338:
	// stw r28,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r28.u32);
loc_830E633C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E6340:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_830E6348"))) PPC_WEAK_FUNC(sub_830E6348);
PPC_FUNC_IMPL(__imp__sub_830E6348) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// add r31,r31,r3
	r31.u64 = r31.u64 + ctx.r3.u64;
	// addi r26,r11,-24568
	r26.s64 = r11.s64 + -24568;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830e63a8
	if (cr6.eq) goto loc_830E63A8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
loc_830E63A8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r3,r31,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e63cc
	if (!cr0.eq) goto loc_830E63CC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830e643c
	goto loc_830E643C;
loc_830E63CC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831ba8e0
	sub_831BA8E0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x831bab50
	sub_831BAB50(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x831bab50
	sub_831BAB50(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830e6438
	if (cr6.eq) goto loc_830E6438;
	// li r4,35
	ctx.r4.s64 = 35;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x831ba8a0
	sub_831BA8A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e6428
	if (!cr0.eq) goto loc_830E6428;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,-24560
	ctx.r5.s64 = r11.s64 + -24560;
	// bl 0x831bab50
	sub_831BAB50(ctx, base);
loc_830E6428:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831bab50
	sub_831BAB50(ctx, base);
loc_830E6438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E643C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830E6448"))) PPC_WEAK_FUNC(sub_830E6448);
PPC_FUNC_IMPL(__imp__sub_830E6448) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830e64d4
	if (cr6.eq) goto loc_830E64D4;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830e64d4
	if (cr0.eq) goto loc_830E64D4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e64d4
	if (cr6.eq) goto loc_830E64D4;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r29,0
	r29.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// lwz r3,-13652(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -13652);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e64c8
	if (cr6.eq) goto loc_830E64C8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x830e64dc
	if (!cr0.lt) goto loc_830E64DC;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// ori r11,r11,16385
	r11.u64 = r11.u64 | 16385;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x830e64dc
	if (!cr6.eq) goto loc_830E64DC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_830E64C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d77b0
	sub_830D77B0(ctx, base);
	// b 0x830e64dc
	goto loc_830E64DC;
loc_830E64D4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830E64DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E64E8"))) PPC_WEAK_FUNC(sub_830E64E8);
PPC_FUNC_IMPL(__imp__sub_830E64E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e6348
	sub_830E6348(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830e6538
	if (cr0.lt) goto loc_830E6538;
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8310e210
	sub_8310E210(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E6538:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E6548"))) PPC_WEAK_FUNC(sub_830E6548);
PPC_FUNC_IMPL(__imp__sub_830E6548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e6568
	if (cr6.eq) goto loc_830E6568;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830e6568
	if (cr6.eq) goto loc_830E6568;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_830E6568:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E6578"))) PPC_WEAK_FUNC(sub_830E6578);
PPC_FUNC_IMPL(__imp__sub_830E6578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830e658c
	if (!cr6.eq) goto loc_830E658C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_830E658C:
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

__attribute__((alias("__imp__sub_830E65A0"))) PPC_WEAK_FUNC(sub_830E65A0);
PPC_FUNC_IMPL(__imp__sub_830E65A0) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e65fc
	if (cr6.eq) goto loc_830E65FC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e65fc
	if (cr6.eq) goto loc_830E65FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830e65e8
	if (!cr6.eq) goto loc_830E65E8;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e6604
	goto loc_830E6604;
loc_830E65E8:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830e6604
	goto loc_830E6604;
loc_830E65FC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830E6604:
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

__attribute__((alias("__imp__sub_830E6618"))) PPC_WEAK_FUNC(sub_830E6618);
PPC_FUNC_IMPL(__imp__sub_830E6618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830e6624
	if (!cr6.eq) goto loc_830E6624;
	// blr 
	return;
loc_830E6624:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830E6638"))) PPC_WEAK_FUNC(sub_830E6638);
PPC_FUNC_IMPL(__imp__sub_830E6638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830e664c
	if (!cr6.eq) goto loc_830E664C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_830E664C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830E6660"))) PPC_WEAK_FUNC(sub_830E6660);
PPC_FUNC_IMPL(__imp__sub_830E6660) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e66ac
	if (cr6.eq) goto loc_830E66AC;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r11,-8028
	r30.s64 = r11.s64 + -8028;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_830E66AC:
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

__attribute__((alias("__imp__sub_830E66C8"))) PPC_WEAK_FUNC(sub_830E66C8);
PPC_FUNC_IMPL(__imp__sub_830E66C8) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bne cr6,0x830e6700
	if (!cr6.eq) goto loc_830E6700;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,87
	r29.u64 = r29.u64 | 87;
	// b 0x830e6760
	goto loc_830E6760;
loc_830E6700:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
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
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x830e6760
	if (cr0.lt) goto loc_830E6760;
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x830e676c
	if (!cr0.eq) goto loc_830E676C;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
loc_830E6750:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830e6760
	if (cr6.eq) goto loc_830E6760;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E6760:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_830E676C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e65a0
	sub_830E65A0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x830e6750
	if (cr0.lt) goto loc_830E6750;
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// b 0x830e6760
	goto loc_830E6760;
}

__attribute__((alias("__imp__sub_830E6790"))) PPC_WEAK_FUNC(sub_830E6790);
PPC_FUNC_IMPL(__imp__sub_830E6790) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e67bc
	if (cr6.eq) goto loc_830E67BC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,-24568
	ctx.r4.s64 = r11.s64 + -24568;
	// bl 0x831baad8
	sub_831BAAD8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_830E67BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E67D0"))) PPC_WEAK_FUNC(sub_830E67D0);
PPC_FUNC_IMPL(__imp__sub_830E67D0) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e6824
	if (cr6.eq) goto loc_830E6824;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830e6824
	if (cr0.eq) goto loc_830E6824;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lhz r11,-2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + -2);
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(r11.u32, 35, xer);
	// beq cr6,0x830e6824
	if (cr6.eq) goto loc_830E6824;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x830e6824
	if (cr6.eq) goto loc_830E6824;
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x830e6828
	if (!cr6.eq) goto loc_830E6828;
loc_830E6824:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E6828:
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

__attribute__((alias("__imp__sub_830E6840"))) PPC_WEAK_FUNC(sub_830E6840);
PPC_FUNC_IMPL(__imp__sub_830E6840) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e6a70
	if (cr6.eq) goto loc_830E6A70;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830e6a70
	if (cr6.eq) goto loc_830E6A70;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x830e6a70
	if (cr6.eq) goto loc_830E6A70;
	// li r26,0
	r26.s64 = 0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r26,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r26.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24568
	ctx.r4.s64 = r11.s64 + -24568;
	// bl 0x831baad8
	sub_831BAAD8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830e6a64
	if (!cr6.eq) goto loc_830E6A64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830e67d0
	sub_830E67D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830e6a64
	if (cr0.eq) goto loc_830E6A64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d6e90
	sub_830D6E90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e6a78
	if (cr0.lt) goto loc_830E6A78;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x830e62a0
	sub_830E62A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830e6a54
	if (cr0.lt) goto loc_830E6A54;
	// lwz r25,88(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r24,92(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// mr r28,r25
	r28.u64 = r25.u64;
	// bne cr6,0x830e68f8
	if (!cr6.eq) goto loc_830E68F8;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_830E68F8:
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// mr r31,r26
	r31.u64 = r26.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x830e693c
	goto loc_830E693C;
loc_830E6908:
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// bne cr6,0x830e6944
	if (!cr6.eq) goto loc_830E6944;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// bne cr6,0x830e6944
	if (!cr6.eq) goto loc_830E6944;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
	// beq cr6,0x830e6930
	if (cr6.eq) goto loc_830E6930;
	// cmplwi cr6,r10,92
	cr6.compare<uint32_t>(ctx.r10.u32, 92, xer);
	// bne cr6,0x830e6944
	if (!cr6.eq) goto loc_830E6944;
loc_830E6930:
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_830E693C:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x830e6908
	if (!cr0.eq) goto loc_830E6908;
loc_830E6944:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r10,r31,1
	xer.ca = r31.u32 > 4294967294;
	ctx.r10.s64 = r31.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// ble 0x830e69a8
	if (!cr0.gt) goto loc_830E69A8;
loc_830E6960:
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// blt cr6,0x830e6994
	if (cr6.lt) goto loc_830E6994;
loc_830E6968:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r9,47
	cr6.compare<uint32_t>(ctx.r9.u32, 47, xer);
	// beq cr6,0x830e6988
	if (cr6.eq) goto loc_830E6988;
	// cmplwi cr6,r9,92
	cr6.compare<uint32_t>(ctx.r9.u32, 92, xer);
	// beq cr6,0x830e6988
	if (cr6.eq) goto loc_830E6988;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bge cr6,0x830e6968
	if (!cr6.lt) goto loc_830E6968;
loc_830E6988:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// bgt 0x830e6960
	if (cr0.gt) goto loc_830E6960;
loc_830E6994:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x830e69a8
	if (!cr6.gt) goto loc_830E69A8;
	// lis r30,-32720
	r30.s64 = -2144337920;
	// ori r30,r30,18
	r30.u64 = r30.u64 | 18;
	// b 0x830e6a54
	goto loc_830E6A54;
loc_830E69A8:
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// blt cr6,0x830e69bc
	if (cr6.lt) goto loc_830E69BC;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830e69c0
	if (cr0.eq) goto loc_830E69C0;
loc_830E69BC:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_830E69C0:
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// srawi r30,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r30.s64 = r11.s32 >> 1;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// add r11,r3,r30
	r11.u64 = ctx.r3.u64 + r30.u64;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// rlwinm r3,r29,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x830d6d68
	sub_830D6D68(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x830e69f4
	if (!cr0.eq) goto loc_830E69F4;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x830e6a54
	goto loc_830E6A54;
loc_830E69F4:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831bac60
	sub_831BAC60(ctx, base);
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sthx r26,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, r26.u16);
	// bl 0x831bab50
	sub_831BAB50(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// beq cr6,0x830e6a3c
	if (cr6.eq) goto loc_830E6A3C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x830e6a44
	goto loc_830E6A44;
loc_830E6A3C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_830E6A44:
	// bl 0x830e6348
	sub_830E6348(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830d6e00
	sub_830D6E00(ctx, base);
loc_830E6A54:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830d6e00
	sub_830D6E00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830e6a78
	goto loc_830E6A78;
loc_830E6A64:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,18
	ctx.r3.u64 = ctx.r3.u64 | 18;
	// b 0x830e6a78
	goto loc_830E6A78;
loc_830E6A70:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830E6A78:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_830E6A80"))) PPC_WEAK_FUNC(sub_830E6A80);
PPC_FUNC_IMPL(__imp__sub_830E6A80) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x830e6af8
	if (!cr6.gt) goto loc_830E6AF8;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// ble cr6,0x830e6ab8
	if (!cr6.gt) goto loc_830E6AB8;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_830E6AB8:
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e6210
	sub_830E6210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e6af0
	if (!cr0.eq) goto loc_830E6AF0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x830e6afc
	goto loc_830E6AFC;
loc_830E6AF0:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_830E6AF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E6AFC:
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

__attribute__((alias("__imp__sub_830E6B18"))) PPC_WEAK_FUNC(sub_830E6B18);
PPC_FUNC_IMPL(__imp__sub_830E6B18) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8324ba1c
	__imp___vscwprintf(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e6bac
	if (cr0.lt) goto loc_830E6BAC;
	// add r27,r3,r31
	r27.u64 = ctx.r3.u64 + r31.u64;
	// addi r4,r27,1
	ctx.r4.s64 = r27.s64 + 1;
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, xer);
	// ble cr6,0x830e6bac
	if (!cr6.gt) goto loc_830E6BAC;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// ble cr6,0x830e6bac
	if (!cr6.gt) goto loc_830E6BAC;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x830e6bac
	if (!cr6.lt) goto loc_830E6BAC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e6a80
	sub_830E6A80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e6bac
	if (cr0.lt) goto loc_830E6BAC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8324ba0c
	__imp__vswprintf(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e6bac
	if (cr0.lt) goto loc_830E6BAC;
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830e6bb0
	goto loc_830E6BB0;
loc_830E6BAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E6BB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830E6BB8"))) PPC_WEAK_FUNC(sub_830E6BB8);
PPC_FUNC_IMPL(__imp__sub_830E6BB8) {
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,-7996(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -7996);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310d5a0
	sub_8310D5A0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x830e6c00
	if (!cr6.eq) goto loc_830E6C00;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e6c0c
	goto loc_830E6C0C;
loc_830E6C00:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
loc_830E6C0C:
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830e6c34
	if (!cr6.eq) goto loc_830E6C34;
	// lis r31,-32720
	r31.s64 = -2144337920;
	// ori r31,r31,27
	r31.u64 = r31.u64 | 27;
loc_830E6C20:
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
loc_830E6C34:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r31,0
	r31.s64 = 0;
	// b 0x830e6c20
	goto loc_830E6C20;
}

__attribute__((alias("__imp__sub_830E6C50"))) PPC_WEAK_FUNC(sub_830E6C50);
PPC_FUNC_IMPL(__imp__sub_830E6C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e6b18
	sub_830E6B18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E6C98"))) PPC_WEAK_FUNC(sub_830E6C98);
PPC_FUNC_IMPL(__imp__sub_830E6C98) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r28,r11,-8028
	r28.s64 = r11.s64 + -8028;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r29,-31942
	r29.s64 = -2093350912;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,-7996(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -7996);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830e6d00
	if (!cr6.gt) goto loc_830E6D00;
	// li r30,0
	r30.s64 = 0;
loc_830E6CD0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-7996(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -7996);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x830e6cd0
	if (cr6.lt) goto loc_830E6CD0;
loc_830E6D00:
	// bl 0x830ece38
	sub_830ECE38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830E6D18"))) PPC_WEAK_FUNC(sub_830E6D18);
PPC_FUNC_IMPL(__imp__sub_830E6D18) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r21,r11,-8028
	r21.s64 = r11.s64 + -8028;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x830e6d58
	if (cr6.eq) goto loc_830E6D58;
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
loc_830E6D58:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830e64e8
	sub_830E64E8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830e6fbc
	if (cr0.lt) goto loc_830E6FBC;
	// lwz r22,84(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r25,1
	r25.s64 = 1;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x830e6db4
	if (cr6.eq) goto loc_830E6DB4;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x830e6dac
	if (!cr6.eq) goto loc_830E6DAC;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r22,r29
	r22.u64 = r29.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
loc_830E6DAC:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// bne cr6,0x830e6f34
	if (!cr6.eq) goto loc_830E6F34;
loc_830E6DB4:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830e6bb8
	sub_830E6BB8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830e6fbc
	if (cr0.lt) goto loc_830E6FBC;
	// lwz r22,84(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830e6fc0
	if (cr0.lt) goto loc_830E6FC0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x830e6f58
	if (cr6.eq) goto loc_830E6F58;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e6e38
	if (cr0.eq) goto loc_830E6E38;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24596
	r11.s64 = r11.s64 + -24596;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r25,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r25.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r29.u32);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r29.u32);
	// stw r25,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r25.u32);
	// b 0x830e6e3c
	goto loc_830E6E3C;
loc_830E6E38:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_830E6E3C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e6e50
	if (!cr6.eq) goto loc_830E6E50;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x830e6fc0
	goto loc_830E6FC0;
loc_830E6E50:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bge cr6,0x830e6ea8
	if (!cr6.lt) goto loc_830E6EA8;
loc_830E6E98:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830e6f64
	goto loc_830E6F64;
loc_830E6EA8:
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x830e6ed0
	if (!cr0.lt) goto loc_830E6ED0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830e6e98
	goto loc_830E6E98;
loc_830E6ED0:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x830e6348
	sub_830E6348(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e6f1c
	if (cr0.lt) goto loc_830E6F1C;
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8310cfe0
	sub_8310CFE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e6f14
	if (cr0.lt) goto loc_830E6F14;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8310e4c0
	sub_8310E4C0(ctx, base);
loc_830E6F14:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E6F1C:
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
	// b 0x830e6f58
	goto loc_830E6F58;
loc_830E6F34:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830e6fc0
	if (cr0.lt) goto loc_830E6FC0;
loc_830E6F58:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_830E6F64:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x830e6fc0
	if (cr6.lt) goto loc_830E6FC0;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e7070
	if (cr6.eq) goto loc_830E7070;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x830e7070
	if (cr6.eq) goto loc_830E7070;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
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
	// blt 0x830e7070
	if (cr0.lt) goto loc_830E7070;
	// stw r25,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r25.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e7070
	if (cr6.eq) goto loc_830E7070;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// b 0x830e7068
	goto loc_830E7068;
loc_830E6FBC:
	// lwz r22,84(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_830E6FC0:
	// lis r31,-31942
	r31.s64 = -2093350912;
	// lwz r11,-13652(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -13652);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e7054
	if (cr6.eq) goto loc_830E7054;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r5,r11,-22404
	ctx.r5.s64 = r11.s64 + -22404;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// beq cr6,0x830e6ff4
	if (cr6.eq) goto loc_830E6FF4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_830E6FF4:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x830e7000
	if (cr6.eq) goto loc_830E7000;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_830E7000:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-24520
	ctx.r4.s64 = r11.s64 + -24520;
	// bl 0x830e6c50
	sub_830E6C50(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x830e702c
	if (cr6.eq) goto loc_830E702C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r11,-24528
	ctx.r4.s64 = r11.s64 + -24528;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830e6c50
	sub_830E6C50(ctx, base);
loc_830E702C:
	// lwz r3,-13652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -13652);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,88(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E7054:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e7070
	if (cr6.eq) goto loc_830E7070;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_830E7068:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830E7070:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x830e708c
	if (cr6.eq) goto loc_830E708C;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830E708C:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_830E70A0"))) PPC_WEAK_FUNC(sub_830E70A0);
PPC_FUNC_IMPL(__imp__sub_830E70A0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lbz r11,-8000(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -8000);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830e70d0
	if (!cr0.eq) goto loc_830E70D0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x830e7230
	goto loc_830E7230;
loc_830E70D0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e7228
	if (cr6.eq) goto loc_830E7228;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830e7228
	if (cr6.eq) goto loc_830E7228;
	// li r24,0
	r24.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r24,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r24.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// bl 0x830e6448
	sub_830E6448(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e7230
	if (cr0.lt) goto loc_830E7230;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x830e62a0
	sub_830E62A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830e7210
	if (cr0.lt) goto loc_830E7210;
	// bl 0x830d7830
	sub_830D7830(ctx, base);
	// lwz r27,88(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r26,92(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// lwz r30,96(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// beq 0x830e71f4
	if (cr0.eq) goto loc_830E71F4;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x830e7180
	if (cr6.eq) goto loc_830E7180;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8310ee50
	sub_8310EE50(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830e7210
	if (cr0.lt) goto loc_830E7210;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e6d18
	sub_830E6D18(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x830e7210
	if (!cr0.lt) goto loc_830E7210;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
loc_830E7180:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-24488
	ctx.r4.s64 = r11.s64 + -24488;
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830e71f4
	if (cr0.eq) goto loc_830E71F4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-24504
	ctx.r4.s64 = r11.s64 + -24504;
	// bl 0x831ba858
	sub_831BA858(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830e71f4
	if (cr0.eq) goto loc_830E71F4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8310ee50
	sub_8310EE50(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x830e7210
	if (cr0.lt) goto loc_830E7210;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e6d18
	sub_830E6D18(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x830e7210
	if (!cr0.lt) goto loc_830E7210;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
loc_830E71F4:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e6d18
	sub_830E6D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_830E7210:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830e7230
	goto loc_830E7230;
loc_830E7228:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830E7230:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830E7238"))) PPC_WEAK_FUNC(sub_830E7238);
PPC_FUNC_IMPL(__imp__sub_830E7238) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lbz r11,-8000(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -8000);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830e7268
	if (!cr0.eq) goto loc_830E7268;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x830e72e4
	goto loc_830E72E4;
loc_830E7268:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e72dc
	if (cr6.eq) goto loc_830E72DC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e72dc
	if (cr6.eq) goto loc_830E72DC;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830e6448
	sub_830E6448(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e72e4
	if (cr0.lt) goto loc_830E72E4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x830e62a0
	sub_830E62A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x830e72cc
	if (cr0.lt) goto loc_830E72CC;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x830e6d18
	sub_830E6D18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_830E72CC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830e72e4
	goto loc_830E72E4;
loc_830E72DC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830E72E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E72F0"))) PPC_WEAK_FUNC(sub_830E72F0);
PPC_FUNC_IMPL(__imp__sub_830E72F0) {
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
	// addi r31,r11,-7996
	r31.s64 = r11.s64 + -7996;
	// lbz r11,-4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830e7350
	if (cr0.eq) goto loc_830E7350;
	// li r11,0
	r11.s64 = 0;
	// stb r11,-4(r31)
	PPC_STORE_U8(r31.u32 + -4, r11.u8);
	// bl 0x8310e1a8
	sub_8310E1A8(ctx, base);
	// bl 0x830d5d18
	sub_830D5D18(ctx, base);
	// bl 0x830e6c98
	sub_830E6C98(ctx, base);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830e7348
	if (cr6.eq) goto loc_830E7348;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ece38
	sub_830ECE38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E7348:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_830E7350:
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

__attribute__((alias("__imp__sub_830E7368"))) PPC_WEAK_FUNC(sub_830E7368);
PPC_FUNC_IMPL(__imp__sub_830E7368) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r27.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x830e7394
	if (!cr6.eq) goto loc_830E7394;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830e754c
	goto loc_830E754C;
loc_830E7394:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x830e7544
	if (cr0.eq) goto loc_830E7544;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x830e7544
	if (cr0.eq) goto loc_830E7544;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830e7544
	if (cr0.eq) goto loc_830E7544;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e754c
	if (cr0.lt) goto loc_830E754C;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r26,r11,-8028
	r26.s64 = r11.s64 + -8028;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r30,-31942
	r30.s64 = -2093350912;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r31,-7996(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -7996);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310d5a0
	sub_8310D5A0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x830e742c
	if (!cr6.eq) goto loc_830E742C;
	// li r31,0
	r31.s64 = 0;
	// b 0x830e7438
	goto loc_830E7438;
loc_830E742C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
loc_830E7438:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e749c
	if (cr6.eq) goto loc_830E749C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,-7996(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + -7996);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8310d5a0
	sub_8310D5A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x830e7484
	if (cr6.eq) goto loc_830E7484;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ecec0
	sub_830ECEC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830e749c
	if (!cr0.eq) goto loc_830E749C;
loc_830E7484:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_830E748C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830e754c
	goto loc_830E754C;
loc_830E749C:
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// lwz r3,-7996(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -7996);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8310d890
	sub_8310D890(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830e74f4
	if (!cr0.eq) goto loc_830E74F4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e74e8
	if (cr6.eq) goto loc_830E74E8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-7996(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -7996);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8310d890
	sub_8310D890(ctx, base);
loc_830E74E8:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x830e748c
	goto loc_830E748C;
loc_830E74F4:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x830e7520
	if (cr6.eq) goto loc_830E7520;
	// stw r31,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r31.u32);
	// b 0x830e753c
	goto loc_830E753C;
loc_830E7520:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e753c
	if (cr6.eq) goto loc_830E753C;
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
loc_830E753C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e754c
	goto loc_830E754C;
loc_830E7544:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_830E754C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_830E7558"))) PPC_WEAK_FUNC(sub_830E7558);
PPC_FUNC_IMPL(__imp__sub_830E7558) {
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
	// bl 0x8310dfb8
	sub_8310DFB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e76a0
	if (cr0.lt) goto loc_830E76A0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r28,0
	r28.s64 = 0;
	// beq 0x830e75a4
	if (cr0.eq) goto loc_830E75A4;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// addi r31,r11,-8000
	r31.s64 = r11.s64 + -8000;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// b 0x830e75b0
	goto loc_830E75B0;
loc_830E75A4:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r11,r28
	r11.u64 = r28.u64;
	// addi r31,r10,-8000
	r31.s64 = ctx.r10.s64 + -8000;
loc_830E75B0:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830e75c8
	if (!cr6.eq) goto loc_830E75C8;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x830e7684
	goto loc_830E7684;
loc_830E75C8:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e75f4
	if (cr0.eq) goto loc_830E75F4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-24556
	r11.s64 = r11.s64 + -24556;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x830e75f8
	goto loc_830E75F8;
loc_830E75F4:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_830E75F8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830e760c
	if (!cr6.eq) goto loc_830E760C;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x830e7650
	goto loc_830E7650;
loc_830E760C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e7368
	sub_830E7368(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x830e7650
	if (cr6.lt) goto loc_830E7650;
	// bl 0x8310f258
	sub_8310F258(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x830e7650
	if (cr0.lt) goto loc_830E7650;
	// bl 0x8310f800
	sub_8310F800(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x830e7694
	if (!cr0.lt) goto loc_830E7694;
loc_830E7650:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e7684
	if (cr6.eq) goto loc_830E7684;
	// bl 0x830e6c98
	sub_830E6C98(ctx, base);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830e767c
	if (cr6.eq) goto loc_830E767C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ece38
	sub_830ECE38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
loc_830E767C:
	// mr r11,r28
	r11.u64 = r28.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_830E7684:
	// bl 0x830d5d18
	sub_830D5D18(ctx, base);
	// bl 0x8310e1a8
	sub_8310E1A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x830e76a0
	goto loc_830E76A0;
loc_830E7694:
	// li r11,1
	r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_830E76A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830E76A8"))) PPC_WEAK_FUNC(sub_830E76A8);
PPC_FUNC_IMPL(__imp__sub_830E76A8) {
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
	// lwz r11,240(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x830e76d4
	if (cr6.eq) goto loc_830E76D4;
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// b 0x830e76d8
	goto loc_830E76D8;
loc_830E76D4:
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
loc_830E76D8:
	// lwz r31,24(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, r11.u32);
	// b 0x830e76f4
	goto loc_830E76F4;
loc_830E76E4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e76a8
	sub_830E76A8(ctx, base);
	// lwz r31,32(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 32);
loc_830E76F4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e76e4
	if (!cr6.eq) goto loc_830E76E4;
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

__attribute__((alias("__imp__sub_830E7718"))) PPC_WEAK_FUNC(sub_830E7718);
PPC_FUNC_IMPL(__imp__sub_830E7718) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e775c
	if (cr6.eq) goto loc_830E775C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830e775c
	if (cr6.eq) goto loc_830E775C;
	// bl 0x830d7698
	sub_830D7698(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e775c
	if (cr0.eq) goto loc_830E775C;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bge 0x830e7760
	if (!cr0.lt) goto loc_830E7760;
loc_830E775C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E7760:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7770"))) PPC_WEAK_FUNC(sub_830E7770);
PPC_FUNC_IMPL(__imp__sub_830E7770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,24404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24404, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7780"))) PPC_WEAK_FUNC(sub_830E7780);
PPC_FUNC_IMPL(__imp__sub_830E7780) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13920(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13920);
	// bl 0x830d7698
	sub_830D7698(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e77b4
	if (cr0.eq) goto loc_830E77B4;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830d6f98
	sub_830D6F98(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830E77B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E77C8"))) PPC_WEAK_FUNC(sub_830E77C8);
PPC_FUNC_IMPL(__imp__sub_830E77C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lwz r11,24400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24400);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830e77f8
	if (!cr6.eq) goto loc_830E77F8;
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x830e77f8
	if (cr6.eq) goto loc_830E77F8;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-7900
	r11.s64 = ctx.r9.s64 + -7900;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
loc_830E77F8:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-7904
	ctx.r3.s64 = r11.s64 + -7904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7808"))) PPC_WEAK_FUNC(sub_830E7808);
PPC_FUNC_IMPL(__imp__sub_830E7808) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lwz r11,24400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24400);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830e7858
	if (!cr6.eq) goto loc_830E7858;
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x830e7858
	if (cr6.eq) goto loc_830E7858;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-7900
	r11.s64 = ctx.r9.s64 + -7900;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x830e7860
	goto loc_830E7860;
loc_830E7858:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,-7904
	r11.s64 = r11.s64 + -7904;
loc_830E7860:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x830e7870
	if (cr6.eq) goto loc_830E7870;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// b 0x830e7884
	goto loc_830E7884;
loc_830E7870:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x830e7884
	if (!cr6.eq) goto loc_830E7884;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_830E7884:
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

__attribute__((alias("__imp__sub_830E78A0"))) PPC_WEAK_FUNC(sub_830E78A0);
PPC_FUNC_IMPL(__imp__sub_830E78A0) {
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
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r10,-7904(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -7904);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x830e78c8
	if (!cr6.eq) goto loc_830E78C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-7904(r11)
	PPC_STORE_U32(r11.u32 + -7904, ctx.r10.u32);
loc_830E78C8:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-7900
	ctx.r10.s64 = r11.s64 + -7900;
loc_830E78D4:
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bne cr6,0x830e78ec
	if (!cr6.eq) goto loc_830E78EC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_830E78EC:
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x830e78d4
	if (cr6.lt) goto loc_830E78D4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7910"))) PPC_WEAK_FUNC(sub_830E7910);
PPC_FUNC_IMPL(__imp__sub_830E7910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r10,-13664(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13664);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// beq 0x830e793c
	if (cr0.eq) goto loc_830E793C;
loc_830E7934:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830E793C:
	// cmplwi cr6,r11,22563
	cr6.compare<uint32_t>(r11.u32, 22563, xer);
	// beq cr6,0x830e7a2c
	if (cr6.eq) goto loc_830E7A2C;
	// cmplwi cr6,r11,22546
	cr6.compare<uint32_t>(r11.u32, 22546, xer);
	// beq cr6,0x830e7a2c
	if (cr6.eq) goto loc_830E7A2C;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// bne cr6,0x830e795c
	if (!cr6.eq) goto loc_830E795C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830e7a2c
	if (!cr6.eq) goto loc_830E7A2C;
loc_830E795C:
	// cmplwi cr6,r11,22562
	cr6.compare<uint32_t>(r11.u32, 22562, xer);
	// beq cr6,0x830e7a24
	if (cr6.eq) goto loc_830E7A24;
	// cmplwi cr6,r11,22547
	cr6.compare<uint32_t>(r11.u32, 22547, xer);
	// beq cr6,0x830e7a24
	if (cr6.eq) goto loc_830E7A24;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// bne cr6,0x830e797c
	if (!cr6.eq) goto loc_830E797C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830e7a24
	if (!cr6.eq) goto loc_830E7A24;
loc_830E797C:
	// cmplwi cr6,r11,22560
	cr6.compare<uint32_t>(r11.u32, 22560, xer);
	// beq cr6,0x830e7a1c
	if (cr6.eq) goto loc_830E7A1C;
	// cmplwi cr6,r11,22544
	cr6.compare<uint32_t>(r11.u32, 22544, xer);
	// beq cr6,0x830e7a1c
	if (cr6.eq) goto loc_830E7A1C;
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(r11.u32, 38, xer);
	// bne cr6,0x830e799c
	if (!cr6.eq) goto loc_830E799C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830e7a1c
	if (!cr6.eq) goto loc_830E7A1C;
loc_830E799C:
	// cmplwi cr6,r11,22561
	cr6.compare<uint32_t>(r11.u32, 22561, xer);
	// beq cr6,0x830e7a14
	if (cr6.eq) goto loc_830E7A14;
	// cmplwi cr6,r11,22545
	cr6.compare<uint32_t>(r11.u32, 22545, xer);
	// beq cr6,0x830e7a14
	if (cr6.eq) goto loc_830E7A14;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(r11.u32, 40, xer);
	// bne cr6,0x830e79bc
	if (!cr6.eq) goto loc_830E79BC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830e7a14
	if (!cr6.eq) goto loc_830E7A14;
loc_830E79BC:
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// bne cr6,0x830e79d4
	if (!cr6.eq) goto loc_830E79D4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830e7934
	if (cr6.eq) goto loc_830E7934;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_830E79D4:
	// cmplwi cr6,r11,22534
	cr6.compare<uint32_t>(r11.u32, 22534, xer);
	// beq cr6,0x830e7a0c
	if (cr6.eq) goto loc_830E7A0C;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(r11.u32, 33, xer);
	// bne cr6,0x830e79ec
	if (!cr6.eq) goto loc_830E79EC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830e7a0c
	if (!cr6.eq) goto loc_830E7A0C;
loc_830E79EC:
	// cmplwi cr6,r11,22535
	cr6.compare<uint32_t>(r11.u32, 22535, xer);
	// beq cr6,0x830e7a04
	if (cr6.eq) goto loc_830E7A04;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// bne cr6,0x830e7934
	if (!cr6.eq) goto loc_830E7934;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830e7934
	if (cr6.eq) goto loc_830E7934;
loc_830E7A04:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_830E7A0C:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_830E7A14:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_830E7A1C:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_830E7A24:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_830E7A2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7A38"))) PPC_WEAK_FUNC(sub_830E7A38);
PPC_FUNC_IMPL(__imp__sub_830E7A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-7884(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7884);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7A58"))) PPC_WEAK_FUNC(sub_830E7A58);
PPC_FUNC_IMPL(__imp__sub_830E7A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,-7832(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7832);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7A68"))) PPC_WEAK_FUNC(sub_830E7A68);
PPC_FUNC_IMPL(__imp__sub_830E7A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x830e7a84
	if (cr6.lt) goto loc_830E7A84;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x830e7a8c
	if (cr6.eq) goto loc_830E7A8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830E7A84:
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// bne cr6,0x830e7a98
	if (!cr6.eq) goto loc_830E7A98;
loc_830E7A8C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,-7832
	r11.s64 = r11.s64 + -7832;
	// b 0x830e7aa8
	goto loc_830E7AA8;
loc_830E7A98:
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-7828
	r11.s64 = ctx.r9.s64 + -7828;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_830E7AA8:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7AB0"))) PPC_WEAK_FUNC(sub_830E7AB0);
PPC_FUNC_IMPL(__imp__sub_830E7AB0) {
	PPC_FUNC_PROLOGUE();
	// li r4,255
	ctx.r4.s64 = 255;
	// b 0x830eb0f8
	sub_830EB0F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7AB8"))) PPC_WEAK_FUNC(sub_830E7AB8);
PPC_FUNC_IMPL(__imp__sub_830E7AB8) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,-7832(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -7832);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e7aec
	if (cr6.eq) goto loc_830E7AEC;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bne cr6,0x830e7aec
	if (!cr6.eq) goto loc_830E7AEC;
loc_830E7AE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830e7b28
	goto loc_830E7B28;
loc_830E7AEC:
	// li r31,0
	r31.s64 = 0;
loc_830E7AF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e7a68
	sub_830E7A68(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x830e7b10
	if (cr0.eq) goto loc_830E7B10;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// beq cr6,0x830e7ae4
	if (cr6.eq) goto loc_830E7AE4;
loc_830E7B10:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x830e7af0
	if (cr6.lt) goto loc_830E7AF0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E7B28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E7B30"))) PPC_WEAK_FUNC(sub_830E7B30);
PPC_FUNC_IMPL(__imp__sub_830E7B30) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,-7832(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -7832);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e7b64
	if (cr6.eq) goto loc_830E7B64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x830e7b64
	if (!cr6.eq) goto loc_830E7B64;
	// li r3,255
	ctx.r3.s64 = 255;
	// b 0x830e7ba0
	goto loc_830E7BA0;
loc_830E7B64:
	// li r31,0
	r31.s64 = 0;
loc_830E7B68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e7a68
	sub_830E7A68(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x830e7b88
	if (cr0.eq) goto loc_830E7B88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// beq cr6,0x830e7ba8
	if (cr6.eq) goto loc_830E7BA8;
loc_830E7B88:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x830e7b68
	if (cr6.lt) goto loc_830E7B68;
	// li r3,254
	ctx.r3.s64 = 254;
loc_830E7BA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_830E7BA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830e7ba0
	goto loc_830E7BA0;
}

__attribute__((alias("__imp__sub_830E7BB0"))) PPC_WEAK_FUNC(sub_830E7BB0);
PPC_FUNC_IMPL(__imp__sub_830E7BB0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13928);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e7bdc
	if (!cr0.eq) goto loc_830E7BDC;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e7be4
	goto loc_830E7BE4;
loc_830E7BDC:
	// bl 0x830ee5c0
	sub_830EE5C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E7BE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7BF8"))) PPC_WEAK_FUNC(sub_830E7BF8);
PPC_FUNC_IMPL(__imp__sub_830E7BF8) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13928);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e7c24
	if (!cr0.eq) goto loc_830E7C24;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e7c28
	goto loc_830E7C28;
loc_830E7C24:
	// bl 0x830f3208
	sub_830F3208(ctx, base);
loc_830E7C28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7C38"))) PPC_WEAK_FUNC(sub_830E7C38);
PPC_FUNC_IMPL(__imp__sub_830E7C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13928);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e7c64
	if (!cr0.eq) goto loc_830E7C64;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e7c88
	goto loc_830E7C88;
loc_830E7C64:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// bl 0x830ee618
	sub_830EE618(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E7C88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7C98"))) PPC_WEAK_FUNC(sub_830E7C98);
PPC_FUNC_IMPL(__imp__sub_830E7C98) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13928);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e7ccc
	if (!cr0.eq) goto loc_830E7CCC;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e7cf8
	goto loc_830E7CF8;
loc_830E7CCC:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x830ee618
	sub_830EE618(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E7CF8:
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

__attribute__((alias("__imp__sub_830E7D10"))) PPC_WEAK_FUNC(sub_830E7D10);
PPC_FUNC_IMPL(__imp__sub_830E7D10) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13928);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e7d38
	if (!cr0.eq) goto loc_830E7D38;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830e7d3c
	goto loc_830E7D3C;
loc_830E7D38:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_830E7D3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7D50"))) PPC_WEAK_FUNC(sub_830E7D50);
PPC_FUNC_IMPL(__imp__sub_830E7D50) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13928);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e7d84
	if (!cr0.eq) goto loc_830E7D84;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e7d8c
	goto loc_830E7D8C;
loc_830E7D84:
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E7D8C:
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

__attribute__((alias("__imp__sub_830E7DA0"))) PPC_WEAK_FUNC(sub_830E7DA0);
PPC_FUNC_IMPL(__imp__sub_830E7DA0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13928);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e7dc8
	if (cr0.eq) goto loc_830E7DC8;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
loc_830E7DC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7DD8"))) PPC_WEAK_FUNC(sub_830E7DD8);
PPC_FUNC_IMPL(__imp__sub_830E7DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13892(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13892);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e7e28
	if (cr0.eq) goto loc_830E7E28;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,20
	r31.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830e7e24
	if (!cr6.eq) goto loc_830E7E24;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x83113330
	sub_83113330(ctx, base);
loc_830E7E24:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_830E7E28:
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

__attribute__((alias("__imp__sub_830E7E40"))) PPC_WEAK_FUNC(sub_830E7E40);
PPC_FUNC_IMPL(__imp__sub_830E7E40) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13892(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13892);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e7e74
	if (!cr0.eq) goto loc_830E7E74;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e7e84
	goto loc_830E7E84;
loc_830E7E74:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x830d6258
	sub_830D6258(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E7E84:
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

__attribute__((alias("__imp__sub_830E7E98"))) PPC_WEAK_FUNC(sub_830E7E98);
PPC_FUNC_IMPL(__imp__sub_830E7E98) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13892(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13892);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e7ebc
	if (cr0.eq) goto loc_830E7EBC;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_830E7EBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7ED0"))) PPC_WEAK_FUNC(sub_830E7ED0);
PPC_FUNC_IMPL(__imp__sub_830E7ED0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13892(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13892);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e7ef4
	if (cr0.eq) goto loc_830E7EF4;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_830E7EF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7F08"))) PPC_WEAK_FUNC(sub_830E7F08);
PPC_FUNC_IMPL(__imp__sub_830E7F08) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e7f30
	if (!cr6.eq) goto loc_830E7F30;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830e7f5c
	goto loc_830E7F5C;
loc_830E7F30:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13876(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13876);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e7f50
	if (!cr0.eq) goto loc_830E7F50;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e7f5c
	goto loc_830E7F5C;
loc_830E7F50:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_830E7F5C:
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

__attribute__((alias("__imp__sub_830E7F70"))) PPC_WEAK_FUNC(sub_830E7F70);
PPC_FUNC_IMPL(__imp__sub_830E7F70) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13912(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13912);
	// bl 0x830d7698
	sub_830D7698(ctx, base);
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

__attribute__((alias("__imp__sub_830E7FA8"))) PPC_WEAK_FUNC(sub_830E7FA8);
PPC_FUNC_IMPL(__imp__sub_830E7FA8) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13908(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13908);
	// bl 0x830d7698
	sub_830D7698(ctx, base);
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

__attribute__((alias("__imp__sub_830E7FE0"))) PPC_WEAK_FUNC(sub_830E7FE0);
PPC_FUNC_IMPL(__imp__sub_830E7FE0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13912(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13912);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e8004
	if (cr0.eq) goto loc_830E8004;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_830E8004:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E8018"))) PPC_WEAK_FUNC(sub_830E8018);
PPC_FUNC_IMPL(__imp__sub_830E8018) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13912(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13912);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e8040
	if (cr0.eq) goto loc_830E8040;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
loc_830E8040:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E8050"))) PPC_WEAK_FUNC(sub_830E8050);
PPC_FUNC_IMPL(__imp__sub_830E8050) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e80c0
	if (cr6.eq) goto loc_830E80C0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830e80c0
	if (cr6.eq) goto loc_830E80C0;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r4,-13912(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13912);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830e80a8
	if (!cr0.eq) goto loc_830E80A8;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e80c8
	goto loc_830E80C8;
loc_830E80A8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x830e80c8
	goto loc_830E80C8;
loc_830E80C0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830E80C8:
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

__attribute__((alias("__imp__sub_830E80E0"))) PPC_WEAK_FUNC(sub_830E80E0);
PPC_FUNC_IMPL(__imp__sub_830E80E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,-7908(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7908);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E80F0"))) PPC_WEAK_FUNC(sub_830E80F0);
PPC_FUNC_IMPL(__imp__sub_830E80F0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e8118
	if (!cr6.eq) goto loc_830E8118;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830e8144
	goto loc_830E8144;
loc_830E8118:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13872(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13872);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8138
	if (!cr0.eq) goto loc_830E8138;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8144
	goto loc_830E8144;
loc_830E8138:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_830E8144:
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

__attribute__((alias("__imp__sub_830E8158"))) PPC_WEAK_FUNC(sub_830E8158);
PPC_FUNC_IMPL(__imp__sub_830E8158) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e8180
	if (!cr6.eq) goto loc_830E8180;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830e81ac
	goto loc_830E81AC;
loc_830E8180:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13868(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13868);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e81a0
	if (!cr0.eq) goto loc_830E81A0;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e81ac
	goto loc_830E81AC;
loc_830E81A0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_830E81AC:
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

__attribute__((alias("__imp__sub_830E81C0"))) PPC_WEAK_FUNC(sub_830E81C0);
PPC_FUNC_IMPL(__imp__sub_830E81C0) {
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
	// lis r31,-31947
	r31.s64 = -2093678592;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,24408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24408);
	// bl 0x8324b85c
	__imp__KeTlsGetValue(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x830e81f4
	if (!cr6.eq) goto loc_830E81F4;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
loc_830E81F4:
	// lwz r3,24408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24408);
	// bl 0x8324b86c
	__imp__KeTlsSetValue(ctx, base);
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

__attribute__((alias("__imp__sub_830E8218"))) PPC_WEAK_FUNC(sub_830E8218);
PPC_FUNC_IMPL(__imp__sub_830E8218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lwz r3,24408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24408);
	// bl 0x8324b85c
	__imp__KeTlsGetValue(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E8250"))) PPC_WEAK_FUNC(sub_830E8250);
PPC_FUNC_IMPL(__imp__sub_830E8250) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8284
	if (!cr0.eq) goto loc_830E8284;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8290
	goto loc_830E8290;
loc_830E8284:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830e76a8
	sub_830E76A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E8290:
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

__attribute__((alias("__imp__sub_830E82A8"))) PPC_WEAK_FUNC(sub_830E82A8);
PPC_FUNC_IMPL(__imp__sub_830E82A8) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e82d8
	if (cr0.eq) goto loc_830E82D8;
	// lwz r11,240(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// b 0x830e82dc
	goto loc_830E82DC;
loc_830E82D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E82DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E82F0"))) PPC_WEAK_FUNC(sub_830E82F0);
PPC_FUNC_IMPL(__imp__sub_830E82F0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8324
	if (!cr0.eq) goto loc_830E8324;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e832c
	goto loc_830E832C;
loc_830E8324:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830fee58
	sub_830FEE58(ctx, base);
loc_830E832C:
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

__attribute__((alias("__imp__sub_830E8340"))) PPC_WEAK_FUNC(sub_830E8340);
PPC_FUNC_IMPL(__imp__sub_830E8340) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e836c
	if (!cr0.eq) goto loc_830E836C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8374
	goto loc_830E8374;
loc_830E836C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830fec40
	sub_830FEC40(ctx, base);
loc_830E8374:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E8388"))) PPC_WEAK_FUNC(sub_830E8388);
PPC_FUNC_IMPL(__imp__sub_830E8388) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,-13940(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e83c4
	if (!cr0.eq) goto loc_830E83C4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e83e8
	goto loc_830E83E8;
loc_830E83C4:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e83dc
	if (cr6.eq) goto loc_830E83DC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// b 0x830e83e0
	goto loc_830E83E0;
loc_830E83DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E83E0:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E83E8:
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

__attribute__((alias("__imp__sub_830E8400"))) PPC_WEAK_FUNC(sub_830E8400);
PPC_FUNC_IMPL(__imp__sub_830E8400) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,-13940(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e843c
	if (!cr0.eq) goto loc_830E843C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8460
	goto loc_830E8460;
loc_830E843C:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e8454
	if (cr6.eq) goto loc_830E8454;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// b 0x830e8458
	goto loc_830E8458;
loc_830E8454:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E8458:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E8460:
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

__attribute__((alias("__imp__sub_830E8478"))) PPC_WEAK_FUNC(sub_830E8478);
PPC_FUNC_IMPL(__imp__sub_830E8478) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,-13940(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e84b4
	if (!cr0.eq) goto loc_830E84B4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e84d8
	goto loc_830E84D8;
loc_830E84B4:
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e84cc
	if (cr6.eq) goto loc_830E84CC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// b 0x830e84d0
	goto loc_830E84D0;
loc_830E84CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E84D0:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E84D8:
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

__attribute__((alias("__imp__sub_830E84F0"))) PPC_WEAK_FUNC(sub_830E84F0);
PPC_FUNC_IMPL(__imp__sub_830E84F0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,-13940(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e852c
	if (!cr0.eq) goto loc_830E852C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8550
	goto loc_830E8550;
loc_830E852C:
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e8544
	if (cr6.eq) goto loc_830E8544;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// b 0x830e8548
	goto loc_830E8548;
loc_830E8544:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E8548:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E8550:
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

__attribute__((alias("__imp__sub_830E8568"))) PPC_WEAK_FUNC(sub_830E8568);
PPC_FUNC_IMPL(__imp__sub_830E8568) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,-13940(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e85a4
	if (!cr0.eq) goto loc_830E85A4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e85c8
	goto loc_830E85C8;
loc_830E85A4:
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830e85bc
	if (cr6.eq) goto loc_830E85BC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// b 0x830e85c0
	goto loc_830E85C0;
loc_830E85BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E85C0:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E85C8:
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

__attribute__((alias("__imp__sub_830E85E0"))) PPC_WEAK_FUNC(sub_830E85E0);
PPC_FUNC_IMPL(__imp__sub_830E85E0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8618
	if (!cr0.eq) goto loc_830E8618;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8628
	goto loc_830E8628;
loc_830E8618:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830fefe0
	sub_830FEFE0(ctx, base);
loc_830E8628:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E8630"))) PPC_WEAK_FUNC(sub_830E8630);
PPC_FUNC_IMPL(__imp__sub_830E8630) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8664
	if (!cr0.eq) goto loc_830E8664;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e866c
	goto loc_830E866C;
loc_830E8664:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830f1a40
	sub_830F1A40(ctx, base);
loc_830E866C:
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

__attribute__((alias("__imp__sub_830E8680"))) PPC_WEAK_FUNC(sub_830E8680);
PPC_FUNC_IMPL(__imp__sub_830E8680) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e86b4
	if (!cr0.eq) goto loc_830E86B4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e86bc
	goto loc_830E86BC;
loc_830E86B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830f1b00
	sub_830F1B00(ctx, base);
loc_830E86BC:
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

__attribute__((alias("__imp__sub_830E86D0"))) PPC_WEAK_FUNC(sub_830E86D0);
PPC_FUNC_IMPL(__imp__sub_830E86D0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8704
	if (!cr0.eq) goto loc_830E8704;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e870c
	goto loc_830E870C;
loc_830E8704:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830fedb8
	sub_830FEDB8(ctx, base);
loc_830E870C:
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

__attribute__((alias("__imp__sub_830E8720"))) PPC_WEAK_FUNC(sub_830E8720);
PPC_FUNC_IMPL(__imp__sub_830E8720) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8754
	if (!cr0.eq) goto loc_830E8754;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e875c
	goto loc_830E875C;
loc_830E8754:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830f1b28
	sub_830F1B28(ctx, base);
loc_830E875C:
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

__attribute__((alias("__imp__sub_830E8770"))) PPC_WEAK_FUNC(sub_830E8770);
PPC_FUNC_IMPL(__imp__sub_830E8770) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e87a4
	if (!cr0.eq) goto loc_830E87A4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e87ac
	goto loc_830E87AC;
loc_830E87A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830edf00
	sub_830EDF00(ctx, base);
loc_830E87AC:
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

__attribute__((alias("__imp__sub_830E87C0"))) PPC_WEAK_FUNC(sub_830E87C0);
PPC_FUNC_IMPL(__imp__sub_830E87C0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e87f4
	if (!cr0.eq) goto loc_830E87F4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e87fc
	goto loc_830E87FC;
loc_830E87F4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830f1b50
	sub_830F1B50(ctx, base);
loc_830E87FC:
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

__attribute__((alias("__imp__sub_830E8810"))) PPC_WEAK_FUNC(sub_830E8810);
PPC_FUNC_IMPL(__imp__sub_830E8810) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8844
	if (!cr0.eq) goto loc_830E8844;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e884c
	goto loc_830E884C;
loc_830E8844:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830f1bb0
	sub_830F1BB0(ctx, base);
loc_830E884C:
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

__attribute__((alias("__imp__sub_830E8860"))) PPC_WEAK_FUNC(sub_830E8860);
PPC_FUNC_IMPL(__imp__sub_830E8860) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8894
	if (!cr0.eq) goto loc_830E8894;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e889c
	goto loc_830E889C;
loc_830E8894:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830f1b88
	sub_830F1B88(ctx, base);
loc_830E889C:
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

__attribute__((alias("__imp__sub_830E88B0"))) PPC_WEAK_FUNC(sub_830E88B0);
PPC_FUNC_IMPL(__imp__sub_830E88B0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,-13940(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e88ec
	if (!cr0.eq) goto loc_830E88EC;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e88f8
	goto loc_830E88F8;
loc_830E88EC:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_830E88F8:
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

__attribute__((alias("__imp__sub_830E8910"))) PPC_WEAK_FUNC(sub_830E8910);
PPC_FUNC_IMPL(__imp__sub_830E8910) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830e8974
	if (cr6.eq) goto loc_830E8974;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e8974
	if (cr6.eq) goto loc_830E8974;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,-13940(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8964
	if (!cr0.eq) goto loc_830E8964;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e897c
	goto loc_830E897C;
loc_830E8964:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830ee1a0
	sub_830EE1A0(ctx, base);
	// b 0x830e897c
	goto loc_830E897C;
loc_830E8974:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830E897C:
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

__attribute__((alias("__imp__sub_830E8998"))) PPC_WEAK_FUNC(sub_830E8998);
PPC_FUNC_IMPL(__imp__sub_830E8998) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830e89fc
	if (cr6.eq) goto loc_830E89FC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e89fc
	if (cr6.eq) goto loc_830E89FC;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,-13940(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e89ec
	if (!cr0.eq) goto loc_830E89EC;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8a04
	goto loc_830E8A04;
loc_830E89EC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830ee130
	sub_830EE130(ctx, base);
	// b 0x830e8a04
	goto loc_830E8A04;
loc_830E89FC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830E8A04:
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

__attribute__((alias("__imp__sub_830E8A20"))) PPC_WEAK_FUNC(sub_830E8A20);
PPC_FUNC_IMPL(__imp__sub_830E8A20) {
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
	// bl 0x830d7738
	sub_830D7738(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e8a50
	if (cr6.eq) goto loc_830E8A50;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_830E8A50:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830e8388
	sub_830E8388(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x830e8a7c
	if (cr0.lt) goto loc_830E8A7C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x830e8a88
	if (cr6.eq) goto loc_830E8A88;
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830e8a50
	if (!cr6.eq) goto loc_830E8A50;
loc_830E8A7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E8A80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_830E8A88:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830e8a94
	if (cr6.eq) goto loc_830E8A94;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_830E8A94:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830e8a80
	goto loc_830E8A80;
}

__attribute__((alias("__imp__sub_830E8AA0"))) PPC_WEAK_FUNC(sub_830E8AA0);
PPC_FUNC_IMPL(__imp__sub_830E8AA0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x830e8a20
	sub_830E8A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8AA8"))) PPC_WEAK_FUNC(sub_830E8AA8);
PPC_FUNC_IMPL(__imp__sub_830E8AA8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e8ad0
	if (!cr6.eq) goto loc_830E8AD0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830e8b04
	goto loc_830E8B04;
loc_830E8AD0:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,-13940(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8af8
	if (!cr0.eq) goto loc_830E8AF8;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8b04
	goto loc_830E8B04;
loc_830E8AF8:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_830E8B04:
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

__attribute__((alias("__imp__sub_830E8B18"))) PPC_WEAK_FUNC(sub_830E8B18);
PPC_FUNC_IMPL(__imp__sub_830E8B18) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e8b40
	if (!cr6.eq) goto loc_830E8B40;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830e8b6c
	goto loc_830E8B6C;
loc_830E8B40:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8b60
	if (!cr0.eq) goto loc_830E8B60;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8b6c
	goto loc_830E8B6C;
loc_830E8B60:
	// lwz r11,232(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_830E8B6C:
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

__attribute__((alias("__imp__sub_830E8B80"))) PPC_WEAK_FUNC(sub_830E8B80);
PPC_FUNC_IMPL(__imp__sub_830E8B80) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8bb4
	if (!cr0.eq) goto loc_830E8BB4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8bbc
	goto loc_830E8BBC;
loc_830E8BB4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830edfe8
	sub_830EDFE8(ctx, base);
loc_830E8BBC:
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

__attribute__((alias("__imp__sub_830E8BD0"))) PPC_WEAK_FUNC(sub_830E8BD0);
PPC_FUNC_IMPL(__imp__sub_830E8BD0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8c04
	if (!cr0.eq) goto loc_830E8C04;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8c10
	goto loc_830E8C10;
loc_830E8C04:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830ee518
	sub_830EE518(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E8C10:
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

__attribute__((alias("__imp__sub_830E8C28"))) PPC_WEAK_FUNC(sub_830E8C28);
PPC_FUNC_IMPL(__imp__sub_830E8C28) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e8c50
	if (!cr6.eq) goto loc_830E8C50;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830e8c7c
	goto loc_830E8C7C;
loc_830E8C50:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8c70
	if (!cr0.eq) goto loc_830E8C70;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8c7c
	goto loc_830E8C7C;
loc_830E8C70:
	// bl 0x830ee528
	sub_830EE528(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E8C7C:
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

__attribute__((alias("__imp__sub_830E8C90"))) PPC_WEAK_FUNC(sub_830E8C90);
PPC_FUNC_IMPL(__imp__sub_830E8C90) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8cc4
	if (!cr0.eq) goto loc_830E8CC4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8ccc
	goto loc_830E8CCC;
loc_830E8CC4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830f1e18
	sub_830F1E18(ctx, base);
loc_830E8CCC:
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

__attribute__((alias("__imp__sub_830E8CE0"))) PPC_WEAK_FUNC(sub_830E8CE0);
PPC_FUNC_IMPL(__imp__sub_830E8CE0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,-13940(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8d1c
	if (!cr0.eq) goto loc_830E8D1C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8d24
	goto loc_830E8D24;
loc_830E8D1C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830ee088
	sub_830EE088(ctx, base);
loc_830E8D24:
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

__attribute__((alias("__imp__sub_830E8D38"))) PPC_WEAK_FUNC(sub_830E8D38);
PPC_FUNC_IMPL(__imp__sub_830E8D38) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8d6c
	if (!cr0.eq) goto loc_830E8D6C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8d74
	goto loc_830E8D74;
loc_830E8D6C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830f1e90
	sub_830F1E90(ctx, base);
loc_830E8D74:
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

__attribute__((alias("__imp__sub_830E8D88"))) PPC_WEAK_FUNC(sub_830E8D88);
PPC_FUNC_IMPL(__imp__sub_830E8D88) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8dc8
	if (!cr0.eq) goto loc_830E8DC8;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8de0
	goto loc_830E8DE0;
loc_830E8DC8:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830f1f48
	sub_830F1F48(ctx, base);
loc_830E8DE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830E8DE8"))) PPC_WEAK_FUNC(sub_830E8DE8);
PPC_FUNC_IMPL(__imp__sub_830E8DE8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e8e18
	if (!cr6.eq) goto loc_830E8E18;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830e8e4c
	goto loc_830E8E4C;
loc_830E8E18:
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,-13940(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8e40
	if (!cr0.eq) goto loc_830E8E40;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8e4c
	goto loc_830E8E4C;
loc_830E8E40:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830ee098
	sub_830EE098(ctx, base);
loc_830E8E4C:
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

__attribute__((alias("__imp__sub_830E8E68"))) PPC_WEAK_FUNC(sub_830E8E68);
PPC_FUNC_IMPL(__imp__sub_830E8E68) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8e9c
	if (!cr0.eq) goto loc_830E8E9C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e8ebc
	goto loc_830E8EBC;
loc_830E8E9C:
	// lwz r11,240(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x830e8eb0
	if (cr6.eq) goto loc_830E8EB0;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// b 0x830e8eb4
	goto loc_830E8EB4;
loc_830E8EB0:
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_830E8EB4:
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E8EBC:
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

__attribute__((alias("__imp__sub_830E8ED0"))) PPC_WEAK_FUNC(sub_830E8ED0);
PPC_FUNC_IMPL(__imp__sub_830E8ED0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r31,0
	r31.s64 = 0;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e8f0c
	if (cr0.eq) goto loc_830E8F0C;
	// lwz r11,240(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// rlwinm r11,r11,0,18,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bne cr6,0x830e8f0c
	if (!cr6.eq) goto loc_830E8F0C;
	// li r31,1
	r31.s64 = 1;
loc_830E8F0C:
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

__attribute__((alias("__imp__sub_830E8F28"))) PPC_WEAK_FUNC(sub_830E8F28);
PPC_FUNC_IMPL(__imp__sub_830E8F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x830e7780
	sub_830E7780(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e8f5c
	if (!cr0.eq) goto loc_830E8F5C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x830e8f74
	goto loc_830E8F74;
loc_830E8F5C:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// bne cr6,0x830e8f6c
	if (!cr6.eq) goto loc_830E8F6C;
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r31.u32);
	// b 0x830e8f70
	goto loc_830E8F70;
loc_830E8F6C:
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r31.u32);
loc_830E8F70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E8F74:
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

__attribute__((alias("__imp__sub_830E8F90"))) PPC_WEAK_FUNC(sub_830E8F90);
PPC_FUNC_IMPL(__imp__sub_830E8F90) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830e901c
	if (cr6.eq) goto loc_830E901C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830e901c
	if (cr6.eq) goto loc_830E901C;
	// li r31,0
	r31.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// bl 0x830e61d0
	sub_830E61D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830e8fd4
	if (cr0.eq) goto loc_830E8FD4;
	// bl 0x8310c290
	sub_8310C290(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_830E8FD4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x830e8fe8
	if (!cr6.eq) goto loc_830E8FE8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830e9024
	goto loc_830E9024;
loc_830E8FE8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310c7d0
	sub_8310C7D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x830e9010
	if (!cr0.lt) goto loc_830E9010;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310c7c8
	sub_8310C7C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// b 0x830e9014
	goto loc_830E9014;
loc_830E9010:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
loc_830E9014:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830e9024
	goto loc_830E9024;
loc_830E901C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830E9024:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E9030"))) PPC_WEAK_FUNC(sub_830E9030);
PPC_FUNC_IMPL(__imp__sub_830E9030) {
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
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x830e9058
	if (!cr0.eq) goto loc_830E9058;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830e906c
	goto loc_830E906C;
loc_830E9058:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8310c7c8
	sub_8310C7C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830e61f8
	sub_830E61F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E906C:
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

__attribute__((alias("__imp__sub_830E9080"))) PPC_WEAK_FUNC(sub_830E9080);
PPC_FUNC_IMPL(__imp__sub_830E9080) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r4,-13940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -13940);
	// bl 0x830e7718
	sub_830E7718(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830e90bc
	if (!cr0.eq) goto loc_830E90BC;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x830e90c8
	goto loc_830E90C8;
loc_830E90BC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830f9320
	sub_830F9320(ctx, base);
loc_830E90C8:
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

__attribute__((alias("__imp__sub_830E90E0"))) PPC_WEAK_FUNC(sub_830E90E0);
PPC_FUNC_IMPL(__imp__sub_830E90E0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x830ede68
	sub_830EDE68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E90F0"))) PPC_WEAK_FUNC(sub_830E90F0);
PPC_FUNC_IMPL(__imp__sub_830E90F0) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,5
	ctx.r4.s64 = 5;
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
	// li r5,12
	ctx.r5.s64 = 12;
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830E9138"))) PPC_WEAK_FUNC(sub_830E9138);
PPC_FUNC_IMPL(__imp__sub_830E9138) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E9170"))) PPC_WEAK_FUNC(sub_830E9170);
PPC_FUNC_IMPL(__imp__sub_830E9170) {
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
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E91B0"))) PPC_WEAK_FUNC(sub_830E91B0);
PPC_FUNC_IMPL(__imp__sub_830E91B0) {
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
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830E91F0"))) PPC_WEAK_FUNC(sub_830E91F0);
PPC_FUNC_IMPL(__imp__sub_830E91F0) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x830d7d08
	sub_830D7D08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x830d7d30
	sub_830D7D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E9228"))) PPC_WEAK_FUNC(sub_830E9228);
PPC_FUNC_IMPL(__imp__sub_830E9228) {
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
	// li r4,40
	ctx.r4.s64 = 40;
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

__attribute__((alias("__imp__sub_830E9278"))) PPC_WEAK_FUNC(sub_830E9278);
PPC_FUNC_IMPL(__imp__sub_830E9278) {
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
	// li r4,47
	ctx.r4.s64 = 47;
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

__attribute__((alias("__imp__sub_830E92C8"))) PPC_WEAK_FUNC(sub_830E92C8);
PPC_FUNC_IMPL(__imp__sub_830E92C8) {
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
	// li r4,19
	ctx.r4.s64 = 19;
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

__attribute__((alias("__imp__sub_830E9318"))) PPC_WEAK_FUNC(sub_830E9318);
PPC_FUNC_IMPL(__imp__sub_830E9318) {
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
	// li r4,25
	ctx.r4.s64 = 25;
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

__attribute__((alias("__imp__sub_830E9360"))) PPC_WEAK_FUNC(sub_830E9360);
PPC_FUNC_IMPL(__imp__sub_830E9360) {
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
	// li r4,34
	ctx.r4.s64 = 34;
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

__attribute__((alias("__imp__sub_830E93A8"))) PPC_WEAK_FUNC(sub_830E93A8);
PPC_FUNC_IMPL(__imp__sub_830E93A8) {
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
	// li r4,35
	ctx.r4.s64 = 35;
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

__attribute__((alias("__imp__sub_830E93F0"))) PPC_WEAK_FUNC(sub_830E93F0);
PPC_FUNC_IMPL(__imp__sub_830E93F0) {
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
	// li r4,43
	ctx.r4.s64 = 43;
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

__attribute__((alias("__imp__sub_830E9440"))) PPC_WEAK_FUNC(sub_830E9440);
PPC_FUNC_IMPL(__imp__sub_830E9440) {
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
	// li r4,26
	ctx.r4.s64 = 26;
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

