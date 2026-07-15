#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83051778"))) PPC_WEAK_FUNC(sub_83051778);
PPC_FUNC_IMPL(__imp__sub_83051778) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,36(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x8309a1e0
	sub_8309A1E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83051790"))) PPC_WEAK_FUNC(sub_83051790);
PPC_FUNC_IMPL(__imp__sub_83051790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830517d4
	if (cr0.eq) goto loc_830517D4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8309b0f0
	sub_8309B0F0(ctx, base);
	// b 0x830517d8
	goto loc_830517D8;
loc_830517D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830517D8:
	// stw r3,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830517E4"))) PPC_WEAK_FUNC(sub_830517E4);
PPC_FUNC_IMPL(__imp__sub_830517E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051820"))) PPC_WEAK_FUNC(sub_83051820);
PPC_FUNC_IMPL(__imp__sub_83051820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83051864
	if (cr0.eq) goto loc_83051864;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8309b0f0
	sub_8309B0F0(ctx, base);
	// b 0x83051868
	goto loc_83051868;
loc_83051864:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83051868:
	// stw r3,76(r30)
	PPC_STORE_U32(r30.u32 + 76, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83051874"))) PPC_WEAK_FUNC(sub_83051874);
PPC_FUNC_IMPL(__imp__sub_83051874) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830518B0"))) PPC_WEAK_FUNC(sub_830518B0);
PPC_FUNC_IMPL(__imp__sub_830518B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830518f4
	if (cr0.eq) goto loc_830518F4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8309b0f0
	sub_8309B0F0(ctx, base);
	// b 0x830518f8
	goto loc_830518F8;
loc_830518F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830518F8:
	// stw r3,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83051904"))) PPC_WEAK_FUNC(sub_83051904);
PPC_FUNC_IMPL(__imp__sub_83051904) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051940"))) PPC_WEAK_FUNC(sub_83051940);
PPC_FUNC_IMPL(__imp__sub_83051940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83051984
	if (cr0.eq) goto loc_83051984;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8309b0f0
	sub_8309B0F0(ctx, base);
	// b 0x83051988
	goto loc_83051988;
loc_83051984:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83051988:
	// stw r3,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83051994"))) PPC_WEAK_FUNC(sub_83051994);
PPC_FUNC_IMPL(__imp__sub_83051994) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830519D0"))) PPC_WEAK_FUNC(sub_830519D0);
PPC_FUNC_IMPL(__imp__sub_830519D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83051a14
	if (cr0.eq) goto loc_83051A14;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83051518
	sub_83051518(ctx, base);
	// b 0x83051a18
	goto loc_83051A18;
loc_83051A14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83051A18:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83051A30"))) PPC_WEAK_FUNC(sub_83051A30);
PPC_FUNC_IMPL(__imp__sub_83051A30) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051A60"))) PPC_WEAK_FUNC(sub_83051A60);
PPC_FUNC_IMPL(__imp__sub_83051A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15396
	ctx.r3.s64 = r11.s64 + 15396;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051A70"))) PPC_WEAK_FUNC(sub_83051A70);
PPC_FUNC_IMPL(__imp__sub_83051A70) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lha r11,0(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 0));
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83051aa8
	if (cr0.eq) goto loc_83051AA8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
loc_83051AA8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8309ad70
	sub_8309AD70(ctx, base);
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

__attribute__((alias("__imp__sub_83051AD0"))) PPC_WEAK_FUNC(sub_83051AD0);
PPC_FUNC_IMPL(__imp__sub_83051AD0) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,10416
	r11.s64 = r11.s64 + 10416;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8309a8f0
	sub_8309A8F0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83051b0c
	if (cr0.eq) goto loc_83051B0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83051B0C:
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

__attribute__((alias("__imp__sub_83051B30"))) PPC_WEAK_FUNC(sub_83051B30);
PPC_FUNC_IMPL(__imp__sub_83051B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b1c
	// addi r31,r1,-352
	r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r30,372(r31)
	PPC_STORE_U32(r31.u32 + 372, r30.u32);
	// stw r26,404(r31)
	PPC_STORE_U32(r31.u32 + 404, r26.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83051b80
	if (cr0.eq) goto loc_83051B80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83051B80:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83051c2c
	if (cr0.eq) goto loc_83051C2C;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83051bd8
	if (!cr0.eq) goto loc_83051BD8;
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83051bd0
	if (cr0.eq) goto loc_83051BD0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r11,-5408
	ctx.r5.s64 = r11.s64 + -5408;
	// bl 0x83092310
	sub_83092310(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83051bd4
	goto loc_83051BD4;
loc_83051BD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83051BD4:
	// stw r3,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r3.u32);
loc_83051BD8:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x83092938
	sub_83092938(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83051c2c
	if (!cr0.eq) goto loc_83051C2C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r4,r11,10992
	ctx.r4.s64 = r11.s64 + 10992;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,238
	ctx.r6.s64 = 238;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8301db48
	sub_8301DB48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// addi r4,r11,-7640
	ctx.r4.s64 = r11.s64 + -7640;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83051C2C:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83051d14
	if (!cr0.eq) goto loc_83051D14;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x8309b0f0
	sub_8309B0F0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// addi r27,r31,240
	r27.s64 = r31.s64 + 240;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83051cf4
	if (cr0.eq) goto loc_83051CF4;
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r29,0
	r29.s64 = 0;
loc_83051C60:
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// bge cr6,0x83051ca8
	if (!cr6.lt) goto loc_83051CA8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83051ca8
	if (cr6.eq) goto loc_83051CA8;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x83051c60
	goto loc_83051C60;
loc_83051CA8:
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// bne cr6,0x83051cf4
	if (!cr6.eq) goto loc_83051CF4;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,10992
	ctx.r4.s64 = r11.s64 + 10992;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,244
	ctx.r6.s64 = 244;
	// li r5,284
	ctx.r5.s64 = 284;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8301db48
	sub_8301DB48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// addi r4,r11,-7640
	ctx.r4.s64 = r11.s64 + -7640;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83051CF4:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8309a9a0
	sub_8309A9A0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x8309b160
	sub_8309B160(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83051D14:
	// addi r1,r31,352
	ctx.r1.s64 = r31.s64 + 352;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83051D24"))) PPC_WEAK_FUNC(sub_83051D24);
PPC_FUNC_IMPL(__imp__sub_83051D24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,299
	ctx.r6.s64 = 299;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,10992
	ctx.r4.s64 = r11.s64 + 10992;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r5,250
	ctx.r5.s64 = 250;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x8301db48
	sub_8301DB48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,-7640
	ctx.r4.s64 = r11.s64 + -7640;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83051D84"))) PPC_WEAK_FUNC(sub_83051D84);
PPC_FUNC_IMPL(__imp__sub_83051D84) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,10992
	ctx.r4.s64 = r11.s64 + 10992;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,299
	ctx.r6.s64 = 299;
	// li r5,292
	ctx.r5.s64 = 292;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// lwz r11,404(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 404);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83051DD8"))) PPC_WEAK_FUNC(sub_83051DD8);
PPC_FUNC_IMPL(__imp__sub_83051DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051E08"))) PPC_WEAK_FUNC(sub_83051E08);
PPC_FUNC_IMPL(__imp__sub_83051E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x8309b160
	sub_8309B160(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051E38"))) PPC_WEAK_FUNC(sub_83051E38);
PPC_FUNC_IMPL(__imp__sub_83051E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b20
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,92(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// stw r29,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r29.u32);
	// stw r26,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r26.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83051fcc
	if (cr0.eq) goto loc_83051FCC;
	// lwz r28,28(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r27,8(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x83051ed0
	if (cr0.eq) goto loc_83051ED0;
	// li r30,0
	r30.s64 = 0;
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
loc_83051E84:
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// bge cr6,0x83051ed0
	if (!cr6.lt) goto loc_83051ED0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// b 0x83051e84
	goto loc_83051E84;
loc_83051ED0:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x83051f18
	if (!cr6.gt) goto loc_83051F18;
loc_83051EDC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// blt cr6,0x83051edc
	if (cr6.lt) goto loc_83051EDC;
loc_83051F18:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// beq 0x83051f58
	if (cr0.eq) goto loc_83051F58;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// addi r10,r11,2232
	ctx.r10.s64 = r11.s64 + 2232;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x83051f5c
	goto loc_83051F5C;
loc_83051F58:
	// li r11,0
	r11.s64 = 0;
loc_83051F5C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// stw r11,88(r29)
	PPC_STORE_U32(r29.u32 + 88, r11.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// stb r10,68(r29)
	PPC_STORE_U8(r29.u32 + 68, ctx.r10.u8);
	// ble cr6,0x83051fcc
	if (!cr6.gt) goto loc_83051FCC;
loc_83051F74:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// beq 0x83051fb0
	if (cr0.eq) goto loc_83051FB0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x8309b0f0
	sub_8309B0F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83051fb4
	goto loc_83051FB4;
loc_83051FB0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83051FB4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// bl 0x830511f0
	sub_830511F0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// blt cr6,0x83051f74
	if (cr6.lt) goto loc_83051F74;
loc_83051FCC:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83051FDC"))) PPC_WEAK_FUNC(sub_83051FDC);
PPC_FUNC_IMPL(__imp__sub_83051FDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r30,220(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,10992
	ctx.r4.s64 = r11.s64 + 10992;
	// li r6,181
	ctx.r6.s64 = 181;
	// li r5,203
	ctx.r5.s64 = 203;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8305203C"))) PPC_WEAK_FUNC(sub_8305203C);
PPC_FUNC_IMPL(__imp__sub_8305203C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052068"))) PPC_WEAK_FUNC(sub_83052068);
PPC_FUNC_IMPL(__imp__sub_83052068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052098"))) PPC_WEAK_FUNC(sub_83052098);
PPC_FUNC_IMPL(__imp__sub_83052098) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r7,10
	ctx.r7.s64 = 10;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83092af0
	sub_83092AF0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,11648
	r11.s64 = r11.s64 + 11648;
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

__attribute__((alias("__imp__sub_830520F0"))) PPC_WEAK_FUNC(sub_830520F0);
PPC_FUNC_IMPL(__imp__sub_830520F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,10
	ctx.r7.s64 = 10;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x83092af0
	sub_83092AF0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r11,r11,11648
	r11.s64 = r11.s64 + 11648;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83093e90
	sub_83093E90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83052144"))) PPC_WEAK_FUNC(sub_83052144);
PPC_FUNC_IMPL(__imp__sub_83052144) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x830929f8
	sub_830929F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052178"))) PPC_WEAK_FUNC(sub_83052178);
PPC_FUNC_IMPL(__imp__sub_83052178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830521d4
	if (cr0.eq) goto loc_830521D4;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x830520f0
	sub_830520F0(ctx, base);
	// b 0x830521d8
	goto loc_830521D8;
loc_830521D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830521D8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830521E0"))) PPC_WEAK_FUNC(sub_830521E0);
PPC_FUNC_IMPL(__imp__sub_830521E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052210"))) PPC_WEAK_FUNC(sub_83052210);
PPC_FUNC_IMPL(__imp__sub_83052210) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x83052280
	if (cr0.gt) goto loc_83052280;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,11848
	ctx.r4.s64 = r11.s64 + 11848;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,239
	ctx.r6.s64 = 239;
	// li r5,142
	ctx.r5.s64 = 142;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8301db48
	sub_8301DB48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7640
	ctx.r4.s64 = r11.s64 + -7640;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83052280:
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

__attribute__((alias("__imp__sub_83052298"))) PPC_WEAK_FUNC(sub_83052298);
PPC_FUNC_IMPL(__imp__sub_83052298) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8309bc60
	sub_8309BC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830522A8"))) PPC_WEAK_FUNC(sub_830522A8);
PPC_FUNC_IMPL(__imp__sub_830522A8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82fda6b8
	sub_82FDA6B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830522C0"))) PPC_WEAK_FUNC(sub_830522C0);
PPC_FUNC_IMPL(__imp__sub_830522C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83052304
	if (cr0.eq) goto loc_83052304;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83052098
	sub_83052098(ctx, base);
	// b 0x83052308
	goto loc_83052308;
loc_83052304:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83052308:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83052320"))) PPC_WEAK_FUNC(sub_83052320);
PPC_FUNC_IMPL(__imp__sub_83052320) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052350"))) PPC_WEAK_FUNC(sub_83052350);
PPC_FUNC_IMPL(__imp__sub_83052350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15404
	ctx.r3.s64 = r11.s64 + 15404;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052360"))) PPC_WEAK_FUNC(sub_83052360);
PPC_FUNC_IMPL(__imp__sub_83052360) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,11648
	r11.s64 = r11.s64 + 11648;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830929f8
	sub_830929F8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305239c
	if (cr0.eq) goto loc_8305239C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305239C:
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

__attribute__((alias("__imp__sub_830523B8"))) PPC_WEAK_FUNC(sub_830523B8);
PPC_FUNC_IMPL(__imp__sub_830523B8) {
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
	// li r31,0
	r31.s64 = 0;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi r29,0
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x83052400
	if (!cr0.gt) goto loc_83052400;
loc_830523E0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fda6b8
	sub_82FDA6B8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x830523e0
	if (cr6.lt) goto loc_830523E0;
loc_83052400:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83052408"))) PPC_WEAK_FUNC(sub_83052408);
PPC_FUNC_IMPL(__imp__sub_83052408) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83092af0
	sub_83092AF0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,12024
	r11.s64 = r11.s64 + 12024;
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

__attribute__((alias("__imp__sub_83052460"))) PPC_WEAK_FUNC(sub_83052460);
PPC_FUNC_IMPL(__imp__sub_83052460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x83092af0
	sub_83092AF0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r11,r11,12024
	r11.s64 = r11.s64 + 12024;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83093e90
	sub_83093E90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830524B4"))) PPC_WEAK_FUNC(sub_830524B4);
PPC_FUNC_IMPL(__imp__sub_830524B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x830929f8
	sub_830929F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830524E8"))) PPC_WEAK_FUNC(sub_830524E8);
PPC_FUNC_IMPL(__imp__sub_830524E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83052544
	if (cr0.eq) goto loc_83052544;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83052460
	sub_83052460(ctx, base);
	// b 0x83052548
	goto loc_83052548;
loc_83052544:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83052548:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83052550"))) PPC_WEAK_FUNC(sub_83052550);
PPC_FUNC_IMPL(__imp__sub_83052550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052580"))) PPC_WEAK_FUNC(sub_83052580);
PPC_FUNC_IMPL(__imp__sub_83052580) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x830525f0
	if (cr0.gt) goto loc_830525F0;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,12224
	ctx.r4.s64 = r11.s64 + 12224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8301db48
	sub_8301DB48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7640
	ctx.r4.s64 = r11.s64 + -7640;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830525F0:
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

__attribute__((alias("__imp__sub_83052608"))) PPC_WEAK_FUNC(sub_83052608);
PPC_FUNC_IMPL(__imp__sub_83052608) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8309be28
	sub_8309BE28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83052618"))) PPC_WEAK_FUNC(sub_83052618);
PPC_FUNC_IMPL(__imp__sub_83052618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305265c
	if (cr0.eq) goto loc_8305265C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83052408
	sub_83052408(ctx, base);
	// b 0x83052660
	goto loc_83052660;
loc_8305265C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83052660:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83052678"))) PPC_WEAK_FUNC(sub_83052678);
PPC_FUNC_IMPL(__imp__sub_83052678) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830526A8"))) PPC_WEAK_FUNC(sub_830526A8);
PPC_FUNC_IMPL(__imp__sub_830526A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15412
	ctx.r3.s64 = r11.s64 + 15412;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830526B8"))) PPC_WEAK_FUNC(sub_830526B8);
PPC_FUNC_IMPL(__imp__sub_830526B8) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,12024
	r11.s64 = r11.s64 + 12024;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830929f8
	sub_830929F8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830526f4
	if (cr0.eq) goto loc_830526F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830526F4:
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

__attribute__((alias("__imp__sub_83052710"))) PPC_WEAK_FUNC(sub_83052710);
PPC_FUNC_IMPL(__imp__sub_83052710) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8309a958
	sub_8309A958(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,12392
	r11.s64 = r11.s64 + 12392;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stb r8,62(r31)
	PPC_STORE_U8(r31.u32 + 62, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_83052788"))) PPC_WEAK_FUNC(sub_83052788);
PPC_FUNC_IMPL(__imp__sub_83052788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x8309a958
	sub_8309A958(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,12392
	r11.s64 = r11.s64 + 12392;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,100(r30)
	PPC_STORE_U32(r30.u32 + 100, ctx.r10.u32);
	// bl 0x830967f8
	sub_830967F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830527E8"))) PPC_WEAK_FUNC(sub_830527E8);
PPC_FUNC_IMPL(__imp__sub_830527E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x8309a8f0
	sub_8309A8F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052818"))) PPC_WEAK_FUNC(sub_83052818);
PPC_FUNC_IMPL(__imp__sub_83052818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8309c3c0
	sub_8309C3C0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8309c3c0
	sub_8309C3C0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8309c5a0
	sub_8309C5A0(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8309c5a0
	sub_8309C5A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8305288C"))) PPC_WEAK_FUNC(sub_8305288C);
PPC_FUNC_IMPL(__imp__sub_8305288C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8309c5a0
	sub_8309C5A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830528B4"))) PPC_WEAK_FUNC(sub_830528B4);
PPC_FUNC_IMPL(__imp__sub_830528B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8309c5a0
	sub_8309C5A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830528E8"))) PPC_WEAK_FUNC(sub_830528E8);
PPC_FUNC_IMPL(__imp__sub_830528E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83052944
	if (cr0.eq) goto loc_83052944;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83052788
	sub_83052788(ctx, base);
	// b 0x83052948
	goto loc_83052948;
loc_83052944:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83052948:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83052950"))) PPC_WEAK_FUNC(sub_83052950);
PPC_FUNC_IMPL(__imp__sub_83052950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052988"))) PPC_WEAK_FUNC(sub_83052988);
PPC_FUNC_IMPL(__imp__sub_83052988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b24
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,-7844
	ctx.r4.s64 = r11.s64 + -7844;
	// stw r28,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r30.u32);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83052a34
	if (cr0.eq) goto loc_83052A34;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fdb910
	sub_82FDB910(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x83052a24
	if (cr6.gt) goto loc_83052A24;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,191
	ctx.r6.s64 = 191;
	// li r5,265
	ctx.r5.s64 = 265;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83052A24:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// stw r3,96(r27)
	PPC_STORE_U32(r27.u32 + 96, ctx.r3.u32);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// b 0x83052aac
	goto loc_83052AAC;
loc_83052A34:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-7820
	ctx.r4.s64 = r11.s64 + -7820;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83052ab8
	if (cr0.eq) goto loc_83052AB8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fdb910
	sub_82FDB910(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83052aa0
	if (!cr6.lt) goto loc_83052AA0;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,284
	ctx.r5.s64 = 284;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83052AA0:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// stw r3,100(r27)
	PPC_STORE_U32(r27.u32 + 100, ctx.r3.u32);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
loc_83052AAC:
	// stw r11,16(r27)
	PPC_STORE_U32(r27.u32 + 16, r11.u32);
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x831b0b74
	return;
loc_83052AB8:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,171
	ctx.r6.s64 = 171;
	// li r5,294
	ctx.r5.s64 = 294;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83052AFC"))) PPC_WEAK_FUNC(sub_83052AFC);
PPC_FUNC_IMPL(__imp__sub_83052AFC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-304
	r31.s64 = r12.s64 + -304;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// lwz r11,348(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,189
	ctx.r6.s64 = 189;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83052B54"))) PPC_WEAK_FUNC(sub_83052B54);
PPC_FUNC_IMPL(__imp__sub_83052B54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-304
	r31.s64 = r12.s64 + -304;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// lwz r11,348(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,190
	ctx.r6.s64 = 190;
	// li r5,279
	ctx.r5.s64 = 279;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83052BA8"))) PPC_WEAK_FUNC(sub_83052BA8);
PPC_FUNC_IMPL(__imp__sub_83052BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm. r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83052bdc
	if (cr0.eq) goto loc_83052BDC;
	// rlwinm. r8,r10,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83052bdc
	if (!cr0.eq) goto loc_83052BDC;
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// ori r7,r10,512
	ctx.r7.u64 = ctx.r10.u64 | 512;
	// stw r8,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
loc_83052BDC:
	// rlwinm. r9,r9,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// ori r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 1024;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052C08"))) PPC_WEAK_FUNC(sub_83052C08);
PPC_FUNC_IMPL(__imp__sub_83052C08) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83052cb0
	if (cr0.eq) goto loc_83052CB0;
	// rlwinm. r11,r11,0,22,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83052cb0
	if (cr0.eq) goto loc_83052CB0;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x83052cb0
	if (!cr6.gt) goto loc_83052CB0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// li r6,199
	ctx.r6.s64 = 199;
	// li r5,344
	ctx.r5.s64 = 344;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83052CB0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
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

__attribute__((alias("__imp__sub_83052CC8"))) PPC_WEAK_FUNC(sub_83052CC8);
PPC_FUNC_IMPL(__imp__sub_83052CC8) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r30,28(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83052fa0
	if (cr0.eq) goto loc_83052FA0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// rlwinm. r10,r9,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83052e0c
	if (cr0.eq) goto loc_83052E0C;
	// rlwinm. r10,r8,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83052d80
	if (cr0.eq) goto loc_83052D80;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// lwz r7,96(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// ble cr6,0x83052d80
	if (!cr6.gt) goto loc_83052D80;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// li r6,220
	ctx.r6.s64 = 220;
	// li r5,376
	ctx.r5.s64 = 376;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83052D80:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83052e0c
	if (cr6.eq) goto loc_83052E0C;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm. r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83052e0c
	if (cr0.eq) goto loc_83052E0C;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x83052e0c
	if (cr6.eq) goto loc_83052E0C;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,227
	ctx.r6.s64 = 227;
	// li r5,391
	ctx.r5.s64 = 391;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83052E0C:
	// rlwinm. r10,r9,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83052fa0
	if (cr0.eq) goto loc_83052FA0;
	// rlwinm. r10,r8,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83052e94
	if (cr0.eq) goto loc_83052E94;
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// ble cr6,0x83052e94
	if (!cr6.gt) goto loc_83052E94;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,222
	ctx.r6.s64 = 222;
	// li r5,409
	ctx.r5.s64 = 409;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83052E94:
	// rlwinm. r9,r8,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83052f14
	if (cr0.eq) goto loc_83052F14;
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// ble cr6,0x83052f14
	if (!cr6.gt) goto loc_83052F14;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,221
	ctx.r6.s64 = 221;
	// li r5,424
	ctx.r5.s64 = 424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83052F14:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83052fa0
	if (cr6.eq) goto loc_83052FA0;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83052fa0
	if (cr0.eq) goto loc_83052FA0;
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x83052fa0
	if (cr6.eq) goto loc_83052FA0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,228
	ctx.r6.s64 = 228;
	// li r5,440
	ctx.r5.s64 = 440;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83052FA0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
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

__attribute__((alias("__imp__sub_83052FB8"))) PPC_WEAK_FUNC(sub_83052FB8);
PPC_FUNC_IMPL(__imp__sub_83052FB8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,28(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x8309c638
	sub_8309C638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83052FD0"))) PPC_WEAK_FUNC(sub_83052FD0);
PPC_FUNC_IMPL(__imp__sub_83052FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83053014
	if (cr0.eq) goto loc_83053014;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8309c3c0
	sub_8309C3C0(ctx, base);
	// b 0x83053018
	goto loc_83053018;
loc_83053014:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83053018:
	// stw r3,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83053024"))) PPC_WEAK_FUNC(sub_83053024);
PPC_FUNC_IMPL(__imp__sub_83053024) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053060"))) PPC_WEAK_FUNC(sub_83053060);
PPC_FUNC_IMPL(__imp__sub_83053060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830530a4
	if (cr0.eq) goto loc_830530A4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8309c3c0
	sub_8309C3C0(ctx, base);
	// b 0x830530a8
	goto loc_830530A8;
loc_830530A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830530A8:
	// stw r3,76(r30)
	PPC_STORE_U32(r30.u32 + 76, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830530B4"))) PPC_WEAK_FUNC(sub_830530B4);
PPC_FUNC_IMPL(__imp__sub_830530B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830530F0"))) PPC_WEAK_FUNC(sub_830530F0);
PPC_FUNC_IMPL(__imp__sub_830530F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83053134
	if (cr0.eq) goto loc_83053134;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8309c3c0
	sub_8309C3C0(ctx, base);
	// b 0x83053138
	goto loc_83053138;
loc_83053134:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83053138:
	// stw r3,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83053144"))) PPC_WEAK_FUNC(sub_83053144);
PPC_FUNC_IMPL(__imp__sub_83053144) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053180"))) PPC_WEAK_FUNC(sub_83053180);
PPC_FUNC_IMPL(__imp__sub_83053180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830531c4
	if (cr0.eq) goto loc_830531C4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8309c3c0
	sub_8309C3C0(ctx, base);
	// b 0x830531c8
	goto loc_830531C8;
loc_830531C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830531C8:
	// stw r3,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830531D4"))) PPC_WEAK_FUNC(sub_830531D4);
PPC_FUNC_IMPL(__imp__sub_830531D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053210"))) PPC_WEAK_FUNC(sub_83053210);
PPC_FUNC_IMPL(__imp__sub_83053210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bne cr6,0x83053240
	if (!cr6.eq) goto loc_83053240;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_83053240:
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83053270
	if (cr0.eq) goto loc_83053270;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83053270:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83018468
	sub_83018468(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x830532b8
	if (cr6.eq) goto loc_830532B8;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x830532b8
	if (cr6.eq) goto loc_830532B8;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x830532b8
	if (cr6.eq) goto loc_830532B8;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne cr6,0x830532b0
	if (!cr6.eq) goto loc_830532B0;
	// bl 0x8309c788
	sub_8309C788(ctx, base);
	// b 0x830532d0
	goto loc_830532D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830532d0
	goto loc_830532D0;
loc_830532B0:
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// b 0x830532d0
	goto loc_830532D0;
loc_830532B8:
	// addi r11,r3,-7
	r11.s64 = ctx.r3.s64 + -7;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x8309ce88
	sub_8309CE88(ctx, base);
loc_830532D0:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830532E0"))) PPC_WEAK_FUNC(sub_830532E0);
PPC_FUNC_IMPL(__imp__sub_830532E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31995
	ctx.r3.s64 = -2096824320;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,12968
	ctx.r3.s64 = ctx.r3.s64 + 12968;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83053300"))) PPC_WEAK_FUNC(sub_83053300);
PPC_FUNC_IMPL(__imp__sub_83053300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83053344
	if (cr0.eq) goto loc_83053344;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83052710
	sub_83052710(ctx, base);
	// b 0x83053348
	goto loc_83053348;
loc_83053344:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83053348:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83053360"))) PPC_WEAK_FUNC(sub_83053360);
PPC_FUNC_IMPL(__imp__sub_83053360) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053390"))) PPC_WEAK_FUNC(sub_83053390);
PPC_FUNC_IMPL(__imp__sub_83053390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15420
	ctx.r3.s64 = r11.s64 + 15420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830533A0"))) PPC_WEAK_FUNC(sub_830533A0);
PPC_FUNC_IMPL(__imp__sub_830533A0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lha r11,0(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 0));
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830533d8
	if (cr0.eq) goto loc_830533D8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
loc_830533D8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8309ad70
	sub_8309AD70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lha r11,0(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 0));
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83053410
	if (cr0.eq) goto loc_83053410;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// b 0x83053424
	goto loc_83053424;
loc_83053410:
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// addi r4,r30,100
	ctx.r4.s64 = r30.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
loc_83053424:
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

__attribute__((alias("__imp__sub_83053440"))) PPC_WEAK_FUNC(sub_83053440);
PPC_FUNC_IMPL(__imp__sub_83053440) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,12392
	r11.s64 = r11.s64 + 12392;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8309a8f0
	sub_8309A8F0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305347c
	if (cr0.eq) goto loc_8305347C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305347C:
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

__attribute__((alias("__imp__sub_830534A0"))) PPC_WEAK_FUNC(sub_830534A0);
PPC_FUNC_IMPL(__imp__sub_830534A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b14
	// addi r31,r1,-736
	r31.s64 = ctx.r1.s64 + -736;
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r30,756(r31)
	PPC_STORE_U32(r31.u32 + 756, r30.u32);
	// stw r27,788(r31)
	PPC_STORE_U32(r31.u32 + 788, r27.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830534f0
	if (cr0.eq) goto loc_830534F0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830534F0:
	// lwz r23,16(r30)
	r23.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305359c
	if (cr0.eq) goto loc_8305359C;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83053548
	if (!cr0.eq) goto loc_83053548;
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83053540
	if (cr0.eq) goto loc_83053540;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r11,-5408
	ctx.r5.s64 = r11.s64 + -5408;
	// bl 0x83092310
	sub_83092310(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83053544
	goto loc_83053544;
loc_83053540:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83053544:
	// stw r3,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r3.u32);
loc_83053548:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x83092938
	sub_83092938(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305359c
	if (!cr0.eq) goto loc_8305359C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,238
	ctx.r6.s64 = 238;
	// li r5,559
	ctx.r5.s64 = 559;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x8301db48
	sub_8301DB48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// addi r4,r11,-7640
	ctx.r4.s64 = r11.s64 + -7640;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305359C:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830538cc
	if (!cr0.eq) goto loc_830538CC;
	// li r24,0
	r24.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8309c3c0
	sub_8309C3C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// addi r28,r31,112
	r28.s64 = r31.s64 + 112;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83053668
	if (cr0.eq) goto loc_83053668;
	// lwz r26,8(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r29,0
	r29.s64 = 0;
loc_830535D4:
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// bge cr6,0x8305361c
	if (!cr6.lt) goto loc_8305361C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8305361c
	if (cr6.eq) goto loc_8305361C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x830535d4
	goto loc_830535D4;
loc_8305361C:
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// bne cr6,0x83053668
	if (!cr6.eq) goto loc_83053668;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,244
	ctx.r6.s64 = 244;
	// li r5,583
	ctx.r5.s64 = 583;
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// bl 0x8301db48
	sub_8301DB48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// addi r4,r11,-7640
	ctx.r4.s64 = r11.s64 + -7640;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83053668:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8309a9a0
	sub_8309A9A0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// rlwinm. r11,r23,0,21,21
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83053724
	if (cr0.eq) goto loc_83053724;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x83053724
	if (!cr6.gt) goto loc_83053724;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,512
	ctx.r4.s64 = r31.s64 + 512;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,368
	ctx.r4.s64 = r31.s64 + 368;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// addi r9,r31,368
	ctx.r9.s64 = r31.s64 + 368;
	// addi r8,r31,512
	ctx.r8.s64 = r31.s64 + 512;
	// li r6,246
	ctx.r6.s64 = 246;
	// li r5,601
	ctx.r5.s64 = 601;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83053724:
	// rlwinm. r11,r23,0,22,22
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83053868
	if (cr0.eq) goto loc_83053868;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x830537cc
	if (!cr6.gt) goto loc_830537CC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,368
	ctx.r4.s64 = r31.s64 + 368;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,512
	ctx.r4.s64 = r31.s64 + 512;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// addi r9,r31,512
	ctx.r9.s64 = r31.s64 + 512;
	// addi r8,r31,368
	ctx.r8.s64 = r31.s64 + 368;
	// li r6,245
	ctx.r6.s64 = 245;
	// li r5,618
	ctx.r5.s64 = 618;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830537CC:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x83053868
	if (!cr6.gt) goto loc_83053868;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,368
	ctx.r4.s64 = r31.s64 + 368;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,512
	ctx.r4.s64 = r31.s64 + 512;
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// addi r9,r31,512
	ctx.r9.s64 = r31.s64 + 512;
	// addi r8,r31,368
	ctx.r8.s64 = r31.s64 + 368;
	// li r6,245
	ctx.r6.s64 = 245;
	// li r5,639
	ctx.r5.s64 = 639;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83053868:
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8309c5a0
	sub_8309C5A0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83053880
	goto loc_83053880;
	// lwz r27,788(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 788);
	// lwz r24,96(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_83053880:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x830538cc
	if (cr6.eq) goto loc_830538CC;
	// stw r24,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r24.u32);
	// stw r27,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r27.u32);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,299
	ctx.r6.s64 = 299;
	// li r5,650
	ctx.r5.s64 = 650;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830538CC:
	// addi r1,r31,736
	ctx.r1.s64 = r31.s64 + 736;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_830538DC"))) PPC_WEAK_FUNC(sub_830538DC);
PPC_FUNC_IMPL(__imp__sub_830538DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-736
	r31.s64 = r12.s64 + -736;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,299
	ctx.r6.s64 = 299;
	// li r5,549
	ctx.r5.s64 = 549;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// lwz r11,788(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 788);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8301db48
	sub_8301DB48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// addi r4,r11,-7640
	ctx.r4.s64 = r11.s64 + -7640;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83053938"))) PPC_WEAK_FUNC(sub_83053938);
PPC_FUNC_IMPL(__imp__sub_83053938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-736
	r31.s64 = r12.s64 + -736;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r4,788(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 788);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// lis r3,-31995
	ctx.r3.s64 = -2096824320;
	// addi r3,r3,14456
	ctx.r3.s64 = ctx.r3.s64 + 14456;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83053974"))) PPC_WEAK_FUNC(sub_83053974);
PPC_FUNC_IMPL(__imp__sub_83053974) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-736
	r31.s64 = r12.s64 + -736;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,756(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 756);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830539A4"))) PPC_WEAK_FUNC(sub_830539A4);
PPC_FUNC_IMPL(__imp__sub_830539A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-736
	r31.s64 = r12.s64 + -736;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8309c5a0
	sub_8309C5A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830539CC"))) PPC_WEAK_FUNC(sub_830539CC);
PPC_FUNC_IMPL(__imp__sub_830539CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-736
	r31.s64 = r12.s64 + -736;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fdb1a0
	sub_82FDB1A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053A00"))) PPC_WEAK_FUNC(sub_83053A00);
PPC_FUNC_IMPL(__imp__sub_83053A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b20
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,92(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// stw r29,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r29.u32);
	// stw r26,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r26.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83053b94
	if (cr0.eq) goto loc_83053B94;
	// lwz r28,28(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r27,8(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x83053a98
	if (cr0.eq) goto loc_83053A98;
	// li r30,0
	r30.s64 = 0;
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
loc_83053A4C:
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// bge cr6,0x83053a98
	if (!cr6.lt) goto loc_83053A98;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// b 0x83053a4c
	goto loc_83053A4C;
loc_83053A98:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x83053ae0
	if (!cr6.gt) goto loc_83053AE0;
loc_83053AA4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// blt cr6,0x83053aa4
	if (cr6.lt) goto loc_83053AA4;
loc_83053AE0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// beq 0x83053b20
	if (cr0.eq) goto loc_83053B20;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// addi r10,r11,2232
	ctx.r10.s64 = r11.s64 + 2232;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x83053b24
	goto loc_83053B24;
loc_83053B20:
	// li r11,0
	r11.s64 = 0;
loc_83053B24:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// stw r11,88(r29)
	PPC_STORE_U32(r29.u32 + 88, r11.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// stb r10,68(r29)
	PPC_STORE_U8(r29.u32 + 68, ctx.r10.u8);
	// ble cr6,0x83053b94
	if (!cr6.gt) goto loc_83053B94;
loc_83053B3C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// beq 0x83053b78
	if (cr0.eq) goto loc_83053B78;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x8309c3c0
	sub_8309C3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83053b7c
	goto loc_83053B7C;
loc_83053B78:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83053B7C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// bl 0x830511f0
	sub_830511F0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// blt cr6,0x83053b3c
	if (cr6.lt) goto loc_83053B3C;
loc_83053B94:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83053BA4"))) PPC_WEAK_FUNC(sub_83053BA4);
PPC_FUNC_IMPL(__imp__sub_83053BA4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r30,220(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,12688
	ctx.r4.s64 = r11.s64 + 12688;
	// li r6,181
	ctx.r6.s64 = 181;
	// li r5,501
	ctx.r5.s64 = 501;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83053C04"))) PPC_WEAK_FUNC(sub_83053C04);
PPC_FUNC_IMPL(__imp__sub_83053C04) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053C30"))) PPC_WEAK_FUNC(sub_83053C30);
PPC_FUNC_IMPL(__imp__sub_83053C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053C60"))) PPC_WEAK_FUNC(sub_83053C60);
PPC_FUNC_IMPL(__imp__sub_83053C60) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r7,26
	ctx.r7.s64 = 26;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x830492f0
	sub_830492F0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,14256
	r11.s64 = r11.s64 + 14256;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r10,10(r31)
	PPC_STORE_U16(r31.u32 + 10, ctx.r10.u16);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stb r9,60(r31)
	PPC_STORE_U8(r31.u32 + 60, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83053CC8"))) PPC_WEAK_FUNC(sub_83053CC8);
PPC_FUNC_IMPL(__imp__sub_83053CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83053d0c
	if (cr0.eq) goto loc_83053D0C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83053c60
	sub_83053C60(ctx, base);
	// b 0x83053d10
	goto loc_83053D10;
loc_83053D0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83053D10:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83053D28"))) PPC_WEAK_FUNC(sub_83053D28);
PPC_FUNC_IMPL(__imp__sub_83053D28) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053D58"))) PPC_WEAK_FUNC(sub_83053D58);
PPC_FUNC_IMPL(__imp__sub_83053D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15428
	ctx.r3.s64 = r11.s64 + 15428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053D68"))) PPC_WEAK_FUNC(sub_83053D68);
PPC_FUNC_IMPL(__imp__sub_83053D68) {
	PPC_FUNC_PROLOGUE();
	// b 0x83049a98
	sub_83049A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053D70"))) PPC_WEAK_FUNC(sub_83053D70);
PPC_FUNC_IMPL(__imp__sub_83053D70) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,14256
	r11.s64 = r11.s64 + 14256;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x83049e28
	sub_83049E28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83053dac
	if (cr0.eq) goto loc_83053DAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83053DAC:
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

__attribute__((alias("__imp__sub_83053DC8"))) PPC_WEAK_FUNC(sub_83053DC8);
PPC_FUNC_IMPL(__imp__sub_83053DC8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83053df8
	if (cr6.eq) goto loc_83053DF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83015ab0
	sub_83015AB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83053DF8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83053e18
	if (cr6.eq) goto loc_83053E18;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83053E18:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r4,r11,14360
	ctx.r4.s64 = r11.s64 + 14360;
	// li r6,301
	ctx.r6.s64 = 301;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83053E48"))) PPC_WEAK_FUNC(sub_83053E48);
PPC_FUNC_IMPL(__imp__sub_83053E48) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r7,23
	ctx.r7.s64 = 23;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83092af0
	sub_83092AF0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,14496
	r11.s64 = r11.s64 + 14496;
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

__attribute__((alias("__imp__sub_83053EA0"))) PPC_WEAK_FUNC(sub_83053EA0);
PPC_FUNC_IMPL(__imp__sub_83053EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,23
	ctx.r7.s64 = 23;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x83092af0
	sub_83092AF0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r11,r11,14496
	r11.s64 = r11.s64 + 14496;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83093e90
	sub_83093E90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83053EF4"))) PPC_WEAK_FUNC(sub_83053EF4);
PPC_FUNC_IMPL(__imp__sub_83053EF4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x830929f8
	sub_830929F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053F28"))) PPC_WEAK_FUNC(sub_83053F28);
PPC_FUNC_IMPL(__imp__sub_83053F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83053f84
	if (cr0.eq) goto loc_83053F84;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83053ea0
	sub_83053EA0(ctx, base);
	// b 0x83053f88
	goto loc_83053F88;
loc_83053F84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83053F88:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83053F90"))) PPC_WEAK_FUNC(sub_83053F90);
PPC_FUNC_IMPL(__imp__sub_83053F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053FC0"))) PPC_WEAK_FUNC(sub_83053FC0);
PPC_FUNC_IMPL(__imp__sub_83053FC0) {
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
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fdaf00
	sub_82FDAF00(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305402c
	if (!cr0.eq) goto loc_8305402C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,14696
	ctx.r4.s64 = r11.s64 + 14696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8301db48
	sub_8301DB48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7640
	ctx.r4.s64 = r11.s64 + -7640;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305402C:
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

__attribute__((alias("__imp__sub_83054050"))) PPC_WEAK_FUNC(sub_83054050);
PPC_FUNC_IMPL(__imp__sub_83054050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83054094
	if (cr0.eq) goto loc_83054094;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83053e48
	sub_83053E48(ctx, base);
	// b 0x83054098
	goto loc_83054098;
loc_83054094:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83054098:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_830540B0"))) PPC_WEAK_FUNC(sub_830540B0);
PPC_FUNC_IMPL(__imp__sub_830540B0) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830540E0"))) PPC_WEAK_FUNC(sub_830540E0);
PPC_FUNC_IMPL(__imp__sub_830540E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15436
	ctx.r3.s64 = r11.s64 + 15436;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830540F0"))) PPC_WEAK_FUNC(sub_830540F0);
PPC_FUNC_IMPL(__imp__sub_830540F0) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,14496
	r11.s64 = r11.s64 + 14496;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830929f8
	sub_830929F8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305412c
	if (cr0.eq) goto loc_8305412C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8305412C:
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

__attribute__((alias("__imp__sub_83054148"))) PPC_WEAK_FUNC(sub_83054148);
PPC_FUNC_IMPL(__imp__sub_83054148) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83092af0
	sub_83092AF0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,14856
	r11.s64 = r11.s64 + 14856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r10,10(r31)
	PPC_STORE_U16(r31.u32 + 10, ctx.r10.u16);
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

__attribute__((alias("__imp__sub_830541A8"))) PPC_WEAK_FUNC(sub_830541A8);
PPC_FUNC_IMPL(__imp__sub_830541A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x83092af0
	sub_83092AF0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,14856
	r11.s64 = r11.s64 + 14856;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r10,10(r30)
	PPC_STORE_U16(r30.u32 + 10, ctx.r10.u16);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83093e90
	sub_83093E90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83054204"))) PPC_WEAK_FUNC(sub_83054204);
PPC_FUNC_IMPL(__imp__sub_83054204) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x830929f8
	sub_830929F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054230"))) PPC_WEAK_FUNC(sub_83054230);
PPC_FUNC_IMPL(__imp__sub_83054230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32234
	r11.s64 = -2112487424;
	// addi r11,r11,14856
	r11.s64 = r11.s64 + 14856;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x830929f8
	sub_830929F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83054248"))) PPC_WEAK_FUNC(sub_83054248);
PPC_FUNC_IMPL(__imp__sub_83054248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830542a4
	if (cr0.eq) goto loc_830542A4;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x830541a8
	sub_830541A8(ctx, base);
	// b 0x830542a8
	goto loc_830542A8;
loc_830542A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830542A8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830542B0"))) PPC_WEAK_FUNC(sub_830542B0);
PPC_FUNC_IMPL(__imp__sub_830542B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830542E0"))) PPC_WEAK_FUNC(sub_830542E0);
PPC_FUNC_IMPL(__imp__sub_830542E0) {
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
	// bl 0x83092af0
	sub_83092AF0(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,14856
	r11.s64 = r11.s64 + 14856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r10,10(r31)
	PPC_STORE_U16(r31.u32 + 10, ctx.r10.u16);
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

__attribute__((alias("__imp__sub_83054328"))) PPC_WEAK_FUNC(sub_83054328);
PPC_FUNC_IMPL(__imp__sub_83054328) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-8176
	ctx.r4.s64 = r11.s64 + -8176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305440c
	if (cr0.eq) goto loc_8305440C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-6228
	ctx.r4.s64 = r11.s64 + -6228;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305437c
	if (cr0.eq) goto loc_8305437C;
	// li r11,0
	r11.s64 = 0;
	// b 0x830543b8
	goto loc_830543B8;
loc_8305437C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-6188
	ctx.r4.s64 = r11.s64 + -6188;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305439c
	if (cr0.eq) goto loc_8305439C;
	// li r11,1
	r11.s64 = 1;
	// b 0x830543b8
	goto loc_830543B8;
loc_8305439C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-6208
	ctx.r4.s64 = r11.s64 + -6208;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830543d0
	if (cr0.eq) goto loc_830543D0;
	// li r11,2
	r11.s64 = 2;
loc_830543B8:
	// sth r11,10(r28)
	PPC_STORE_U16(r28.u32 + 10, r11.u16);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
loc_830543D0:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,15056
	ctx.r4.s64 = r11.s64 + 15056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,182
	ctx.r6.s64 = 182;
	// li r5,183
	ctx.r5.s64 = 183;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305440C:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,15056
	ctx.r4.s64 = r11.s64 + 15056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,171
	ctx.r6.s64 = 171;
	// li r5,193
	ctx.r5.s64 = 193;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83054448"))) PPC_WEAK_FUNC(sub_83054448);
PPC_FUNC_IMPL(__imp__sub_83054448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm. r11,r11,0,17,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm. r9,r11,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lhz r10,10(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054480"))) PPC_WEAK_FUNC(sub_83054480);
PPC_FUNC_IMPL(__imp__sub_83054480) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830545b0
	if (cr0.eq) goto loc_830545B0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lhz r30,10(r31)
	r30.u64 = PPC_LOAD_U16(r31.u32 + 10);
	// lhz r4,10(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// rlwinm. r11,r11,0,17,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830545b0
	if (cr0.eq) goto loc_830545B0;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm. r11,r11,0,17,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830545b0
	if (cr0.eq) goto loc_830545B0;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x83054508
	if (!cr6.eq) goto loc_83054508;
	// extsh. r11,r30
	r11.s64 = r30.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830544dc
	if (cr0.eq) goto loc_830544DC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83054508
	if (!cr6.eq) goto loc_83054508;
loc_830544DC:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r4,r11,15056
	ctx.r4.s64 = r11.s64 + 15056;
	// li r6,183
	ctx.r6.s64 = 183;
	// li r5,231
	ctx.r5.s64 = 231;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8304a9b8
	sub_8304A9B8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83054508:
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x83054544
	if (!cr6.eq) goto loc_83054544;
	// extsh. r11,r30
	r11.s64 = r30.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83054544
	if (!cr0.eq) goto loc_83054544;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r4,r11,15056
	ctx.r4.s64 = r11.s64 + 15056;
	// li r6,184
	ctx.r6.s64 = 184;
	// li r5,235
	ctx.r5.s64 = 235;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8304a9b8
	sub_8304A9B8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83054544:
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm. r11,r11,0,17,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830545b0
	if (cr0.eq) goto loc_830545B0;
	// extsh r11,r30
	r11.s64 = r30.s16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// beq cr6,0x830545b0
	if (cr6.eq) goto loc_830545B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83049360
	sub_83049360(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83049360
	sub_83049360(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r4,r11,15056
	ctx.r4.s64 = r11.s64 + 15056;
	// li r6,232
	ctx.r6.s64 = 232;
	// li r5,244
	ctx.r5.s64 = 244;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x83049f68
	sub_83049F68(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7416
	ctx.r4.s64 = r11.s64 + -7416;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830545B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830545B8"))) PPC_WEAK_FUNC(sub_830545B8);
PPC_FUNC_IMPL(__imp__sub_830545B8) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,17,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305468c
	if (cr0.eq) goto loc_8305468C;
	// lha r11,10(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 10));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83054638
	if (!cr6.eq) goto loc_83054638;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fda5b0
	sub_82FDA5B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305468c
	if (!cr0.eq) goto loc_8305468C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,15056
	ctx.r4.s64 = r11.s64 + 15056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,251
	ctx.r6.s64 = 251;
	// li r5,261
	ctx.r5.s64 = 261;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8301db48
	sub_8301DB48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7640
	ctx.r4.s64 = r11.s64 + -7640;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83054638:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8305468c
	if (!cr6.eq) goto loc_8305468C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fda5f8
	sub_82FDA5F8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8305468c
	if (!cr0.eq) goto loc_8305468C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,15056
	ctx.r4.s64 = r11.s64 + 15056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,252
	ctx.r6.s64 = 252;
	// li r5,266
	ctx.r5.s64 = 266;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8301db48
	sub_8301DB48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7640
	ctx.r4.s64 = r11.s64 + -7640;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8305468C:
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

__attribute__((alias("__imp__sub_830546B0"))) PPC_WEAK_FUNC(sub_830546B0);
PPC_FUNC_IMPL(__imp__sub_830546B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830546f4
	if (cr0.eq) goto loc_830546F4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83054148
	sub_83054148(ctx, base);
	// b 0x830546f8
	goto loc_830546F8;
loc_830546F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830546F8:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83054710"))) PPC_WEAK_FUNC(sub_83054710);
PPC_FUNC_IMPL(__imp__sub_83054710) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054740"))) PPC_WEAK_FUNC(sub_83054740);
PPC_FUNC_IMPL(__imp__sub_83054740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15444
	ctx.r3.s64 = r11.s64 + 15444;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054750"))) PPC_WEAK_FUNC(sub_83054750);
PPC_FUNC_IMPL(__imp__sub_83054750) {
	PPC_FUNC_PROLOGUE();
	// b 0x83092e30
	sub_83092E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83054758"))) PPC_WEAK_FUNC(sub_83054758);
PPC_FUNC_IMPL(__imp__sub_83054758) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,14856
	r11.s64 = r11.s64 + 14856;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830929f8
	sub_830929F8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83054794
	if (cr0.eq) goto loc_83054794;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83054794:
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

__attribute__((alias("__imp__sub_830547B0"))) PPC_WEAK_FUNC(sub_830547B0);
PPC_FUNC_IMPL(__imp__sub_830547B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-3652
	r11.s64 = r11.s64 + -3652;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830547C0"))) PPC_WEAK_FUNC(sub_830547C0);
PPC_FUNC_IMPL(__imp__sub_830547C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830547e4
	if (!cr6.eq) goto loc_830547E4;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_830547E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830547F0"))) PPC_WEAK_FUNC(sub_830547F0);
PPC_FUNC_IMPL(__imp__sub_830547F0) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83054840
	if (cr0.eq) goto loc_83054840;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83054840
	if (cr6.gt) goto loc_83054840;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83054840:
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r6,30
	ctx.r6.s64 = 30;
	// addi r4,r10,13768
	ctx.r4.s64 = ctx.r10.s64 + 13768;
	// li r5,401
	ctx.r5.s64 = 401;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fe9148
	sub_82FE9148(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8184
	ctx.r4.s64 = r11.s64 + -8184;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83054870"))) PPC_WEAK_FUNC(sub_83054870);
PPC_FUNC_IMPL(__imp__sub_83054870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83054890
	if (cr0.eq) goto loc_83054890;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_83054890:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054898"))) PPC_WEAK_FUNC(sub_83054898);
PPC_FUNC_IMPL(__imp__sub_83054898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830548B8"))) PPC_WEAK_FUNC(sub_830548B8);
PPC_FUNC_IMPL(__imp__sub_830548B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83054900
	if (!cr6.eq) goto loc_83054900;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r4,r11,-17060
	ctx.r4.s64 = r11.s64 + -17060;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fd9010
	sub_82FD9010(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8844
	ctx.r4.s64 = r11.s64 + -8844;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83054900:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83054954
	if (!cr6.gt) goto loc_83054954;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83054934:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83054934
	if (cr6.lt) goto loc_83054934;
loc_83054954:
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

__attribute__((alias("__imp__sub_83054968"))) PPC_WEAK_FUNC(sub_83054968);
PPC_FUNC_IMPL(__imp__sub_83054968) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82fd9f48
	sub_82FD9F48(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x830549cc
	if (!cr6.gt) goto loc_830549CC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,66
	ctx.r6.s64 = 66;
	// addi r4,r11,13768
	ctx.r4.s64 = r11.s64 + 13768;
	// li r5,304
	ctx.r5.s64 = 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830549CC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x830549f8
	goto loc_830549F8;
loc_830549DC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83054a0c
	if (!cr0.eq) goto loc_83054A0C;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_830549F8:
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x830549dc
	if (!cr0.eq) goto loc_830549DC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83054A04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
loc_83054A0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x83054a04
	goto loc_83054A04;
}

__attribute__((alias("__imp__sub_83054A18"))) PPC_WEAK_FUNC(sub_83054A18);
PPC_FUNC_IMPL(__imp__sub_83054A18) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001818
	sub_83001818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83054a84
	if (cr0.eq) goto loc_83054A84;
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x83054a84
	if (!cr6.gt) goto loc_83054A84;
loc_83054A5C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x83054a5c
	if (cr6.lt) goto loc_83054A5C;
loc_83054A84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83054A90"))) PPC_WEAK_FUNC(sub_83054A90);
PPC_FUNC_IMPL(__imp__sub_83054A90) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001818
	sub_83001818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83054afc
	if (cr0.eq) goto loc_83054AFC;
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x83054afc
	if (!cr6.gt) goto loc_83054AFC;
loc_83054AD4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x83054ad4
	if (cr6.lt) goto loc_83054AD4;
loc_83054AFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83054B08"))) PPC_WEAK_FUNC(sub_83054B08);
PPC_FUNC_IMPL(__imp__sub_83054B08) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001818
	sub_83001818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83054b78
	if (cr0.eq) goto loc_83054B78;
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x83054b78
	if (!cr6.gt) goto loc_83054B78;
loc_83054B4C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83001a80
	sub_83001A80(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x83054b4c
	if (cr6.lt) goto loc_83054B4C;
loc_83054B78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83054B80"))) PPC_WEAK_FUNC(sub_83054B80);
PPC_FUNC_IMPL(__imp__sub_83054B80) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001818
	sub_83001818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83054be8
	if (cr0.eq) goto loc_83054BE8;
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x83054be8
	if (!cr6.gt) goto loc_83054BE8;
loc_83054BC4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x83054bc4
	if (cr6.lt) goto loc_83054BC4;
loc_83054BE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83054BF0"))) PPC_WEAK_FUNC(sub_83054BF0);
PPC_FUNC_IMPL(__imp__sub_83054BF0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001818
	sub_83001818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83054c58
	if (cr0.eq) goto loc_83054C58;
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x83054c58
	if (!cr6.gt) goto loc_83054C58;
loc_83054C34:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830496b8
	sub_830496B8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x83054c34
	if (cr6.lt) goto loc_83054C34;
loc_83054C58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83054C60"))) PPC_WEAK_FUNC(sub_83054C60);
PPC_FUNC_IMPL(__imp__sub_83054C60) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001818
	sub_83001818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83054cc8
	if (cr0.eq) goto loc_83054CC8;
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x83054cc8
	if (!cr6.gt) goto loc_83054CC8;
loc_83054CA4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a12c0
	sub_830A12C0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x83054ca4
	if (cr6.lt) goto loc_83054CA4;
loc_83054CC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83054CD0"))) PPC_WEAK_FUNC(sub_83054CD0);
PPC_FUNC_IMPL(__imp__sub_83054CD0) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// bl 0x830273e0
	sub_830273E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83054d38
	if (cr0.eq) goto loc_83054D38;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// addi r4,r11,13768
	ctx.r4.s64 = r11.s64 + 13768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,65
	ctx.r6.s64 = 65;
	// li r5,250
	ctx.r5.s64 = 250;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8301f6f0
	sub_8301F6F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-8844
	ctx.r4.s64 = r11.s64 + -8844;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83054D38:
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83054d6c
	if (cr0.eq) goto loc_83054D6C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x83054d70
	goto loc_83054D70;
loc_83054D6C:
	// li r11,0
	r11.s64 = 0;
loc_83054D70:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83054e08
	if (!cr6.eq) goto loc_83054E08;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfd f0,-18048(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -18048);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r29,96(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
loc_83054E08:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stwx r28,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r28.u32);
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83054E30"))) PPC_WEAK_FUNC(sub_83054E30);
PPC_FUNC_IMPL(__imp__sub_83054E30) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x83054e6c
	if (!cr0.eq) goto loc_83054E6C;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x83054e70
	if (cr6.eq) goto loc_83054E70;
loc_83054E6C:
	// li r11,1
	r11.s64 = 1;
loc_83054E70:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83054ea4
	if (!cr0.eq) goto loc_83054EA4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r6,30
	ctx.r6.s64 = 30;
	// addi r4,r11,13712
	ctx.r4.s64 = r11.s64 + 13712;
	// li r5,523
	ctx.r5.s64 = 523;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fe9148
	sub_82FE9148(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8184
	ctx.r4.s64 = r11.s64 + -8184;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83054EA4:
	// bl 0x830151e8
	sub_830151E8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83054EC8"))) PPC_WEAK_FUNC(sub_83054EC8);
PPC_FUNC_IMPL(__imp__sub_83054EC8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x83054efc
	if (cr6.lt) goto loc_83054EFC;
	// bl 0x83070c40
	sub_83070C40(ctx, base);
loc_83054EFC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x83054f4c
	if (cr0.eq) goto loc_83054F4C;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83054f40
	if (cr0.eq) goto loc_83054F40;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83054f40
	if (cr0.eq) goto loc_83054F40;
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
loc_83054F40:
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// b 0x83054fa0
	goto loc_83054FA0;
loc_83054F4C:
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83054f84
	if (cr0.eq) goto loc_83054F84;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x83054f88
	goto loc_83054F88;
loc_83054F84:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83054F88:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_83054FA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83054FB0"))) PPC_WEAK_FUNC(sub_83054FB0);
PPC_FUNC_IMPL(__imp__sub_83054FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r6,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r6.u32);
	// stb r5,4(r30)
	PPC_STORE_U8(r30.u32 + 4, ctx.r5.u8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r4,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r4.u32);
	// stw r4,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r4.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// bl 0x82ffe010
	sub_82FFE010(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305500c
	if (cr0.eq) goto loc_8305500C;
	// bl 0x83017920
	sub_83017920(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8305500C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8305501C"))) PPC_WEAK_FUNC(sub_8305501C);
PPC_FUNC_IMPL(__imp__sub_8305501C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055058"))) PPC_WEAK_FUNC(sub_83055058);
PPC_FUNC_IMPL(__imp__sub_83055058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r6,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r6.u32);
	// stb r5,4(r30)
	PPC_STORE_U8(r30.u32 + 4, ctx.r5.u8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r4,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r4.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// bl 0x830548b8
	sub_830548B8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830550ac
	if (cr0.eq) goto loc_830550AC;
	// bl 0x83017920
	sub_83017920(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_830550AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830550BC"))) PPC_WEAK_FUNC(sub_830550BC);
PPC_FUNC_IMPL(__imp__sub_830550BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830550F0"))) PPC_WEAK_FUNC(sub_830550F0);
PPC_FUNC_IMPL(__imp__sub_830550F0) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// bl 0x83054968
	sub_83054968(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83055158
	if (cr0.eq) goto loc_83055158;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r4,r11,13768
	ctx.r4.s64 = r11.s64 + 13768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,65
	ctx.r6.s64 = 65;
	// li r5,250
	ctx.r5.s64 = 250;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8301f6f0
	sub_8301F6F0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-8844
	ctx.r4.s64 = r11.s64 + -8844;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83055158:
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305518c
	if (cr0.eq) goto loc_8305518C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x83055190
	goto loc_83055190;
loc_8305518C:
	// li r11,0
	r11.s64 = 0;
loc_83055190:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83055228
	if (!cr6.eq) goto loc_83055228;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfd f0,-18048(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -18048);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r29,96(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
loc_83055228:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stwx r28,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r28.u32);
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83055250"))) PPC_WEAK_FUNC(sub_83055250);
PPC_FUNC_IMPL(__imp__sub_83055250) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830552a8
	if (!cr0.eq) goto loc_830552A8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r6,30
	ctx.r6.s64 = 30;
	// addi r4,r11,-13408
	ctx.r4.s64 = r11.s64 + -13408;
	// li r5,663
	ctx.r5.s64 = 663;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fe9148
	sub_82FE9148(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8184
	ctx.r4.s64 = r11.s64 + -8184;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830552A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x830026c8
	sub_830026C8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
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

__attribute__((alias("__imp__sub_830552D8"))) PPC_WEAK_FUNC(sub_830552D8);
PPC_FUNC_IMPL(__imp__sub_830552D8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r5,4(r30)
	PPC_STORE_U8(r30.u32 + 4, ctx.r5.u8);
	// addi r11,r11,15304
	r11.s64 = r11.s64 + 15304;
	// stw r4,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r4.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r7,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r7.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// bne cr6,0x83055358
	if (!cr6.eq) goto loc_83055358;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r4,r11,-17060
	ctx.r4.s64 = r11.s64 + -17060;
	// li r5,440
	ctx.r5.s64 = 440;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fe9310
	sub_82FE9310(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-8244
	ctx.r4.s64 = r11.s64 + -8244;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83055358:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fea740
	sub_82FEA740(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_8305537C"))) PPC_WEAK_FUNC(sub_8305537C);
PPC_FUNC_IMPL(__imp__sub_8305537C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x830547b0
	sub_830547B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830553B0"))) PPC_WEAK_FUNC(sub_830553B0);
PPC_FUNC_IMPL(__imp__sub_830553B0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830554ac
	if (cr0.eq) goto loc_830554AC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83055448
	if (!cr6.eq) goto loc_83055448;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x830553fc
	if (!cr6.lt) goto loc_830553FC;
	// li r28,16
	r28.s64 = 16;
loc_830553FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// beq 0x83055440
	if (cr0.eq) goto loc_83055440;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// b 0x83055444
	goto loc_83055444;
loc_83055440:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83055444:
	// stw r3,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r3.u32);
loc_83055448:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830554ac
	if (!cr6.gt) goto loc_830554AC;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r28,r11,15516
	r28.s64 = r11.s64 + 15516;
loc_83055480:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83055480
	if (cr6.lt) goto loc_83055480;
loc_830554AC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830554B4"))) PPC_WEAK_FUNC(sub_830554B4);
PPC_FUNC_IMPL(__imp__sub_830554B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830554E8"))) PPC_WEAK_FUNC(sub_830554E8);
PPC_FUNC_IMPL(__imp__sub_830554E8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830555d8
	if (cr0.eq) goto loc_830555D8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83055580
	if (!cr6.eq) goto loc_83055580;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bge cr6,0x83055534
	if (!cr6.lt) goto loc_83055534;
	// li r27,16
	r27.s64 = 16;
loc_83055534:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// beq 0x83055578
	if (cr0.eq) goto loc_83055578;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// b 0x8305557c
	goto loc_8305557C;
loc_83055578:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305557C:
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
loc_83055580:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830555d8
	if (!cr6.gt) goto loc_830555D8;
loc_830555B0:
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x830555b0
	if (cr6.lt) goto loc_830555B0;
loc_830555D8:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830555E0"))) PPC_WEAK_FUNC(sub_830555E0);
PPC_FUNC_IMPL(__imp__sub_830555E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055618"))) PPC_WEAK_FUNC(sub_83055618);
PPC_FUNC_IMPL(__imp__sub_83055618) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83055724
	if (cr0.eq) goto loc_83055724;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830556c0
	if (!cr6.eq) goto loc_830556C0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x83055664
	if (!cr6.lt) goto loc_83055664;
	// li r28,16
	r28.s64 = 16;
loc_83055664:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// beq 0x830556b8
	if (cr0.eq) goto loc_830556B8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fdad88
	sub_82FDAD88(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,32376
	r11.s64 = r11.s64 + 32376;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x830556bc
	goto loc_830556BC;
loc_830556B8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830556BC:
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_830556C0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83055724
	if (!cr6.gt) goto loc_83055724;
loc_830556F0:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83001ca8
	sub_83001CA8(ctx, base);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x830556f0
	if (cr6.lt) goto loc_830556F0;
loc_83055724:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8305572C"))) PPC_WEAK_FUNC(sub_8305572C);
PPC_FUNC_IMPL(__imp__sub_8305572C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055760"))) PPC_WEAK_FUNC(sub_83055760);
PPC_FUNC_IMPL(__imp__sub_83055760) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83055868
	if (cr0.eq) goto loc_83055868;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83055808
	if (!cr6.eq) goto loc_83055808;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x830557ac
	if (!cr6.lt) goto loc_830557AC;
	// li r28,16
	r28.s64 = 16;
loc_830557AC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// beq 0x83055800
	if (cr0.eq) goto loc_83055800;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x83055804
	goto loc_83055804;
loc_83055800:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83055804:
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_83055808:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83055868
	if (!cr6.gt) goto loc_83055868;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r28,r11,15648
	r28.s64 = r11.s64 + 15648;
loc_83055840:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x83055840
	if (cr6.lt) goto loc_83055840;
loc_83055868:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83055870"))) PPC_WEAK_FUNC(sub_83055870);
PPC_FUNC_IMPL(__imp__sub_83055870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830558A8"))) PPC_WEAK_FUNC(sub_830558A8);
PPC_FUNC_IMPL(__imp__sub_830558A8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830559b0
	if (cr0.eq) goto loc_830559B0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83055950
	if (!cr6.eq) goto loc_83055950;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x830558f4
	if (!cr6.lt) goto loc_830558F4;
	// li r28,16
	r28.s64 = 16;
loc_830558F4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// beq 0x83055948
	if (cr0.eq) goto loc_83055948;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x8305594c
	goto loc_8305594C;
loc_83055948:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8305594C:
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_83055950:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830559b0
	if (!cr6.gt) goto loc_830559B0;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r28,r11,15516
	r28.s64 = r11.s64 + 15516;
loc_83055988:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x83055988
	if (cr6.lt) goto loc_83055988;
loc_830559B0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830559B8"))) PPC_WEAK_FUNC(sub_830559B8);
PPC_FUNC_IMPL(__imp__sub_830559B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830559F0"))) PPC_WEAK_FUNC(sub_830559F0);
PPC_FUNC_IMPL(__imp__sub_830559F0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83055af8
	if (cr0.eq) goto loc_83055AF8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83055a98
	if (!cr6.eq) goto loc_83055A98;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x83055a3c
	if (!cr6.lt) goto loc_83055A3C;
	// li r28,16
	r28.s64 = 16;
loc_83055A3C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// beq 0x83055a90
	if (cr0.eq) goto loc_83055A90;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x83055a94
	goto loc_83055A94;
loc_83055A90:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83055A94:
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_83055A98:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83055af8
	if (!cr6.gt) goto loc_83055AF8;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r28,r11,15856
	r28.s64 = r11.s64 + 15856;
loc_83055AD0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x83055ad0
	if (cr6.lt) goto loc_83055AD0;
loc_83055AF8:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83055B00"))) PPC_WEAK_FUNC(sub_83055B00);
PPC_FUNC_IMPL(__imp__sub_83055B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055B38"))) PPC_WEAK_FUNC(sub_83055B38);
PPC_FUNC_IMPL(__imp__sub_83055B38) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83055c34
	if (cr0.eq) goto loc_83055C34;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83055be0
	if (!cr6.eq) goto loc_83055BE0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x83055b84
	if (!cr6.lt) goto loc_83055B84;
	// li r28,16
	r28.s64 = 16;
loc_83055B84:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// beq 0x83055bd8
	if (cr0.eq) goto loc_83055BD8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x83055bdc
	goto loc_83055BDC;
loc_83055BD8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83055BDC:
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_83055BE0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83055c34
	if (!cr6.gt) goto loc_83055C34;
loc_83055C10:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83049780
	sub_83049780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x83055c10
	if (cr6.lt) goto loc_83055C10;
loc_83055C34:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83055C3C"))) PPC_WEAK_FUNC(sub_83055C3C);
PPC_FUNC_IMPL(__imp__sub_83055C3C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055C70"))) PPC_WEAK_FUNC(sub_83055C70);
PPC_FUNC_IMPL(__imp__sub_83055C70) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83055d6c
	if (cr0.eq) goto loc_83055D6C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83055d18
	if (!cr6.eq) goto loc_83055D18;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x83055cbc
	if (!cr6.lt) goto loc_83055CBC;
	// li r28,16
	r28.s64 = 16;
loc_83055CBC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// beq 0x83055d10
	if (cr0.eq) goto loc_83055D10;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x83055d14
	goto loc_83055D14;
loc_83055D10:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83055D14:
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_83055D18:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83055d6c
	if (!cr6.gt) goto loc_83055D6C;
loc_83055D48:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a1340
	sub_830A1340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x83055d48
	if (cr6.lt) goto loc_83055D48;
loc_83055D6C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83055D74"))) PPC_WEAK_FUNC(sub_83055D74);
PPC_FUNC_IMPL(__imp__sub_83055D74) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055DA8"))) PPC_WEAK_FUNC(sub_83055DA8);
PPC_FUNC_IMPL(__imp__sub_83055DA8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83055eac
	if (cr0.eq) goto loc_83055EAC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83055e54
	if (!cr6.eq) goto loc_83055E54;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x83055df8
	if (!cr6.lt) goto loc_83055DF8;
	// li r28,16
	r28.s64 = 16;
loc_83055DF8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// beq 0x83055e4c
	if (cr0.eq) goto loc_83055E4C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x83055e50
	goto loc_83055E50;
loc_83055E4C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83055E50:
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_83055E54:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83055eac
	if (!cr6.gt) goto loc_83055EAC;
loc_83055E84:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830a16a8
	sub_830A16A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x83055e84
	if (cr6.lt) goto loc_83055E84;
loc_83055EAC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83055EB4"))) PPC_WEAK_FUNC(sub_83055EB4);
PPC_FUNC_IMPL(__imp__sub_83055EB4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055EE8"))) PPC_WEAK_FUNC(sub_83055EE8);
PPC_FUNC_IMPL(__imp__sub_83055EE8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83055ff0
	if (cr0.eq) goto loc_83055FF0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83055f90
	if (!cr6.eq) goto loc_83055F90;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x83055f34
	if (!cr6.lt) goto loc_83055F34;
	// li r28,16
	r28.s64 = 16;
loc_83055F34:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// beq 0x83055f88
	if (cr0.eq) goto loc_83055F88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x83055f8c
	goto loc_83055F8C;
loc_83055F88:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83055F8C:
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_83055F90:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83055ff0
	if (!cr6.gt) goto loc_83055FF0;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r28,r11,15896
	r28.s64 = r11.s64 + 15896;
loc_83055FC8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x83055fc8
	if (cr6.lt) goto loc_83055FC8;
loc_83055FF0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83055FF8"))) PPC_WEAK_FUNC(sub_83055FF8);
PPC_FUNC_IMPL(__imp__sub_83055FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056030"))) PPC_WEAK_FUNC(sub_83056030);
PPC_FUNC_IMPL(__imp__sub_83056030) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83056138
	if (cr0.eq) goto loc_83056138;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830560d8
	if (!cr6.eq) goto loc_830560D8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x8305607c
	if (!cr6.lt) goto loc_8305607C;
	// li r28,16
	r28.s64 = 16;
loc_8305607C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// beq 0x830560d0
	if (cr0.eq) goto loc_830560D0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x830560d4
	goto loc_830560D4;
loc_830560D0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830560D4:
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_830560D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83056138
	if (!cr6.gt) goto loc_83056138;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r28,r11,15888
	r28.s64 = r11.s64 + 15888;
loc_83056110:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x83056110
	if (cr6.lt) goto loc_83056110;
loc_83056138:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83056140"))) PPC_WEAK_FUNC(sub_83056140);
PPC_FUNC_IMPL(__imp__sub_83056140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056178"))) PPC_WEAK_FUNC(sub_83056178);
PPC_FUNC_IMPL(__imp__sub_83056178) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83056270
	if (cr0.eq) goto loc_83056270;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8305620c
	if (!cr6.eq) goto loc_8305620C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// beq 0x83056204
	if (cr0.eq) goto loc_83056204;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83054fb0
	sub_83054FB0(ctx, base);
	// b 0x83056208
	goto loc_83056208;
loc_83056204:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83056208:
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
loc_8305620C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83056270
	if (!cr6.gt) goto loc_83056270;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r27,r11,15292
	r27.s64 = r11.s64 + 15292;
loc_83056244:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83056244
	if (cr6.lt) goto loc_83056244;
loc_83056270:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83056278"))) PPC_WEAK_FUNC(sub_83056278);
PPC_FUNC_IMPL(__imp__sub_83056278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830562B0"))) PPC_WEAK_FUNC(sub_830562B0);
PPC_FUNC_IMPL(__imp__sub_830562B0) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830563ac
	if (cr0.eq) goto loc_830563AC;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83056344
	if (!cr6.eq) goto loc_83056344;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// beq 0x8305633c
	if (cr0.eq) goto loc_8305633C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83054fb0
	sub_83054FB0(ctx, base);
	// b 0x83056340
	goto loc_83056340;
loc_8305633C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83056340:
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
loc_83056344:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830563ac
	if (!cr6.gt) goto loc_830563AC;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r27,r11,15648
	r27.s64 = r11.s64 + 15648;
loc_8305637C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,40(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8305637c
	if (cr6.lt) goto loc_8305637C;
loc_830563AC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830563B4"))) PPC_WEAK_FUNC(sub_830563B4);
PPC_FUNC_IMPL(__imp__sub_830563B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830563E8"))) PPC_WEAK_FUNC(sub_830563E8);
PPC_FUNC_IMPL(__imp__sub_830563E8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830564f4
	if (cr0.eq) goto loc_830564F4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8305647c
	if (!cr6.eq) goto loc_8305647C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// beq 0x83056474
	if (cr0.eq) goto loc_83056474;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83054fb0
	sub_83054FB0(ctx, base);
	// b 0x83056478
	goto loc_83056478;
loc_83056474:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83056478:
	// stw r3,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r3.u32);
loc_8305647C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830564f4
	if (!cr6.gt) goto loc_830564F4;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r26,r11,15848
	r26.s64 = r11.s64 + 15848;
loc_830564B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x830564b4
	if (cr6.lt) goto loc_830564B4;
loc_830564F4:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830564FC"))) PPC_WEAK_FUNC(sub_830564FC);
PPC_FUNC_IMPL(__imp__sub_830564FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056530"))) PPC_WEAK_FUNC(sub_83056530);
PPC_FUNC_IMPL(__imp__sub_83056530) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83056628
	if (cr0.eq) goto loc_83056628;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830565c4
	if (!cr6.eq) goto loc_830565C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// beq 0x830565bc
	if (cr0.eq) goto loc_830565BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83054fb0
	sub_83054FB0(ctx, base);
	// b 0x830565c0
	goto loc_830565C0;
loc_830565BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830565C0:
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
loc_830565C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83056628
	if (!cr6.gt) goto loc_83056628;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r27,r11,15148
	r27.s64 = r11.s64 + 15148;
loc_830565FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r4,36(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x830565fc
	if (cr6.lt) goto loc_830565FC;
loc_83056628:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83056630"))) PPC_WEAK_FUNC(sub_83056630);
PPC_FUNC_IMPL(__imp__sub_83056630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056668"))) PPC_WEAK_FUNC(sub_83056668);
PPC_FUNC_IMPL(__imp__sub_83056668) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305678c
	if (cr0.eq) goto loc_8305678C;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830566fc
	if (!cr6.eq) goto loc_830566FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// beq 0x830566f4
	if (cr0.eq) goto loc_830566F4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83054fb0
	sub_83054FB0(ctx, base);
	// b 0x830566f8
	goto loc_830566F8;
loc_830566F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830566F8:
	// stw r3,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r3.u32);
loc_830566FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8305678c
	if (!cr6.gt) goto loc_8305678C;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r26,r11,15864
	r26.s64 = r11.s64 + 15864;
loc_83056734:
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000178
	sub_83000178(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83056734
	if (cr6.lt) goto loc_83056734;
loc_8305678C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83056794"))) PPC_WEAK_FUNC(sub_83056794);
PPC_FUNC_IMPL(__imp__sub_83056794) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830567C8"))) PPC_WEAK_FUNC(sub_830567C8);
PPC_FUNC_IMPL(__imp__sub_830567C8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830568e0
	if (cr0.eq) goto loc_830568E0;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8305685c
	if (!cr6.eq) goto loc_8305685C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// beq 0x83056854
	if (cr0.eq) goto loc_83056854;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83054fb0
	sub_83054FB0(ctx, base);
	// b 0x83056858
	goto loc_83056858;
loc_83056854:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83056858:
	// stw r3,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r3.u32);
loc_8305685C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830568e0
	if (!cr6.gt) goto loc_830568E0;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r26,r11,15872
	r26.s64 = r11.s64 + 15872;
loc_83056894:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000178
	sub_83000178(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83056894
	if (cr6.lt) goto loc_83056894;
loc_830568E0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830568E8"))) PPC_WEAK_FUNC(sub_830568E8);
PPC_FUNC_IMPL(__imp__sub_830568E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056920"))) PPC_WEAK_FUNC(sub_83056920);
PPC_FUNC_IMPL(__imp__sub_83056920) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83056b4c
	if (cr0.eq) goto loc_83056B4C;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// li r20,0
	r20.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830569b8
	if (!cr6.eq) goto loc_830569B8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// beq 0x830569b0
	if (cr0.eq) goto loc_830569B0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83054fb0
	sub_83054FB0(ctx, base);
	// b 0x830569b4
	goto loc_830569B4;
loc_830569B0:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_830569B4:
	// stw r3,0(r21)
	PPC_STORE_U32(r21.u32 + 0, ctx.r3.u32);
loc_830569B8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r20,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r20.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r25,r20
	r25.u64 = r20.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83056b4c
	if (!cr6.gt) goto loc_83056B4C;
loc_830569E4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83049780
	sub_83049780(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r24,52(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 52);
	// lwz r23,48(r22)
	r23.u64 = PPC_LOAD_U32(r22.u32 + 48);
	// cmplwi r24,0
	cr0.compare<uint32_t>(r24.u32, 0, xer);
	// beq 0x83056a30
	if (cr0.eq) goto loc_83056A30;
	// lhz r11,0(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83056a30
	if (cr0.eq) goto loc_83056A30;
	// addi r11,r24,2
	r11.s64 = r24.s64 + 2;
	// b 0x83056a18
	goto loc_83056A18;
loc_83056A14:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_83056A18:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83056a14
	if (!cr0.eq) goto loc_83056A14;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
	// srawi r27,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r27.s64 = r11.s32 >> 1;
	// b 0x83056a34
	goto loc_83056A34;
loc_83056A30:
	// mr r27,r20
	r27.u64 = r20.u64;
loc_83056A34:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x83056a6c
	if (cr6.eq) goto loc_83056A6C;
	// lhz r11,0(r23)
	r11.u64 = PPC_LOAD_U16(r23.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83056a6c
	if (cr0.eq) goto loc_83056A6C;
	// addi r11,r23,2
	r11.s64 = r23.s64 + 2;
	// b 0x83056a54
	goto loc_83056A54;
loc_83056A50:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_83056A54:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83056a50
	if (!cr0.eq) goto loc_83056A50;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// srawi r26,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r26.s64 = r11.s32 >> 1;
	// b 0x83056a70
	goto loc_83056A70;
loc_83056A6C:
	// mr r26,r20
	r26.u64 = r20.u64;
loc_83056A70:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r28,r26,r27
	r28.u64 = r26.u64 + r27.u64;
	// addi r10,r28,2
	ctx.r10.s64 = r28.s64 + 2;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r27,r27,1,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r5,r27,2
	ctx.r5.s64 = r27.s64 + 2;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// add r11,r27,r30
	r11.u64 = r27.u64 + r30.u64;
	// li r10,44
	ctx.r10.s64 = 44;
	// addi r9,r26,1
	ctx.r9.s64 = r26.s64 + 1;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r20,r11,r30
	PPC_STORE_U16(r11.u32 + r30.u32, r20.u16);
	// bl 0x83000190
	sub_83000190(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000178
	sub_83000178(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000178
	sub_83000178(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x830569e4
	if (cr6.lt) goto loc_830569E4;
loc_83056B4C:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_83056B54"))) PPC_WEAK_FUNC(sub_83056B54);
PPC_FUNC_IMPL(__imp__sub_83056B54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056B80"))) PPC_WEAK_FUNC(sub_83056B80);
PPC_FUNC_IMPL(__imp__sub_83056B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fdb1a0
	sub_82FDB1A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056BB0"))) PPC_WEAK_FUNC(sub_83056BB0);
PPC_FUNC_IMPL(__imp__sub_83056BB0) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83056cc0
	if (cr0.eq) goto loc_83056CC0;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83056c44
	if (!cr6.eq) goto loc_83056C44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// beq 0x83056c3c
	if (cr0.eq) goto loc_83056C3C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83054fb0
	sub_83054FB0(ctx, base);
	// b 0x83056c40
	goto loc_83056C40;
loc_83056C3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83056C40:
	// stw r3,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r3.u32);
loc_83056C44:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83056cc0
	if (!cr6.gt) goto loc_83056CC0;
loc_83056C74:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830a1780
	sub_830A1780(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x83056c74
	if (cr6.lt) goto loc_83056C74;
loc_83056CC0:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83056CC8"))) PPC_WEAK_FUNC(sub_83056CC8);
PPC_FUNC_IMPL(__imp__sub_83056CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056D00"))) PPC_WEAK_FUNC(sub_83056D00);
PPC_FUNC_IMPL(__imp__sub_83056D00) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83056e50
	if (cr0.eq) goto loc_83056E50;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83056dd0
	if (!cr6.eq) goto loc_83056DD0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// beq 0x83056dc8
	if (cr0.eq) goto loc_83056DC8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83056da0
	if (cr0.eq) goto loc_83056DA0;
	// bl 0x83007488
	sub_83007488(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83056da4
	goto loc_83056DA4;
loc_83056DA0:
	// mr r29,r25
	r29.u64 = r25.u64;
loc_83056DA4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83043618
	sub_83043618(ctx, base);
	// b 0x83056dcc
	goto loc_83056DCC;
loc_83056DC8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_83056DCC:
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
loc_83056DD0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83056e50
	if (!cr6.gt) goto loc_83056E50;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r27,r11,15156
	r27.s64 = r11.s64 + 15156;
loc_83056E04:
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x830002b0
	sub_830002B0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83056e04
	if (cr6.lt) goto loc_83056E04;
loc_83056E50:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83056E58"))) PPC_WEAK_FUNC(sub_83056E58);
PPC_FUNC_IMPL(__imp__sub_83056E58) {
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
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056E84"))) PPC_WEAK_FUNC(sub_83056E84);
PPC_FUNC_IMPL(__imp__sub_83056E84) {
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
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056EB8"))) PPC_WEAK_FUNC(sub_83056EB8);
PPC_FUNC_IMPL(__imp__sub_83056EB8) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83056fb8
	if (cr0.eq) goto loc_83056FB8;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83056f4c
	if (!cr6.eq) goto loc_83056F4C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// beq 0x83056f44
	if (cr0.eq) goto loc_83056F44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83055058
	sub_83055058(ctx, base);
	// b 0x83056f48
	goto loc_83056F48;
loc_83056F44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83056F48:
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
loc_83056F4C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83056fb8
	if (!cr6.gt) goto loc_83056FB8;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r27,r11,15648
	r27.s64 = r11.s64 + 15648;
loc_83056F84:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,40(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x830436d0
	sub_830436D0(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83056f84
	if (cr6.lt) goto loc_83056F84;
loc_83056FB8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83056FC0"))) PPC_WEAK_FUNC(sub_83056FC0);
PPC_FUNC_IMPL(__imp__sub_83056FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056FF8"))) PPC_WEAK_FUNC(sub_83056FF8);
PPC_FUNC_IMPL(__imp__sub_83056FF8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83057104
	if (cr0.eq) goto loc_83057104;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83057094
	if (!cr6.eq) goto loc_83057094;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// beq 0x8305708c
	if (cr0.eq) goto loc_8305708C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830206b0
	sub_830206B0(ctx, base);
	// b 0x83057090
	goto loc_83057090;
loc_8305708C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83057090:
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
loc_83057094:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83057104
	if (!cr6.gt) goto loc_83057104;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r27,r11,15516
	r27.s64 = r11.s64 + 15516;
loc_830570CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x83020790
	sub_83020790(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x830570cc
	if (cr6.lt) goto loc_830570CC;
loc_83057104:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8305710C"))) PPC_WEAK_FUNC(sub_8305710C);
PPC_FUNC_IMPL(__imp__sub_8305710C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057140"))) PPC_WEAK_FUNC(sub_83057140);
PPC_FUNC_IMPL(__imp__sub_83057140) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83057280
	if (cr0.eq) goto loc_83057280;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830571d8
	if (!cr6.eq) goto loc_830571D8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x8305718c
	if (!cr6.lt) goto loc_8305718C;
	// li r28,16
	r28.s64 = 16;
loc_8305718C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// beq 0x830571d0
	if (cr0.eq) goto loc_830571D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8301fe60
	sub_8301FE60(ctx, base);
	// b 0x830571d4
	goto loc_830571D4;
loc_830571D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830571D4:
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
loc_830571D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83057280
	if (!cr6.gt) goto loc_83057280;
loc_83057208:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x83057248
	if (cr0.eq) goto loc_83057248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8306c7d0
	sub_8306C7D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8305724c
	goto loc_8305724C;
loc_83057248:
	// li r29,0
	r29.s64 = 0;
loc_8305724C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83020538
	sub_83020538(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x83057208
	if (cr6.lt) goto loc_83057208;
loc_83057280:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83057288"))) PPC_WEAK_FUNC(sub_83057288);
PPC_FUNC_IMPL(__imp__sub_83057288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830572B4"))) PPC_WEAK_FUNC(sub_830572B4);
PPC_FUNC_IMPL(__imp__sub_830572B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830572E8"))) PPC_WEAK_FUNC(sub_830572E8);
PPC_FUNC_IMPL(__imp__sub_830572E8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305743c
	if (cr0.eq) goto loc_8305743C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83057384
	if (!cr6.eq) goto loc_83057384;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x83057338
	if (!cr6.lt) goto loc_83057338;
	// li r28,16
	r28.s64 = 16;
loc_83057338:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// beq 0x8305737c
	if (cr0.eq) goto loc_8305737C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301fe60
	sub_8301FE60(ctx, base);
	// b 0x83057380
	goto loc_83057380;
loc_8305737C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_83057380:
	// stw r3,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r3.u32);
loc_83057384:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r28,r26
	r28.u64 = r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8305743c
	if (!cr6.gt) goto loc_8305743C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r27,r11,20984
	r27.s64 = r11.s64 + 20984;
loc_830573B8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x83057404
	if (cr0.eq) goto loc_83057404;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305b878
	sub_8305B878(ctx, base);
	// stb r26,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r26.u8);
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stb r26,41(r30)
	PPC_STORE_U8(r30.u32 + 41, r26.u8);
	// stb r26,42(r30)
	PPC_STORE_U8(r30.u32 + 42, r26.u8);
	// b 0x83057408
	goto loc_83057408;
loc_83057404:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_83057408:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x83054cd0
	sub_83054CD0(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x830573b8
	if (cr6.lt) goto loc_830573B8;
loc_8305743C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83057444"))) PPC_WEAK_FUNC(sub_83057444);
PPC_FUNC_IMPL(__imp__sub_83057444) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057470"))) PPC_WEAK_FUNC(sub_83057470);
PPC_FUNC_IMPL(__imp__sub_83057470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830574A8"))) PPC_WEAK_FUNC(sub_830574A8);
PPC_FUNC_IMPL(__imp__sub_830574A8) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001818
	sub_83001818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830575ac
	if (cr0.eq) goto loc_830575AC;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// addi r10,r10,15376
	ctx.r10.s64 = ctx.r10.s64 + 15376;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
loc_83057504:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8305751c
	if (cr6.eq) goto loc_8305751C;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x83057520
	if (!cr6.gt) goto loc_83057520;
loc_8305751C:
	// li r11,0
	r11.s64 = 0;
loc_83057520:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83057540
	if (cr0.eq) goto loc_83057540;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x830547f0
	sub_830547F0(ctx, base);
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x83057504
	goto loc_83057504;
loc_83057540:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_83057560:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83057578
	if (cr6.eq) goto loc_83057578;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x8305757c
	if (!cr6.gt) goto loc_8305757C;
loc_83057578:
	// li r11,0
	r11.s64 = 0;
loc_8305757C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830575ac
	if (cr0.eq) goto loc_830575AC;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x830547f0
	sub_830547F0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x83057560
	goto loc_83057560;
loc_830575AC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830575B4"))) PPC_WEAK_FUNC(sub_830575B4);
PPC_FUNC_IMPL(__imp__sub_830575B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x830547b0
	sub_830547B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830575E8"))) PPC_WEAK_FUNC(sub_830575E8);
PPC_FUNC_IMPL(__imp__sub_830575E8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83057728
	if (cr0.eq) goto loc_83057728;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83057680
	if (!cr6.eq) goto loc_83057680;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x83057634
	if (!cr6.lt) goto loc_83057634;
	// li r28,16
	r28.s64 = 16;
loc_83057634:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// beq 0x83057678
	if (cr0.eq) goto loc_83057678;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8301fe60
	sub_8301FE60(ctx, base);
	// b 0x8305767c
	goto loc_8305767C;
loc_83057678:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305767C:
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
loc_83057680:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83057728
	if (!cr6.gt) goto loc_83057728;
loc_830576B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x830576f0
	if (cr0.eq) goto loc_830576F0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830a17e8
	sub_830A17E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x830576f4
	goto loc_830576F4;
loc_830576F0:
	// li r29,0
	r29.s64 = 0;
loc_830576F4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x830550f0
	sub_830550F0(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x830576b0
	if (cr6.lt) goto loc_830576B0;
loc_83057728:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83057730"))) PPC_WEAK_FUNC(sub_83057730);
PPC_FUNC_IMPL(__imp__sub_83057730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305775C"))) PPC_WEAK_FUNC(sub_8305775C);
PPC_FUNC_IMPL(__imp__sub_8305775C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057788"))) PPC_WEAK_FUNC(sub_83057788);
PPC_FUNC_IMPL(__imp__sub_83057788) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x830577e4
	if (cr0.eq) goto loc_830577E4;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830577d4
	if (cr0.eq) goto loc_830577D4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830577d4
	if (cr0.eq) goto loc_830577D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_830577D4:
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// b 0x83057830
	goto loc_83057830;
loc_830577E4:
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83057820
	if (cr0.eq) goto loc_83057820;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x83057824
	goto loc_83057824;
loc_83057820:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83057824:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
loc_83057830:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83057838"))) PPC_WEAK_FUNC(sub_83057838);
PPC_FUNC_IMPL(__imp__sub_83057838) {
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
	// li r27,0
	r27.s64 = 0;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x830578c4
	if (!cr6.gt) goto loc_830578C4;
	// li r29,0
	r29.s64 = 0;
loc_8305785C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r31,r11,r29
	r31.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x830578a4
	if (cr0.eq) goto loc_830578A4;
loc_8305786C:
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// lwz r28,4(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83057890
	if (cr0.eq) goto loc_83057890;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83057890
	if (cr0.eq) goto loc_83057890;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_83057890:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8305786c
	if (!cr6.eq) goto loc_8305786C;
loc_830578A4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x8305785c
	if (cr6.lt) goto loc_8305785C;
loc_830578C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830578D8"))) PPC_WEAK_FUNC(sub_830578D8);
PPC_FUNC_IMPL(__imp__sub_830578D8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001818
	sub_83001818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830579f8
	if (cr0.eq) goto loc_830579F8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83015918
	sub_83015918(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_83057928:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8305794c
	if (!cr6.eq) goto loc_8305794C;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x83057950
	if (cr6.eq) goto loc_83057950;
loc_8305794C:
	// li r11,1
	r11.s64 = 1;
loc_83057950:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83057968
	if (cr0.eq) goto loc_83057968;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830159e0
	sub_830159E0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x83057928
	goto loc_83057928;
loc_83057968:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// bl 0x830026c8
	sub_830026C8(ctx, base);
loc_8305798C:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830579b0
	if (!cr6.eq) goto loc_830579B0;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x830579b4
	if (cr6.eq) goto loc_830579B4;
loc_830579B0:
	// li r11,1
	r11.s64 = 1;
loc_830579B4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830579f0
	if (cr0.eq) goto loc_830579F0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83055250
	sub_83055250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x830579e4
	if (cr0.eq) goto loc_830579E4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830579E4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830496b8
	sub_830496B8(ctx, base);
	// b 0x8305798c
	goto loc_8305798C;
loc_830579F0:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83016120
	sub_83016120(ctx, base);
loc_830579F8:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83057A00"))) PPC_WEAK_FUNC(sub_83057A00);
PPC_FUNC_IMPL(__imp__sub_83057A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057A30"))) PPC_WEAK_FUNC(sub_83057A30);
PPC_FUNC_IMPL(__imp__sub_83057A30) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x830018b0
	sub_830018B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83057bd8
	if (cr0.eq) goto loc_83057BD8;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83057ac8
	if (!cr6.eq) goto loc_83057AC8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r4,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x83057ac0
	if (cr0.eq) goto loc_83057AC0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83055058
	sub_83055058(ctx, base);
	// b 0x83057ac4
	goto loc_83057AC4;
loc_83057AC0:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_83057AC4:
	// stw r3,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r3.u32);
loc_83057AC8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x83000ff0
	sub_83000FF0(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r23,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r23.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r25,r23
	r25.u64 = r23.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83057bd8
	if (!cr6.gt) goto loc_83057BD8;
loc_83057AF4:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,100
	ctx.r6.s64 = r31.s64 + 100;
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83001ca8
	sub_83001CA8(ctx, base);
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x830553b0
	sub_830553B0(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r27,r23
	r27.u64 = r23.u64;
	// lwz r26,4(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r26,0
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// ble 0x83057bb4
	if (!cr0.gt) goto loc_83057BB4;
loc_83057B44:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r30,16(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83057b84
	if (cr0.eq) goto loc_83057B84;
	// lwz r11,32(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x83057b94
	if (cr6.eq) goto loc_83057B94;
loc_83057B84:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(r27.s32, r26.s32, xer);
	// blt cr6,0x83057b44
	if (cr6.lt) goto loc_83057B44;
	// b 0x83057bb4
	goto loc_83057BB4;
loc_83057B94:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
loc_83057BB4:
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x83057788
	sub_83057788(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x83057af4
	if (cr6.lt) goto loc_83057AF4;
loc_83057BD8:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83057BE0"))) PPC_WEAK_FUNC(sub_83057BE0);
PPC_FUNC_IMPL(__imp__sub_83057BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057C10"))) PPC_WEAK_FUNC(sub_83057C10);
PPC_FUNC_IMPL(__imp__sub_83057C10) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83057838
	sub_83057838(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83057c60
	if (cr0.eq) goto loc_83057C60;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83057C60:
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

__attribute__((alias("__imp__sub_83057C80"))) PPC_WEAK_FUNC(sub_83057C80);
PPC_FUNC_IMPL(__imp__sub_83057C80) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001818
	sub_83001818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83057da0
	if (cr0.eq) goto loc_83057DA0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83015918
	sub_83015918(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_83057CD0:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83057cf4
	if (!cr6.eq) goto loc_83057CF4;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x83057cf8
	if (cr6.eq) goto loc_83057CF8;
loc_83057CF4:
	// li r11,1
	r11.s64 = 1;
loc_83057CF8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83057d10
	if (cr0.eq) goto loc_83057D10;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830159e0
	sub_830159E0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x83057cd0
	goto loc_83057CD0;
loc_83057D10:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// bl 0x830026c8
	sub_830026C8(ctx, base);
loc_83057D34:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83057d58
	if (!cr6.eq) goto loc_83057D58;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x83057d5c
	if (cr6.eq) goto loc_83057D5C;
loc_83057D58:
	// li r11,1
	r11.s64 = 1;
loc_83057D5C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83057d98
	if (cr0.eq) goto loc_83057D98;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83055250
	sub_83055250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x83057d8c
	if (cr0.eq) goto loc_83057D8C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83057D8C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// b 0x83057d34
	goto loc_83057D34;
loc_83057D98:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83016120
	sub_83016120(ctx, base);
loc_83057DA0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83057DA8"))) PPC_WEAK_FUNC(sub_83057DA8);
PPC_FUNC_IMPL(__imp__sub_83057DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057DD8"))) PPC_WEAK_FUNC(sub_83057DD8);
PPC_FUNC_IMPL(__imp__sub_83057DD8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83001818
	sub_83001818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83057f24
	if (cr0.eq) goto loc_83057F24;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83015918
	sub_83015918(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_83057E28:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83057e4c
	if (!cr6.eq) goto loc_83057E4C;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x83057e50
	if (cr6.eq) goto loc_83057E50;
loc_83057E4C:
	// li r11,1
	r11.s64 = 1;
loc_83057E50:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83057e68
	if (cr0.eq) goto loc_83057E68;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830159e0
	sub_830159E0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x83057e28
	goto loc_83057E28;
loc_83057E68:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// bl 0x830026c8
	sub_830026C8(ctx, base);
loc_83057E8C:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83057eb0
	if (!cr6.eq) goto loc_83057EB0;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x83057eb4
	if (cr6.eq) goto loc_83057EB4;
loc_83057EB0:
	// li r11,1
	r11.s64 = 1;
loc_83057EB4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83057f1c
	if (cr0.eq) goto loc_83057F1C;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83055250
	sub_83055250(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000178
	sub_83000178(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x83057f10
	if (cr0.eq) goto loc_83057F10;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83057F10:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// b 0x83057e8c
	goto loc_83057E8C;
loc_83057F1C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83016120
	sub_83016120(ctx, base);
loc_83057F24:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83057F2C"))) PPC_WEAK_FUNC(sub_83057F2C);
PPC_FUNC_IMPL(__imp__sub_83057F2C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057F60"))) PPC_WEAK_FUNC(sub_83057F60);
PPC_FUNC_IMPL(__imp__sub_83057F60) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001818
	sub_83001818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83058080
	if (cr0.eq) goto loc_83058080;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83015918
	sub_83015918(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_83057FB0:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83057fd4
	if (!cr6.eq) goto loc_83057FD4;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x83057fd8
	if (cr6.eq) goto loc_83057FD8;
loc_83057FD4:
	// li r11,1
	r11.s64 = 1;
loc_83057FD8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83057ff0
	if (cr0.eq) goto loc_83057FF0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830159e0
	sub_830159E0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x83057fb0
	goto loc_83057FB0;
loc_83057FF0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// bl 0x830026c8
	sub_830026C8(ctx, base);
loc_83058014:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83058038
	if (!cr6.eq) goto loc_83058038;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x8305803c
	if (cr6.eq) goto loc_8305803C;
loc_83058038:
	// li r11,1
	r11.s64 = 1;
loc_8305803C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83058078
	if (cr0.eq) goto loc_83058078;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83055250
	sub_83055250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x8305806c
	if (cr0.eq) goto loc_8305806C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8305806C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a1708
	sub_830A1708(ctx, base);
	// b 0x83058014
	goto loc_83058014;
loc_83058078:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83016120
	sub_83016120(ctx, base);
loc_83058080:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83058088"))) PPC_WEAK_FUNC(sub_83058088);
PPC_FUNC_IMPL(__imp__sub_83058088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830580B8"))) PPC_WEAK_FUNC(sub_830580B8);
PPC_FUNC_IMPL(__imp__sub_830580B8) {
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
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83001818
	sub_83001818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83058268
	if (cr0.eq) goto loc_83058268;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x83015918
	sub_83015918(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000190
	sub_83000190(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83070930
	sub_83070930(ctx, base);
loc_8305813C:
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83058160
	if (!cr6.eq) goto loc_83058160;
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x83058164
	if (cr6.eq) goto loc_83058164;
loc_83058160:
	// li r11,1
	r11.s64 = 1;
loc_83058164:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830581ac
	if (cr0.eq) goto loc_830581AC;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x83055250
	sub_83055250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x83000a10
	sub_83000A10(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305813c
	if (cr0.eq) goto loc_8305813C;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// b 0x8305813c
	goto loc_8305813C;
loc_830581AC:
	// lwz r26,100(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x83058230
	if (!cr6.gt) goto loc_83058230;
loc_830581C8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r28,0
	r28.s64 = 0;
	// beq 0x8305820c
	if (cr0.eq) goto loc_8305820C;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8305820C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// blt cr6,0x830581c8
	if (cr6.lt) goto loc_830581C8;
loc_83058230:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x83016120
	sub_83016120(ctx, base);
loc_83058268:
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83058270"))) PPC_WEAK_FUNC(sub_83058270);
PPC_FUNC_IMPL(__imp__sub_83058270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83058298"))) PPC_WEAK_FUNC(sub_83058298);
PPC_FUNC_IMPL(__imp__sub_83058298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83034d68
	sub_83034D68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830582C0"))) PPC_WEAK_FUNC(sub_830582C0);
PPC_FUNC_IMPL(__imp__sub_830582C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x83034d68
	sub_83034D68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830582F0"))) PPC_WEAK_FUNC(sub_830582F0);
PPC_FUNC_IMPL(__imp__sub_830582F0) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001818
	sub_83001818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83058430
	if (cr0.eq) goto loc_83058430;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// li r30,0
	r30.s64 = 0;
	// bl 0x83015d00
	sub_83015D00(ctx, base);
loc_83058340:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83058364
	if (!cr6.eq) goto loc_83058364;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x83058368
	if (cr6.eq) goto loc_83058368;
loc_83058364:
	// li r11,1
	r11.s64 = 1;
loc_83058368:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305838c
	if (cr0.eq) goto loc_8305838C;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83054e30
	sub_83054E30(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x83058340
	goto loc_83058340;
loc_8305838C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// bl 0x830151e8
	sub_830151E8(ctx, base);
loc_830583B0:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830583d4
	if (!cr6.eq) goto loc_830583D4;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x830583d8
	if (cr6.eq) goto loc_830583D8;
loc_830583D4:
	// li r11,1
	r11.s64 = 1;
loc_830583D8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83058428
	if (cr0.eq) goto loc_83058428;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83054e30
	sub_83054E30(ctx, base);
	// addi r7,r31,92
	ctx.r7.s64 = r31.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x83020118
	sub_83020118(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x8305841c
	if (cr0.eq) goto loc_8305841C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8305841C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// b 0x830583b0
	goto loc_830583B0;
loc_83058428:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83016090
	sub_83016090(ctx, base);
loc_83058430:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83058438"))) PPC_WEAK_FUNC(sub_83058438);
PPC_FUNC_IMPL(__imp__sub_83058438) {
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
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83016090
	sub_83016090(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83058468"))) PPC_WEAK_FUNC(sub_83058468);
PPC_FUNC_IMPL(__imp__sub_83058468) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,15304
	r11.s64 = r11.s64 + 15304;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830584b4
	if (cr0.eq) goto loc_830584B4;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x830584b4
	if (cr0.eq) goto loc_830584B4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83057c10
	sub_83057C10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830584B4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-3652
	r11.s64 = r11.s64 + -3652;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830584C8"))) PPC_WEAK_FUNC(sub_830584C8);
PPC_FUNC_IMPL(__imp__sub_830584C8) {
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
	// bl 0x830547b0
	sub_830547B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830584F0"))) PPC_WEAK_FUNC(sub_830584F0);
PPC_FUNC_IMPL(__imp__sub_830584F0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83058468
	sub_83058468(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83058520
	if (cr0.eq) goto loc_83058520;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83058520:
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

__attribute__((alias("__imp__sub_83058548"))) PPC_WEAK_FUNC(sub_83058548);
PPC_FUNC_IMPL(__imp__sub_83058548) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001818
	sub_83001818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83058664
	if (cr0.eq) goto loc_83058664;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// li r30,0
	r30.s64 = 0;
	// bl 0x83048330
	sub_83048330(ctx, base);
loc_83058598:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830585bc
	if (!cr6.eq) goto loc_830585BC;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x830585c0
	if (cr6.eq) goto loc_830585C0;
loc_830585BC:
	// li r11,1
	r11.s64 = 1;
loc_830585C0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830585d8
	if (cr0.eq) goto loc_830585D8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82febf68
	sub_82FEBF68(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x83058598
	goto loc_83058598;
loc_830585D8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83048400
	sub_83048400(ctx, base);
loc_830585EC:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83058610
	if (!cr6.eq) goto loc_83058610;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x83058614
	if (cr6.eq) goto loc_83058614;
loc_83058610:
	// li r11,1
	r11.s64 = 1;
loc_83058614:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8305865c
	if (cr0.eq) goto loc_8305865C;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82febfe8
	sub_82FEBFE8(ctx, base);
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x83058650
	if (cr0.eq) goto loc_83058650;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83058650:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// b 0x830585ec
	goto loc_830585EC;
loc_8305865C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830489f8
	sub_830489F8(ctx, base);
loc_83058664:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8305866C"))) PPC_WEAK_FUNC(sub_8305866C);
PPC_FUNC_IMPL(__imp__sub_8305866C) {
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
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830489f8
	sub_830489F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830586A0"))) PPC_WEAK_FUNC(sub_830586A0);
PPC_FUNC_IMPL(__imp__sub_830586A0) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001818
	sub_83001818(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830587e0
	if (cr0.eq) goto loc_830587E0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// li r30,0
	r30.s64 = 0;
	// bl 0x830552d8
	sub_830552D8(ctx, base);
loc_830586F0:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83058714
	if (!cr6.eq) goto loc_83058714;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x83058718
	if (cr6.eq) goto loc_83058718;
loc_83058714:
	// li r11,1
	r11.s64 = 1;
loc_83058718:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83058730
	if (cr0.eq) goto loc_83058730;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82febf68
	sub_82FEBF68(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x830586f0
	goto loc_830586F0;
loc_83058730:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83048400
	sub_83048400(ctx, base);
loc_83058744:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83058768
	if (!cr6.eq) goto loc_83058768;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x8305876c
	if (cr6.eq) goto loc_8305876C;
loc_83058768:
	// li r11,1
	r11.s64 = 1;
loc_8305876C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830587d8
	if (cr0.eq) goto loc_830587D8;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82febfe8
	sub_82FEBFE8(ctx, base);
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83001a80
	sub_83001A80(ctx, base);
	// lwz r29,84(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83001478
	sub_83001478(ctx, base);
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830587cc
	if (cr0.eq) goto loc_830587CC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830587CC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83054a18
	sub_83054A18(ctx, base);
	// b 0x83058744
	goto loc_83058744;
loc_830587D8:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83058468
	sub_83058468(ctx, base);
loc_830587E0:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830587E8"))) PPC_WEAK_FUNC(sub_830587E8);
PPC_FUNC_IMPL(__imp__sub_830587E8) {
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
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83058468
	sub_83058468(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83058818"))) PPC_WEAK_FUNC(sub_83058818);
PPC_FUNC_IMPL(__imp__sub_83058818) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x83005998
	sub_83005998(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// addi r11,r11,18152
	r11.s64 = r11.s64 + 18152;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82ffd6d0
	sub_82FFD6D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83058864"))) PPC_WEAK_FUNC(sub_83058864);
PPC_FUNC_IMPL(__imp__sub_83058864) {
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
	// bl 0x83006010
	sub_83006010(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83058898"))) PPC_WEAK_FUNC(sub_83058898);
PPC_FUNC_IMPL(__imp__sub_83058898) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,18152
	r11.s64 = r11.s64 + 18152;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x82ffd710
	sub_82FFD710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83006010
	sub_83006010(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_830588EC"))) PPC_WEAK_FUNC(sub_830588EC);
PPC_FUNC_IMPL(__imp__sub_830588EC) {
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
	// bl 0x83006010
	sub_83006010(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83058920"))) PPC_WEAK_FUNC(sub_83058920);
PPC_FUNC_IMPL(__imp__sub_83058920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83058998
	if (!cr0.eq) goto loc_83058998;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83005f08
	sub_83005F08(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_83058998:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830589A0"))) PPC_WEAK_FUNC(sub_830589A0);
PPC_FUNC_IMPL(__imp__sub_830589A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830589C8"))) PPC_WEAK_FUNC(sub_830589C8);
PPC_FUNC_IMPL(__imp__sub_830589C8) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83058a08
	if (cr0.eq) goto loc_83058A08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83058a14
	goto loc_83058A14;
loc_83058A08:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83005aa8
	sub_83005AA8(ctx, base);
loc_83058A14:
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

__attribute__((alias("__imp__sub_83058A30"))) PPC_WEAK_FUNC(sub_83058A30);
PPC_FUNC_IMPL(__imp__sub_83058A30) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83058a7c
	if (cr6.eq) goto loc_83058A7C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x83058a80
	if (cr6.lt) goto loc_83058A80;
loc_83058A7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83058A80:
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

__attribute__((alias("__imp__sub_83058A98"))) PPC_WEAK_FUNC(sub_83058A98);
PPC_FUNC_IMPL(__imp__sub_83058A98) {
	PPC_FUNC_PROLOGUE();
	// b 0x83005ae0
	sub_83005AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83058AA0"))) PPC_WEAK_FUNC(sub_83058AA0);
PPC_FUNC_IMPL(__imp__sub_83058AA0) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83058b04
	if (!cr0.eq) goto loc_83058B04;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83005af8
	sub_83005AF8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
loc_83058B04:
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

__attribute__((alias("__imp__sub_83058B20"))) PPC_WEAK_FUNC(sub_83058B20);
PPC_FUNC_IMPL(__imp__sub_83058B20) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bgt cr6,0x83058b74
	if (cr6.gt) goto loc_83058B74;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83058b90
	goto loc_83058B90;
loc_83058B74:
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r4,r11,r30
	ctx.r4.s64 = r30.s64 - r11.s64;
	// bl 0x83005730
	sub_83005730(ctx, base);
loc_83058B90:
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

__attribute__((alias("__imp__sub_83058BA8"))) PPC_WEAK_FUNC(sub_83058BA8);
PPC_FUNC_IMPL(__imp__sub_83058BA8) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + r11.u64;
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

__attribute__((alias("__imp__sub_83058BF0"))) PPC_WEAK_FUNC(sub_83058BF0);
PPC_FUNC_IMPL(__imp__sub_83058BF0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83058898
	sub_83058898(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83058c20
	if (cr0.eq) goto loc_83058C20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83058C20:
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

__attribute__((alias("__imp__sub_83058C40"))) PPC_WEAK_FUNC(sub_83058C40);
PPC_FUNC_IMPL(__imp__sub_83058C40) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83058ca4
	if (cr6.eq) goto loc_83058CA4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83058ca4
	if (!cr0.eq) goto loc_83058CA4;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83058ca0
	if (cr0.eq) goto loc_83058CA0;
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
loc_83058CA0:
	// stw r31,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r31.u32);
loc_83058CA4:
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

__attribute__((alias("__imp__sub_83058CC0"))) PPC_WEAK_FUNC(sub_83058CC0);
PPC_FUNC_IMPL(__imp__sub_83058CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15452
	ctx.r3.s64 = r11.s64 + 15452;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83058CD0"))) PPC_WEAK_FUNC(sub_83058CD0);
PPC_FUNC_IMPL(__imp__sub_83058CD0) {
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
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lha r11,0(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 0));
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83058d40
	if (cr0.eq) goto loc_83058D40;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x830574a8
	sub_830574A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x830574a8
	sub_830574A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x830574a8
	sub_830574A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// bl 0x83001380
	sub_83001380(ctx, base);
	// b 0x83058d9c
	goto loc_83058D9C;
loc_83058D40:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,109
	ctx.r4.s64 = 109;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x83057140
	sub_83057140(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,109
	ctx.r4.s64 = 109;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x830572e8
	sub_830572E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,109
	ctx.r4.s64 = 109;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x830575e8
	sub_830575E8(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83001600
	sub_83001600(ctx, base);
loc_83058D9C:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_83058DD8"))) PPC_WEAK_FUNC(sub_83058DD8);
PPC_FUNC_IMPL(__imp__sub_83058DD8) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x83058eb0
	if (!cr0.eq) goto loc_83058EB0;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83058e50
	if (cr0.eq) goto loc_83058E50;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83058e54
	goto loc_83058E54;
loc_83058E50:
	// li r29,0
	r29.s64 = 0;
loc_83058E54:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83058e98
	if (!cr6.eq) goto loc_83058E98;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83058e90
	if (cr0.eq) goto loc_83058E90;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8301fe60
	sub_8301FE60(ctx, base);
	// b 0x83058e94
	goto loc_83058E94;
loc_83058E90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83058E94:
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
loc_83058E98:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x83020538
	sub_83020538(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r3.u32);
	// b 0x83058eb4
	goto loc_83058EB4;
loc_83058EB0:
	// li r11,0
	r11.s64 = 0;
loc_83058EB4:
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83058EC4"))) PPC_WEAK_FUNC(sub_83058EC4);
PPC_FUNC_IMPL(__imp__sub_83058EC4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83058EF4"))) PPC_WEAK_FUNC(sub_83058EF4);
PPC_FUNC_IMPL(__imp__sub_83058EF4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83058F30"))) PPC_WEAK_FUNC(sub_83058F30);
PPC_FUNC_IMPL(__imp__sub_83058F30) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83058f88
	if (cr0.eq) goto loc_83058F88;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83058f8c
	goto loc_83058F8C;
loc_83058F88:
	// li r29,0
	r29.s64 = 0;
loc_83058F8C:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83058fe0
	if (cr0.eq) goto loc_83058FE0;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83058fd4
	if (!cr6.eq) goto loc_83058FD4;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83058fcc
	if (cr0.eq) goto loc_83058FCC;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8301fe60
	sub_8301FE60(ctx, base);
	// b 0x83058fd0
	goto loc_83058FD0;
loc_83058FCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83058FD0:
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
loc_83058FD4:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x83058fe8
	goto loc_83058FE8;
loc_83058FE0:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_83058FE8:
	// bl 0x83020538
	sub_83020538(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83058FFC"))) PPC_WEAK_FUNC(sub_83058FFC);
PPC_FUNC_IMPL(__imp__sub_83058FFC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305902C"))) PPC_WEAK_FUNC(sub_8305902C);
PPC_FUNC_IMPL(__imp__sub_8305902C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83059060"))) PPC_WEAK_FUNC(sub_83059060);
PPC_FUNC_IMPL(__imp__sub_83059060) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83022d30
	sub_83022D30(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8305908c
	if (cr0.eq) goto loc_8305908C;
	// bl 0x83022d30
	sub_83022D30(ctx, base);
loc_8305908C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x83022d30
	sub_83022D30(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x83022d30
	sub_83022D30(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r11.u8);
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

__attribute__((alias("__imp__sub_830590B8"))) PPC_WEAK_FUNC(sub_830590B8);
PPC_FUNC_IMPL(__imp__sub_830590B8) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// lwz r30,-15640(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + -15640);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830590ec
	if (cr6.eq) goto loc_830590EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830251c0
	sub_830251C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830590EC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-15640(r31)
	PPC_STORE_U32(r31.u32 + -15640, r11.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-15648
	r31.s64 = r11.s64 + -15648;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83059118
	if (cr6.eq) goto loc_83059118;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ffd710
	sub_82FFD710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83059118:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
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

__attribute__((alias("__imp__sub_83059148"))) PPC_WEAK_FUNC(sub_83059148);
PPC_FUNC_IMPL(__imp__sub_83059148) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r24,r11,-15648
	r24.s64 = r11.s64 + -15648;
	// lbz r11,0(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830593d4
	if (!cr0.eq) goto loc_830593D4;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830591c8
	if (!cr6.eq) goto loc_830591C8;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,-16116(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -16116);
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830591bc
	if (!cr6.eq) goto loc_830591BC;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830591b4
	if (cr0.eq) goto loc_830591B4;
	// bl 0x82ffd6d0
	sub_82FFD6D0(ctx, base);
	// b 0x830591b8
	goto loc_830591B8;
loc_830591B4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_830591B8:
	// stw r3,4(r24)
	PPC_STORE_U32(r24.u32 + 4, ctx.r3.u32);
loc_830591BC:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4);
loc_830591C8:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// lbz r11,0(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830593cc
	if (!cr0.eq) goto loc_830593CC;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r27,-31942
	r27.s64 = -2093350912;
	// beq 0x8305920c
	if (cr0.eq) goto loc_8305920C;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r6,-16120(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + -16120);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8301fe60
	sub_8301FE60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x83059210
	goto loc_83059210;
loc_8305920C:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_83059210:
	// lis r25,-31942
	r25.s64 = -2093350912;
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r11,-15640(r25)
	PPC_STORE_U32(r25.u32 + -15640, r11.u32);
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r29,1
	r29.s64 = 1;
	// addi r28,r11,20984
	r28.s64 = r11.s64 + 20984;
	// beq 0x83059268
	if (cr0.eq) goto loc_83059268;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r6,-16120(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + -16120);
	// li r5,38
	ctx.r5.s64 = 38;
	// addi r4,r11,-27784
	ctx.r4.s64 = r11.s64 + -27784;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305bc18
	sub_8305BC18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r29,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r29.u8);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stb r26,41(r30)
	PPC_STORE_U8(r30.u32 + 41, r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(r30.u32 + 42, r29.u8);
	// b 0x8305926c
	goto loc_8305926C;
loc_83059268:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8305926C:
	// lwz r3,-15640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -15640);
	// bl 0x83054cd0
	sub_83054CD0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x830592b8
	if (cr0.eq) goto loc_830592B8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r6,-16120(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + -16120);
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r4,r11,-27776
	ctx.r4.s64 = r11.s64 + -27776;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305bc18
	sub_8305BC18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r29,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r29.u8);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stb r26,41(r30)
	PPC_STORE_U8(r30.u32 + 41, r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(r30.u32 + 42, r29.u8);
	// b 0x830592bc
	goto loc_830592BC;
loc_830592B8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_830592BC:
	// lwz r3,-15640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -15640);
	// bl 0x83054cd0
	sub_83054CD0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x83059308
	if (cr0.eq) goto loc_83059308;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r6,-16120(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + -16120);
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,-27768
	ctx.r4.s64 = r11.s64 + -27768;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305bc18
	sub_8305BC18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r29,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r29.u8);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stb r26,41(r30)
	PPC_STORE_U8(r30.u32 + 41, r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(r30.u32 + 42, r29.u8);
	// b 0x8305930c
	goto loc_8305930C;
loc_83059308:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8305930C:
	// lwz r3,-15640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -15640);
	// bl 0x83054cd0
	sub_83054CD0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x83059358
	if (cr0.eq) goto loc_83059358;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r6,-16120(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + -16120);
	// li r5,34
	ctx.r5.s64 = 34;
	// addi r4,r11,-27760
	ctx.r4.s64 = r11.s64 + -27760;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305bc18
	sub_8305BC18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r29,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r29.u8);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stb r26,41(r30)
	PPC_STORE_U8(r30.u32 + 41, r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(r30.u32 + 42, r29.u8);
	// b 0x8305935c
	goto loc_8305935C;
loc_83059358:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8305935C:
	// lwz r3,-15640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -15640);
	// bl 0x83054cd0
	sub_83054CD0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x830593a8
	if (cr0.eq) goto loc_830593A8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r6,-16120(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + -16120);
	// li r5,39
	ctx.r5.s64 = 39;
	// addi r4,r11,-27748
	ctx.r4.s64 = r11.s64 + -27748;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8305bc18
	sub_8305BC18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r29,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r29.u8);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stb r26,41(r30)
	PPC_STORE_U8(r30.u32 + 41, r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(r30.u32 + 42, r29.u8);
	// b 0x830593ac
	goto loc_830593AC;
loc_830593A8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_830593AC:
	// lwz r3,-15640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -15640);
	// bl 0x83054cd0
	sub_83054CD0(ctx, base);
	// lis r11,-31994
	r11.s64 = -2096758784;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r4,r11,-28488
	ctx.r4.s64 = r11.s64 + -28488;
	// addi r3,r10,-15636
	ctx.r3.s64 = ctx.r10.s64 + -15636;
	// bl 0x82fffc18
	sub_82FFFC18(ctx, base);
	// stb r29,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r29.u8);
loc_830593CC:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
loc_830593D4:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830593DC"))) PPC_WEAK_FUNC(sub_830593DC);
PPC_FUNC_IMPL(__imp__sub_830593DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83059404"))) PPC_WEAK_FUNC(sub_83059404);
PPC_FUNC_IMPL(__imp__sub_83059404) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305942C"))) PPC_WEAK_FUNC(sub_8305942C);
PPC_FUNC_IMPL(__imp__sub_8305942C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83059454"))) PPC_WEAK_FUNC(sub_83059454);
PPC_FUNC_IMPL(__imp__sub_83059454) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

