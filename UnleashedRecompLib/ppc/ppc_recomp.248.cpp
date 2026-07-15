#include "ppc_recomp_shared.h"

__attribute__((alias("__imp____restvmx_98"))) PPC_WEAK_FUNC(__restvmx_98);
PPC_FUNC_IMPL(__imp____restvmx_98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-480
	r11.s64 = -480;
	// lvx128 v98,r11,r12
	simde_mm_store_si128((simde__m128i*)v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	r11.s64 = -464;
	// lvx128 v99,r11,r12
	simde_mm_store_si128((simde__m128i*)v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	r11.s64 = -448;
	// lvx128 v100,r11,r12
	simde_mm_store_si128((simde__m128i*)v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	r11.s64 = -432;
	// lvx128 v101,r11,r12
	simde_mm_store_si128((simde__m128i*)v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	r11.s64 = -416;
	// lvx128 v102,r11,r12
	simde_mm_store_si128((simde__m128i*)v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	r11.s64 = -400;
	// lvx128 v103,r11,r12
	simde_mm_store_si128((simde__m128i*)v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	r11.s64 = -384;
	// lvx128 v104,r11,r12
	simde_mm_store_si128((simde__m128i*)v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	r11.s64 = -368;
	// lvx128 v105,r11,r12
	simde_mm_store_si128((simde__m128i*)v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	r11.s64 = -352;
	// lvx128 v106,r11,r12
	simde_mm_store_si128((simde__m128i*)v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	r11.s64 = -336;
	// lvx128 v107,r11,r12
	simde_mm_store_si128((simde__m128i*)v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	r11.s64 = -320;
	// lvx128 v108,r11,r12
	simde_mm_store_si128((simde__m128i*)v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	r11.s64 = -304;
	// lvx128 v109,r11,r12
	simde_mm_store_si128((simde__m128i*)v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	r11.s64 = -288;
	// lvx128 v110,r11,r12
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	r11.s64 = -272;
	// lvx128 v111,r11,r12
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	r11.s64 = -256;
	// lvx128 v112,r11,r12
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_99"))) PPC_WEAK_FUNC(__restvmx_99);
PPC_FUNC_IMPL(__imp____restvmx_99) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-464
	r11.s64 = -464;
	// lvx128 v99,r11,r12
	simde_mm_store_si128((simde__m128i*)v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	r11.s64 = -448;
	// lvx128 v100,r11,r12
	simde_mm_store_si128((simde__m128i*)v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	r11.s64 = -432;
	// lvx128 v101,r11,r12
	simde_mm_store_si128((simde__m128i*)v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	r11.s64 = -416;
	// lvx128 v102,r11,r12
	simde_mm_store_si128((simde__m128i*)v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	r11.s64 = -400;
	// lvx128 v103,r11,r12
	simde_mm_store_si128((simde__m128i*)v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	r11.s64 = -384;
	// lvx128 v104,r11,r12
	simde_mm_store_si128((simde__m128i*)v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	r11.s64 = -368;
	// lvx128 v105,r11,r12
	simde_mm_store_si128((simde__m128i*)v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	r11.s64 = -352;
	// lvx128 v106,r11,r12
	simde_mm_store_si128((simde__m128i*)v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	r11.s64 = -336;
	// lvx128 v107,r11,r12
	simde_mm_store_si128((simde__m128i*)v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	r11.s64 = -320;
	// lvx128 v108,r11,r12
	simde_mm_store_si128((simde__m128i*)v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	r11.s64 = -304;
	// lvx128 v109,r11,r12
	simde_mm_store_si128((simde__m128i*)v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	r11.s64 = -288;
	// lvx128 v110,r11,r12
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	r11.s64 = -272;
	// lvx128 v111,r11,r12
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	r11.s64 = -256;
	// lvx128 v112,r11,r12
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_100"))) PPC_WEAK_FUNC(__restvmx_100);
PPC_FUNC_IMPL(__imp____restvmx_100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-448
	r11.s64 = -448;
	// lvx128 v100,r11,r12
	simde_mm_store_si128((simde__m128i*)v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	r11.s64 = -432;
	// lvx128 v101,r11,r12
	simde_mm_store_si128((simde__m128i*)v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	r11.s64 = -416;
	// lvx128 v102,r11,r12
	simde_mm_store_si128((simde__m128i*)v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	r11.s64 = -400;
	// lvx128 v103,r11,r12
	simde_mm_store_si128((simde__m128i*)v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	r11.s64 = -384;
	// lvx128 v104,r11,r12
	simde_mm_store_si128((simde__m128i*)v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	r11.s64 = -368;
	// lvx128 v105,r11,r12
	simde_mm_store_si128((simde__m128i*)v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	r11.s64 = -352;
	// lvx128 v106,r11,r12
	simde_mm_store_si128((simde__m128i*)v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	r11.s64 = -336;
	// lvx128 v107,r11,r12
	simde_mm_store_si128((simde__m128i*)v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	r11.s64 = -320;
	// lvx128 v108,r11,r12
	simde_mm_store_si128((simde__m128i*)v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	r11.s64 = -304;
	// lvx128 v109,r11,r12
	simde_mm_store_si128((simde__m128i*)v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	r11.s64 = -288;
	// lvx128 v110,r11,r12
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	r11.s64 = -272;
	// lvx128 v111,r11,r12
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	r11.s64 = -256;
	// lvx128 v112,r11,r12
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_101"))) PPC_WEAK_FUNC(__restvmx_101);
PPC_FUNC_IMPL(__imp____restvmx_101) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-432
	r11.s64 = -432;
	// lvx128 v101,r11,r12
	simde_mm_store_si128((simde__m128i*)v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	r11.s64 = -416;
	// lvx128 v102,r11,r12
	simde_mm_store_si128((simde__m128i*)v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	r11.s64 = -400;
	// lvx128 v103,r11,r12
	simde_mm_store_si128((simde__m128i*)v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	r11.s64 = -384;
	// lvx128 v104,r11,r12
	simde_mm_store_si128((simde__m128i*)v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	r11.s64 = -368;
	// lvx128 v105,r11,r12
	simde_mm_store_si128((simde__m128i*)v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	r11.s64 = -352;
	// lvx128 v106,r11,r12
	simde_mm_store_si128((simde__m128i*)v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	r11.s64 = -336;
	// lvx128 v107,r11,r12
	simde_mm_store_si128((simde__m128i*)v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	r11.s64 = -320;
	// lvx128 v108,r11,r12
	simde_mm_store_si128((simde__m128i*)v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	r11.s64 = -304;
	// lvx128 v109,r11,r12
	simde_mm_store_si128((simde__m128i*)v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	r11.s64 = -288;
	// lvx128 v110,r11,r12
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	r11.s64 = -272;
	// lvx128 v111,r11,r12
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	r11.s64 = -256;
	// lvx128 v112,r11,r12
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_102"))) PPC_WEAK_FUNC(__restvmx_102);
PPC_FUNC_IMPL(__imp____restvmx_102) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-416
	r11.s64 = -416;
	// lvx128 v102,r11,r12
	simde_mm_store_si128((simde__m128i*)v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	r11.s64 = -400;
	// lvx128 v103,r11,r12
	simde_mm_store_si128((simde__m128i*)v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	r11.s64 = -384;
	// lvx128 v104,r11,r12
	simde_mm_store_si128((simde__m128i*)v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	r11.s64 = -368;
	// lvx128 v105,r11,r12
	simde_mm_store_si128((simde__m128i*)v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	r11.s64 = -352;
	// lvx128 v106,r11,r12
	simde_mm_store_si128((simde__m128i*)v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	r11.s64 = -336;
	// lvx128 v107,r11,r12
	simde_mm_store_si128((simde__m128i*)v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	r11.s64 = -320;
	// lvx128 v108,r11,r12
	simde_mm_store_si128((simde__m128i*)v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	r11.s64 = -304;
	// lvx128 v109,r11,r12
	simde_mm_store_si128((simde__m128i*)v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	r11.s64 = -288;
	// lvx128 v110,r11,r12
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	r11.s64 = -272;
	// lvx128 v111,r11,r12
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	r11.s64 = -256;
	// lvx128 v112,r11,r12
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_103"))) PPC_WEAK_FUNC(__restvmx_103);
PPC_FUNC_IMPL(__imp____restvmx_103) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-400
	r11.s64 = -400;
	// lvx128 v103,r11,r12
	simde_mm_store_si128((simde__m128i*)v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	r11.s64 = -384;
	// lvx128 v104,r11,r12
	simde_mm_store_si128((simde__m128i*)v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	r11.s64 = -368;
	// lvx128 v105,r11,r12
	simde_mm_store_si128((simde__m128i*)v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	r11.s64 = -352;
	// lvx128 v106,r11,r12
	simde_mm_store_si128((simde__m128i*)v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	r11.s64 = -336;
	// lvx128 v107,r11,r12
	simde_mm_store_si128((simde__m128i*)v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	r11.s64 = -320;
	// lvx128 v108,r11,r12
	simde_mm_store_si128((simde__m128i*)v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	r11.s64 = -304;
	// lvx128 v109,r11,r12
	simde_mm_store_si128((simde__m128i*)v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	r11.s64 = -288;
	// lvx128 v110,r11,r12
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	r11.s64 = -272;
	// lvx128 v111,r11,r12
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	r11.s64 = -256;
	// lvx128 v112,r11,r12
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_104"))) PPC_WEAK_FUNC(__restvmx_104);
PPC_FUNC_IMPL(__imp____restvmx_104) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-384
	r11.s64 = -384;
	// lvx128 v104,r11,r12
	simde_mm_store_si128((simde__m128i*)v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	r11.s64 = -368;
	// lvx128 v105,r11,r12
	simde_mm_store_si128((simde__m128i*)v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	r11.s64 = -352;
	// lvx128 v106,r11,r12
	simde_mm_store_si128((simde__m128i*)v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	r11.s64 = -336;
	// lvx128 v107,r11,r12
	simde_mm_store_si128((simde__m128i*)v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	r11.s64 = -320;
	// lvx128 v108,r11,r12
	simde_mm_store_si128((simde__m128i*)v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	r11.s64 = -304;
	// lvx128 v109,r11,r12
	simde_mm_store_si128((simde__m128i*)v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	r11.s64 = -288;
	// lvx128 v110,r11,r12
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	r11.s64 = -272;
	// lvx128 v111,r11,r12
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	r11.s64 = -256;
	// lvx128 v112,r11,r12
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_105"))) PPC_WEAK_FUNC(__restvmx_105);
PPC_FUNC_IMPL(__imp____restvmx_105) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-368
	r11.s64 = -368;
	// lvx128 v105,r11,r12
	simde_mm_store_si128((simde__m128i*)v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	r11.s64 = -352;
	// lvx128 v106,r11,r12
	simde_mm_store_si128((simde__m128i*)v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	r11.s64 = -336;
	// lvx128 v107,r11,r12
	simde_mm_store_si128((simde__m128i*)v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	r11.s64 = -320;
	// lvx128 v108,r11,r12
	simde_mm_store_si128((simde__m128i*)v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	r11.s64 = -304;
	// lvx128 v109,r11,r12
	simde_mm_store_si128((simde__m128i*)v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	r11.s64 = -288;
	// lvx128 v110,r11,r12
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	r11.s64 = -272;
	// lvx128 v111,r11,r12
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	r11.s64 = -256;
	// lvx128 v112,r11,r12
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_106"))) PPC_WEAK_FUNC(__restvmx_106);
PPC_FUNC_IMPL(__imp____restvmx_106) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-352
	r11.s64 = -352;
	// lvx128 v106,r11,r12
	simde_mm_store_si128((simde__m128i*)v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	r11.s64 = -336;
	// lvx128 v107,r11,r12
	simde_mm_store_si128((simde__m128i*)v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	r11.s64 = -320;
	// lvx128 v108,r11,r12
	simde_mm_store_si128((simde__m128i*)v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	r11.s64 = -304;
	// lvx128 v109,r11,r12
	simde_mm_store_si128((simde__m128i*)v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	r11.s64 = -288;
	// lvx128 v110,r11,r12
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	r11.s64 = -272;
	// lvx128 v111,r11,r12
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	r11.s64 = -256;
	// lvx128 v112,r11,r12
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_107"))) PPC_WEAK_FUNC(__restvmx_107);
PPC_FUNC_IMPL(__imp____restvmx_107) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-336
	r11.s64 = -336;
	// lvx128 v107,r11,r12
	simde_mm_store_si128((simde__m128i*)v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	r11.s64 = -320;
	// lvx128 v108,r11,r12
	simde_mm_store_si128((simde__m128i*)v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	r11.s64 = -304;
	// lvx128 v109,r11,r12
	simde_mm_store_si128((simde__m128i*)v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	r11.s64 = -288;
	// lvx128 v110,r11,r12
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	r11.s64 = -272;
	// lvx128 v111,r11,r12
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	r11.s64 = -256;
	// lvx128 v112,r11,r12
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_108"))) PPC_WEAK_FUNC(__restvmx_108);
PPC_FUNC_IMPL(__imp____restvmx_108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-320
	r11.s64 = -320;
	// lvx128 v108,r11,r12
	simde_mm_store_si128((simde__m128i*)v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	r11.s64 = -304;
	// lvx128 v109,r11,r12
	simde_mm_store_si128((simde__m128i*)v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	r11.s64 = -288;
	// lvx128 v110,r11,r12
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	r11.s64 = -272;
	// lvx128 v111,r11,r12
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	r11.s64 = -256;
	// lvx128 v112,r11,r12
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_109"))) PPC_WEAK_FUNC(__restvmx_109);
PPC_FUNC_IMPL(__imp____restvmx_109) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-304
	r11.s64 = -304;
	// lvx128 v109,r11,r12
	simde_mm_store_si128((simde__m128i*)v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	r11.s64 = -288;
	// lvx128 v110,r11,r12
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	r11.s64 = -272;
	// lvx128 v111,r11,r12
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	r11.s64 = -256;
	// lvx128 v112,r11,r12
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_110"))) PPC_WEAK_FUNC(__restvmx_110);
PPC_FUNC_IMPL(__imp____restvmx_110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-288
	r11.s64 = -288;
	// lvx128 v110,r11,r12
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	r11.s64 = -272;
	// lvx128 v111,r11,r12
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	r11.s64 = -256;
	// lvx128 v112,r11,r12
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_111"))) PPC_WEAK_FUNC(__restvmx_111);
PPC_FUNC_IMPL(__imp____restvmx_111) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-272
	r11.s64 = -272;
	// lvx128 v111,r11,r12
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	r11.s64 = -256;
	// lvx128 v112,r11,r12
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_112"))) PPC_WEAK_FUNC(__restvmx_112);
PPC_FUNC_IMPL(__imp____restvmx_112) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-256
	r11.s64 = -256;
	// lvx128 v112,r11,r12
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_113"))) PPC_WEAK_FUNC(__restvmx_113);
PPC_FUNC_IMPL(__imp____restvmx_113) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-240
	r11.s64 = -240;
	// lvx128 v113,r11,r12
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_114"))) PPC_WEAK_FUNC(__restvmx_114);
PPC_FUNC_IMPL(__imp____restvmx_114) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-224
	r11.s64 = -224;
	// lvx128 v114,r11,r12
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_115"))) PPC_WEAK_FUNC(__restvmx_115);
PPC_FUNC_IMPL(__imp____restvmx_115) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-208
	r11.s64 = -208;
	// lvx128 v115,r11,r12
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_116"))) PPC_WEAK_FUNC(__restvmx_116);
PPC_FUNC_IMPL(__imp____restvmx_116) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-192
	r11.s64 = -192;
	// lvx128 v116,r11,r12
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_117"))) PPC_WEAK_FUNC(__restvmx_117);
PPC_FUNC_IMPL(__imp____restvmx_117) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-176
	r11.s64 = -176;
	// lvx128 v117,r11,r12
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_118"))) PPC_WEAK_FUNC(__restvmx_118);
PPC_FUNC_IMPL(__imp____restvmx_118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-160
	r11.s64 = -160;
	// lvx128 v118,r11,r12
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_119"))) PPC_WEAK_FUNC(__restvmx_119);
PPC_FUNC_IMPL(__imp____restvmx_119) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-144
	r11.s64 = -144;
	// lvx128 v119,r11,r12
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_120"))) PPC_WEAK_FUNC(__restvmx_120);
PPC_FUNC_IMPL(__imp____restvmx_120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-128
	r11.s64 = -128;
	// lvx128 v120,r11,r12
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_121"))) PPC_WEAK_FUNC(__restvmx_121);
PPC_FUNC_IMPL(__imp____restvmx_121) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-112
	r11.s64 = -112;
	// lvx128 v121,r11,r12
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_122"))) PPC_WEAK_FUNC(__restvmx_122);
PPC_FUNC_IMPL(__imp____restvmx_122) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-96
	r11.s64 = -96;
	// lvx128 v122,r11,r12
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_123"))) PPC_WEAK_FUNC(__restvmx_123);
PPC_FUNC_IMPL(__imp____restvmx_123) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-80
	r11.s64 = -80;
	// lvx128 v123,r11,r12
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_124"))) PPC_WEAK_FUNC(__restvmx_124);
PPC_FUNC_IMPL(__imp____restvmx_124) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-64
	r11.s64 = -64;
	// lvx128 v124,r11,r12
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_125"))) PPC_WEAK_FUNC(__restvmx_125);
PPC_FUNC_IMPL(__imp____restvmx_125) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-48
	r11.s64 = -48;
	// lvx128 v125,r11,r12
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_126"))) PPC_WEAK_FUNC(__restvmx_126);
PPC_FUNC_IMPL(__imp____restvmx_126) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	// li r11,-32
	r11.s64 = -32;
	// lvx128 v126,r11,r12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_127"))) PPC_WEAK_FUNC(__restvmx_127);
PPC_FUNC_IMPL(__imp____restvmx_127) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v127{};
	// li r11,-16
	r11.s64 = -16;
	// lvx128 v127,r11,r12
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B3980"))) PPC_WEAK_FUNC(sub_831B3980);
PPC_FUNC_IMPL(__imp__sub_831B3980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// addi r11,r11,-2624
	r11.s64 = r11.s64 + -2624;
	// lfs f13,176(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x831b39bc
	if (!cr6.gt) goto loc_831B39BC;
	// lfd f12,48(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x831b39b0
	if (!cr6.gt) goto loc_831B39B0;
	// lfd f0,8(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// b 0x831b3a4c
	goto loc_831B3A4C;
loc_831B39B0:
	// li r10,2
	ctx.r10.s64 = 2;
	// fdiv f0,f13,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64 / f0.f64;
	// b 0x831b39c0
	goto loc_831B39C0;
loc_831B39BC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_831B39C0:
	// lfd f12,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x831b39e0
	if (!cr6.gt) goto loc_831B39E0;
	// lfd f12,40(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fadd f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 + f0.f64;
	// fmsub f0,f12,f0,f13
	f0.f64 = ctx.f12.f64 * f0.f64 - ctx.f13.f64;
	// fdiv f0,f0,f11
	f0.f64 = f0.f64 / ctx.f11.f64;
loc_831B39E0:
	// fmul f5,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f0.f64 * f0.f64;
	// lfd f12,72(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 72);
	// lfd f13,80(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lfd f11,112(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 112);
	// lfd f10,64(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// lfd f9,104(r11)
	ctx.f9.u64 = PPC_LOAD_U64(r11.u32 + 104);
	// lfd f8,56(r11)
	ctx.f8.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// lfd f7,96(r11)
	ctx.f7.u64 = PPC_LOAD_U64(r11.u32 + 96);
	// lfd f6,88(r11)
	ctx.f6.u64 = PPC_LOAD_U64(r11.u32 + 88);
	// fmadd f13,f13,f5,f12
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64 + ctx.f12.f64;
	// fadd f12,f11,f5
	ctx.f12.f64 = ctx.f11.f64 + ctx.f5.f64;
	// fmadd f13,f13,f5,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64 + ctx.f10.f64;
	// fmadd f12,f12,f5,f9
	ctx.f12.f64 = ctx.f12.f64 * ctx.f5.f64 + ctx.f9.f64;
	// fmadd f13,f13,f5,f8
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64 + ctx.f8.f64;
	// fmadd f12,f12,f5,f7
	ctx.f12.f64 = ctx.f12.f64 * ctx.f5.f64 + ctx.f7.f64;
	// fmul f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64;
	// fmadd f12,f12,f5,f6
	ctx.f12.f64 = ctx.f12.f64 * ctx.f5.f64 + ctx.f6.f64;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * f0.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f0,f13,f0
	f0.f64 = ctx.f13.f64 + f0.f64;
	// ble cr6,0x831b3a3c
	if (!cr6.gt) goto loc_831B3A3C;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_831B3A3C:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// lfdx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// fadd f0,f13,f0
	f0.f64 = ctx.f13.f64 + f0.f64;
loc_831B3A4C:
	// ld r11,-16(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B3A68"))) PPC_WEAK_FUNC(sub_831B3A68);
PPC_FUNC_IMPL(__imp__sub_831B3A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// stfd f2,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// addi r11,r11,-2624
	r11.s64 = r11.s64 + -2624;
	// lfs f0,168(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 168);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// bne cr6,0x831b3ac0
	if (!cr6.eq) goto loc_831B3AC0;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x831b3ab8
	if (!cr6.eq) goto loc_831B3AB8;
	// lwz r10,24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b3ab0
	if (cr0.eq) goto loc_831B3AB0;
	// lfd f0,16(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_831B3AB0:
	// lfd f1,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// blr 
	return;
loc_831B3AB8:
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// b 0x831b3b78
	goto loc_831B3B78;
loc_831B3AC0:
	// fabs f13,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// li r10,0
	ctx.r10.s64 = 0;
	// fabs f0,f1
	f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x831b3ae4
	if (!cr6.gt) goto loc_831B3AE4;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// li r10,2
	ctx.r10.s64 = 2;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_831B3AE4:
	// fdiv f0,f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = f0.f64 / ctx.f12.f64;
	// lfd f13,24(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x831b3b0c
	if (!cr6.gt) goto loc_831B3B0C;
	// lfd f13,40(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f12,176(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fadd f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 + f0.f64;
	// fmsub f0,f13,f0,f12
	f0.f64 = ctx.f13.f64 * f0.f64 - ctx.f12.f64;
	// fdiv f0,f0,f11
	f0.f64 = f0.f64 / ctx.f11.f64;
loc_831B3B0C:
	// fmul f5,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f0.f64 * f0.f64;
	// lfd f12,72(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 72);
	// lfd f13,80(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lfd f11,112(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 112);
	// lfd f10,64(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// lfd f9,104(r11)
	ctx.f9.u64 = PPC_LOAD_U64(r11.u32 + 104);
	// lfd f8,56(r11)
	ctx.f8.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// lfd f7,96(r11)
	ctx.f7.u64 = PPC_LOAD_U64(r11.u32 + 96);
	// lfd f6,88(r11)
	ctx.f6.u64 = PPC_LOAD_U64(r11.u32 + 88);
	// fmadd f13,f13,f5,f12
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64 + ctx.f12.f64;
	// fadd f12,f11,f5
	ctx.f12.f64 = ctx.f11.f64 + ctx.f5.f64;
	// fmadd f13,f13,f5,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64 + ctx.f10.f64;
	// fmadd f12,f12,f5,f9
	ctx.f12.f64 = ctx.f12.f64 * ctx.f5.f64 + ctx.f9.f64;
	// fmadd f13,f13,f5,f8
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64 + ctx.f8.f64;
	// fmadd f12,f12,f5,f7
	ctx.f12.f64 = ctx.f12.f64 * ctx.f5.f64 + ctx.f7.f64;
	// fmul f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64;
	// fmadd f12,f12,f5,f6
	ctx.f12.f64 = ctx.f12.f64 * ctx.f5.f64 + ctx.f6.f64;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * f0.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f0,f13,f0
	f0.f64 = ctx.f13.f64 + f0.f64;
	// ble cr6,0x831b3b68
	if (!cr6.gt) goto loc_831B3B68;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_831B3B68:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,128
	ctx.r9.s64 = r11.s64 + 128;
	// lfdx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fadd f0,f13,f0
	f0.f64 = ctx.f13.f64 + f0.f64;
loc_831B3B78:
	// lfd f13,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// lwz r11,16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - f0.f64;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// fsel f1,f2,f0,f13
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// beqlr 
	if (cr0.eq) return;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B3B98"))) PPC_WEAK_FUNC(sub_831B3B98);
PPC_FUNC_IMPL(__imp__sub_831B3B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-2440
	r11.s64 = r11.s64 + -2440;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x831b3bd4
	if (!cr6.gt) goto loc_831B3BD4;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// subfic r10,r4,1
	xer.ca = ctx.r4.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r4.s64;
	// fsub f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmul f0,f12,f0
	f0.f64 = ctx.f12.f64 * f0.f64;
	// fsqrt f12,f0
	ctx.f12.f64 = sqrt(f0.f64);
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x831b3bf0
	goto loc_831B3BF0;
loc_831B3BD4:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// fmul f0,f13,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831b3bf0
	if (!cr6.eq) goto loc_831B3BF0;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// beqlr cr6
	if (cr6.eq) return;
loc_831B3BF0:
	// lfd f12,80(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lfd f11,72(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 72);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// fmadd f5,f12,f0,f11
	ctx.f5.f64 = ctx.f12.f64 * f0.f64 + ctx.f11.f64;
	// lfd f12,120(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 120);
	// lfd f11,64(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// fadd f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 + f0.f64;
	// lfd f12,112(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 112);
	// lfd f10,56(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// lfd f9,104(r11)
	ctx.f9.u64 = PPC_LOAD_U64(r11.u32 + 104);
	// lfd f8,48(r11)
	ctx.f8.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// lfd f7,96(r11)
	ctx.f7.u64 = PPC_LOAD_U64(r11.u32 + 96);
	// lfd f6,88(r11)
	ctx.f6.u64 = PPC_LOAD_U64(r11.u32 + 88);
	// fmadd f11,f5,f0,f11
	ctx.f11.f64 = ctx.f5.f64 * f0.f64 + ctx.f11.f64;
	// fmadd f12,f4,f0,f12
	ctx.f12.f64 = ctx.f4.f64 * f0.f64 + ctx.f12.f64;
	// fmadd f11,f11,f0,f10
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f10.f64;
	// fmadd f12,f12,f0,f9
	ctx.f12.f64 = ctx.f12.f64 * f0.f64 + ctx.f9.f64;
	// fmadd f11,f11,f0,f8
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f8.f64;
	// fmadd f12,f12,f0,f7
	ctx.f12.f64 = ctx.f12.f64 * f0.f64 + ctx.f7.f64;
	// fmul f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 * f0.f64;
	// fmadd f0,f12,f0,f6
	f0.f64 = ctx.f12.f64 * f0.f64 + ctx.f6.f64;
	// fmul f12,f11,f13
	ctx.f12.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fdiv f0,f12,f0
	f0.f64 = ctx.f12.f64 / f0.f64;
	// fadd f0,f0,f13
	f0.f64 = f0.f64 + ctx.f13.f64;
	// bne cr6,0x831b3c70
	if (!cr6.eq) goto loc_831B3C70;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lfdx f13,r10,r11
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// fadd f0,f13,f0
	f0.f64 = ctx.f13.f64 + f0.f64;
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// blr 
	return;
loc_831B3C70:
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// lfdx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// lfdx f12,r10,r11
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - f0.f64;
	// fadd f0,f12,f0
	f0.f64 = ctx.f12.f64 + f0.f64;
	// fsel f1,f1,f13,f0
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B3C90"))) PPC_WEAK_FUNC(sub_831B3C90);
PPC_FUNC_IMPL(__imp__sub_831B3C90) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-2440
	r11.s64 = r11.s64 + -2440;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x831b3ccc
	if (!cr6.gt) goto loc_831B3CCC;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fsub f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmul f0,f12,f0
	f0.f64 = ctx.f12.f64 * f0.f64;
	// fsqrt f12,f0
	ctx.f12.f64 = sqrt(f0.f64);
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x831b3ce0
	goto loc_831B3CE0;
loc_831B3CCC:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmul f0,f13,f13
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// beqlr cr6
	if (cr6.eq) return;
loc_831B3CE0:
	// lfd f12,80(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f11,72(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 72);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// fmadd f5,f12,f0,f11
	ctx.f5.f64 = ctx.f12.f64 * f0.f64 + ctx.f11.f64;
	// lfd f12,120(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 120);
	// lfd f11,64(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// fadd f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 + f0.f64;
	// lfd f12,112(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 112);
	// lfd f10,56(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// lfd f9,104(r11)
	ctx.f9.u64 = PPC_LOAD_U64(r11.u32 + 104);
	// lfd f8,48(r11)
	ctx.f8.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// lfd f7,96(r11)
	ctx.f7.u64 = PPC_LOAD_U64(r11.u32 + 96);
	// lfd f6,88(r11)
	ctx.f6.u64 = PPC_LOAD_U64(r11.u32 + 88);
	// lfdx f3,r10,r9
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fmadd f11,f5,f0,f11
	ctx.f11.f64 = ctx.f5.f64 * f0.f64 + ctx.f11.f64;
	// fmadd f12,f4,f0,f12
	ctx.f12.f64 = ctx.f4.f64 * f0.f64 + ctx.f12.f64;
	// fmadd f11,f11,f0,f10
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f10.f64;
	// fmadd f12,f12,f0,f9
	ctx.f12.f64 = ctx.f12.f64 * f0.f64 + ctx.f9.f64;
	// fmadd f11,f11,f0,f8
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f8.f64;
	// fmadd f12,f12,f0,f7
	ctx.f12.f64 = ctx.f12.f64 * f0.f64 + ctx.f7.f64;
	// fmul f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 * f0.f64;
	// fmadd f0,f12,f0,f6
	f0.f64 = ctx.f12.f64 * f0.f64 + ctx.f6.f64;
	// fmul f12,f11,f13
	ctx.f12.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fdiv f0,f12,f0
	f0.f64 = ctx.f12.f64 / f0.f64;
	// fadd f0,f0,f13
	f0.f64 = f0.f64 + ctx.f13.f64;
	// fadd f0,f0,f3
	f0.f64 = f0.f64 + ctx.f3.f64;
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B3D58"))) PPC_WEAK_FUNC(sub_831B3D58);
PPC_FUNC_IMPL(__imp__sub_831B3D58) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x831b3b98
	sub_831B3B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B3D60"))) PPC_WEAK_FUNC(sub_831B3D60);
PPC_FUNC_IMPL(__imp__sub_831B3D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm. r11,r11,0,17,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831b3d88
	if (!cr0.eq) goto loc_831B3D88;
	// lwz r11,16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// clrlwi. r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831b3dc4
	if (!cr0.eq) goto loc_831B3DC4;
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831b3dc4
	if (!cr6.eq) goto loc_831B3DC4;
loc_831B3D88:
	// fctid f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bne cr6,0x831b3dc4
	if (!cr6.eq) goto loc_831B3DC4;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfd f0,-6088(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -6088);
	// fmul f0,f1,f0
	f0.f64 = ctx.f1.f64 * f0.f64;
	// fctid f13,f0
	ctx.f13.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x831b3dbc
	if (!cr6.eq) goto loc_831B3DBC;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_831B3DBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831B3DC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B3DD0"))) PPC_WEAK_FUNC(sub_831B3DD0);
PPC_FUNC_IMPL(__imp__sub_831B3DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
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
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// lis r9,32752
	ctx.r9.s64 = 2146435072;
	// stfd f31,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, f31.u64);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfd f1,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f1.u64);
	// lis r10,-16
	ctx.r10.s64 = -1048576;
	// fabs f0,f1
	f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x831b3e58
	if (!cr6.eq) goto loc_831B3E58;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831b3e94
	if (!cr6.eq) goto loc_831B3E94;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfd f13,-3744(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x831b3e3c
	if (!cr6.gt) goto loc_831B3E3C;
loc_831B3E30:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lfd f0,-824(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -824);
	// b 0x831b3f34
	goto loc_831B3F34;
loc_831B3E3C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x831b3e50
	if (!cr6.lt) goto loc_831B3E50;
loc_831B3E44:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f0,-8872(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// b 0x831b3f34
	goto loc_831B3F34;
loc_831B3E50:
	// stfd f13,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, ctx.f13.u64);
	// b 0x831b3f38
	goto loc_831B3F38;
loc_831B3E58:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831b3e94
	if (!cr6.eq) goto loc_831B3E94;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831b3e94
	if (!cr6.eq) goto loc_831B3E94;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfd f13,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x831b3e44
	if (cr6.gt) goto loc_831B3E44;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x831b3e30
	if (cr6.lt) goto loc_831B3E30;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,1
	r30.s64 = 1;
	// lfd f0,-816(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -816);
	// b 0x831b3f34
	goto loc_831B3F34;
loc_831B3E94:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x831b3ecc
	if (!cr6.eq) goto loc_831B3ECC;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831b3f38
	if (!cr6.eq) goto loc_831B3F38;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f0,-8872(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bgt cr6,0x831b3e30
	if (cr6.gt) goto loc_831B3E30;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfd f13,-3744(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// fsel f0,f31,f13,f0
	f0.f64 = f31.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// b 0x831b3f34
	goto loc_831B3F34;
loc_831B3ECC:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831b3f38
	if (!cr6.eq) goto loc_831B3F38;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831b3f38
	if (!cr6.eq) goto loc_831B3F38;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x831b3d60
	sub_831B3D60(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f0,-8872(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x831b3f10
	if (!cr6.gt) goto loc_831B3F10;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lfd f0,-824(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -824);
	// bne cr6,0x831b3f34
	if (!cr6.eq) goto loc_831B3F34;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// b 0x831b3f34
	goto loc_831B3F34;
loc_831B3F10:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x831b3f2c
	if (!cr6.lt) goto loc_831B3F2C;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831b3f34
	if (!cr6.eq) goto loc_831B3F34;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lfd f0,-792(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -792);
	// b 0x831b3f34
	goto loc_831B3F34;
loc_831B3F2C:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3744);
loc_831B3F34:
	// stfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
loc_831B3F38:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_831B3F58"))) PPC_WEAK_FUNC(sub_831B3F58);
PPC_FUNC_IMPL(__imp__sub_831B3F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831b142c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f29,f2
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f2.f64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmr f28,f1
	f28.f64 = ctx.f1.f64;
	// stfd f28,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, f28.u64);
	// stfd f29,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, f29.u64);
	// lfd f27,-8872(r11)
	f27.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// fcmpu cr6,f29,f27
	cr6.compare(f29.f64, f27.f64);
	// bne cr6,0x831b3f9c
	if (!cr6.eq) goto loc_831B3F9C;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfd f1,-3744(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// b 0x831b4428
	goto loc_831B4428;
loc_831B3F9C:
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f28.f64, f27.f64);
	// bne cr6,0x831b3ff0
	if (!cr6.eq) goto loc_831B3FF0;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x831b3d60
	sub_831B3D60(ctx, base);
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f29.f64, f27.f64);
	// bge cr6,0x831b3fd0
	if (!cr6.lt) goto loc_831B3FD0;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lfd f1,-824(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -824);
	// bne cr6,0x831b4428
	if (!cr6.eq) goto loc_831B4428;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// bl 0x831b6ff8
	sub_831B6FF8(ctx, base);
	// b 0x831b4428
	goto loc_831B4428;
loc_831B3FD0:
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f29.f64, f27.f64);
	// ble cr6,0x831b3ff0
	if (!cr6.gt) goto loc_831B3FF0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831b3fe8
	if (!cr6.eq) goto loc_831B3FE8;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// b 0x831b4428
	goto loc_831B4428;
loc_831B3FE8:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// b 0x831b4428
	goto loc_831B4428;
loc_831B3FF0:
	// lhz r11,192(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 192);
	// lhz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 200);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	cr6.compare<uint32_t>(ctx.r10.u32, 32752, xer);
	// beq cr6,0x831b43b4
	if (cr6.eq) goto loc_831B43B4;
	// rlwinm r10,r9,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	cr6.compare<uint32_t>(ctx.r10.u32, 32752, xer);
	// beq cr6,0x831b43b4
	if (cr6.eq) goto loc_831B43B4;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f28.f64, f27.f64);
	// lfd f26,-3744(r11)
	f26.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// fmr f25,f26
	f25.f64 = f26.f64;
	// bge cr6,0x831b4054
	if (!cr6.lt) goto loc_831B4054;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x831b3d60
	sub_831B3D60(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831b4048
	if (cr6.eq) goto loc_831B4048;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x831b4050
	if (cr6.eq) goto loc_831B4050;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lfd f1,-816(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -816);
	// b 0x831b4428
	goto loc_831B4428;
loc_831B4048:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfd f25,-19272(r11)
	ctx.fpscr.disableFlushMode();
	f25.u64 = PPC_LOAD_U64(r11.u32 + -19272);
loc_831B4050:
	// fneg f28,f28
	ctx.fpscr.disableFlushMode();
	f28.u64 = f28.u64 ^ 0x8000000000000000;
loc_831B4054:
	// fabs f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f29.u64 & ~0x8000000000000000;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lfd f0,-2312(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -2312);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x831b40a4
	if (!cr6.gt) goto loc_831B40A4;
	// fcmpu cr6,f29,f27
	cr6.compare(f29.f64, f27.f64);
	// bge cr6,0x831b4074
	if (!cr6.lt) goto loc_831B4074;
	// fdiv f28,f26,f28
	f28.f64 = f26.f64 / f28.f64;
loc_831B4074:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(f28.f64, f26.f64);
	// ble cr6,0x831b408c
	if (!cr6.gt) goto loc_831B408C;
loc_831B407C:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lfd f0,-824(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -824);
loc_831B4084:
	// fmul f1,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64 * f25.f64;
	// b 0x831b4428
	goto loc_831B4428;
loc_831B408C:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(f28.f64, f26.f64);
	// bge cr6,0x831b409c
	if (!cr6.lt) goto loc_831B409C;
loc_831B4094:
	// fmul f1,f25,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64 * f27.f64;
	// b 0x831b4428
	goto loc_831B4428;
loc_831B409C:
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// b 0x831b4428
	goto loc_831B4428;
loc_831B40A4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x831bd970
	sub_831BD970(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lfd f0,-11432(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -11432);
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// bgt cr6,0x831b415c
	if (cr6.gt) goto loc_831B415C;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x831b3d60
	sub_831B3D60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b415c
	if (cr0.eq) goto loc_831B415C;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x831b3d60
	sub_831B3D60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b415c
	if (cr0.eq) goto loc_831B415C;
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f29.f64, f27.f64);
	// ble cr6,0x831b415c
	if (!cr6.gt) goto loc_831B415C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fctiwz f0,f29
	f0.s64 = (f29.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f29.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fmr f31,f26
	f31.f64 = f26.f64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mullw r31,r11,r10
	r31.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x831b4124
	if (cr6.eq) goto loc_831B4124;
loc_831B410C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b4118
	if (cr0.eq) goto loc_831B4118;
	// fmul f31,f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f31.f64 * f30.f64;
loc_831B4118:
	// srawi. r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// fmul f30,f30,f30
	ctx.fpscr.disableFlushMode();
	f30.f64 = f30.f64 * f30.f64;
	// bne 0x831b410c
	if (!cr0.eq) goto loc_831B410C;
loc_831B4124:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x831bd898
	sub_831BD898(ctx, base);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + r31.u64;
	// cmpwi cr6,r4,2560
	cr6.compare<int32_t>(ctx.r4.s32, 2560, xer);
	// ble cr6,0x831b4148
	if (!cr6.gt) goto loc_831B4148;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lfd f0,-824(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -824);
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// b 0x831b4084
	goto loc_831B4084;
loc_831B4148:
	// cmpwi cr6,r4,-2557
	cr6.compare<int32_t>(ctx.r4.s32, -2557, xer);
	// bge cr6,0x831b4394
	if (!cr6.lt) goto loc_831B4394;
	// fmul f0,f31,f25
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64 * f25.f64;
	// fmul f1,f0,f27
	ctx.f1.f64 = f0.f64 * f27.f64;
	// b 0x831b4428
	goto loc_831B4428;
loc_831B415C:
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r11,1
	r11.s64 = 1;
	// addi r31,r10,-10000
	r31.s64 = ctx.r10.s64 + -10000;
	// lfd f0,72(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 72);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bgt cr6,0x831b4178
	if (cr6.gt) goto loc_831B4178;
	// li r11,9
	r11.s64 = 9;
loc_831B4178:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,32
	ctx.r9.s64 = r31.s64 + 32;
	// lfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bgt cr6,0x831b4190
	if (cr6.gt) goto loc_831B4190;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_831B4190:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// lfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bgt cr6,0x831b41a8
	if (cr6.gt) goto loc_831B41A8;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_831B41A8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// blt 0x831b41c0
	if (cr0.lt) goto loc_831B41C0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_831B41C0:
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lfd f31,6472(r8)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r8.u32 + 6472);
	// bne cr6,0x831b41e8
	if (!cr6.eq) goto loc_831B41E8;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x831b6d80
	sub_831B6D80(ctx, base);
	// lfd f0,216(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 216);
	// fmr f13,f27
	ctx.f13.f64 = f27.f64;
	// fmul f0,f1,f0
	f0.f64 = ctx.f1.f64 * f0.f64;
	// b 0x831b4278
	goto loc_831B4278;
loc_831B41E8:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f11,256(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(r31.u32 + 256);
	// addi r8,r31,8
	ctx.r8.s64 = r31.s64 + 8;
	// lfd f10,248(r31)
	ctx.f10.u64 = PPC_LOAD_U64(r31.u32 + 248);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lfd f9,240(r31)
	ctx.f9.u64 = PPC_LOAD_U64(r31.u32 + 240);
	// addi r7,r31,144
	ctx.r7.s64 = r31.s64 + 144;
	// lfd f8,232(r31)
	ctx.f8.u64 = PPC_LOAD_U64(r31.u32 + 232);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// lfd f12,224(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 224);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lfd f7,216(r31)
	ctx.f7.u64 = PPC_LOAD_U64(r31.u32 + 216);
	// lfdx f0,r10,r8
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r8.u32);
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// fsub f6,f30,f0
	ctx.f6.f64 = f30.f64 - f0.f64;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fadd f5,f0,f30
	ctx.f5.f64 = f0.f64 + f30.f64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,-18480(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + -18480);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfdx f4,r11,r7
	ctx.f4.u64 = PPC_LOAD_U64(r11.u32 + ctx.r7.u32);
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// fsub f6,f6,f4
	ctx.f6.f64 = ctx.f6.f64 - ctx.f4.f64;
	// fdiv f6,f6,f5
	ctx.f6.f64 = ctx.f6.f64 / ctx.f5.f64;
	// fmul f13,f6,f13
	ctx.f13.f64 = ctx.f6.f64 * ctx.f13.f64;
	// fmul f6,f13,f13
	ctx.f6.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmul f12,f13,f12
	ctx.f12.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fmadd f11,f6,f11,f10
	ctx.f11.f64 = ctx.f6.f64 * ctx.f11.f64 + ctx.f10.f64;
	// fmadd f11,f11,f6,f9
	ctx.f11.f64 = ctx.f11.f64 * ctx.f6.f64 + ctx.f9.f64;
	// fmadd f11,f11,f6,f8
	ctx.f11.f64 = ctx.f11.f64 * ctx.f6.f64 + ctx.f8.f64;
	// fmul f11,f11,f6
	ctx.f11.f64 = ctx.f11.f64 * ctx.f6.f64;
	// fmul f11,f11,f13
	ctx.f11.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmadd f12,f11,f7,f12
	ctx.f12.f64 = ctx.f11.f64 * ctx.f7.f64 + ctx.f12.f64;
	// fadd f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 + ctx.f13.f64;
loc_831B4278:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// fmul f11,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64 * f29.f64;
	// lfd f12,320(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 320);
	// lfd f13,-2440(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -2440);
	// fmul f10,f29,f13
	ctx.f10.f64 = f29.f64 * ctx.f13.f64;
	// fctid f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f31
	ctx.f10.f64 = ctx.f10.f64 * f31.f64;
	// fsub f9,f29,f10
	ctx.f9.f64 = f29.f64 - ctx.f10.f64;
	// fmadd f11,f9,f0,f11
	ctx.f11.f64 = ctx.f9.f64 * f0.f64 + ctx.f11.f64;
	// fmul f9,f11,f13
	ctx.f9.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fctid f9,f9
	ctx.f9.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fmul f9,f9,f31
	ctx.f9.f64 = ctx.f9.f64 * f31.f64;
	// fmadd f0,f10,f0,f9
	f0.f64 = ctx.f10.f64 * f0.f64 + ctx.f9.f64;
	// fsub f11,f11,f9
	ctx.f11.f64 = ctx.f11.f64 - ctx.f9.f64;
	// fmul f10,f0,f13
	ctx.f10.f64 = f0.f64 * ctx.f13.f64;
	// fctid f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f31
	ctx.f10.f64 = ctx.f10.f64 * f31.f64;
	// fsub f0,f0,f10
	f0.f64 = f0.f64 - ctx.f10.f64;
	// fadd f0,f0,f11
	f0.f64 = f0.f64 + ctx.f11.f64;
	// fmul f11,f0,f13
	ctx.f11.f64 = f0.f64 * ctx.f13.f64;
	// fctid f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmul f11,f11,f31
	ctx.f11.f64 = ctx.f11.f64 * f31.f64;
	// fadd f10,f10,f11
	ctx.f10.f64 = ctx.f10.f64 + ctx.f11.f64;
	// fsub f0,f0,f11
	f0.f64 = f0.f64 - ctx.f11.f64;
	// fmul f13,f10,f13
	ctx.f13.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x831b407c
	if (cr6.gt) goto loc_831B407C;
	// lfd f12,328(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 328);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x831b4094
	if (cr6.lt) goto loc_831B4094;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ble cr6,0x831b431c
	if (!cr6.gt) goto loc_831B431C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// fsub f0,f0,f31
	f0.f64 = f0.f64 - f31.f64;
loc_831B431C:
	// lfd f13,312(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 312);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lfd f12,304(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 304);
	// srawi r9,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r9.s64 = r11.s32 >> 4;
	// fmadd f8,f0,f13,f12
	ctx.f8.f64 = f0.f64 * ctx.f13.f64 + ctx.f12.f64;
	// lfd f13,296(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 296);
	// lfd f12,288(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 288);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfd f11,280(r31)
	ctx.f11.u64 = PPC_LOAD_U64(r31.u32 + 280);
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// lfd f10,272(r31)
	ctx.f10.u64 = PPC_LOAD_U64(r31.u32 + 272);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lfd f9,264(r31)
	ctx.f9.u64 = PPC_LOAD_U64(r31.u32 + 264);
	// addi r8,r31,8
	ctx.r8.s64 = r31.s64 + 8;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// fmadd f13,f8,f0,f13
	ctx.f13.f64 = ctx.f8.f64 * f0.f64 + ctx.f13.f64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f8,r11,r8
	ctx.f8.u64 = PPC_LOAD_U64(r11.u32 + ctx.r8.u32);
	// fmadd f13,f13,f0,f12
	ctx.f13.f64 = ctx.f13.f64 * f0.f64 + ctx.f12.f64;
	// fmadd f13,f13,f0,f11
	ctx.f13.f64 = ctx.f13.f64 * f0.f64 + ctx.f11.f64;
	// fmadd f13,f13,f0,f10
	ctx.f13.f64 = ctx.f13.f64 * f0.f64 + ctx.f10.f64;
	// fmadd f13,f13,f0,f9
	ctx.f13.f64 = ctx.f13.f64 * f0.f64 + ctx.f9.f64;
	// fmadd f0,f13,f0,f26
	f0.f64 = ctx.f13.f64 * f0.f64 + f26.f64;
	// fmul f31,f0,f8
	f31.f64 = f0.f64 * ctx.f8.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x831bd898
	sub_831BD898(ctx, base);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + r31.u64;
loc_831B4394:
	// cmpwi cr6,r4,1024
	cr6.compare<int32_t>(ctx.r4.s32, 1024, xer);
	// bgt cr6,0x831b407c
	if (cr6.gt) goto loc_831B407C;
	// cmpwi cr6,r4,-1021
	cr6.compare<int32_t>(ctx.r4.s32, -1021, xer);
	// blt cr6,0x831b4094
	if (cr6.lt) goto loc_831B4094;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x831bd870
	sub_831BD870(ctx, base);
	// fmul f1,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * f25.f64;
	// b 0x831b4428
	goto loc_831B4428;
loc_831B43B4:
	// rlwinm r10,r11,0,17,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r10,32752
	cr6.compare<uint32_t>(ctx.r10.u32, 32752, xer);
	// bne cr6,0x831b43d8
	if (!cr6.eq) goto loc_831B43D8;
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi. r11,r11,13
	r11.u64 = r11.u32 & 0x7FFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831b4424
	if (!cr0.eq) goto loc_831B4424;
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831b4424
	if (!cr6.eq) goto loc_831B4424;
loc_831B43D8:
	// rlwinm r11,r9,0,17,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x831b43fc
	if (!cr6.eq) goto loc_831B43FC;
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// clrlwi. r9,r9,13
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831b4424
	if (!cr0.eq) goto loc_831B4424;
	// lwz r9,204(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831b4424
	if (!cr6.eq) goto loc_831B4424;
loc_831B43FC:
	// cmplwi cr6,r10,32760
	cr6.compare<uint32_t>(ctx.r10.u32, 32760, xer);
	// beq cr6,0x831b4424
	if (cr6.eq) goto loc_831B4424;
	// cmplwi cr6,r11,32760
	cr6.compare<uint32_t>(r11.u32, 32760, xer);
	// beq cr6,0x831b4424
	if (cr6.eq) goto loc_831B4424;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x831b3dd0
	sub_831B3DD0(ctx, base);
	// lfd f1,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x831b4428
	goto loc_831B4428;
loc_831B4424:
	// fadd f1,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64 + f29.f64;
loc_831B4428:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B4448"))) PPC_WEAK_FUNC(sub_831B4448);
PPC_FUNC_IMPL(__imp__sub_831B4448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f0,-8872(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r11,r11,-9664
	r11.s64 = r11.s64 + -9664;
	// addi r9,r10,-2304
	ctx.r9.s64 = ctx.r10.s64 + -2304;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lfd f13,-2304(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -2304);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfd f0,0(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// fmul f4,f1,f0
	ctx.f4.f64 = ctx.f1.f64 * f0.f64;
	// lfd f12,8(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lfd f10,32(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 32);
	// lfd f11,-9552(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -9552);
	// lfd f9,80(r11)
	ctx.f9.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// lfd f8,-9560(r7)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9560);
	// lfd f7,-9568(r10)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r10.u32 + -9568);
	// lfd f6,64(r11)
	ctx.f6.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// lfd f0,48(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// lfd f5,-9576(r6)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r6.u32 + -9576);
	// fctid f4,f4
	ctx.f4.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f4.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// clrldi r10,r10,63
	ctx.r10.u64 = ctx.r10.u64 & 0x1;
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// fnmsub f13,f13,f4,f1
	ctx.f13.f64 = -(ctx.f13.f64 * ctx.f4.f64 - ctx.f1.f64);
	// fnmsub f13,f12,f4,f13
	ctx.f13.f64 = -(ctx.f12.f64 * ctx.f4.f64 - ctx.f13.f64);
	// fmul f12,f13,f13
	ctx.f12.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fnmsub f11,f12,f11,f10
	ctx.f11.f64 = -(ctx.f12.f64 * ctx.f11.f64 - ctx.f10.f64);
	// fmsub f10,f12,f9,f8
	ctx.f10.f64 = ctx.f12.f64 * ctx.f9.f64 - ctx.f8.f64;
	// fmsub f11,f11,f12,f7
	ctx.f11.f64 = ctx.f11.f64 * ctx.f12.f64 - ctx.f7.f64;
	// fmadd f10,f10,f12,f6
	ctx.f10.f64 = ctx.f10.f64 * ctx.f12.f64 + ctx.f6.f64;
	// fmadd f11,f11,f12,f0
	ctx.f11.f64 = ctx.f11.f64 * ctx.f12.f64 + f0.f64;
	// fmsub f10,f10,f12,f5
	ctx.f10.f64 = ctx.f10.f64 * ctx.f12.f64 - ctx.f5.f64;
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmadd f0,f10,f12,f0
	f0.f64 = ctx.f10.f64 * ctx.f12.f64 + f0.f64;
	// beq cr6,0x831b44fc
	if (cr6.eq) goto loc_831B44FC;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// b 0x831b4500
	goto loc_831B4500;
loc_831B44FC:
	// fdiv f0,f13,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64 / f0.f64;
loc_831B4500:
	// fabs f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfd f13,16(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lfd f12,-816(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + -816);
	// fsub f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 - ctx.f13.f64;
	// fsel f1,f13,f12,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f12.f64 : f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B4520"))) PPC_WEAK_FUNC(sub_831B4520);
PPC_FUNC_IMPL(__imp__sub_831B4520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// neg r12,r3
	r12.s64 = -ctx.r3.s64;
	// neg r11,r12
	r11.s64 = -r12.s64;
	// addi r0,r11,4095
	r0.s64 = r11.s64 + 4095;
	// srawi. r0,r0,12
	xer.ca = (r0.s32 < 0) & ((r0.u32 & 0xFFF) != 0);
	r0.s64 = r0.s32 >> 12;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// mr r11,r1
	r11.u64 = ctx.r1.u64;
	// mtctr r0
	ctr.u64 = r0.u64;
loc_831B453C:
	// lwzu r0,-4096(r11)
	ea = -4096 + r11.u32;
	r0.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// bdnz 0x831b453c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831B453C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B4524"))) PPC_WEAK_FUNC(sub_831B4524);
PPC_FUNC_IMPL(__imp__sub_831B4524) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// neg r11,r12
	r11.s64 = -r12.s64;
	// addi r0,r11,4095
	r0.s64 = r11.s64 + 4095;
	// srawi. r0,r0,12
	xer.ca = (r0.s32 < 0) & ((r0.u32 & 0xFFF) != 0);
	r0.s64 = r0.s32 >> 12;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// mr r11,r1
	r11.u64 = ctx.r1.u64;
	// mtctr r0
	ctr.u64 = r0.u64;
loc_831B453C:
	// lwzu r0,-4096(r11)
	ea = -4096 + r11.u32;
	r0.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// bdnz 0x831b453c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831B453C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B4548"))) PPC_WEAK_FUNC(sub_831B4548);
PPC_FUNC_IMPL(__imp__sub_831B4548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// fctidz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32251
	r11.s64 = -2113601536;
	// fabs f11,f1
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfd f13,-3744(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// lfd f0,-9544(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -9544);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fsub f0,f0,f11
	f0.f64 = f0.f64 - ctx.f11.f64;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsub f10,f12,f1
	ctx.f10.f64 = ctx.f12.f64 - ctx.f1.f64;
	// fadd f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 + ctx.f13.f64;
	// fsel f13,f10,f12,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f0,f0,f13,f1
	f0.f64 = f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// fsel f1,f11,f1,f0
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B4588"))) PPC_WEAK_FUNC(sub_831B4588);
PPC_FUNC_IMPL(__imp__sub_831B4588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// beq cr6,0x831b45d0
	if (cr6.eq) goto loc_831B45D0;
	// bl 0x82bd92e8
	sub_82BD92E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82bd8600
	sub_82BD8600(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831b45d0
	if (!cr0.eq) goto loc_831B45D0;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// bl 0x831b9718
	sub_831B9718(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_831B45D0:
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

__attribute__((alias("__imp__sub_831B45E8"))) PPC_WEAK_FUNC(sub_831B45E8);
PPC_FUNC_IMPL(__imp__sub_831B45E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r3,-2236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2236);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B45F8"))) PPC_WEAK_FUNC(sub_831B45F8);
PPC_FUNC_IMPL(__imp__sub_831B45F8) {
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
	// stwu r1,-2816(r1)
	ea = -2816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31946
	r31.s64 = -2093613056;
	// lwz r11,-2232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -2232);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b4620
	if (cr0.eq) goto loc_831B4620;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x831bbae0
	sub_831BBAE0(ctx, base);
loc_831B4620:
	// bl 0x831c0bc0
	sub_831C0BC0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831b4634
	if (cr0.eq) goto loc_831B4634;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x831c0bd8
	sub_831C0BD8(ctx, base);
loc_831B4634:
	// lwz r11,-2232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -2232);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b46a0
	if (cr0.eq) goto loc_831B46A0;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831B4660:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x831b4660
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831B4660;
	// lwz r10,2808(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2808);
	// lis r11,16384
	r11.s64 = 1073741824;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,21
	r11.u64 = r11.u64 | 21;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82bd58e0
	sub_82BD58E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bd59c8
	sub_82BD59C8(ctx, base);
loc_831B46A0:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x831b5640
	sub_831B5640(ctx, base);
}

__attribute__((alias("__imp__sub_831B46A8"))) PPC_WEAK_FUNC(sub_831B46A8);
PPC_FUNC_IMPL(__imp__sub_831B46A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// and r11,r3,r4
	r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// lwz r3,-2232(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2232);
	// andc r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// stw r11,-2232(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2232, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B46C8"))) PPC_WEAK_FUNC(sub_831B46C8);
PPC_FUNC_IMPL(__imp__sub_831B46C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,32
	r11.s64 = 32;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_831B46DC:
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x831b46dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831B46DC;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x831b470c
	goto loc_831B470C;
loc_831B46F0:
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r6,r7,r11
	ctx.r6.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// lbzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stbx r6,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r6.u8);
loc_831B470C:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x831b46f0
	if (!cr0.eq) goto loc_831B46F0;
	// lbz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -32);
	// li r11,0
	r11.s64 = 0;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// rlwinm r6,r8,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// stb r10,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r10.u8);
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// slw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r9,r6,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831b476c
	if (!cr0.eq) goto loc_831B476C;
loc_831B4748:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b4748
	if (cr0.eq) goto loc_831B4748;
loc_831B476C:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B4778"))) PPC_WEAK_FUNC(sub_831B4778);
PPC_FUNC_IMPL(__imp__sub_831B4778) {
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
	// bl 0x831b5b48
	sub_831B5B48(ctx, base);
	// lis r11,3
	r11.s64 = 196608;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// ori r11,r11,17405
	r11.u64 = r11.u64 | 17405;
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// addis r11,r11,39
	r11.s64 = r11.s64 + 2555904;
	// addi r11,r11,-24893
	r11.s64 = r11.s64 + -24893;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// rlwinm r3,r11,16,17,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x7FFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B47B8"))) PPC_WEAK_FUNC(sub_831B47B8);
PPC_FUNC_IMPL(__imp__sub_831B47B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// fctidz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32251
	r11.s64 = -2113601536;
	// fabs f11,f1
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfd f13,-3744(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// lfd f0,-9544(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -9544);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fsub f0,f0,f11
	f0.f64 = f0.f64 - ctx.f11.f64;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsub f10,f1,f12
	ctx.f10.f64 = ctx.f1.f64 - ctx.f12.f64;
	// fsub f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fsel f13,f10,f12,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f0,f0,f13,f1
	f0.f64 = f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// fsel f1,f11,f1,f0
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B47F8"))) PPC_WEAK_FUNC(sub_831B47F8);
PPC_FUNC_IMPL(__imp__sub_831B47F8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831b483c
	if (!cr6.eq) goto loc_831B483C;
loc_831B4810:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831b489c
	goto loc_831B489C;
loc_831B483C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831b4810
	if (cr6.eq) goto loc_831B4810;
	// lis r11,32767
	r11.s64 = 2147418112;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x831bccf8
	sub_831BCCF8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// blt 0x831b488c
	if (cr0.lt) goto loc_831B488C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x831b4898
	goto loc_831B4898;
loc_831B488C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bcb28
	sub_831BCB28(ctx, base);
loc_831B4898:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831B489C:
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

__attribute__((alias("__imp__sub_831B48B0"))) PPC_WEAK_FUNC(sub_831B48B0);
PPC_FUNC_IMPL(__imp__sub_831B48B0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x831b47f8
	sub_831B47F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B48C0"))) PPC_WEAK_FUNC(sub_831B48C0);
PPC_FUNC_IMPL(__imp__sub_831B48C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831b1438
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-16377
	r11.s64 = -1073283072;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// li r3,248
	ctx.r3.s64 = 248;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// ori r29,r11,65279
	r29.u64 = r11.u64 | 65279;
	// stfd f30,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, f30.u64);
	// stfd f31,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, f31.u64);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// lhz r11,176(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 176);
	// lhz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 184);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	cr6.compare<uint32_t>(ctx.r10.u32, 32752, xer);
	// beq cr6,0x831b4a30
	if (cr6.eq) goto loc_831B4A30;
	// rlwinm r10,r9,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	cr6.compare<uint32_t>(ctx.r10.u32, 32752, xer);
	// beq cr6,0x831b4a30
	if (cr6.eq) goto loc_831B4A30;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f28,-8872(r11)
	ctx.fpscr.disableFlushMode();
	f28.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// fcmpu cr6,f30,f28
	cr6.compare(f30.f64, f28.f64);
	// bge cr6,0x831b4934
	if (!cr6.lt) goto loc_831B4934;
	// fneg f30,f30
	f30.u64 = f30.u64 ^ 0x8000000000000000;
loc_831B4934:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f28.f64);
	// bge cr6,0x831b4940
	if (!cr6.lt) goto loc_831B4940;
	// fneg f31,f31
	f31.u64 = f31.u64 ^ 0x8000000000000000;
loc_831B4940:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x831b4950
	if (!cr6.gt) goto loc_831B4950;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// b 0x831b4954
	goto loc_831B4954;
loc_831B4950:
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	f29.f64 = f30.f64;
loc_831B4954:
	// fcmpu cr6,f29,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f29.f64, f28.f64);
	// bne cr6,0x831b4970
	if (!cr6.eq) goto loc_831B4970;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// b 0x831b4ad4
	goto loc_831B4AD4;
loc_831B4970:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// fdiv f0,f0,f29
	f0.f64 = f0.f64 / f29.f64;
	// fmul f31,f0,f31
	f31.f64 = f0.f64 * f31.f64;
	// fmul f30,f0,f30
	f30.f64 = f0.f64 * f30.f64;
	// fmul f0,f31,f31
	f0.f64 = f31.f64 * f31.f64;
	// fmadd f0,f30,f30,f0
	f0.f64 = f30.f64 * f30.f64 + f0.f64;
	// fsqrt f1,f0
	ctx.f1.f64 = sqrt(f0.f64);
	// bl 0x831bd970
	sub_831BD970(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x831bd970
	sub_831BD970(ctx, base);
	// fmul f29,f28,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = f28.f64 * ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x831bd898
	sub_831BD898(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// cmpwi cr6,r4,1024
	cr6.compare<int32_t>(ctx.r4.s32, 1024, xer);
	// ble cr6,0x831b49e4
	if (!cr6.gt) goto loc_831B49E4;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x831bd870
	sub_831BD870(ctx, base);
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x831b4a80
	goto loc_831B4A80;
loc_831B49E4:
	// cmpwi cr6,r4,-1021
	cr6.compare<int32_t>(ctx.r4.s32, -1021, xer);
	// bge cr6,0x831b4a00
	if (!cr6.lt) goto loc_831B4A00;
	// addi r4,r4,1536
	ctx.r4.s64 = ctx.r4.s64 + 1536;
	// bl 0x831bd870
	sub_831BD870(ctx, base);
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// li r3,18
	ctx.r3.s64 = 18;
	// b 0x831b4a80
	goto loc_831B4A80;
loc_831B4A00:
	// bl 0x831bd870
	sub_831BD870(ctx, base);
	// rlwinm. r11,r31,0,28,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// beq 0x831b4a24
	if (cr0.eq) goto loc_831B4A24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// b 0x831b4ad4
	goto loc_831B4AD4;
loc_831B4A24:
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x831b4a80
	goto loc_831B4A80;
loc_831B4A30:
	// rlwinm r10,r11,0,17,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r10,32752
	cr6.compare<uint32_t>(ctx.r10.u32, 32752, xer);
	// bne cr6,0x831b4a54
	if (!cr6.eq) goto loc_831B4A54;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// clrlwi. r11,r11,13
	r11.u64 = r11.u32 & 0x7FFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831b4a78
	if (!cr0.eq) goto loc_831B4A78;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831b4a78
	if (!cr6.eq) goto loc_831B4A78;
loc_831B4A54:
	// rlwinm r11,r9,0,17,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x831b4a98
	if (!cr6.eq) goto loc_831B4A98;
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// clrlwi. r9,r9,13
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831b4a78
	if (!cr0.eq) goto loc_831B4A78;
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831b4a98
	if (cr6.eq) goto loc_831B4A98;
loc_831B4A78:
	// fadd f3,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64 + f31.f64;
	// li r3,8
	ctx.r3.s64 = 8;
loc_831B4A80:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x831c18b0
	sub_831C18B0(ctx, base);
	// b 0x831b4ad4
	goto loc_831B4AD4;
loc_831B4A98:
	// cmplwi cr6,r10,32760
	cr6.compare<uint32_t>(ctx.r10.u32, 32760, xer);
	// beq cr6,0x831b4ac0
	if (cr6.eq) goto loc_831B4AC0;
	// cmplwi cr6,r11,32760
	cr6.compare<uint32_t>(r11.u32, 32760, xer);
	// beq cr6,0x831b4ac0
	if (cr6.eq) goto loc_831B4AC0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lfd f1,-824(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -824);
	// b 0x831b4ad4
	goto loc_831B4AD4;
loc_831B4AC0:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x831c1758
	sub_831C1758(ctx, base);
loc_831B4AD4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831b1484
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831B4AE8"))) PPC_WEAK_FUNC(sub_831B4AE8);
PPC_FUNC_IMPL(__imp__sub_831B4AE8) {
	PPC_FUNC_PROLOGUE();
	// li r5,24
	ctx.r5.s64 = 24;
	// b 0x831b48c0
	sub_831B48C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B4AF0"))) PPC_WEAK_FUNC(sub_831B4AF0);
PPC_FUNC_IMPL(__imp__sub_831B4AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stfd f31,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, f31.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// lis r10,-16377
	ctx.r10.s64 = -1073283072;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// ori r28,r10,65279
	r28.u64 = ctx.r10.u64 | 65279;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-2228(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2228);
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// lhz r11,160(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplwi cr6,r10,32752
	cr6.compare<uint32_t>(ctx.r10.u32, 32752, xer);
	// bne cr6,0x831b4bd0
	if (!cr6.eq) goto loc_831B4BD0;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lfd f0,-816(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -816);
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// bl 0x831bd8e8
	sub_831BD8E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x831b4ba8
	if (!cr0.gt) goto loc_831B4BA8;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x831b4b8c
	if (!cr6.gt) goto loc_831B4B8C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x831b4ba8
	if (!cr6.eq) goto loc_831B4BA8;
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, f31.u64);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x831c16d0
	sub_831C16D0(ctx, base);
	// b 0x831b4c14
	goto loc_831B4C14;
loc_831B4B8C:
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, f31.u64);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfd f1,-8872(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// bl 0x831b6ff8
	sub_831B6FF8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// b 0x831b4c04
	goto loc_831B4C04;
loc_831B4BA8:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,-3744(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// fadd f2,f31,f0
	ctx.f2.f64 = f31.f64 + f0.f64;
	// stfd f2,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.f2.u64);
	// bl 0x831c17d8
	sub_831C17D8(ctx, base);
	// b 0x831b4c14
	goto loc_831B4C14;
loc_831B4BD0:
	// bl 0x831c1a50
	sub_831C1A50(ctx, base);
	// fsub f31,f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = f31.f64 - ctx.f1.f64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfd f1,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// stfd f31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f31.u64);
	// lfd f0,-8872(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bne cr6,0x831b4c04
	if (!cr6.eq) goto loc_831B4C04;
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r10,r29,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8000;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// lfd f31,80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_831B4C04:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_831B4C14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831B4C20"))) PPC_WEAK_FUNC(sub_831B4C20);
PPC_FUNC_IMPL(__imp__sub_831B4C20) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ce9d0
	sub_831CE9D0(ctx, base);
	// lis r12,-414
	r12.s64 = -27131904;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,152
	r11.s64 = 9961472;
	// ori r12,r12,20001
	r12.u64 = r12.u64 | 20001;
	// ori r11,r11,38528
	r11.u64 = r11.u64 | 38528;
	// rldicr r12,r12,32,31
	r12.u64 = __builtin_rotateleft64(r12.u64, 32) & 0xFFFFFFFF00000000;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// oris r12,r12,10945
	r12.u64 = r12.u64 | 717291520;
	// ori r12,r12,32768
	r12.u64 = r12.u64 | 32768;
	// add r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 + r12.u64;
	// divdu r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 / r11.u64;
	// beq cr6,0x831b4c70
	if (cr6.eq) goto loc_831B4C70;
	// std r3,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r3.u64);
loc_831B4C70:
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

__attribute__((alias("__imp__sub_831B4C88"))) PPC_WEAK_FUNC(sub_831B4C88);
PPC_FUNC_IMPL(__imp__sub_831B4C88) {
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
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x831b4cb0
	if (cr6.eq) goto loc_831B4CB0;
	// stw r26,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r26.u32);
loc_831B4CB0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x831b4ce4
	if (!cr6.eq) goto loc_831B4CE4;
loc_831B4CB8:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831b4f54
	goto loc_831B4F54;
loc_831B4CE4:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x831b4cfc
	if (cr6.eq) goto loc_831B4CFC;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// blt cr6,0x831b4cb8
	if (cr6.lt) goto loc_831B4CB8;
	// cmpwi cr6,r27,36
	cr6.compare<int32_t>(r27.s32, 36, xer);
	// bgt cr6,0x831b4cb8
	if (cr6.gt) goto loc_831B4CB8;
loc_831B4CFC:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lbz r31,0(r26)
	r31.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// addi r29,r26,1
	r29.s64 = r26.s64 + 1;
	// addi r30,r11,-544
	r30.s64 = r11.s64 + -544;
	// lwz r10,-544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -544);
loc_831B4D14:
	// lwz r11,172(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x831b4d38
	if (!cr6.gt) goto loc_831B4D38;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x831b98a8
	sub_831B98A8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x831b4d48
	goto loc_831B4D48;
loc_831B4D38:
	// lwz r11,200(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// rlwinm r9,r31,1,23,30
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r9,r11
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
loc_831B4D48:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831b4d5c
	if (cr6.eq) goto loc_831B4D5C;
	// lbz r31,0(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x831b4d14
	goto loc_831B4D14;
loc_831B4D5C:
	// extsb r11,r31
	r11.s64 = r31.s8;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// bne cr6,0x831b4d70
	if (!cr6.eq) goto loc_831B4D70;
	// ori r25,r25,2
	r25.u64 = r25.u64 | 2;
	// b 0x831b4d78
	goto loc_831B4D78;
loc_831B4D70:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// bne cr6,0x831b4d80
	if (!cr6.eq) goto loc_831B4D80;
loc_831B4D78:
	// lbz r31,0(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_831B4D80:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x831b4dc0
	if (!cr6.eq) goto loc_831B4DC0;
	// extsb r11,r31
	r11.s64 = r31.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// beq cr6,0x831b4d9c
	if (cr6.eq) goto loc_831B4D9C;
	// li r27,10
	r27.s64 = 10;
	// b 0x831b4df8
	goto loc_831B4DF8;
loc_831B4D9C:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// beq cr6,0x831b4dbc
	if (cr6.eq) goto loc_831B4DBC;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// beq cr6,0x831b4dbc
	if (cr6.eq) goto loc_831B4DBC;
	// li r27,8
	r27.s64 = 8;
	// b 0x831b4df8
	goto loc_831B4DF8;
loc_831B4DBC:
	// li r27,16
	r27.s64 = 16;
loc_831B4DC0:
	// cmpwi cr6,r27,16
	cr6.compare<int32_t>(r27.s32, 16, xer);
	// bne cr6,0x831b4df8
	if (!cr6.eq) goto loc_831B4DF8;
	// extsb r11,r31
	r11.s64 = r31.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bne cr6,0x831b4df8
	if (!cr6.eq) goto loc_831B4DF8;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// beq cr6,0x831b4dec
	if (cr6.eq) goto loc_831B4DEC;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x831b4df8
	if (!cr6.eq) goto loc_831B4DF8;
loc_831B4DEC:
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// lbz r31,1(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 1);
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_831B4DF8:
	// extsw r9,r27
	ctx.r9.s64 = r27.s32;
	// lwz r7,200(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// li r11,-1
	r11.s64 = -1;
	// tdllei r9,0
	// divdu r8,r11,r9
	ctx.r8.u64 = r11.u64 / ctx.r9.u64;
loc_831B4E0C:
	// rlwinm r11,r31,1,23,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r11,r7
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r7.u32);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b4e28
	if (cr0.eq) goto loc_831B4E28;
	// extsb r11,r31
	r11.s64 = r31.s8;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// b 0x831b4e50
	goto loc_831B4E50;
loc_831B4E28:
	// andi. r11,r11,259
	r11.u64 = r11.u64 & 259;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b4e94
	if (cr0.eq) goto loc_831B4E94;
	// extsb r11,r31
	r11.s64 = r31.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x831b4e4c
	if (cr6.lt) goto loc_831B4E4C;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bgt cr6,0x831b4e4c
	if (cr6.gt) goto loc_831B4E4C;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
loc_831B4E4C:
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
loc_831B4E50:
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x831b4e94
	if (!cr6.lt) goto loc_831B4E94;
	// ori r25,r25,8
	r25.u64 = r25.u64 | 8;
	// cmpld cr6,r28,r8
	cr6.compare<uint64_t>(r28.u64, ctx.r8.u64, xer);
	// blt cr6,0x831b4eb4
	if (cr6.lt) goto loc_831B4EB4;
	// bne cr6,0x831b4e88
	if (!cr6.eq) goto loc_831B4E88;
	// li r10,-1
	ctx.r10.s64 = -1;
	// clrldi r6,r11,32
	ctx.r6.u64 = r11.u64 & 0xFFFFFFFF;
	// divdu r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 / ctx.r9.u64;
	// tdllei r9,0
	// mulld r5,r5,r9
	ctx.r5.s64 = ctx.r5.s64 * ctx.r9.s64;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmpld cr6,r6,r10
	cr6.compare<uint64_t>(ctx.r6.u64, ctx.r10.u64, xer);
	// ble cr6,0x831b4eb4
	if (!cr6.gt) goto loc_831B4EB4;
loc_831B4E88:
	// ori r25,r25,4
	r25.u64 = r25.u64 | 4;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x831b4ec0
	if (!cr6.eq) goto loc_831B4EC0;
loc_831B4E94:
	// rlwinm. r11,r25,0,28,28
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// bne 0x831b4ecc
	if (!cr0.eq) goto loc_831B4ECC;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x831b4eac
	if (cr6.eq) goto loc_831B4EAC;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_831B4EAC:
	// li r28,0
	r28.s64 = 0;
	// b 0x831b4f38
	goto loc_831B4F38;
loc_831B4EB4:
	// mulld r10,r9,r28
	ctx.r10.s64 = ctx.r9.s64 * r28.s64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + r11.u64;
loc_831B4EC0:
	// lbz r31,0(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x831b4e0c
	goto loc_831B4E0C;
loc_831B4ECC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm. r11,r25,0,29,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrldi r31,r10,1
	r31.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// rldicr r30,r9,63,63
	r30.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// bne 0x831b4f0c
	if (!cr0.eq) goto loc_831B4F0C;
	// clrlwi. r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831b4f38
	if (!cr0.eq) goto loc_831B4F38;
	// rlwinm. r11,r25,0,30,30
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b4efc
	if (cr0.eq) goto loc_831B4EFC;
	// cmpld cr6,r28,r30
	cr6.compare<uint64_t>(r28.u64, r30.u64, xer);
	// bgt cr6,0x831b4f0c
	if (cr6.gt) goto loc_831B4F0C;
loc_831B4EFC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831b4f38
	if (!cr6.eq) goto loc_831B4F38;
	// cmpld cr6,r28,r31
	cr6.compare<uint64_t>(r28.u64, r31.u64, xer);
	// ble cr6,0x831b4f38
	if (!cr6.gt) goto loc_831B4F38;
loc_831B4F0C:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,34
	r11.s64 = 34;
	// clrlwi. r10,r25,31
	ctx.r10.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beq 0x831b4f28
	if (cr0.eq) goto loc_831B4F28;
	// li r28,-1
	r28.s64 = -1;
	// b 0x831b4f38
	goto loc_831B4F38;
loc_831B4F28:
	// rlwinm. r11,r25,0,30,30
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r30
	r28.u64 = r30.u64;
	// bne 0x831b4f38
	if (!cr0.eq) goto loc_831B4F38;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_831B4F38:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x831b4f44
	if (cr6.eq) goto loc_831B4F44;
	// stw r29,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r29.u32);
loc_831B4F44:
	// rlwinm. r11,r25,0,30,30
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b4f50
	if (cr0.eq) goto loc_831B4F50;
	// neg r28,r28
	r28.s64 = -r28.s64;
loc_831B4F50:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_831B4F54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_831B4F60"))) PPC_WEAK_FUNC(sub_831B4F60);
PPC_FUNC_IMPL(__imp__sub_831B4F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-544
	ctx.r3.s64 = ctx.r10.s64 + -544;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x831b4c88
	sub_831B4C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B4F80"))) PPC_WEAK_FUNC(sub_831B4F80);
PPC_FUNC_IMPL(__imp__sub_831B4F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-544
	ctx.r3.s64 = ctx.r10.s64 + -544;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x831b4c88
	sub_831B4C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B4FA0"))) PPC_WEAK_FUNC(sub_831B4FA0);
PPC_FUNC_IMPL(__imp__sub_831B4FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_831B4FAC:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// beq 0x831b4fcc
	if (cr0.eq) goto loc_831B4FCC;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x831b4fac
	if (!cr0.eq) goto loc_831B4FAC;
loc_831B4FCC:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addic. r10,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831B4FEC:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x831b4fec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831B4FEC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B5000"))) PPC_WEAK_FUNC(sub_831B5000);
PPC_FUNC_IMPL(__imp__sub_831B5000) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831b5050
	if (!cr6.eq) goto loc_831B5050;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f1,-8872(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// b 0x831b50e0
	goto loc_831B50E0;
loc_831B5050:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-544
	r30.s64 = r11.s64 + -544;
	// lwz r11,-544(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -544);
loc_831B505C:
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x831b5080
	if (!cr6.gt) goto loc_831B5080;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x831b98a8
	sub_831B98A8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x831b5094
	goto loc_831B5094;
loc_831B5080:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lwz r9,200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r10,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
loc_831B5094:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831b50a4
	if (cr6.eq) goto loc_831B50A4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x831b505c
	goto loc_831B505C;
loc_831B50A4:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_831B50A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831b50a8
	if (!cr6.eq) goto loc_831B50A8;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831bf840
	sub_831BF840(ctx, base);
	// lfd f1,16(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
loc_831B50E0:
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

__attribute__((alias("__imp__sub_831B50F8"))) PPC_WEAK_FUNC(sub_831B50F8);
PPC_FUNC_IMPL(__imp__sub_831B50F8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831b5000
	sub_831B5000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B5100"))) PPC_WEAK_FUNC(sub_831B5100);
PPC_FUNC_IMPL(__imp__sub_831B5100) {
	PPC_FUNC_PROLOGUE();
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831b2fc0
	sub_831B2FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B5110"))) PPC_WEAK_FUNC(sub_831B5110);
PPC_FUNC_IMPL(__imp__sub_831B5110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,97
	cr6.compare<int32_t>(ctx.r3.s32, 97, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r3,122
	cr6.compare<int32_t>(ctx.r3.s32, 122, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B5128"))) PPC_WEAK_FUNC(sub_831B5128);
PPC_FUNC_IMPL(__imp__sub_831B5128) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831b5178
	if (!cr6.eq) goto loc_831B5178;
loc_831B514C:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831b5280
	goto loc_831B5280;
loc_831B5178:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x831b5188
	if (cr6.eq) goto loc_831B5188;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831b514c
	if (cr6.eq) goto loc_831B514C;
loc_831B5188:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r9,66
	ctx.r9.s64 = 66;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// ble cr6,0x831b51b4
	if (!cr6.gt) goto loc_831B51B4;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// b 0x831b51b8
	goto loc_831B51B8;
loc_831B51B4:
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_831B51B8:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831b51e4
	if (!cr6.eq) goto loc_831B51E4;
loc_831B51DC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x831b5280
	goto loc_831B5280;
loc_831B51E4:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x831b525c
	if (cr6.lt) goto loc_831B525C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// blt 0x831b5218
	if (cr0.lt) goto loc_831B5218;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x831b522c
	goto loc_831B522C;
loc_831B5218:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bcb28
	sub_831BCB28(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831b525c
	if (cr6.eq) goto loc_831B525C;
loc_831B522C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// blt 0x831b5248
	if (cr0.lt) goto loc_831B5248;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// b 0x831b51dc
	goto loc_831B51DC;
loc_831B5248:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bcb28
	sub_831BCB28(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831b51dc
	if (!cr6.eq) goto loc_831B51DC;
loc_831B525C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// cntlzw r11,r10
	r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// sth r30,-2(r9)
	PPC_STORE_U16(ctx.r9.u32 + -2, r30.u16);
	// addi r3,r11,-2
	ctx.r3.s64 = r11.s64 + -2;
loc_831B5280:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831B5288"))) PPC_WEAK_FUNC(sub_831B5288);
PPC_FUNC_IMPL(__imp__sub_831B5288) {
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
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lis r11,-31972
	r11.s64 = -2095316992;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-9520
	ctx.r3.s64 = r11.s64 + -9520;
	// bl 0x831b5128
	sub_831B5128(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831b52c0
	if (!cr0.lt) goto loc_831B52C0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831B52C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B52D0"))) PPC_WEAK_FUNC(sub_831B52D0);
PPC_FUNC_IMPL(__imp__sub_831B52D0) {
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
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831b52fc
	if (!cr6.eq) goto loc_831B52FC;
loc_831B52F0:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// b 0x831b5348
	goto loc_831B5348;
loc_831B52FC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831b52f0
	if (cr6.eq) goto loc_831B52F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831b52f0
	if (cr6.eq) goto loc_831B52F0;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r11,-31972
	r11.s64 = -2095316992;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,9248
	ctx.r3.s64 = r11.s64 + 9248;
	// bl 0x831b5128
	sub_831B5128(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831b5338
	if (!cr0.lt) goto loc_831B5338;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
loc_831B5338:
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x831b5368
	if (!cr6.eq) goto loc_831B5368;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,34
	r11.s64 = 34;
loc_831B5348:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831B5368:
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

__attribute__((alias("__imp__sub_831B5380"))) PPC_WEAK_FUNC(sub_831B5380);
PPC_FUNC_IMPL(__imp__sub_831B5380) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x831b52d0
	sub_831B52D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B5390"))) PPC_WEAK_FUNC(sub_831B5390);
PPC_FUNC_IMPL(__imp__sub_831B5390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r10,r11
	ctx.r10.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b5404
	if (cr0.eq) goto loc_831B5404;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_831B53AC:
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831b53e4
	if (cr6.eq) goto loc_831B53E4;
loc_831B53B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b53e4
	if (cr0.eq) goto loc_831B53E4;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// subf. r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831b53e4
	if (!cr0.eq) goto loc_831B53E4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831b53b8
	if (!cr6.eq) goto loc_831B53B8;
loc_831B53E4:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r10,r11
	ctx.r10.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831b53ac
	if (!cr0.eq) goto loc_831B53AC;
loc_831B5404:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B5410"))) PPC_WEAK_FUNC(sub_831B5410);
PPC_FUNC_IMPL(__imp__sub_831B5410) {
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
	// bl 0x831bbb28
	sub_831BBB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831bbae0
	sub_831BBAE0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r3,255
	ctx.r3.s64 = 255;
	// lwz r11,-2224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -2224);
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

__attribute__((alias("__imp__sub_831B5458"))) PPC_WEAK_FUNC(sub_831B5458);
PPC_FUNC_IMPL(__imp__sub_831B5458) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324b7fc
	__imp__KeBugCheck(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B5460"))) PPC_WEAK_FUNC(sub_831B5460);
PPC_FUNC_IMPL(__imp__sub_831B5460) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x831c31d0
	sub_831C31D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B5468"))) PPC_WEAK_FUNC(sub_831B5468);
PPC_FUNC_IMPL(__imp__sub_831B5468) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x831c3070
	sub_831C3070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B5470"))) PPC_WEAK_FUNC(sub_831B5470);
PPC_FUNC_IMPL(__imp__sub_831B5470) {
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
	// b 0x831b54a8
	goto loc_831B54A8;
loc_831B5490:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831b54a4
	if (cr6.eq) goto loc_831B54A4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831B54A4:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_831B54A8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x831b5490
	if (cr6.lt) goto loc_831B5490;
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

__attribute__((alias("__imp__sub_831B54D0"))) PPC_WEAK_FUNC(sub_831B54D0);
PPC_FUNC_IMPL(__imp__sub_831B54D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r28,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r28.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x831c31d0
	sub_831C31D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r11,-14420(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -14420);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x831b55a8
	if (cr6.eq) goto loc_831B55A8;
	// lis r9,-31932
	ctx.r9.s64 = -2092695552;
	// lwz r11,-14424(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14424);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x831b5520
	if (!cr6.eq) goto loc_831B5520;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8324b7fc
	__imp__KeBugCheck(ctx, base);
loc_831B5520:
	// lis r8,-31932
	ctx.r8.s64 = -2092695552;
	// li r11,1
	r11.s64 = 1;
	// stw r11,-14424(r9)
	PPC_STORE_U32(ctx.r9.u32 + -14424, r11.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stb r28,-14428(r8)
	PPC_STORE_U8(ctx.r8.u32 + -14428, r28.u8);
	// bne cr6,0x831b5594
	if (!cr6.eq) goto loc_831B5594;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// lwz r30,-10192(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + -10192);
	// lwz r29,-10188(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10188);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x831b5580
	if (cr0.eq) goto loc_831B5580;
loc_831B5554:
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x831b5580
	if (cr6.lt) goto loc_831B5580;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831b5578
	if (cr6.eq) goto loc_831B5578;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831B5578:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831b5554
	goto loc_831B5554;
loc_831B5580:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r4,r11,5028
	ctx.r4.s64 = r11.s64 + 5028;
	// addi r3,r10,5016
	ctx.r3.s64 = ctx.r10.s64 + 5016;
	// bl 0x831b5470
	sub_831B5470(ctx, base);
loc_831B5594:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r4,r11,5036
	ctx.r4.s64 = r11.s64 + 5036;
	// addi r3,r10,5032
	ctx.r3.s64 = ctx.r10.s64 + 5032;
	// bl 0x831b5470
	sub_831B5470(ctx, base);
loc_831B55A8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x831b55f0
	sub_831B55F0(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831b55c8
	if (!cr6.eq) goto loc_831B55C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8324b7fc
	__imp__KeBugCheck(ctx, base);
loc_831B55C8:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831B55D0"))) PPC_WEAK_FUNC(sub_831B55D0);
PPC_FUNC_IMPL(__imp__sub_831B55D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,164(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// b 0x831b5608
	goto loc_831B5608;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831B5608:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x831b5618
	if (cr6.eq) goto loc_831B5618;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x831c3070
	sub_831C3070(ctx, base);
loc_831B5618:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B55F0"))) PPC_WEAK_FUNC(sub_831B55F0);
PPC_FUNC_IMPL(__imp__sub_831B55F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x831b5618
	if (cr6.eq) goto loc_831B5618;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x831c3070
	sub_831C3070(ctx, base);
loc_831B5618:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B5630"))) PPC_WEAK_FUNC(sub_831B5630);
PPC_FUNC_IMPL(__imp__sub_831B5630) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831b54d0
	sub_831B54D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B5640"))) PPC_WEAK_FUNC(sub_831B5640);
PPC_FUNC_IMPL(__imp__sub_831B5640) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x831b54d0
	sub_831B54D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B5650"))) PPC_WEAK_FUNC(sub_831B5650);
PPC_FUNC_IMPL(__imp__sub_831B5650) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831b54d0
	sub_831B54D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B5660"))) PPC_WEAK_FUNC(sub_831B5660);
PPC_FUNC_IMPL(__imp__sub_831B5660) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831c3320
	sub_831C3320(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831c3230
	sub_831C3230(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca48
	sub_831BCA48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bbb58
	sub_831BBB58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bf820
	sub_831BF820(ctx, base);
	// lis r11,-31973
	r11.s64 = -2095382528;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r11,r11,22080
	r11.s64 = r11.s64 + 22080;
	// stw r11,-2224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2224, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B56C0"))) PPC_WEAK_FUNC(sub_831B56C0);
PPC_FUNC_IMPL(__imp__sub_831B56C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-2216
	r11.s64 = r11.s64 + -2216;
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 32);
	// fmul f5,f0,f1
	ctx.f5.f64 = f0.f64 * ctx.f1.f64;
	// lfd f13,40(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 40);
	// lfd f12,48(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// lfd f10,64(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// lfd f11,72(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 72);
	// lfd f9,96(r11)
	ctx.f9.u64 = PPC_LOAD_U64(r11.u32 + 96);
	// lfd f8,88(r11)
	ctx.f8.u64 = PPC_LOAD_U64(r11.u32 + 88);
	// lfd f7,56(r11)
	ctx.f7.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// lfd f6,80(r11)
	ctx.f6.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// lfs f0,108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 108);
	f0.f64 = double(temp.f32);
	// fctid f5,f5
	ctx.f5.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// fnmsub f13,f13,f5,f1
	ctx.f13.f64 = -(ctx.f13.f64 * ctx.f5.f64 - ctx.f1.f64);
	// fctiwz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f4.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addic. r10,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// fnmsub f13,f12,f5,f13
	ctx.f13.f64 = -(ctx.f12.f64 * ctx.f5.f64 - ctx.f13.f64);
	// fmul f12,f13,f13
	ctx.f12.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmadd f11,f11,f12,f10
	ctx.f11.f64 = ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64;
	// fmadd f10,f9,f12,f8
	ctx.f10.f64 = ctx.f9.f64 * ctx.f12.f64 + ctx.f8.f64;
	// fmadd f11,f11,f12,f7
	ctx.f11.f64 = ctx.f11.f64 * ctx.f12.f64 + ctx.f7.f64;
	// fmadd f12,f10,f12,f6
	ctx.f12.f64 = ctx.f10.f64 * ctx.f12.f64 + ctx.f6.f64;
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fsub f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f0,f13,f0
	f0.f64 = ctx.f13.f64 + f0.f64;
	// beq 0x831b5778
	if (cr0.eq) goto loc_831B5778;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// andi. r8,r8,32783
	ctx.r8.u64 = ctx.r8.u64 & 32783;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// rlwinm r9,r9,28,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x7FF;
	// addi r9,r9,-1022
	ctx.r9.s64 = ctx.r9.s64 + -1022;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,1022
	ctx.r10.s64 = ctx.r10.s64 + 1022;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// sth r10,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r10.u16);
	// lfd f0,-16(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_831B5778:
	// lfd f13,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// fsub f11,f1,f13
	ctx.f11.f64 = ctx.f1.f64 - ctx.f13.f64;
	// lfd f13,8(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// lfd f12,16(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// fsub f10,f13,f1
	ctx.f10.f64 = ctx.f13.f64 - ctx.f1.f64;
	// lfs f13,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f11,f12,f0
	f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : f0.f64;
	// fsel f1,f10,f13,f0
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B57A0"))) PPC_WEAK_FUNC(sub_831B57A0);
PPC_FUNC_IMPL(__imp__sub_831B57A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r11,-2216
	r30.s64 = r11.s64 + -2216;
	// lfd f0,32(r30)
	f0.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// fmul f1,f0,f31
	ctx.f1.f64 = f0.f64 * f31.f64;
	// bl 0x831c1a50
	sub_831C1A50(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lfd f0,40(r30)
	f0.u64 = PPC_LOAD_U64(r30.u32 + 40);
	// lfd f13,48(r30)
	ctx.f13.u64 = PPC_LOAD_U64(r30.u32 + 48);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfd f11,64(r30)
	ctx.f11.u64 = PPC_LOAD_U64(r30.u32 + 64);
	// lfd f12,72(r30)
	ctx.f12.u64 = PPC_LOAD_U64(r30.u32 + 72);
	// lfd f10,96(r30)
	ctx.f10.u64 = PPC_LOAD_U64(r30.u32 + 96);
	// lfd f9,88(r30)
	ctx.f9.u64 = PPC_LOAD_U64(r30.u32 + 88);
	// lfd f8,56(r30)
	ctx.f8.u64 = PPC_LOAD_U64(r30.u32 + 56);
	// lfd f7,80(r30)
	ctx.f7.u64 = PPC_LOAD_U64(r30.u32 + 80);
	// lfd f6,-6088(r11)
	ctx.f6.u64 = PPC_LOAD_U64(r11.u32 + -6088);
	// fnmsub f0,f0,f30,f31
	f0.f64 = -(f0.f64 * f30.f64 - f31.f64);
	// fnmsub f0,f13,f30,f0
	f0.f64 = -(ctx.f13.f64 * f30.f64 - f0.f64);
	// fmul f13,f0,f0
	ctx.f13.f64 = f0.f64 * f0.f64;
	// fmadd f12,f12,f13,f11
	ctx.f12.f64 = ctx.f12.f64 * ctx.f13.f64 + ctx.f11.f64;
	// fmadd f11,f10,f13,f9
	ctx.f11.f64 = ctx.f10.f64 * ctx.f13.f64 + ctx.f9.f64;
	// fmadd f12,f12,f13,f8
	ctx.f12.f64 = ctx.f12.f64 * ctx.f13.f64 + ctx.f8.f64;
	// fmadd f13,f11,f13,f7
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64 + ctx.f7.f64;
	// fmul f0,f12,f0
	f0.f64 = ctx.f12.f64 * f0.f64;
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - f0.f64;
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// fadd f31,f0,f6
	f31.f64 = f0.f64 + ctx.f6.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x831bd898
	sub_831BD898(ctx, base);
	// fctiwz f0,f30
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f30.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f30.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-40(r1)
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

__attribute__((alias("__imp__sub_831B5880"))) PPC_WEAK_FUNC(sub_831B5880);
PPC_FUNC_IMPL(__imp__sub_831B5880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCRegister r0{};
	uint32_t ea{};
	// mr. r0,r5
	r0.u64 = ctx.r5.u64;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// ble 0x831b58c4
	if (!cr0.gt) goto loc_831B58C4;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr1,r8,0
	cr1.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subfc. r3,r7,r8
	xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdnzf 4*cr1+eq,0x831b58a8
	--ctr.u64;
	if (ctr.u32 != 0 && !cr1.eq) goto loc_831B58A8;
	// blr 
	return;
loc_831B58A8:
	// bnelr 
	if (!cr0.eq) return;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// cmpwi cr1,r8,0
	cr1.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subfc. r3,r7,r8
	xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdnzf 4*cr1+eq,0x831b58a8
	--ctr.u64;
	if (ctr.u32 != 0 && !cr1.eq) goto loc_831B58A8;
	// blr 
	return;
loc_831B58C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B58D0"))) PPC_WEAK_FUNC(sub_831B58D0);
PPC_FUNC_IMPL(__imp__sub_831B58D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	uint32_t ea{};
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x831b58f4
	if (cr0.eq) goto loc_831B58F4;
loc_831B58DC:
	// cmpwi cr1,r6,0
	cr1.compare<int32_t>(ctx.r6.s32, 0, xer);
	// cmpw r6,r4
	cr0.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// beq cr1,0x831b5904
	if (cr1.eq) goto loc_831B5904;
	// beq 0x831b5908
	if (cr0.eq) goto loc_831B5908;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x831b58dc
	goto loc_831B58DC;
loc_831B58F4:
	// cmpwi r6,0
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x831b5908
	if (cr0.eq) goto loc_831B5908;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x831b58f4
	goto loc_831B58F4;
loc_831B5904:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B5908:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B5918"))) PPC_WEAK_FUNC(sub_831B5918);
PPC_FUNC_IMPL(__imp__sub_831B5918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831b5944
	goto loc_831B5944;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_831B5944:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B5960"))) PPC_WEAK_FUNC(sub_831B5960);
PPC_FUNC_IMPL(__imp__sub_831B5960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// lis r3,-31973
	ctx.r3.s64 = -2095382528;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,22848
	ctx.r3.s64 = ctx.r3.s64 + 22848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B5980"))) PPC_WEAK_FUNC(sub_831B5980);
PPC_FUNC_IMPL(__imp__sub_831B5980) {
	PPC_FUNC_PROLOGUE();
	// b 0x8324b87c
	__imp__KeTlsAlloc(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B5988"))) PPC_WEAK_FUNC(sub_831B5988);
PPC_FUNC_IMPL(__imp__sub_831B5988) {
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
	// lis r30,-31946
	r30.s64 = -2093613056;
	// lwz r3,-2088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -2088);
	// bl 0x8324b85c
	__imp__KeTlsGetValue(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x831b59c4
	if (!cr0.eq) goto loc_831B59C4;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r3,-2088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -2088);
	// lwz r4,-14400(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -14400);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8324b86c
	__imp__KeTlsSetValue(ctx, base);
loc_831B59C4:
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

__attribute__((alias("__imp__sub_831B59E0"))) PPC_WEAK_FUNC(sub_831B59E0);
PPC_FUNC_IMPL(__imp__sub_831B59E0) {
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
	// lis r31,-31946
	r31.s64 = -2093613056;
	// li r30,-1
	r30.s64 = -1;
	// lwz r3,-2092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -2092);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831b5a20
	if (cr6.eq) goto loc_831B5A20;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r11,-14392(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -14392);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r11,-2092(r31)
	PPC_STORE_U32(r31.u32 + -2092, r11.u32);
loc_831B5A20:
	// lis r31,-31946
	r31.s64 = -2093613056;
	// lwz r3,-2088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -2088);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831b5a3c
	if (cr6.eq) goto loc_831B5A3C;
	// bl 0x8324b88c
	__imp__KeTlsFree(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r11,-2088(r31)
	PPC_STORE_U32(r31.u32 + -2088, r11.u32);
loc_831B5A3C:
	// bl 0x831c3000
	sub_831C3000(ctx, base);
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

__attribute__((alias("__imp__sub_831B5A58"))) PPC_WEAK_FUNC(sub_831B5A58);
PPC_FUNC_IMPL(__imp__sub_831B5A58) {
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
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// lis r30,-31946
	r30.s64 = -2093613056;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r31,-2092(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -2092);
	// bl 0x831b5988
	sub_831B5988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x831b5b24
	if (!cr0.eq) goto loc_831B5B24;
	// lis r29,-31932
	r29.s64 = -2092695552;
	// lwz r3,-2092(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -2092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,-14396(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -14396);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b5b30
	if (cr0.eq) goto loc_831B5B30;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831b89d8
	sub_831B89D8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// lwz r3,-2092(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -2092);
	// lwz r11,-14396(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -14396);
	// beq 0x831b5b14
	if (cr0.eq) goto loc_831B5B14;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b5b08
	if (cr0.eq) goto loc_831B5B08;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x831cca90
	sub_831CCA90(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x831b5b30
	goto loc_831B5B30;
loc_831B5B08:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b4588
	sub_831B4588(ctx, base);
	// b 0x831b5b2c
	goto loc_831B5B2C;
loc_831B5B14:
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x831b5b30
	goto loc_831B5B30;
loc_831B5B24:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(r31.u32, 1, xer);
	// bne cr6,0x831b5b30
	if (!cr6.eq) goto loc_831B5B30;
loc_831B5B2C:
	// li r31,0
	r31.s64 = 0;
loc_831B5B30:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bd5600
	sub_82BD5600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831B5B48"))) PPC_WEAK_FUNC(sub_831B5B48);
PPC_FUNC_IMPL(__imp__sub_831B5B48) {
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
	// bl 0x831b5a58
	sub_831B5A58(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x831b5b6c
	if (!cr0.eq) goto loc_831B5B6C;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x831b5410
	sub_831B5410(ctx, base);
loc_831B5B6C:
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

__attribute__((alias("__imp__sub_831B5B88"))) PPC_WEAK_FUNC(sub_831B5B88);
PPC_FUNC_IMPL(__imp__sub_831B5B88) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831b5c24
	if (cr6.eq) goto loc_831B5C24;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831b5bb4
	if (cr6.eq) goto loc_831B5BB4;
	// bl 0x831b4588
	sub_831B4588(ctx, base);
loc_831B5BB4:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831b5bc4
	if (cr6.eq) goto loc_831B5BC4;
	// bl 0x831b4588
	sub_831B4588(ctx, base);
loc_831B5BC4:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831b5bd4
	if (cr6.eq) goto loc_831B5BD4;
	// bl 0x831b4588
	sub_831B4588(ctx, base);
loc_831B5BD4:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831b5be4
	if (cr6.eq) goto loc_831B5BE4;
	// bl 0x831b4588
	sub_831B4588(ctx, base);
loc_831B5BE4:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831b5bf4
	if (cr6.eq) goto loc_831B5BF4;
	// bl 0x831b4588
	sub_831B4588(ctx, base);
loc_831B5BF4:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831b5c04
	if (cr6.eq) goto loc_831B5C04;
	// bl 0x831b4588
	sub_831B4588(ctx, base);
loc_831B5C04:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x831b5c1c
	if (cr6.eq) goto loc_831B5C1C;
	// bl 0x831b4588
	sub_831B4588(ctx, base);
loc_831B5C1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b4588
	sub_831B4588(ctx, base);
loc_831B5C24:
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

__attribute__((alias("__imp__sub_831B5C38"))) PPC_WEAK_FUNC(sub_831B5C38);
PPC_FUNC_IMPL(__imp__sub_831B5C38) {
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
	// lis r30,-31946
	r30.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r29,-31946
	r29.s64 = -2093613056;
	// lwz r11,-2092(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -2092);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x831b5cb4
	if (cr6.eq) goto loc_831B5CB4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831b5c94
	if (!cr6.eq) goto loc_831B5C94;
	// lwz r3,-2088(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -2088);
	// bl 0x8324b85c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831b5c94
	if (cr0.eq) goto loc_831B5C94;
	// lwz r3,-2088(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -2088);
	// lwz r31,-2092(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -2092);
	// bl 0x8324b85c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_831B5C94:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r3,-2092(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -2092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-14396(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -14396);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b5b88
	sub_831B5B88(ctx, base);
loc_831B5CB4:
	// lwz r3,-2088(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -2088);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831b5cc8
	if (cr6.eq) goto loc_831B5CC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8324b86c
	__imp__KeTlsSetValue(ctx, base);
loc_831B5CC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831B5CD0"))) PPC_WEAK_FUNC(sub_831B5CD0);
PPC_FUNC_IMPL(__imp__sub_831B5CD0) {
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
	// lis r30,-31932
	r30.s64 = -2092695552;
	// lis r11,-31973
	r11.s64 = -2095382528;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// addi r11,r11,22912
	r11.s64 = r11.s64 + 22912;
	// lis r7,-31932
	ctx.r7.s64 = -2092695552;
	// lis r31,-31932
	r31.s64 = -2092695552;
	// stw r11,-14404(r30)
	PPC_STORE_U32(r30.u32 + -14404, r11.u32);
	// lis r29,-31932
	r29.s64 = -2092695552;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// addi r10,r10,-18340
	ctx.r10.s64 = ctx.r10.s64 + -18340;
	// addi r9,r9,-18324
	ctx.r9.s64 = ctx.r9.s64 + -18324;
	// addi r11,r8,-18292
	r11.s64 = ctx.r8.s64 + -18292;
	// stw r10,-14400(r31)
	PPC_STORE_U32(r31.u32 + -14400, ctx.r10.u32);
	// stw r9,-14396(r29)
	PPC_STORE_U32(r29.u32 + -14396, ctx.r9.u32);
	// stw r11,-14392(r7)
	PPC_STORE_U32(ctx.r7.u32 + -14392, r11.u32);
	// bl 0x8324b87c
	__imp__KeTlsAlloc(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,-2088(r11)
	PPC_STORE_U32(r11.u32 + -2088, ctx.r3.u32);
	// beq cr6,0x831b5df4
	if (cr6.eq) goto loc_831B5DF4;
	// lwz r4,-14400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -14400);
	// bl 0x8324b86c
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b5df4
	if (cr0.eq) goto loc_831B5DF4;
	// bl 0x831b5660
	sub_831B5660(ctx, base);
	// bl 0x831c2f80
	sub_831C2F80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b5df0
	if (cr0.eq) goto loc_831B5DF0;
	// lis r11,-31973
	r11.s64 = -2095382528;
	// lwz r10,-14404(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -14404);
	// addi r3,r11,23432
	ctx.r3.s64 = r11.s64 + 23432;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r30,-31946
	r30.s64 = -2093613056;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,-2092(r30)
	PPC_STORE_U32(r30.u32 + -2092, ctx.r3.u32);
	// beq cr6,0x831b5df0
	if (cr6.eq) goto loc_831B5DF0;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831b89d8
	sub_831B89D8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x831b5df0
	if (cr0.eq) goto loc_831B5DF0;
	// lwz r3,-2092(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -2092);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,-14396(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -14396);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b5df0
	if (cr0.eq) goto loc_831B5DF0;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x831cca90
	sub_831CCA90(ctx, base);
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r11,-31972
	r11.s64 = -2095316992;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addi r10,r10,-14416
	ctx.r10.s64 = ctx.r10.s64 + -14416;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,13176
	r11.s64 = r11.s64 + 13176;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// bl 0x82bd5c28
	sub_82BD5C28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831b5df8
	goto loc_831B5DF8;
loc_831B5DF0:
	// bl 0x831b59e0
	sub_831B59E0(ctx, base);
loc_831B5DF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B5DF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831B5E00"))) PPC_WEAK_FUNC(sub_831B5E00);
PPC_FUNC_IMPL(__imp__sub_831B5E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	// cmpw r3,r4
	cr0.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, xer);
	// beqlr- 
	if (cr0.eq) return;
	// bge+ 0x831b5e10
	if (!cr0.lt) goto loc_831B5E10;
	// b 0x831b0ed0
	sub_831B0ED0(ctx, base);
	return;
loc_831B5E10:
	// addi r0,r5,1
	r0.s64 = ctx.r5.s64 + 1;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r0
	ctr.u64 = r0.u64;
	// b 0x831b5e38
	goto loc_831B5E38;
loc_831B5E24:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,-1(r4)
	r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1, r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_831B5E38:
	// andi. r0,r3,3
	r0.u64 = ctx.r3.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// bdnzf eq,0x831b5e24
	--ctr.u64;
	if (ctr.u32 != 0 && !cr0.eq) goto loc_831B5E24;
	// rlwinm. r0,r5,30,2,31
	r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// beq- 0x831b5e68
	if (cr0.eq) goto loc_831B5E68;
	// mtctr r0
	ctr.u64 = r0.u64;
	// andi. r0,r4,3
	r0.u64 = ctx.r4.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// bne- 0x831b5e8c
	if (!cr0.eq) goto loc_831B5E8C;
loc_831B5E54:
	// lwz r7,-4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,-4(r3)
	PPC_STORE_U32(ctx.r3.u32 + -4, ctx.r7.u32);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bdnz+ 0x831b5e54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831B5E54;
loc_831B5E68:
	// andi. r0,r5,3
	r0.u64 = ctx.r5.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// mtctr r0
	ctr.u64 = r0.u64;
	// beqlr+ 
	if (cr0.eq) return;
loc_831B5E74:
	// lbz r0,-1(r4)
	r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1, r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bdnz+ 0x831b5e74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831B5E74;
	// blr 
	return;
loc_831B5E8C:
	// lbz r7,-1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lbz r8,-2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + -2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,-3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + -3);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,-4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + -4);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// bdnz 0x831b5e8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831B5E8C;
	// b 0x831b5e68
	goto loc_831B5E68;
}

__attribute__((alias("__imp__sub_831B5EC0"))) PPC_WEAK_FUNC(sub_831B5EC0);
PPC_FUNC_IMPL(__imp__sub_831B5EC0) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831b5f10
	if (!cr6.eq) goto loc_831B5F10;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831b5f10
	if (cr6.eq) goto loc_831B5F10;
loc_831B5EE4:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
loc_831B5F08:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831b0b60
	return;
loc_831B5F10:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x831b5ee4
	if (cr6.eq) goto loc_831B5EE4;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x831b5ee4
	if (cr6.eq) goto loc_831B5EE4;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// blt cr6,0x831b5f08
	if (cr6.lt) goto loc_831B5F08;
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// li r22,0
	r22.s64 = 0;
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// add r28,r11,r3
	r28.u64 = r11.u64 + ctx.r3.u64;
	// addi r23,r1,80
	r23.s64 = ctx.r1.s64 + 80;
	// addi r24,r1,208
	r24.s64 = ctx.r1.s64 + 208;
loc_831B5F44:
	// subf r11,r26,r28
	r11.s64 = r28.s64 - r26.s64;
	// twllei r27,0
	// divwu r11,r11,r27
	r11.u32 = r11.u32 / r27.u32;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x831b5ffc
	if (cr6.gt) goto loc_831B5FFC;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// ble cr6,0x831b5fe0
	if (!cr6.gt) goto loc_831B5FE0;
	// add r28,r26,r27
	r28.u64 = r26.u64 + r27.u64;
loc_831B5F6C:
	// mr r29,r26
	r29.u64 = r26.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bgt cr6,0x831b5fa4
	if (cr6.gt) goto loc_831B5FA4;
loc_831B5F7C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831b5f98
	if (!cr6.gt) goto loc_831B5F98;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_831B5F98:
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// ble cr6,0x831b5f7c
	if (!cr6.gt) goto loc_831B5F7C;
loc_831B5FA4:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// beq cr6,0x831b5fd4
	if (cr6.eq) goto loc_831B5FD4;
	// subf r9,r30,r29
	ctx.r9.s64 = r29.s64 - r30.s64;
loc_831B5FB8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x831b5fb8
	if (!cr0.eq) goto loc_831B5FB8;
loc_831B5FD4:
	// subf r30,r27,r30
	r30.s64 = r30.s64 - r27.s64;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// bgt cr6,0x831b5f6c
	if (cr6.gt) goto loc_831B5F6C;
loc_831B5FE0:
	// addic. r22,r22,-1
	xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// addi r24,r24,-4
	r24.s64 = r24.s64 + -4;
	// addi r23,r23,-4
	r23.s64 = r23.s64 + -4;
	// blt 0x831b5f08
	if (cr0.lt) goto loc_831B5F08;
	// lwz r26,0(r24)
	r26.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r28,0(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// b 0x831b5f44
	goto loc_831B5F44;
loc_831B5FFC:
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// add r29,r11,r26
	r29.u64 = r11.u64 + r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831b6050
	if (!cr6.gt) goto loc_831B6050;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x831b6050
	if (cr6.eq) goto loc_831B6050;
	// subf r9,r29,r26
	ctx.r9.s64 = r26.s64 - r29.s64;
loc_831B6034:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x831b6034
	if (!cr0.eq) goto loc_831B6034;
loc_831B6050:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831b6098
	if (!cr6.gt) goto loc_831B6098;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplw cr6,r26,r28
	cr6.compare<uint32_t>(r26.u32, r28.u32, xer);
	// beq cr6,0x831b6098
	if (cr6.eq) goto loc_831B6098;
	// subf r9,r28,r26
	ctx.r9.s64 = r26.s64 - r28.s64;
loc_831B607C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x831b607c
	if (!cr0.eq) goto loc_831B607C;
loc_831B6098:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831b60e0
	if (!cr6.gt) goto loc_831B60E0;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// beq cr6,0x831b60e0
	if (cr6.eq) goto loc_831B60E0;
	// subf r9,r28,r29
	ctx.r9.s64 = r29.s64 - r28.s64;
loc_831B60C4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x831b60c4
	if (!cr0.eq) goto loc_831B60C4;
loc_831B60E0:
	// mr r31,r26
	r31.u64 = r26.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_831B60E8:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// ble cr6,0x831b611c
	if (!cr6.gt) goto loc_831B611C;
loc_831B60F0:
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x831b611c
	if (!cr6.lt) goto loc_831B611C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831b60f0
	if (!cr6.gt) goto loc_831B60F0;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bgt cr6,0x831b6140
	if (cr6.gt) goto loc_831B6140;
loc_831B611C:
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bgt cr6,0x831b6140
	if (cr6.gt) goto loc_831B6140;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831b611c
	if (!cr6.gt) goto loc_831B611C;
loc_831B6140:
	// subf r30,r27,r30
	r30.s64 = r30.s64 - r27.s64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// ble cr6,0x831b6164
	if (!cr6.gt) goto loc_831B6164;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x831b6140
	if (cr6.gt) goto loc_831B6140;
loc_831B6164:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bgt cr6,0x831b61a8
	if (cr6.gt) goto loc_831B61A8;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// beq cr6,0x831b6198
	if (cr6.eq) goto loc_831B6198;
	// subf r9,r30,r31
	ctx.r9.s64 = r31.s64 - r30.s64;
loc_831B617C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x831b617c
	if (!cr0.eq) goto loc_831B617C;
loc_831B6198:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bne cr6,0x831b60e8
	if (!cr6.eq) goto loc_831B60E8;
	// mr r29,r31
	r29.u64 = r31.u64;
	// b 0x831b60e8
	goto loc_831B60E8;
loc_831B61A8:
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bge cr6,0x831b61e0
	if (!cr6.lt) goto loc_831B61E0;
loc_831B61B4:
	// subf r30,r27,r30
	r30.s64 = r30.s64 - r27.s64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// ble cr6,0x831b61e0
	if (!cr6.gt) goto loc_831B61E0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831b61b4
	if (cr6.eq) goto loc_831B61B4;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// blt cr6,0x831b6204
	if (cr6.lt) goto loc_831B6204;
loc_831B61E0:
	// subf r30,r27,r30
	r30.s64 = r30.s64 - r27.s64;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// ble cr6,0x831b6204
	if (!cr6.gt) goto loc_831B6204;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831b61e0
	if (cr6.eq) goto loc_831B61E0;
loc_831B6204:
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r26,r30
	ctx.r10.s64 = r30.s64 - r26.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x831b6240
	if (cr6.lt) goto loc_831B6240;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// bge cr6,0x831b6230
	if (!cr6.lt) goto loc_831B6230;
	// stw r26,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r26.u32);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stw r30,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r30.u32);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
loc_831B6230:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bge cr6,0x831b5fe0
	if (!cr6.lt) goto loc_831B5FE0;
	// mr r26,r31
	r26.u64 = r31.u64;
	// b 0x831b5f44
	goto loc_831B5F44;
loc_831B6240:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bge cr6,0x831b625c
	if (!cr6.lt) goto loc_831B625C;
	// stw r31,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r31.u32);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stw r28,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r28.u32);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
loc_831B625C:
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// bge cr6,0x831b5fe0
	if (!cr6.lt) goto loc_831B5FE0;
	// mr r28,r30
	r28.u64 = r30.u64;
	// b 0x831b5f44
	goto loc_831B5F44;
}

__attribute__((alias("__imp__sub_831B6270"))) PPC_WEAK_FUNC(sub_831B6270);
PPC_FUNC_IMPL(__imp__sub_831B6270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// cntlzd r5,r3
	ctx.r5.u64 = ctx.r3.u64 == 0 ? 64 : __builtin_clzll(ctx.r3.u64);
	// sld r3,r3,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r3.u64 << (ctx.r5.u8 & 0x7F));
	// cmpdi r3,0
	cr0.compare<int64_t>(ctx.r3.s64, 0, xer);
	// beq 0x831b628c
	if (cr0.eq) goto loc_831B628C;
	// subfic r5,r5,1086
	xer.ca = ctx.r5.u32 <= 1086;
	ctx.r5.s64 = 1086 - ctx.r5.s64;
	// rldicl r3,r3,53,12
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 53) & 0xFFFFFFFFFFFFF;
	// rldimi r3,r5,52,1
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r5.u64, 52) & 0x7FF0000000000000) | (ctx.r3.u64 & 0x800FFFFFFFFFFFFF);
loc_831B628C:
	// std r3,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
	// lfd f1,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B6298"))) PPC_WEAK_FUNC(sub_831B6298);
PPC_FUNC_IMPL(__imp__sub_831B6298) {
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
	// lis r11,-16377
	r11.s64 = -1073283072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stfd f31,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, f31.u64);
	// ori r29,r11,65279
	r29.u64 = r11.u64 | 65279;
	// li r3,248
	ctx.r3.s64 = 248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// lhz r11,160(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x831b6358
	if (!cr6.eq) goto loc_831B6358;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x831bd8e8
	sub_831BD8E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x831b6324
	if (!cr0.gt) goto loc_831B6324;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x831b644c
	if (!cr6.gt) goto loc_831B644C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x831b6324
	if (!cr6.eq) goto loc_831B6324;
	// extsw r11,r31
	r11.s64 = r31.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// li r3,25
	ctx.r3.s64 = 25;
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f0
	ctx.f2.f64 = double(f0.s64);
	// bl 0x831c1758
	sub_831C1758(ctx, base);
	// b 0x831b645c
	goto loc_831B645C;
loc_831B6324:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// extsw r10,r31
	ctx.r10.s64 = r31.s32;
	// li r3,8
	ctx.r3.s64 = 8;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f13
	ctx.f2.f64 = double(ctx.f13.s64);
	// lfd f0,-3744(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// fadd f3,f31,f0
	ctx.f3.f64 = f31.f64 + f0.f64;
loc_831B6344:
	// li r4,25
	ctx.r4.s64 = 25;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bl 0x831c18b0
	sub_831C18B0(ctx, base);
	// b 0x831b645c
	goto loc_831B645C;
loc_831B6358:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f30,-8872(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// beq cr6,0x831b644c
	if (cr6.eq) goto loc_831B644C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x831bd970
	sub_831BD970(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x831b6394
	if (!cr6.lt) goto loc_831B6394;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - r31.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x831b6408
	if (cr6.lt) goto loc_831B6408;
	// b 0x831b63a8
	goto loc_831B63A8;
loc_831B6394:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - r31.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x831b63b4
	if (cr6.gt) goto loc_831B63B4;
loc_831B63A8:
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// cmpwi cr6,r4,2560
	cr6.compare<int32_t>(ctx.r4.s32, 2560, xer);
	// ble cr6,0x831b63e0
	if (!cr6.gt) goto loc_831B63E0;
loc_831B63B4:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfd f1,-824(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -824);
	// bl 0x831b6ff8
	sub_831B6FF8(ctx, base);
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_831B63D0:
	// li r3,17
	ctx.r3.s64 = 17;
loc_831B63D4:
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
loc_831B63D8:
	// fcfid f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(f0.s64);
	// b 0x831b6344
	goto loc_831B6344;
loc_831B63E0:
	// cmpwi cr6,r4,1024
	cr6.compare<int32_t>(ctx.r4.s32, 1024, xer);
	// ble cr6,0x831b6400
	if (!cr6.gt) goto loc_831B6400;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x831bd870
	sub_831BD870(ctx, base);
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x831b63d0
	goto loc_831B63D0;
loc_831B6400:
	// cmpwi cr6,r4,-2557
	cr6.compare<int32_t>(ctx.r4.s32, -2557, xer);
	// bge cr6,0x831b6420
	if (!cr6.lt) goto loc_831B6420;
loc_831B6408:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// fmul f3,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64 * f30.f64;
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x831b63d8
	goto loc_831B63D8;
loc_831B6420:
	// cmpwi cr6,r4,-1021
	cr6.compare<int32_t>(ctx.r4.s32, -1021, xer);
	// bge cr6,0x831b6444
	if (!cr6.lt) goto loc_831B6444;
	// addi r4,r4,1536
	ctx.r4.s64 = ctx.r4.s64 + 1536;
	// bl 0x831bd870
	sub_831BD870(ctx, base);
	// extsw r11,r31
	r11.s64 = r31.s32;
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x831b63d4
	goto loc_831B63D4;
loc_831B6444:
	// bl 0x831bd870
	sub_831BD870(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
loc_831B644C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_831B645C:
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

__attribute__((alias("__imp__sub_831B6470"))) PPC_WEAK_FUNC(sub_831B6470);
PPC_FUNC_IMPL(__imp__sub_831B6470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi. r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x831b64a8
	if (cr0.eq) goto loc_831B64A8;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x831b648c
	if (!cr6.eq) goto loc_831B648C;
	// li r11,768
	r11.s64 = 768;
	// b 0x831b64a8
	goto loc_831B64A8;
loc_831B648C:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x831b649c
	if (!cr6.eq) goto loc_831B649C;
	// li r11,512
	r11.s64 = 512;
	// b 0x831b64a8
	goto loc_831B64A8;
loc_831B649C:
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x831b64a8
	if (!cr6.eq) goto loc_831B64A8;
	// li r11,256
	r11.s64 = 256;
loc_831B64A8:
	// rlwinm. r10,r3,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b64b4
	if (cr0.eq) goto loc_831B64B4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
loc_831B64B4:
	// rlwinm. r10,r3,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b64c0
	if (cr0.eq) goto loc_831B64C0;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
loc_831B64C0:
	// rlwinm. r10,r3,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b64cc
	if (cr0.eq) goto loc_831B64CC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
loc_831B64CC:
	// rlwinm. r10,r3,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b64d8
	if (cr0.eq) goto loc_831B64D8;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
loc_831B64D8:
	// rlwinm. r10,r3,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b64e4
	if (cr0.eq) goto loc_831B64E4;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
loc_831B64E4:
	// oris r3,r11,8
	ctx.r3.u64 = r11.u64 | 524288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B64F0"))) PPC_WEAK_FUNC(sub_831B64F0);
PPC_FUNC_IMPL(__imp__sub_831B64F0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r8,r4,0,22,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x300;
	// rlwinm. r11,r10,0,22,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r9,r4,0,24,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x831b6544
	if (cr0.eq) goto loc_831B6544;
	// cmplwi cr6,r11,768
	cr6.compare<uint32_t>(r11.u32, 768, xer);
	// bne cr6,0x831b6528
	if (!cr6.eq) goto loc_831B6528;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831b6544
	goto loc_831B6544;
loc_831B6528:
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// bne cr6,0x831b6538
	if (!cr6.eq) goto loc_831B6538;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x831b6544
	goto loc_831B6544;
loc_831B6538:
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bne cr6,0x831b6544
	if (!cr6.eq) goto loc_831B6544;
	// li r3,3
	ctx.r3.s64 = 3;
loc_831B6544:
	// clrlwi. r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b6550
	if (cr0.eq) goto loc_831B6550;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
loc_831B6550:
	// rlwinm. r11,r10,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b655c
	if (cr0.eq) goto loc_831B655C;
	// ori r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 | 32;
loc_831B655C:
	// rlwinm. r11,r10,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b6568
	if (cr0.eq) goto loc_831B6568;
	// ori r3,r3,64
	ctx.r3.u64 = ctx.r3.u64 | 64;
loc_831B6568:
	// rlwinm. r11,r10,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b6574
	if (cr0.eq) goto loc_831B6574;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
loc_831B6574:
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b6580
	if (cr0.eq) goto loc_831B6580;
	// ori r3,r3,128
	ctx.r3.u64 = ctx.r3.u64 | 128;
loc_831B6580:
	// rlwinm. r10,r9,0,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x831b65b8
	if (cr0.eq) goto loc_831B65B8;
	// cmplwi cr6,r10,768
	cr6.compare<uint32_t>(ctx.r10.u32, 768, xer);
	// bne cr6,0x831b659c
	if (!cr6.eq) goto loc_831B659C;
	// li r11,1
	r11.s64 = 1;
	// b 0x831b65b8
	goto loc_831B65B8;
loc_831B659C:
	// cmplwi cr6,r10,512
	cr6.compare<uint32_t>(ctx.r10.u32, 512, xer);
	// bne cr6,0x831b65ac
	if (!cr6.eq) goto loc_831B65AC;
	// li r11,2
	r11.s64 = 2;
	// b 0x831b65b8
	goto loc_831B65B8;
loc_831B65AC:
	// cmplwi cr6,r10,256
	cr6.compare<uint32_t>(ctx.r10.u32, 256, xer);
	// bne cr6,0x831b65b8
	if (!cr6.eq) goto loc_831B65B8;
	// li r11,3
	r11.s64 = 3;
loc_831B65B8:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b65c4
	if (cr0.eq) goto loc_831B65C4;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
loc_831B65C4:
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b65d0
	if (cr0.eq) goto loc_831B65D0;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
loc_831B65D0:
	// rlwinm. r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b65dc
	if (cr0.eq) goto loc_831B65DC;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
loc_831B65DC:
	// rlwinm. r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b65e8
	if (cr0.eq) goto loc_831B65E8;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
loc_831B65E8:
	// rlwinm. r10,r9,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b65f4
	if (cr0.eq) goto loc_831B65F4;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
loc_831B65F4:
	// rlwinm r10,r8,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | r11.u64;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// bl 0x831b6470
	sub_831B6470(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// bl 0x831b6470
	sub_831B6470(ctx, base);
	// clrlwi r10,r3,12
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFFF;
	// lis r11,8
	r11.s64 = 524288;
	// rlwinm r10,r10,0,27,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF8001F;
	// ori r11,r11,31
	r11.u64 = r11.u64 | 31;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x831b6638
	if (!cr6.eq) goto loc_831B6638;
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B6638:
	// bl 0x8324ba8c
	__imp__KeEnableFpuExceptions(ctx, base);
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

__attribute__((alias("__imp__sub_831B6658"))) PPC_WEAK_FUNC(sub_831B6658);
PPC_FUNC_IMPL(__imp__sub_831B6658) {
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
	// lis r4,-8
	ctx.r4.s64 = -524288;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1792
	ctx.r4.u64 = ctx.r4.u64 | 1792;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// bl 0x831b6470
	sub_831B6470(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B6688"))) PPC_WEAK_FUNC(sub_831B6688);
PPC_FUNC_IMPL(__imp__sub_831B6688) {
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
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831b66dc
	if (!cr6.eq) goto loc_831B66DC;
loc_831B66B0:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831b6760
	goto loc_831B6760;
loc_831B66DC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831b66ec
	if (cr6.eq) goto loc_831B66EC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831b66b0
	if (cr6.eq) goto loc_831B66B0;
loc_831B66EC:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x831b6704
	if (cr6.gt) goto loc_831B6704;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
loc_831B6704:
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831bccf8
	sub_831BCCF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831b675c
	if (cr6.eq) goto loc_831B675C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// blt 0x831b6750
	if (cr0.lt) goto loc_831B6750;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x831b675c
	goto loc_831B675C;
loc_831B6750:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bcb28
	sub_831BCB28(ctx, base);
loc_831B675C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_831B6760:
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

__attribute__((alias("__imp__sub_831B6778"))) PPC_WEAK_FUNC(sub_831B6778);
PPC_FUNC_IMPL(__imp__sub_831B6778) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x831b6688
	sub_831B6688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B6790"))) PPC_WEAK_FUNC(sub_831B6790);
PPC_FUNC_IMPL(__imp__sub_831B6790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr2{};
	PPCCRRegister cr3{};
	PPCCRRegister cr4{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	PPCRegister r0{};
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
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
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
	PPCVRegister v64{};
	PPCVRegister v65{};
	PPCVRegister v66{};
	PPCVRegister v67{};
	PPCVRegister v68{};
	PPCVRegister v69{};
	PPCVRegister v70{};
	PPCVRegister v71{};
	PPCVRegister v72{};
	PPCVRegister v73{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r0
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r0,8(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8, r0.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r0,312(r3)
	r0.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr1,r0,0
	cr1.compare<int32_t>(r0.s32, 0, xer);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne 0x831b67bc
	if (!cr0.eq) goto loc_831B67BC;
	// li r6,1
	ctx.r6.s64 = 1;
loc_831B67BC:
	// bne cr1,0x831b6a7c
	if (!cr1.eq) goto loc_831B6A7C;
	// lwz r3,308(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 308);
	// lwz r4,144(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 144);
	// bl 0x831c33e0
	sub_831C33E0(ctx, base);
	// lfd f14,0(r7)
	ctx.fpscr.disableFlushMode();
	f14.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// lfd f15,8(r7)
	f15.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// lfd f16,16(r7)
	f16.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// lfd f17,24(r7)
	f17.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// lfd f18,32(r7)
	f18.u64 = PPC_LOAD_U64(ctx.r7.u32 + 32);
	// lfd f19,40(r7)
	f19.u64 = PPC_LOAD_U64(ctx.r7.u32 + 40);
	// lfd f20,48(r7)
	f20.u64 = PPC_LOAD_U64(ctx.r7.u32 + 48);
	// lfd f21,56(r7)
	f21.u64 = PPC_LOAD_U64(ctx.r7.u32 + 56);
	// lfd f22,64(r7)
	f22.u64 = PPC_LOAD_U64(ctx.r7.u32 + 64);
	// lfd f23,72(r7)
	f23.u64 = PPC_LOAD_U64(ctx.r7.u32 + 72);
	// lfd f24,80(r7)
	f24.u64 = PPC_LOAD_U64(ctx.r7.u32 + 80);
	// lfd f25,88(r7)
	f25.u64 = PPC_LOAD_U64(ctx.r7.u32 + 88);
	// lfd f26,96(r7)
	f26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 96);
	// lfd f27,104(r7)
	f27.u64 = PPC_LOAD_U64(ctx.r7.u32 + 104);
	// lfd f28,112(r7)
	f28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 112);
	// lfd f29,120(r7)
	f29.u64 = PPC_LOAD_U64(ctx.r7.u32 + 120);
	// lfd f30,128(r7)
	f30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 128);
	// lfd f31,136(r7)
	f31.u64 = PPC_LOAD_U64(ctx.r7.u32 + 136);
	// ld r13,152(r7)
	ctx.r13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 152);
	// ld r14,160(r7)
	r14.u64 = PPC_LOAD_U64(ctx.r7.u32 + 160);
	// ld r15,168(r7)
	r15.u64 = PPC_LOAD_U64(ctx.r7.u32 + 168);
	// ld r16,176(r7)
	r16.u64 = PPC_LOAD_U64(ctx.r7.u32 + 176);
	// ld r17,184(r7)
	r17.u64 = PPC_LOAD_U64(ctx.r7.u32 + 184);
	// ld r18,192(r7)
	r18.u64 = PPC_LOAD_U64(ctx.r7.u32 + 192);
	// ld r19,200(r7)
	r19.u64 = PPC_LOAD_U64(ctx.r7.u32 + 200);
	// ld r20,208(r7)
	r20.u64 = PPC_LOAD_U64(ctx.r7.u32 + 208);
	// ld r21,216(r7)
	r21.u64 = PPC_LOAD_U64(ctx.r7.u32 + 216);
	// ld r22,224(r7)
	r22.u64 = PPC_LOAD_U64(ctx.r7.u32 + 224);
	// ld r23,232(r7)
	r23.u64 = PPC_LOAD_U64(ctx.r7.u32 + 232);
	// ld r24,240(r7)
	r24.u64 = PPC_LOAD_U64(ctx.r7.u32 + 240);
	// ld r25,248(r7)
	r25.u64 = PPC_LOAD_U64(ctx.r7.u32 + 248);
	// ld r26,256(r7)
	r26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 256);
	// ld r27,264(r7)
	r27.u64 = PPC_LOAD_U64(ctx.r7.u32 + 264);
	// ld r28,272(r7)
	r28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 272);
	// ld r29,280(r7)
	r29.u64 = PPC_LOAD_U64(ctx.r7.u32 + 280);
	// ld r30,288(r7)
	r30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 288);
	// ld r31,296(r7)
	r31.u64 = PPC_LOAD_U64(ctx.r7.u32 + 296);
	// li r3,320
	ctx.r3.s64 = 320;
	// lvx128 v64,r3,r7
	simde_mm_store_si128((simde__m128i*)v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,336
	ctx.r3.s64 = 336;
	// lvx128 v65,r3,r7
	simde_mm_store_si128((simde__m128i*)v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,352
	ctx.r3.s64 = 352;
	// lvx128 v66,r3,r7
	simde_mm_store_si128((simde__m128i*)v66.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,368
	ctx.r3.s64 = 368;
	// lvx128 v67,r3,r7
	simde_mm_store_si128((simde__m128i*)v67.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,384
	ctx.r3.s64 = 384;
	// lvx128 v68,r3,r7
	simde_mm_store_si128((simde__m128i*)v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,400
	ctx.r3.s64 = 400;
	// lvx128 v69,r3,r7
	simde_mm_store_si128((simde__m128i*)v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,416
	ctx.r3.s64 = 416;
	// lvx128 v70,r3,r7
	simde_mm_store_si128((simde__m128i*)v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,432
	ctx.r3.s64 = 432;
	// lvx128 v71,r3,r7
	simde_mm_store_si128((simde__m128i*)v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,448
	ctx.r3.s64 = 448;
	// lvx128 v72,r3,r7
	simde_mm_store_si128((simde__m128i*)v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,464
	ctx.r3.s64 = 464;
	// lvx128 v73,r3,r7
	simde_mm_store_si128((simde__m128i*)v73.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,480
	ctx.r3.s64 = 480;
	// lvx128 v74,r3,r7
	simde_mm_store_si128((simde__m128i*)v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,496
	ctx.r3.s64 = 496;
	// lvx128 v75,r3,r7
	simde_mm_store_si128((simde__m128i*)v75.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,512
	ctx.r3.s64 = 512;
	// lvx128 v76,r3,r7
	simde_mm_store_si128((simde__m128i*)v76.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,528
	ctx.r3.s64 = 528;
	// lvx128 v77,r3,r7
	simde_mm_store_si128((simde__m128i*)v77.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,544
	ctx.r3.s64 = 544;
	// lvx128 v78,r3,r7
	simde_mm_store_si128((simde__m128i*)v78.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,560
	ctx.r3.s64 = 560;
	// lvx128 v79,r3,r7
	simde_mm_store_si128((simde__m128i*)v79.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,576
	ctx.r3.s64 = 576;
	// lvx128 v80,r3,r7
	simde_mm_store_si128((simde__m128i*)v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,592
	ctx.r3.s64 = 592;
	// lvx128 v81,r3,r7
	simde_mm_store_si128((simde__m128i*)v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,608
	ctx.r3.s64 = 608;
	// lvx128 v82,r3,r7
	simde_mm_store_si128((simde__m128i*)v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,624
	ctx.r3.s64 = 624;
	// lvx128 v83,r3,r7
	simde_mm_store_si128((simde__m128i*)v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,640
	ctx.r3.s64 = 640;
	// lvx128 v84,r3,r7
	simde_mm_store_si128((simde__m128i*)v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,656
	ctx.r3.s64 = 656;
	// lvx128 v85,r3,r7
	simde_mm_store_si128((simde__m128i*)v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,672
	ctx.r3.s64 = 672;
	// lvx128 v86,r3,r7
	simde_mm_store_si128((simde__m128i*)v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,688
	ctx.r3.s64 = 688;
	// lvx128 v87,r3,r7
	simde_mm_store_si128((simde__m128i*)v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,704
	ctx.r3.s64 = 704;
	// lvx128 v88,r3,r7
	simde_mm_store_si128((simde__m128i*)v88.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,720
	ctx.r3.s64 = 720;
	// lvx128 v89,r3,r7
	simde_mm_store_si128((simde__m128i*)v89.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,736
	ctx.r3.s64 = 736;
	// lvx128 v90,r3,r7
	simde_mm_store_si128((simde__m128i*)v90.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,752
	ctx.r3.s64 = 752;
	// lvx128 v91,r3,r7
	simde_mm_store_si128((simde__m128i*)v91.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,768
	ctx.r3.s64 = 768;
	// lvx128 v92,r3,r7
	simde_mm_store_si128((simde__m128i*)v92.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,784
	ctx.r3.s64 = 784;
	// lvx128 v93,r3,r7
	simde_mm_store_si128((simde__m128i*)v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,800
	ctx.r3.s64 = 800;
	// lvx128 v94,r3,r7
	simde_mm_store_si128((simde__m128i*)v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,816
	ctx.r3.s64 = 816;
	// lvx128 v95,r3,r7
	simde_mm_store_si128((simde__m128i*)v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,832
	ctx.r3.s64 = 832;
	// lvx128 v96,r3,r7
	simde_mm_store_si128((simde__m128i*)v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,848
	ctx.r3.s64 = 848;
	// lvx128 v97,r3,r7
	simde_mm_store_si128((simde__m128i*)v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,864
	ctx.r3.s64 = 864;
	// lvx128 v98,r3,r7
	simde_mm_store_si128((simde__m128i*)v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,880
	ctx.r3.s64 = 880;
	// lvx128 v99,r3,r7
	simde_mm_store_si128((simde__m128i*)v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,896
	ctx.r3.s64 = 896;
	// lvx128 v100,r3,r7
	simde_mm_store_si128((simde__m128i*)v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,912
	ctx.r3.s64 = 912;
	// lvx128 v101,r3,r7
	simde_mm_store_si128((simde__m128i*)v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,928
	ctx.r3.s64 = 928;
	// lvx128 v102,r3,r7
	simde_mm_store_si128((simde__m128i*)v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,944
	ctx.r3.s64 = 944;
	// lvx128 v103,r3,r7
	simde_mm_store_si128((simde__m128i*)v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,960
	ctx.r3.s64 = 960;
	// lvx128 v104,r3,r7
	simde_mm_store_si128((simde__m128i*)v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,976
	ctx.r3.s64 = 976;
	// lvx128 v105,r3,r7
	simde_mm_store_si128((simde__m128i*)v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,992
	ctx.r3.s64 = 992;
	// lvx128 v106,r3,r7
	simde_mm_store_si128((simde__m128i*)v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1008
	ctx.r3.s64 = 1008;
	// lvx128 v107,r3,r7
	simde_mm_store_si128((simde__m128i*)v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1024
	ctx.r3.s64 = 1024;
	// lvx128 v108,r3,r7
	simde_mm_store_si128((simde__m128i*)v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1040
	ctx.r3.s64 = 1040;
	// lvx128 v109,r3,r7
	simde_mm_store_si128((simde__m128i*)v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1056
	ctx.r3.s64 = 1056;
	// lvx128 v110,r3,r7
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1072
	ctx.r3.s64 = 1072;
	// lvx128 v111,r3,r7
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1088
	ctx.r3.s64 = 1088;
	// lvx128 v112,r3,r7
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1104
	ctx.r3.s64 = 1104;
	// lvx128 v113,r3,r7
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1120
	ctx.r3.s64 = 1120;
	// lvx128 v114,r3,r7
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1136
	ctx.r3.s64 = 1136;
	// lvx128 v115,r3,r7
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1152
	ctx.r3.s64 = 1152;
	// lvx128 v116,r3,r7
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1168
	ctx.r3.s64 = 1168;
	// lvx128 v117,r3,r7
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1184
	ctx.r3.s64 = 1184;
	// lvx128 v118,r3,r7
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1200
	ctx.r3.s64 = 1200;
	// lvx128 v119,r3,r7
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1216
	ctx.r3.s64 = 1216;
	// lvx128 v120,r3,r7
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1232
	ctx.r3.s64 = 1232;
	// lvx128 v121,r3,r7
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1248
	ctx.r3.s64 = 1248;
	// lvx128 v122,r3,r7
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1264
	ctx.r3.s64 = 1264;
	// lvx128 v123,r3,r7
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1280
	ctx.r3.s64 = 1280;
	// lvx128 v124,r3,r7
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1296
	ctx.r3.s64 = 1296;
	// lvx128 v125,r3,r7
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1312
	ctx.r3.s64 = 1312;
	// lvx128 v126,r3,r7
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1328
	ctx.r3.s64 = 1328;
	// lvx128 v127,r3,r7
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,308(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 308);
	// lwz r4,304(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 304);
	// mtlr r5
	// ld r1,144(r7)
	ctx.r1.u64 = PPC_LOAD_U64(ctx.r7.u32 + 144);
	// mtcr r4
	cr0.lt = (ctx.r4.u32 & 0x80000000) != 0;
	cr0.gt = (ctx.r4.u32 & 0x40000000) != 0;
	cr0.eq = (ctx.r4.u32 & 0x20000000) != 0;
	cr0.so = (ctx.r4.u32 & 0x10000000) != 0;
	cr1.lt = (ctx.r4.u32 & 0x8000000) != 0;
	cr1.gt = (ctx.r4.u32 & 0x4000000) != 0;
	cr1.eq = (ctx.r4.u32 & 0x2000000) != 0;
	cr1.so = (ctx.r4.u32 & 0x1000000) != 0;
	cr2.lt = (ctx.r4.u32 & 0x800000) != 0;
	cr2.gt = (ctx.r4.u32 & 0x400000) != 0;
	cr2.eq = (ctx.r4.u32 & 0x200000) != 0;
	cr2.so = (ctx.r4.u32 & 0x100000) != 0;
	cr3.lt = (ctx.r4.u32 & 0x80000) != 0;
	cr3.gt = (ctx.r4.u32 & 0x40000) != 0;
	cr3.eq = (ctx.r4.u32 & 0x20000) != 0;
	cr3.so = (ctx.r4.u32 & 0x10000) != 0;
	cr4.lt = (ctx.r4.u32 & 0x8000) != 0;
	cr4.gt = (ctx.r4.u32 & 0x4000) != 0;
	cr4.eq = (ctx.r4.u32 & 0x2000) != 0;
	cr4.so = (ctx.r4.u32 & 0x1000) != 0;
	cr5.lt = (ctx.r4.u32 & 0x800) != 0;
	cr5.gt = (ctx.r4.u32 & 0x400) != 0;
	cr5.eq = (ctx.r4.u32 & 0x200) != 0;
	cr5.so = (ctx.r4.u32 & 0x100) != 0;
	cr6.lt = (ctx.r4.u32 & 0x80) != 0;
	cr6.gt = (ctx.r4.u32 & 0x40) != 0;
	cr6.eq = (ctx.r4.u32 & 0x20) != 0;
	cr6.so = (ctx.r4.u32 & 0x10) != 0;
	cr7.lt = (ctx.r4.u32 & 0x8) != 0;
	cr7.gt = (ctx.r4.u32 & 0x4) != 0;
	cr7.eq = (ctx.r4.u32 & 0x2) != 0;
	cr7.so = (ctx.r4.u32 & 0x1) != 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
loc_831B6A7C:
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x831c33e0
	sub_831C33E0(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x8324ba9c
	__imp__RtlUnwind(ctx, base);
	// lwz r0,8(r1)
	r0.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8);
	// mtlr r0
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B6AB0"))) PPC_WEAK_FUNC(sub_831B6AB0);
PPC_FUNC_IMPL(__imp__sub_831B6AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr2{};
	PPCCRRegister cr3{};
	PPCCRRegister cr4{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	PPCRegister r0{};
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
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
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
	PPCVRegister v64{};
	PPCVRegister v65{};
	PPCVRegister v66{};
	PPCVRegister v67{};
	PPCVRegister v68{};
	PPCVRegister v69{};
	PPCVRegister v70{};
	PPCVRegister v71{};
	PPCVRegister v72{};
	PPCVRegister v73{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// lis r4,-31930
	ctx.r4.s64 = -2092564480;
	// lwz r0,-10196(r4)
	r0.u64 = PPC_LOAD_U32(ctx.r4.u32 + -10196);
	// cmpwi r0,0
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bnectr 
	if (!cr0.eq) {
		PPC_CALL_INDIRECT_FUNC(ctr.u32);
		return;
	}
	// mflr r0
	// mfcr r4
	ctx.r4.u64 = cr0.lt ? 0x80000000 : 0;
	ctx.r4.u64 |= cr0.gt ? 0x40000000 : 0;
	ctx.r4.u64 |= cr0.eq ? 0x20000000 : 0;
	ctx.r4.u64 |= cr0.so ? 0x10000000 : 0;
	ctx.r4.u64 |= cr1.lt ? 0x8000000 : 0;
	ctx.r4.u64 |= cr1.gt ? 0x4000000 : 0;
	ctx.r4.u64 |= cr1.eq ? 0x2000000 : 0;
	ctx.r4.u64 |= cr1.so ? 0x1000000 : 0;
	ctx.r4.u64 |= cr2.lt ? 0x800000 : 0;
	ctx.r4.u64 |= cr2.gt ? 0x400000 : 0;
	ctx.r4.u64 |= cr2.eq ? 0x200000 : 0;
	ctx.r4.u64 |= cr2.so ? 0x100000 : 0;
	ctx.r4.u64 |= cr3.lt ? 0x80000 : 0;
	ctx.r4.u64 |= cr3.gt ? 0x40000 : 0;
	ctx.r4.u64 |= cr3.eq ? 0x20000 : 0;
	ctx.r4.u64 |= cr3.so ? 0x10000 : 0;
	ctx.r4.u64 |= cr4.lt ? 0x8000 : 0;
	ctx.r4.u64 |= cr4.gt ? 0x4000 : 0;
	ctx.r4.u64 |= cr4.eq ? 0x2000 : 0;
	ctx.r4.u64 |= cr4.so ? 0x1000 : 0;
	ctx.r4.u64 |= cr5.lt ? 0x800 : 0;
	ctx.r4.u64 |= cr5.gt ? 0x400 : 0;
	ctx.r4.u64 |= cr5.eq ? 0x200 : 0;
	ctx.r4.u64 |= cr5.so ? 0x100 : 0;
	ctx.r4.u64 |= cr6.lt ? 0x80 : 0;
	ctx.r4.u64 |= cr6.gt ? 0x40 : 0;
	ctx.r4.u64 |= cr6.eq ? 0x20 : 0;
	ctx.r4.u64 |= cr6.so ? 0x10 : 0;
	ctx.r4.u64 |= cr7.lt ? 0x8 : 0;
	ctx.r4.u64 |= cr7.gt ? 0x4 : 0;
	ctx.r4.u64 |= cr7.eq ? 0x2 : 0;
	ctx.r4.u64 |= cr7.so ? 0x1 : 0;
	// stfd f14,0(r3)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r3.u32 + 0, f14.u64);
	// stfd f15,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, f15.u64);
	// stfd f16,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, f16.u64);
	// stfd f17,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, f17.u64);
	// stfd f18,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, f18.u64);
	// stfd f19,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, f19.u64);
	// stfd f20,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, f20.u64);
	// stfd f21,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, f21.u64);
	// stfd f22,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, f22.u64);
	// stfd f23,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, f23.u64);
	// stfd f24,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, f24.u64);
	// stfd f25,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, f25.u64);
	// stfd f26,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, f26.u64);
	// stfd f27,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, f27.u64);
	// stfd f28,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, f28.u64);
	// stfd f29,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, f29.u64);
	// stfd f30,128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 128, f30.u64);
	// stfd f31,136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 136, f31.u64);
	// std r13,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, ctx.r13.u64);
	// std r14,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, r14.u64);
	// std r15,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, r15.u64);
	// std r16,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, r16.u64);
	// std r17,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, r17.u64);
	// std r18,192(r3)
	PPC_STORE_U64(ctx.r3.u32 + 192, r18.u64);
	// std r19,200(r3)
	PPC_STORE_U64(ctx.r3.u32 + 200, r19.u64);
	// std r20,208(r3)
	PPC_STORE_U64(ctx.r3.u32 + 208, r20.u64);
	// std r21,216(r3)
	PPC_STORE_U64(ctx.r3.u32 + 216, r21.u64);
	// std r22,224(r3)
	PPC_STORE_U64(ctx.r3.u32 + 224, r22.u64);
	// std r23,232(r3)
	PPC_STORE_U64(ctx.r3.u32 + 232, r23.u64);
	// std r24,240(r3)
	PPC_STORE_U64(ctx.r3.u32 + 240, r24.u64);
	// std r25,248(r3)
	PPC_STORE_U64(ctx.r3.u32 + 248, r25.u64);
	// std r26,256(r3)
	PPC_STORE_U64(ctx.r3.u32 + 256, r26.u64);
	// std r27,264(r3)
	PPC_STORE_U64(ctx.r3.u32 + 264, r27.u64);
	// std r28,272(r3)
	PPC_STORE_U64(ctx.r3.u32 + 272, r28.u64);
	// std r29,280(r3)
	PPC_STORE_U64(ctx.r3.u32 + 280, r29.u64);
	// std r30,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, r30.u64);
	// std r31,296(r3)
	PPC_STORE_U64(ctx.r3.u32 + 296, r31.u64);
	// li r5,320
	ctx.r5.s64 = 320;
	// stvlx128 v64,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v64.u8[15 - i]);
	// li r5,336
	ctx.r5.s64 = 336;
	// stvlx128 v65,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v65.u8[15 - i]);
	// li r5,352
	ctx.r5.s64 = 352;
	// stvlx128 v66,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v66.u8[15 - i]);
	// li r5,368
	ctx.r5.s64 = 368;
	// stvlx128 v67,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v67.u8[15 - i]);
	// li r5,384
	ctx.r5.s64 = 384;
	// stvlx128 v68,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v68.u8[15 - i]);
	// li r5,400
	ctx.r5.s64 = 400;
	// stvlx128 v69,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v69.u8[15 - i]);
	// li r5,416
	ctx.r5.s64 = 416;
	// stvlx128 v70,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v70.u8[15 - i]);
	// li r5,432
	ctx.r5.s64 = 432;
	// stvlx128 v71,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v71.u8[15 - i]);
	// li r5,448
	ctx.r5.s64 = 448;
	// stvlx128 v72,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v72.u8[15 - i]);
	// li r5,464
	ctx.r5.s64 = 464;
	// stvlx128 v73,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v73.u8[15 - i]);
	// li r5,480
	ctx.r5.s64 = 480;
	// stvlx128 v74,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v74.u8[15 - i]);
	// li r5,496
	ctx.r5.s64 = 496;
	// stvlx128 v75,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v75.u8[15 - i]);
	// li r5,512
	ctx.r5.s64 = 512;
	// stvlx128 v76,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v76.u8[15 - i]);
	// li r5,528
	ctx.r5.s64 = 528;
	// stvlx128 v77,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v77.u8[15 - i]);
	// li r5,544
	ctx.r5.s64 = 544;
	// stvlx128 v78,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v78.u8[15 - i]);
	// li r5,560
	ctx.r5.s64 = 560;
	// stvlx128 v79,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v79.u8[15 - i]);
	// li r5,576
	ctx.r5.s64 = 576;
	// stvlx128 v80,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v80.u8[15 - i]);
	// li r5,592
	ctx.r5.s64 = 592;
	// stvlx128 v81,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v81.u8[15 - i]);
	// li r5,608
	ctx.r5.s64 = 608;
	// stvlx128 v82,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v82.u8[15 - i]);
	// li r5,624
	ctx.r5.s64 = 624;
	// stvlx128 v83,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v83.u8[15 - i]);
	// li r5,640
	ctx.r5.s64 = 640;
	// stvlx128 v84,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v84.u8[15 - i]);
	// li r5,656
	ctx.r5.s64 = 656;
	// stvlx128 v85,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v85.u8[15 - i]);
	// li r5,672
	ctx.r5.s64 = 672;
	// stvlx128 v86,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v86.u8[15 - i]);
	// li r5,688
	ctx.r5.s64 = 688;
	// stvlx128 v87,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v87.u8[15 - i]);
	// li r5,704
	ctx.r5.s64 = 704;
	// stvlx128 v88,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v88.u8[15 - i]);
	// li r5,720
	ctx.r5.s64 = 720;
	// stvlx128 v89,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v89.u8[15 - i]);
	// li r5,736
	ctx.r5.s64 = 736;
	// stvlx128 v90,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v90.u8[15 - i]);
	// li r5,752
	ctx.r5.s64 = 752;
	// stvlx128 v91,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v91.u8[15 - i]);
	// li r5,768
	ctx.r5.s64 = 768;
	// stvlx128 v92,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v92.u8[15 - i]);
	// li r5,784
	ctx.r5.s64 = 784;
	// stvlx128 v93,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v93.u8[15 - i]);
	// li r5,800
	ctx.r5.s64 = 800;
	// stvlx128 v94,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v94.u8[15 - i]);
	// li r5,816
	ctx.r5.s64 = 816;
	// stvlx128 v95,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v95.u8[15 - i]);
	// li r5,832
	ctx.r5.s64 = 832;
	// stvlx128 v96,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v96.u8[15 - i]);
	// li r5,848
	ctx.r5.s64 = 848;
	// stvlx128 v97,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v97.u8[15 - i]);
	// li r5,864
	ctx.r5.s64 = 864;
	// stvlx128 v98,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v98.u8[15 - i]);
	// li r5,880
	ctx.r5.s64 = 880;
	// stvlx128 v99,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v99.u8[15 - i]);
	// li r5,896
	ctx.r5.s64 = 896;
	// stvlx128 v100,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v100.u8[15 - i]);
	// li r5,912
	ctx.r5.s64 = 912;
	// stvlx128 v101,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v101.u8[15 - i]);
	// li r5,928
	ctx.r5.s64 = 928;
	// stvlx128 v102,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v102.u8[15 - i]);
	// li r5,944
	ctx.r5.s64 = 944;
	// stvlx128 v103,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v103.u8[15 - i]);
	// li r5,960
	ctx.r5.s64 = 960;
	// stvlx128 v104,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v104.u8[15 - i]);
	// li r5,976
	ctx.r5.s64 = 976;
	// stvlx128 v105,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v105.u8[15 - i]);
	// li r5,992
	ctx.r5.s64 = 992;
	// stvlx128 v106,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v106.u8[15 - i]);
	// li r5,1008
	ctx.r5.s64 = 1008;
	// stvlx128 v107,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v107.u8[15 - i]);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stvlx128 v108,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v108.u8[15 - i]);
	// li r5,1040
	ctx.r5.s64 = 1040;
	// stvlx128 v109,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v109.u8[15 - i]);
	// li r5,1056
	ctx.r5.s64 = 1056;
	// stvlx128 v110,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v110.u8[15 - i]);
	// li r5,1072
	ctx.r5.s64 = 1072;
	// stvlx128 v111,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v111.u8[15 - i]);
	// li r5,1088
	ctx.r5.s64 = 1088;
	// stvlx128 v112,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v112.u8[15 - i]);
	// li r5,1104
	ctx.r5.s64 = 1104;
	// stvlx128 v113,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v113.u8[15 - i]);
	// li r5,1120
	ctx.r5.s64 = 1120;
	// stvlx128 v114,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v114.u8[15 - i]);
	// li r5,1136
	ctx.r5.s64 = 1136;
	// stvlx128 v115,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v115.u8[15 - i]);
	// li r5,1152
	ctx.r5.s64 = 1152;
	// stvlx128 v116,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v116.u8[15 - i]);
	// li r5,1168
	ctx.r5.s64 = 1168;
	// stvlx128 v117,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v117.u8[15 - i]);
	// li r5,1184
	ctx.r5.s64 = 1184;
	// stvlx128 v118,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v118.u8[15 - i]);
	// li r5,1200
	ctx.r5.s64 = 1200;
	// stvlx128 v119,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v119.u8[15 - i]);
	// li r5,1216
	ctx.r5.s64 = 1216;
	// stvlx128 v120,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v120.u8[15 - i]);
	// li r5,1232
	ctx.r5.s64 = 1232;
	// stvlx128 v121,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v121.u8[15 - i]);
	// li r5,1248
	ctx.r5.s64 = 1248;
	// stvlx128 v122,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v122.u8[15 - i]);
	// li r5,1264
	ctx.r5.s64 = 1264;
	// stvlx128 v123,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v123.u8[15 - i]);
	// li r5,1280
	ctx.r5.s64 = 1280;
	// stvlx128 v124,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v124.u8[15 - i]);
	// li r5,1296
	ctx.r5.s64 = 1296;
	// stvlx128 v125,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v125.u8[15 - i]);
	// li r5,1312
	ctx.r5.s64 = 1312;
	// stvlx128 v126,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v126.u8[15 - i]);
	// li r5,1328
	ctx.r5.s64 = 1328;
	// stvlx128 v127,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v127.u8[15 - i]);
	// stw r0,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, r0.u32);
	// stw r4,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r4.u32);
	// std r1,144(r3)
	PPC_STORE_U64(ctx.r3.u32 + 144, ctx.r1.u64);
	// li r0,0
	r0.s64 = 0;
	// stw r0,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, r0.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B6D80"))) PPC_WEAK_FUNC(sub_831B6D80);
PPC_FUNC_IMPL(__imp__sub_831B6D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lfd f6,-3744(r11)
	ctx.f6.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// fcmpu cr6,f1,f6
	cr6.compare(ctx.f1.f64, ctx.f6.f64);
	// bne cr6,0x831b6da0
	if (!cr6.eq) goto loc_831B6DA0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f1,-8872(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// blr 
	return;
loc_831B6DA0:
	// lhz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r10,0,17,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FF0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x831b6dd4
	if (!cr6.eq) goto loc_831B6DD4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lfd f0,-9312(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -9312);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgtlr cr6
	if (cr6.gt) return;
loc_831B6DC4:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lfd f0,-816(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -816);
loc_831B6DCC:
	// fneg f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_831B6DD4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f0,-8872(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8872);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x831b6df8
	if (cr6.gt) goto loc_831B6DF8;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x831b6dc4
	if (!cr6.eq) goto loc_831B6DC4;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lfd f0,-824(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -824);
	// b 0x831b6dcc
	goto loc_831B6DCC;
loc_831B6DF8:
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lfd f0,-10224(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -10224);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x831b6e30
	if (!cr6.lt) goto loc_831B6E30;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lfd f0,-9320(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -9320);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * f0.f64;
	// stfd f1,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r10,r11,28,21,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7FF;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addi r10,r11,-1075
	ctx.r10.s64 = r11.s64 + -1075;
	// b 0x831b6e38
	goto loc_831B6E38;
loc_831B6E30:
	// rlwinm r11,r11,28,20,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFF;
	// addi r10,r11,-1022
	ctx.r10.s64 = r11.s64 + -1022;
loc_831B6E38:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// stfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// andi. r9,r9,32783
	ctx.r9.u64 = ctx.r9.u64 & 32783;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,-9440
	r11.s64 = r11.s64 + -9440;
	// ori r9,r9,16352
	ctx.r9.u64 = ctx.r9.u64 | 16352;
	// sth r9,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r9.u16);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfd f0,0(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x831b6e7c
	if (!cr6.gt) goto loc_831B6E7C;
	// lfd f0,-6088(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -6088);
	// fadd f12,f13,f6
	ctx.f12.f64 = ctx.f13.f64 + ctx.f6.f64;
	// fsub f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 - f0.f64;
	// fmul f13,f12,f0
	ctx.f13.f64 = ctx.f12.f64 * f0.f64;
	// fsub f0,f11,f0
	f0.f64 = ctx.f11.f64 - f0.f64;
	// b 0x831b6e90
	goto loc_831B6E90;
loc_831B6E7C:
	// lfd f12,-6088(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -6088);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fsub f0,f13,f12
	f0.f64 = ctx.f13.f64 - ctx.f12.f64;
	// fadd f13,f0,f6
	ctx.f13.f64 = f0.f64 + ctx.f6.f64;
	// fmul f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 * ctx.f12.f64;
loc_831B6E90:
	// fdiv f5,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f0.f64 / ctx.f13.f64;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lfd f12,40(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 40);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lfd f9,64(r11)
	ctx.f9.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// lfd f7,8(r11)
	ctx.f7.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// extsw r11,r10
	r11.s64 = ctx.r10.s32;
	// lfd f13,-9328(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -9328);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfd f11,-9336(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -9336);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f10,-9344(r7)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9344);
	// lfd f8,-9352(r6)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r6.u32 + -9352);
	// lfd f0,-16(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f0
	ctx.f4.f64 = double(f0.s64);
	// fmul f3,f5,f5
	ctx.f3.f64 = ctx.f5.f64 * ctx.f5.f64;
	// lfd f0,-9360(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -9360);
	// fmul f0,f4,f0
	f0.f64 = ctx.f4.f64 * f0.f64;
	// fnmsub f13,f3,f13,f12
	ctx.f13.f64 = -(ctx.f3.f64 * ctx.f13.f64 - ctx.f12.f64);
	// fsub f12,f3,f11
	ctx.f12.f64 = ctx.f3.f64 - ctx.f11.f64;
	// fmsub f13,f13,f3,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f3.f64 - ctx.f10.f64;
	// fmadd f12,f12,f3,f9
	ctx.f12.f64 = ctx.f12.f64 * ctx.f3.f64 + ctx.f9.f64;
	// fmul f13,f13,f3
	ctx.f13.f64 = ctx.f13.f64 * ctx.f3.f64;
	// fmsub f12,f12,f3,f8
	ctx.f12.f64 = ctx.f12.f64 * ctx.f3.f64 - ctx.f8.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f13,f13,f6
	ctx.f13.f64 = ctx.f13.f64 + ctx.f6.f64;
	// fmsub f0,f13,f5,f0
	f0.f64 = ctx.f13.f64 * ctx.f5.f64 - f0.f64;
	// fmadd f1,f4,f7,f0
	ctx.f1.f64 = ctx.f4.f64 * ctx.f7.f64 + f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B6F10"))) PPC_WEAK_FUNC(sub_831B6F10);
PPC_FUNC_IMPL(__imp__sub_831B6F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831b6d80
	sub_831B6D80(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lfd f0,-9416(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -9416);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B6F40"))) PPC_WEAK_FUNC(sub_831B6F40);
PPC_FUNC_IMPL(__imp__sub_831B6F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// cmpw r5,r4
	cr0.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// beq cr6,0x831b6f84
	if (cr6.eq) goto loc_831B6F84;
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x831b6f70
	if (cr0.eq) goto loc_831B6F70;
loc_831B6F5C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x831b6f94
	if (cr6.eq) goto loc_831B6F94;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpw r4,r5
	cr0.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bne 0x831b6f5c
	if (!cr0.eq) goto loc_831B6F5C;
loc_831B6F70:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpw r4,r5
	cr0.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// beq 0x831b6f70
	if (cr0.eq) goto loc_831B6F70;
	// b 0x831b6f5c
	goto loc_831B6F5C;
loc_831B6F84:
	// beq 0x831b6f94
	if (cr0.eq) goto loc_831B6F94;
	// lbzu r5,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// b 0x831b6f84
	goto loc_831B6F84;
loc_831B6F94:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B6FA0"))) PPC_WEAK_FUNC(sub_831B6FA0);
PPC_FUNC_IMPL(__imp__sub_831B6FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	uint32_t ea{};
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_831B6FA8:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpwi cr7,r6,0
	cr7.compare<int32_t>(ctx.r6.s32, 0, xer);
	// subf. r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr7,0x831b6ff0
	if (cr7.eq) goto loc_831B6FF0;
	// beq 0x831b6fa8
	if (cr0.eq) goto loc_831B6FA8;
	// cmpwi cr5,r6,65
	cr5.compare<int32_t>(ctx.r6.s32, 65, xer);
	// cmpwi cr6,r6,90
	cr6.compare<int32_t>(ctx.r6.s32, 90, xer);
	// blt cr5,0x831b6fd4
	if (cr5.lt) goto loc_831B6FD4;
	// bgt cr6,0x831b6fd4
	if (cr6.gt) goto loc_831B6FD4;
	// ori r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 | 32;
loc_831B6FD4:
	// cmpwi r5,65
	cr0.compare<int32_t>(ctx.r5.s32, 65, xer);
	// cmpwi cr1,r5,90
	cr1.compare<int32_t>(ctx.r5.s32, 90, xer);
	// blt 0x831b6fe8
	if (cr0.lt) goto loc_831B6FE8;
	// bgt cr1,0x831b6fe8
	if (cr1.gt) goto loc_831B6FE8;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
loc_831B6FE8:
	// subf. r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b6fa8
	if (cr0.eq) goto loc_831B6FA8;
loc_831B6FF0:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B6FF8"))) PPC_WEAK_FUNC(sub_831B6FF8);
PPC_FUNC_IMPL(__imp__sub_831B6FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// stfd f2,24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// lwz r11,24(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfd f1,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r9,16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfd f0,-8872(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8872);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// rlwimi r11,r9,0,1,31
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFFFFFF) | (r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7030"))) PPC_WEAK_FUNC(sub_831B7030);
PPC_FUNC_IMPL(__imp__sub_831B7030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r11,16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// not r8,r11
	ctx.r8.u64 = ~r11.u64;
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfd f0,-8872(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8872);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// rlwimi r8,r11,0,1,31
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x7FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFF80000000);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7060"))) PPC_WEAK_FUNC(sub_831B7060);
PPC_FUNC_IMPL(__imp__sub_831B7060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// addi r11,r11,-32752
	r11.s64 = r11.s64 + -32752;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7080"))) PPC_WEAK_FUNC(sub_831B7080);
PPC_FUNC_IMPL(__imp__sub_831B7080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x831b70ac
	if (!cr6.eq) goto loc_831B70AC;
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// clrlwi. r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831b70b4
	if (!cr0.eq) goto loc_831B70B4;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831b70b4
	if (!cr6.eq) goto loc_831B70B4;
loc_831B70AC:
	// cmplwi cr6,r11,32760
	cr6.compare<uint32_t>(r11.u32, 32760, xer);
	// bne cr6,0x831b70bc
	if (!cr6.eq) goto loc_831B70BC;
loc_831B70B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831B70BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B70C8"))) PPC_WEAK_FUNC(sub_831B70C8);
PPC_FUNC_IMPL(__imp__sub_831B70C8) {
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
	// stfd f1,112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f1.u64);
	// lhz r11,112(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	cr6.compare<uint32_t>(ctx.r10.u32, 32752, xer);
	// bne cr6,0x831b7120
	if (!cr6.eq) goto loc_831B7120;
	// bl 0x831bd8e8
	sub_831BD8E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831b7118
	if (cr6.eq) goto loc_831B7118;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x831b7110
	if (cr6.eq) goto loc_831B7110;
	// addi r11,r3,-3
	r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// b 0x831b718c
	goto loc_831B718C;
loc_831B7110:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x831b718c
	goto loc_831B718C;
loc_831B7118:
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x831b718c
	goto loc_831B718C;
loc_831B7120:
	// rlwinm r11,r11,0,16,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831b715c
	if (!cr6.eq) goto loc_831B715C;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi. r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831b7144
	if (!cr0.eq) goto loc_831B7144;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831b715c
	if (cr6.eq) goto loc_831B715C;
loc_831B7144:
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,27,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// addi r3,r11,128
	ctx.r3.s64 = r11.s64 + 128;
	// b 0x831b718c
	goto loc_831B718C;
loc_831B715C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lfd f0,-8872(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8872);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x831b7180
	if (!cr6.eq) goto loc_831B7180;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// b 0x831b718c
	goto loc_831B718C;
loc_831B7180:
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r11,r11,0,28,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// addi r3,r11,256
	ctx.r3.s64 = r11.s64 + 256;
loc_831B718C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B71A0"))) PPC_WEAK_FUNC(sub_831B71A0);
PPC_FUNC_IMPL(__imp__sub_831B71A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x831b71bc
	if (cr6.eq) goto loc_831B71BC;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_831B71BC:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_831B71C0:
	// divwu r10,r3,r5
	ctx.r10.u32 = ctx.r3.u32 / ctx.r5.u32;
	// twllei r5,0
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// divwu r3,r3,r5
	ctx.r3.u32 = ctx.r3.u32 / ctx.r5.u32;
	// twllei r5,0
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// ble cr6,0x831b71e8
	if (!cr6.gt) goto loc_831B71E8;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// b 0x831b71ec
	goto loc_831B71EC;
loc_831B71E8:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_831B71EC:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831b71c0
	if (!cr6.eq) goto loc_831B71C0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_831B7208:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x831b7208
	if (cr6.lt) goto loc_831B7208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7230"))) PPC_WEAK_FUNC(sub_831B7230);
PPC_FUNC_IMPL(__imp__sub_831B7230) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// bl 0x831b71a0
	sub_831B71A0(ctx, base);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7260"))) PPC_WEAK_FUNC(sub_831B7260);
PPC_FUNC_IMPL(__imp__sub_831B7260) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f13,-8872(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// fabs f0,f30
	f0.u64 = f30.u64 & ~0x8000000000000000;
	// fcmpu cr6,f30,f13
	cr6.compare(f30.f64, ctx.f13.f64);
	// bne cr6,0x831b7290
	if (!cr6.eq) goto loc_831B7290;
	// b 0x831b7348
	goto loc_831B7348;
loc_831B7290:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r11,r11,-9256
	r11.s64 = r11.s64 + -9256;
	// lfd f13,-32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x831b72f0
	if (!cr6.gt) goto loc_831B72F0;
	// lfd f13,-40(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -40);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x831b72bc
	if (!cr6.gt) goto loc_831B72BC;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfd f0,-3744(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// b 0x831b7340
	goto loc_831B7340;
loc_831B72BC:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfd f31,-18480(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + -18480);
	// fmul f1,f0,f31
	ctx.f1.f64 = f0.f64 * f31.f64;
	// bl 0x831b56c0
	sub_831B56C0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// fadd f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 + f0.f64;
	// lfd f13,-6088(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -6088);
	// fdiv f0,f0,f12
	f0.f64 = f0.f64 / ctx.f12.f64;
	// fsub f0,f13,f0
	f0.f64 = ctx.f13.f64 - f0.f64;
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// b 0x831b7340
	goto loc_831B7340;
loc_831B72F0:
	// fmul f6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = f0.f64 * f0.f64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfd f12,-16(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lfd f11,16(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lfd f9,8(r11)
	ctx.f9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// lfd f8,0(r11)
	ctx.f8.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lfd f13,-9216(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -9216);
	// lfd f10,-9224(r9)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -9224);
	// lfd f7,-3744(r8)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r8.u32 + -3744);
	// fnmsub f13,f6,f13,f12
	ctx.f13.f64 = -(ctx.f6.f64 * ctx.f13.f64 - ctx.f12.f64);
	// fadd f12,f6,f11
	ctx.f12.f64 = ctx.f6.f64 + ctx.f11.f64;
	// fmsub f13,f13,f6,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f6.f64 - ctx.f10.f64;
	// fmadd f12,f12,f6,f9
	ctx.f12.f64 = ctx.f12.f64 * ctx.f6.f64 + ctx.f9.f64;
	// fmul f13,f13,f6
	ctx.f13.f64 = ctx.f13.f64 * ctx.f6.f64;
	// fmadd f12,f12,f6,f8
	ctx.f12.f64 = ctx.f12.f64 * ctx.f6.f64 + ctx.f8.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f13,f13,f7
	ctx.f13.f64 = ctx.f13.f64 + ctx.f7.f64;
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
loc_831B7340:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f1,f30,f0,f13
	ctx.f1.f64 = f30.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
loc_831B7348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7360"))) PPC_WEAK_FUNC(sub_831B7360);
PPC_FUNC_IMPL(__imp__sub_831B7360) {
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
	// lis r11,-16377
	r11.s64 = -1073283072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r3,248
	ctx.r3.s64 = 248;
	// stfd f31,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, f31.u64);
	// ori r29,r11,65279
	r29.u64 = r11.u64 | 65279;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// lhz r11,160(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x831b7400
	if (!cr6.eq) goto loc_831B7400;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x831bd8e8
	sub_831BD8E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x831b73ec
	if (!cr0.gt) goto loc_831B73EC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x831b73d8
	if (!cr6.gt) goto loc_831B73D8;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x831b73ec
	if (!cr6.eq) goto loc_831B73EC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x831c16d0
	sub_831C16D0(ctx, base);
	// b 0x831b75b8
	goto loc_831B75B8;
loc_831B73D8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// b 0x831b75b8
	goto loc_831B75B8;
loc_831B73EC:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// fadd f2,f31,f0
	ctx.f2.f64 = f31.f64 + f0.f64;
	// b 0x831b75a8
	goto loc_831B75A8;
loc_831B7400:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f0,-8872(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// beq cr6,0x831b73d8
	if (cr6.eq) goto loc_831B73D8;
	// fneg f13,f31
	ctx.f13.u64 = f31.u64 ^ 0x8000000000000000;
	// li r30,-1
	r30.s64 = -1;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// fsel f1,f31,f31,f13
	ctx.f1.f64 = f31.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// blt cr6,0x831b7428
	if (cr6.lt) goto loc_831B7428;
	// li r30,1
	r30.s64 = 1;
loc_831B7428:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfd f30,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, f30.f64);
	// addi r11,r11,-9208
	r11.s64 = r11.s64 + -9208;
	// ble cr6,0x831b74dc
	if (!cr6.gt) goto loc_831B74DC;
	// lfd f0,8(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x831b74a8
	if (!cr6.gt) goto loc_831B74A8;
	// lfd f0,16(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x831b746c
	if (!cr6.gt) goto loc_831B746C;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r3,17
	ctx.r3.s64 = 17;
	// lfd f0,-824(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -824);
	// fmul f2,f0,f31
	ctx.f2.f64 = f0.f64 * f31.f64;
	// b 0x831b75a8
	goto loc_831B75A8;
loc_831B746C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831b57a0
	sub_831B57A0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmpwi cr6,r4,1024
	cr6.compare<int32_t>(ctx.r4.s32, 1024, xer);
	// ble cr6,0x831b749c
	if (!cr6.gt) goto loc_831B749C;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x831bd870
	sub_831BD870(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x831b75a8
	goto loc_831B75A8;
loc_831B749C:
	// bl 0x831bd870
	sub_831BD870(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// b 0x831b74cc
	goto loc_831B74CC;
loc_831B74A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831b57a0
	sub_831B57A0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831bd870
	sub_831BD870(ctx, base);
	// fdiv f13,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f30.f64 / ctx.f1.f64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfd f0,-6088(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -6088);
	// fsub f13,f1,f13
	ctx.f13.f64 = ctx.f1.f64 - ctx.f13.f64;
	// fmul f30,f13,f0
	f30.f64 = ctx.f13.f64 * f0.f64;
loc_831B74CC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x831b7584
	if (!cr6.lt) goto loc_831B7584;
	// fneg f30,f30
	ctx.fpscr.disableFlushMode();
	f30.u64 = f30.u64 ^ 0x8000000000000000;
	// b 0x831b7584
	goto loc_831B7584;
loc_831B74DC:
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x831b752c
	if (!cr6.lt) goto loc_831B752C;
	// fmr f30,f31
	f30.f64 = f31.f64;
	// stfd f30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f30.u64);
	// lhz r11,88(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// rlwinm. r11,r11,0,17,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831b7584
	if (!cr0.eq) goto loc_831B7584;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi. r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831b7514
	if (!cr0.eq) goto loc_831B7514;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831b7584
	if (cr6.eq) goto loc_831B7584;
loc_831B7514:
	// li r4,1536
	ctx.r4.s64 = 1536;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x831bd8b0
	sub_831BD8B0(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// b 0x831b75a8
	goto loc_831B75A8;
loc_831B752C:
	// fmul f7,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = f31.f64 * f31.f64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lfd f13,40(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 40);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lfd f10,64(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lfd f0,-9096(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -9096);
	// lfd f12,-9104(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -9104);
	// lfd f11,-9112(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -9112);
	// lfd f9,-9120(r11)
	ctx.f9.u64 = PPC_LOAD_U64(r11.u32 + -9120);
	// lfd f8,-9128(r7)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9128);
	// fnmsub f0,f7,f0,f13
	f0.f64 = -(ctx.f7.f64 * f0.f64 - ctx.f13.f64);
	// fsub f13,f7,f12
	ctx.f13.f64 = ctx.f7.f64 - ctx.f12.f64;
	// fmsub f0,f0,f7,f11
	f0.f64 = f0.f64 * ctx.f7.f64 - ctx.f11.f64;
	// fmadd f13,f13,f7,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f7.f64 + ctx.f10.f64;
	// fmsub f0,f0,f7,f9
	f0.f64 = f0.f64 * ctx.f7.f64 - ctx.f9.f64;
	// fmsub f13,f13,f7,f8
	ctx.f13.f64 = ctx.f13.f64 * ctx.f7.f64 - ctx.f8.f64;
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// fmadd f0,f0,f7,f30
	f0.f64 = f0.f64 * ctx.f7.f64 + f30.f64;
	// fmul f30,f0,f31
	f30.f64 = f0.f64 * f31.f64;
loc_831B7584:
	// rlwinm. r11,r31,0,28,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b75a0
	if (cr0.eq) goto loc_831B75A0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// b 0x831b75b8
	goto loc_831B75B8;
loc_831B75A0:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r3,16
	ctx.r3.s64 = 16;
loc_831B75A8:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x831c17d8
	sub_831C17D8(ctx, base);
loc_831B75B8:
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

__attribute__((alias("__imp__sub_831B75C8"))) PPC_WEAK_FUNC(sub_831B75C8);
PPC_FUNC_IMPL(__imp__sub_831B75C8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-16377
	r11.s64 = -1073283072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r3,248
	ctx.r3.s64 = 248;
	// stfd f31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, f31.u64);
	// ori r30,r11,65279
	r30.u64 = r11.u64 | 65279;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// lhz r11,144(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x831b7674
	if (!cr6.eq) goto loc_831B7674;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x831bd8e8
	sub_831BD8E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x831b7660
	if (!cr0.gt) goto loc_831B7660;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x831b7648
	if (!cr6.gt) goto loc_831B7648;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x831b7660
	if (!cr6.eq) goto loc_831B7660;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x831c16d0
	sub_831C16D0(ctx, base);
	// b 0x831b7770
	goto loc_831B7770;
loc_831B7648:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lfd f1,-824(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -824);
	// b 0x831b7770
	goto loc_831B7770;
loc_831B7660:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// fadd f2,f31,f0
	ctx.f2.f64 = f31.f64 + f0.f64;
	// b 0x831b7760
	goto loc_831B7760;
loc_831B7674:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f0,-8872(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bne cr6,0x831b769c
	if (!cr6.eq) goto loc_831B769C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfd f1,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// b 0x831b7770
	goto loc_831B7770;
loc_831B769C:
	// fneg f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f31.u64 ^ 0x8000000000000000;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r11,r11,-9192
	r11.s64 = r11.s64 + -9192;
	// lfd f0,-8(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -8);
	// fsel f1,f31,f31,f13
	ctx.f1.f64 = f31.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x831b7710
	if (!cr6.gt) goto loc_831B7710;
	// lfd f0,0(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x831b76d4
	if (!cr6.gt) goto loc_831B76D4;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r3,17
	ctx.r3.s64 = 17;
	// lfd f2,-824(r11)
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + -824);
	// b 0x831b7760
	goto loc_831B7760;
loc_831B76D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831b57a0
	sub_831B57A0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmpwi cr6,r4,1024
	cr6.compare<int32_t>(ctx.r4.s32, 1024, xer);
	// ble cr6,0x831b7704
	if (!cr6.gt) goto loc_831B7704;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x831bd870
	sub_831BD870(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x831b7760
	goto loc_831B7760;
loc_831B7704:
	// bl 0x831bd870
	sub_831BD870(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// b 0x831b773c
	goto loc_831B773C;
loc_831B7710:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831b57a0
	sub_831B57A0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831bd870
	sub_831BD870(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// fdiv f0,f0,f1
	f0.f64 = f0.f64 / ctx.f1.f64;
	// lfd f13,-6088(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -6088);
	// fadd f0,f0,f1
	f0.f64 = f0.f64 + ctx.f1.f64;
	// fmul f30,f0,f13
	f30.f64 = f0.f64 * ctx.f13.f64;
loc_831B773C:
	// rlwinm. r11,r31,0,28,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b7758
	if (cr0.eq) goto loc_831B7758;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c19a0
	sub_831C19A0(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// b 0x831b7770
	goto loc_831B7770;
loc_831B7758:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r3,16
	ctx.r3.s64 = 16;
loc_831B7760:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x831c17d8
	sub_831C17D8(ctx, base);
loc_831B7770:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_831B7790"))) PPC_WEAK_FUNC(sub_831B7790);
PPC_FUNC_IMPL(__imp__sub_831B7790) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r20
	r28.u64 = r20.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x831b77f4
	if (cr6.eq) goto loc_831B77F4;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x831b77f4
	if (cr6.eq) goto loc_831B77F4;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x831b7800
	if (!cr6.eq) goto loc_831B7800;
loc_831B77D0:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
loc_831B77D8:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
loc_831B77F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B77F8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b58
	return;
loc_831B7800:
	// li r31,-1
	r31.s64 = -1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x831b781c
	if (cr6.eq) goto loc_831B781C;
	// divwu r11,r31,r24
	r11.u32 = r31.u32 / r24.u32;
	// twllei r24,0
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// ble cr6,0x831b784c
	if (!cr6.gt) goto loc_831B784C;
loc_831B781C:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// beq cr6,0x831b7834
	if (cr6.eq) goto loc_831B7834;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_831B7834:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x831b77d0
	if (cr6.eq) goto loc_831B77D0;
	// divwu r11,r31,r24
	r11.u32 = r31.u32 / r24.u32;
	// twllei r24,0
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bgt cr6,0x831b77d0
	if (cr6.gt) goto loc_831B77D0;
loc_831B784C:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mullw r23,r24,r22
	r23.s64 = int64_t(r24.s32) * int64_t(r22.s32);
	// andi. r11,r11,268
	r11.u64 = r11.u64 & 268;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b786c
	if (cr0.eq) goto loc_831B786C;
	// lwz r26,24(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// b 0x831b7870
	goto loc_831B7870;
loc_831B786C:
	// li r26,4096
	r26.s64 = 4096;
loc_831B7870:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x831b79b8
	if (cr6.eq) goto loc_831B79B8;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r25,r11,65535
	r25.u64 = r11.u64 | 65535;
loc_831B7880:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// andi. r11,r11,268
	r11.u64 = r11.u64 & 268;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b78f0
	if (cr0.eq) goto loc_831B78F0;
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x831b78f0
	if (cr6.eq) goto loc_831B78F0;
	// blt cr6,0x831b79e4
	if (cr6.lt) goto loc_831B79E4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x831b78ac
	if (!cr6.lt) goto loc_831B78AC;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_831B78AC:
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bgt cr6,0x831b79c0
	if (cr6.gt) goto loc_831B79C0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b1498
	sub_831B1498(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r31,r30,r31
	r31.s64 = r31.s64 - r30.s64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r28,r30,r28
	r28.u64 = r30.u64 + r28.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// subf r27,r30,r27
	r27.s64 = r27.s64 - r30.s64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x831b79b0
	goto loc_831B79B0;
loc_831B78F0:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// blt cr6,0x831b7984
	if (cr6.lt) goto loc_831B7984;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x831b7938
	if (cr6.eq) goto loc_831B7938;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// twllei r26,0
	// ble cr6,0x831b7924
	if (!cr6.gt) goto loc_831B7924;
	// mr r11,r25
	r11.u64 = r25.u64;
	// divwu r10,r11,r26
	ctx.r10.u32 = r11.u32 / r26.u32;
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subf r30,r11,r25
	r30.s64 = r25.s64 - r11.s64;
	// b 0x831b7948
	goto loc_831B7948;
loc_831B7924:
	// divwu r11,r31,r26
	r11.u32 = r31.u32 / r26.u32;
	// mullw r11,r11,r26
	r11.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// subf r30,r11,r31
	r30.s64 = r31.s64 - r11.s64;
	// b 0x831b7948
	goto loc_831B7948;
loc_831B7938:
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// mr r30,r25
	r30.u64 = r25.u64;
	// bgt cr6,0x831b7948
	if (cr6.gt) goto loc_831B7948;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_831B7948:
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bgt cr6,0x831b79c0
	if (cr6.gt) goto loc_831B79C0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x831c3bf8
	sub_831C3BF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831b7a00
	if (cr0.eq) goto loc_831B7A00;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831b79e4
	if (cr6.eq) goto loc_831B79E4;
	// subf r31,r3,r31
	r31.s64 = r31.s64 - ctx.r3.s64;
	// add r28,r3,r28
	r28.u64 = ctx.r3.u64 + r28.u64;
	// subf r27,r3,r27
	r27.s64 = r27.s64 - ctx.r3.s64;
	// b 0x831b79b0
	goto loc_831B79B0;
loc_831B7984:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c33f8
	sub_831C33F8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831b7a0c
	if (cr6.eq) goto loc_831B7A0C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x831b79c0
	if (cr6.eq) goto loc_831B79C0;
	// stb r3,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r3.u8);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// lwz r26,24(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
loc_831B79B0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831b7880
	if (!cr6.eq) goto loc_831B7880;
loc_831B79B8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// b 0x831b77f8
	goto loc_831B77F8;
loc_831B79C0:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// beq cr6,0x831b79d8
	if (cr6.eq) goto loc_831B79D8;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_831B79D8:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,34
	r11.s64 = 34;
	// b 0x831b77d8
	goto loc_831B77D8;
loc_831B79E4:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
loc_831B79EC:
	// subf r10,r31,r23
	ctx.r10.s64 = r23.s64 - r31.s64;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// twllei r24,0
	// divwu r3,r10,r24
	ctx.r3.u32 = ctx.r10.u32 / r24.u32;
	// b 0x831b77f8
	goto loc_831B77F8;
loc_831B7A00:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// b 0x831b79ec
	goto loc_831B79EC;
loc_831B7A0C:
	// subf r11,r31,r23
	r11.s64 = r23.s64 - r31.s64;
	// twllei r24,0
	// divwu r3,r11,r24
	ctx.r3.u32 = r11.u32 / r24.u32;
	// b 0x831b77f8
	goto loc_831B77F8;
}

__attribute__((alias("__imp__sub_831B7A28"))) PPC_WEAK_FUNC(sub_831B7A28);
PPC_FUNC_IMPL(__imp__sub_831B7A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x831b7aa8
	if (cr6.eq) goto loc_831B7AA8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x831b7aa8
	if (cr6.eq) goto loc_831B7AA8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831b7ab4
	if (!cr6.eq) goto loc_831B7AB4;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x831b7a84
	if (cr6.eq) goto loc_831B7A84;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_831B7A84:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
loc_831B7AA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B7AAC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
loc_831B7AB4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b9010
	sub_831B9010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831b7790
	sub_831B7790(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x831b7b10
	sub_831B7B10(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x831b7aac
	goto loc_831B7AAC;
}

__attribute__((alias("__imp__sub_831B7AF0"))) PPC_WEAK_FUNC(sub_831B7AF0);
PPC_FUNC_IMPL(__imp__sub_831B7AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,196(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// b 0x831b7b28
	goto loc_831B7B28;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831B7B28:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7B10"))) PPC_WEAK_FUNC(sub_831B7B10);
PPC_FUNC_IMPL(__imp__sub_831B7B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7B48"))) PPC_WEAK_FUNC(sub_831B7B48);
PPC_FUNC_IMPL(__imp__sub_831B7B48) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x831b7a28
	sub_831B7A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B7B60"))) PPC_WEAK_FUNC(sub_831B7B60);
PPC_FUNC_IMPL(__imp__sub_831B7B60) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831b7ba0
	if (!cr0.eq) goto loc_831B7BA0;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x831b7c24
	goto loc_831B7C24;
loc_831B7BA0:
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bne cr6,0x831b7bc0
	if (!cr6.eq) goto loc_831B7BC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831ba128
	sub_831BA128(ctx, base);
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
	// li r30,0
	r30.s64 = 0;
loc_831B7BC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b9138
	sub_831B9138(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b7be0
	if (cr0.eq) goto loc_831B7BE0;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x831b7c00
	goto loc_831B7C00;
loc_831B7BE0:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b7c00
	if (cr0.eq) goto loc_831B7C00;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b7c00
	if (cr0.eq) goto loc_831B7C00;
	// rlwinm. r11,r11,0,21,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831b7c00
	if (!cr0.eq) goto loc_831B7C00;
	// li r11,512
	r11.s64 = 512;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_831B7C00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x831c3ed0
	sub_831C3ED0(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// neg r3,r11
	ctx.r3.s64 = -r11.s64;
loc_831B7C24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831B7C38"))) PPC_WEAK_FUNC(sub_831B7C38);
PPC_FUNC_IMPL(__imp__sub_831B7C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831b7c98
	if (!cr6.eq) goto loc_831B7C98;
loc_831B7C6C:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831b7ce0
	goto loc_831B7CE0;
loc_831B7C98:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x831b7cb0
	if (cr6.eq) goto loc_831B7CB0;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// beq cr6,0x831b7cb0
	if (cr6.eq) goto loc_831B7CB0;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x831b7c6c
	if (!cr6.eq) goto loc_831B7C6C;
loc_831B7CB0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b9010
	sub_831B9010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b7b60
	sub_831B7B60(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x831b7d08
	sub_831B7D08(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_831B7CE0:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831B7CE8"))) PPC_WEAK_FUNC(sub_831B7CE8);
PPC_FUNC_IMPL(__imp__sub_831B7CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,148(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// b 0x831b7d20
	goto loc_831B7D20;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831B7D20:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7D08"))) PPC_WEAK_FUNC(sub_831B7D08);
PPC_FUNC_IMPL(__imp__sub_831B7D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7D40"))) PPC_WEAK_FUNC(sub_831B7D40);
PPC_FUNC_IMPL(__imp__sub_831B7D40) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x831b7d98
	if (cr6.eq) goto loc_831B7D98;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x831b7d98
	if (cr6.eq) goto loc_831B7D98;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831b7da4
	if (!cr6.eq) goto loc_831B7DA4;
loc_831B7D74:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
loc_831B7D98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B7D9C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831b0b68
	return;
loc_831B7DA4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x831b7d74
	if (cr6.eq) goto loc_831B7D74;
	// li r11,-1
	r11.s64 = -1;
	// twllei r25,0
	// divwu r11,r11,r25
	r11.u32 = r11.u32 / r25.u32;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// bgt cr6,0x831b7d74
	if (cr6.gt) goto loc_831B7D74;
	// mullw r26,r25,r24
	r26.s64 = int64_t(r25.s32) * int64_t(r24.s32);
	// mr r31,r26
	r31.u64 = r26.u64;
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x831b7f58
	if (cr6.eq) goto loc_831B7F58;
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x831b7f58
	if (cr6.eq) goto loc_831B7F58;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// andi. r11,r11,268
	r11.u64 = r11.u64 & 268;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b7e00
	if (cr0.eq) goto loc_831B7E00;
	// lwz r27,24(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// b 0x831b7e04
	goto loc_831B7E04;
loc_831B7E00:
	// li r27,4096
	r27.s64 = 4096;
loc_831B7E04:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x831b7f9c
	if (cr6.eq) goto loc_831B7F9C;
loc_831B7E0C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// andi. r11,r11,264
	r11.u64 = r11.u64 & 264;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b7e6c
	if (cr0.eq) goto loc_831B7E6C;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x831b7e6c
	if (cr6.eq) goto loc_831B7E6C;
	// blt cr6,0x831b7eec
	if (cr6.lt) goto loc_831B7EEC;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x831b7e38
	if (!cr6.lt) goto loc_831B7E38;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_831B7E38:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r31,r29,r31
	r31.s64 = r31.s64 - r29.s64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r28,r29,r28
	r28.u64 = r29.u64 + r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x831b7f3c
	goto loc_831B7F3C;
loc_831B7E6C:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// blt cr6,0x831b7f08
	if (cr6.lt) goto loc_831B7F08;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831b7e8c
	if (cr6.eq) goto loc_831B7E8C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b9138
	sub_831B9138(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831b7f48
	if (!cr0.eq) goto loc_831B7F48;
loc_831B7E8C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x831b7eac
	if (cr6.eq) goto loc_831B7EAC;
	// divwu r11,r31,r27
	r11.u32 = r31.u32 / r27.u32;
	// twllei r27,0
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// subf r29,r11,r31
	r29.s64 = r31.s64 - r11.s64;
	// b 0x831b7eb0
	goto loc_831B7EB0;
loc_831B7EAC:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_831B7EB0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x831c42b8
	sub_831C42B8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831b7eec
	if (cr6.eq) goto loc_831B7EEC;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bgt cr6,0x831b7edc
	if (cr6.gt) goto loc_831B7EDC;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_831B7EDC:
	// subf r31,r11,r31
	r31.s64 = r31.s64 - r11.s64;
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bge cr6,0x831b7f3c
	if (!cr6.lt) goto loc_831B7F3C;
loc_831B7EEC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// subf r10,r31,r26
	ctx.r10.s64 = r26.s64 - r31.s64;
	// twllei r25,0
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// divwu r3,r10,r25
	ctx.r3.u32 = ctx.r10.u32 / r25.u32;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// b 0x831b7d9c
	goto loc_831B7D9C;
loc_831B7F08:
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x831bcb28
	sub_831BCB28(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831b7f48
	if (cr6.eq) goto loc_831B7F48;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r27,r11
	r27.u64 = r11.u64;
	// bgt cr6,0x831b7f3c
	if (cr6.gt) goto loc_831B7F3C;
	// li r27,1
	r27.s64 = 1;
loc_831B7F3C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831b7e0c
	if (!cr6.eq) goto loc_831B7E0C;
	// b 0x831b7f9c
	goto loc_831B7F9C;
loc_831B7F48:
	// subf r11,r31,r26
	r11.s64 = r26.s64 - r31.s64;
	// twllei r25,0
	// divwu r3,r11,r25
	ctx.r3.u32 = r11.u32 / r25.u32;
	// b 0x831b7d9c
	goto loc_831B7D9C;
loc_831B7F58:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x831b7f9c
	if (cr6.eq) goto loc_831B7F9C;
loc_831B7F60:
	// cmplwi cr6,r31,255
	cr6.compare<uint32_t>(r31.u32, 255, xer);
	// mr r30,r31
	r30.u64 = r31.u64;
	// blt cr6,0x831b7f70
	if (cr6.lt) goto loc_831B7F70;
	// li r30,255
	r30.s64 = 255;
loc_831B7F70:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r10,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, ctx.r10.u8);
	// bl 0x82bd4ca8
	sub_82BD4CA8(ctx, base);
	// subf. r31,r30,r31
	r31.s64 = r31.s64 - r30.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x831b7f60
	if (!cr0.eq) goto loc_831B7F60;
loc_831B7F9C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x831b7d9c
	goto loc_831B7D9C;
}

__attribute__((alias("__imp__sub_831B7FB0"))) PPC_WEAK_FUNC(sub_831B7FB0);
PPC_FUNC_IMPL(__imp__sub_831B7FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x831b801c
	if (cr6.eq) goto loc_831B801C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x831b801c
	if (cr6.eq) goto loc_831B801C;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831b8028
	if (!cr6.eq) goto loc_831B8028;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
loc_831B801C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B8020:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
loc_831B8028:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b9010
	sub_831B9010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b7d40
	sub_831B7D40(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x831b8080
	sub_831B8080(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x831b8020
	goto loc_831B8020;
}

__attribute__((alias("__imp__sub_831B8060"))) PPC_WEAK_FUNC(sub_831B8060);
PPC_FUNC_IMPL(__imp__sub_831B8060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,188(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// b 0x831b8098
	goto loc_831B8098;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831B8098:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8080"))) PPC_WEAK_FUNC(sub_831B8080);
PPC_FUNC_IMPL(__imp__sub_831B8080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B80B8"))) PPC_WEAK_FUNC(sub_831B80B8);
PPC_FUNC_IMPL(__imp__sub_831B80B8) {
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
	// li r30,-1
	r30.s64 = -1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831b8100
	if (!cr6.eq) goto loc_831B8100;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831b8160
	goto loc_831B8160;
loc_831B8100:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// andi. r11,r11,131
	r11.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b8158
	if (cr0.eq) goto loc_831B8158;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b9138
	sub_831B9138(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c4698
	sub_831C4698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// bl 0x831c4528
	sub_831C4528(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831b8144
	if (!cr0.lt) goto loc_831B8144;
	// li r30,-1
	r30.s64 = -1;
	// b 0x831b8158
	goto loc_831B8158;
loc_831B8144:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831b8158
	if (cr6.eq) goto loc_831B8158;
	// bl 0x831b4588
	sub_831B4588(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
loc_831B8158:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
loc_831B8160:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831B8170"))) PPC_WEAK_FUNC(sub_831B8170);
PPC_FUNC_IMPL(__imp__sub_831B8170) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831b81d8
	if (!cr6.eq) goto loc_831B81D8;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831b8218
	goto loc_831B8218;
loc_831B81D8:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b81f0
	if (cr0.eq) goto loc_831B81F0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// b 0x831b8214
	goto loc_831B8214;
loc_831B81F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b9010
	sub_831B9010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b80b8
	sub_831B80B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x831b8250
	sub_831B8250(ctx, base);
loc_831B8214:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_831B8218:
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

__attribute__((alias("__imp__sub_831B8230"))) PPC_WEAK_FUNC(sub_831B8230);
PPC_FUNC_IMPL(__imp__sub_831B8230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// b 0x831b8268
	goto loc_831B8268;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831B8268:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8250"))) PPC_WEAK_FUNC(sub_831B8250);
PPC_FUNC_IMPL(__imp__sub_831B8250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8288"))) PPC_WEAK_FUNC(sub_831B8288);
PPC_FUNC_IMPL(__imp__sub_831B8288) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x831c4880
	sub_831C4880(ctx, base);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2fe0
	sub_831B2FE0(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// blt cr6,0x831b82d0
	if (cr6.lt) goto loc_831B82D0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831b8338
	goto loc_831B8338;
loc_831B82D0:
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831c4878
	sub_831C4878(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b8300
	if (cr0.eq) goto loc_831B8300;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bcaa0
	sub_831BCAA0(ctx, base);
loc_831B8300:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b9530
	sub_831B9530(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b8334
	if (cr0.eq) goto loc_831B8334;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bcaa0
	sub_831BCAA0(ctx, base);
loc_831B8334:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B8338:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831B8348"))) PPC_WEAK_FUNC(sub_831B8348);
PPC_FUNC_IMPL(__imp__sub_831B8348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cntlzw r11,r26
	r11.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r27,0
	r27.s64 = 0;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r27,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r27.u32);
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831b83ac
	if (!cr6.eq) goto loc_831B83AC;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831b8600
	goto loc_831B8600;
loc_831B83AC:
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x831c3090
	sub_831C3090(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831b83cc
	if (!cr0.eq) goto loc_831B83CC;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x831b8600
	goto loc_831B8600;
loc_831B83CC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x831c31d0
	sub_831C31D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// addi r30,r11,-14372
	r30.s64 = r11.s64 + -14372;
	// lbz r11,-14372(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -14372);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// bne 0x831b84d4
	if (!cr0.eq) goto loc_831B84D4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r5,r11,10128
	ctx.r5.s64 = r11.s64 + 10128;
	// bl 0x831b9530
	sub_831B9530(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b8420
	if (cr0.eq) goto loc_831B8420;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bcaa0
	sub_831BCAA0(ctx, base);
loc_831B8420:
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// addi r11,r30,3
	r11.s64 = r30.s64 + 3;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// cmpwi cr6,r10,92
	cr6.compare<int32_t>(ctx.r10.s32, 92, xer);
	// beq cr6,0x831b8450
	if (cr6.eq) goto loc_831B8450;
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// beq cr6,0x831b8450
	if (cr6.eq) goto loc_831B8450;
	// li r10,92
	ctx.r10.s64 = 92;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stb r10,3(r30)
	PPC_STORE_U8(r30.u32 + 3, ctx.r10.u8);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_831B8450:
	// li r10,116
	ctx.r10.s64 = 116;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r30,20
	r11.s64 = r30.s64 + 20;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// subf r28,r29,r11
	r28.s64 = r11.s64 - r29.s64;
	// bl 0x831cca90
	sub_831CCA90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x831c4878
	sub_831C4878(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b849c
	if (cr0.eq) goto loc_831B849C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bcaa0
	sub_831BCAA0(ctx, base);
loc_831B849C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,-552
	ctx.r5.s64 = r11.s64 + -552;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x831bb5f8
	sub_831BB5F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b84e8
	if (cr0.eq) goto loc_831B84E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bcaa0
	sub_831BCAA0(ctx, base);
	// b 0x831b84e8
	goto loc_831B84E8;
loc_831B84D4:
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// bl 0x831b8288
	sub_831B8288(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831b85d8
	if (!cr0.eq) goto loc_831B85D8;
loc_831B84E8:
	// bl 0x831c5198
	sub_831C5198(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// bne 0x831b8504
	if (!cr0.eq) goto loc_831B8504;
	// li r11,24
	r11.s64 = 24;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// b 0x831b85dc
	goto loc_831B85DC;
loc_831B8504:
	// li r11,1
	r11.s64 = 1;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
loc_831B851C:
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// ori r5,r5,34114
	ctx.r5.u64 = ctx.r5.u64 | 34114;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x831c5170
	sub_831C5170(ctx, base);
	// cmpwi cr6,r3,17
	cr6.compare<int32_t>(ctx.r3.s32, 17, xer);
	// bne cr6,0x831b8564
	if (!cr6.eq) goto loc_831B8564;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x831b8288
	sub_831B8288(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831b8564
	if (!cr0.eq) goto loc_831B8564;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831b851c
	goto loc_831B851C;
loc_831B8564:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831b857c
	if (!cr6.eq) goto loc_831B857C;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
loc_831B857C:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x831b85dc
	if (cr6.eq) goto loc_831B85DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c4a20
	sub_831C4A20(ctx, base);
	// stw r3,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r3.u32);
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831b85ac
	if (!cr6.eq) goto loc_831B85AC;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x831c4528
	sub_831C4528(ctx, base);
	// b 0x831b85dc
	goto loc_831B85DC;
loc_831B85AC:
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// lis r11,-31932
	r11.s64 = -2092695552;
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r27.u32);
	// lwz r11,-13852(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13852);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// b 0x831b85dc
	goto loc_831B85DC;
loc_831B85D8:
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_831B85DC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	r12.s64 = r31.s64 + 176;
	// bl 0x831b8628
	sub_831B8628(ctx, base);
	// lwz r30,96(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x831b85fc
	if (cr6.eq) goto loc_831B85FC;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_831B85FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_831B8600:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_831B8608"))) PPC_WEAK_FUNC(sub_831B8608);
PPC_FUNC_IMPL(__imp__sub_831B8608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r29.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x831b8640
	goto loc_831B8640;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r29.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831B8640:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831b8654
	if (cr6.eq) goto loc_831B8654;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
loc_831B8654:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x831c3070
	sub_831C3070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8628"))) PPC_WEAK_FUNC(sub_831B8628);
PPC_FUNC_IMPL(__imp__sub_831B8628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r29.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831b8654
	if (cr6.eq) goto loc_831B8654;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
loc_831B8654:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x831c3070
	sub_831C3070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8678"))) PPC_WEAK_FUNC(sub_831B8678);
PPC_FUNC_IMPL(__imp__sub_831B8678) {
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
	// li r11,0
	r11.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x831b8348
	sub_831B8348(ctx, base);
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

__attribute__((alias("__imp__sub_831B86B8"))) PPC_WEAK_FUNC(sub_831B86B8);
PPC_FUNC_IMPL(__imp__sub_831B86B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831b8728
	if (!cr6.eq) goto loc_831B8728;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831b8794
	goto loc_831B8794;
loc_831B8728:
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// addi r10,r31,152
	ctx.r10.s64 = r31.s64 + 152;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831b9080
	sub_831B9080(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x831c5348
	sub_831C5348(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831bccf8
	sub_831BCCF8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c5420
	sub_831C5420(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x831b879c
	sub_831B879C(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_831B8794:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831B879C"))) PPC_WEAK_FUNC(sub_831B879C);
PPC_FUNC_IMPL(__imp__sub_831B879C) {
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
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831b9110
	sub_831B9110(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B87C8"))) PPC_WEAK_FUNC(sub_831B87C8);
PPC_FUNC_IMPL(__imp__sub_831B87C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r11,-1060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1060);
	// lwz r10,-14332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14332);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B87F0"))) PPC_WEAK_FUNC(sub_831B87F0);
PPC_FUNC_IMPL(__imp__sub_831B87F0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831b8858
	if (!cr6.eq) goto loc_831B8858;
loc_831B882C:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831b88e8
	goto loc_831B88E8;
loc_831B8858:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831b8868
	if (cr6.eq) goto loc_831B8868;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831b882c
	if (cr6.eq) goto loc_831B882C;
loc_831B8868:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r8,r1,200
	ctx.r8.s64 = ctx.r1.s64 + 200;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bgt cr6,0x831b888c
	if (cr6.gt) goto loc_831B888C;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
loc_831B888C:
	// li r11,66
	r11.s64 = 66;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831bccf8
	sub_831BCCF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831b88e4
	if (cr6.eq) goto loc_831B88E4;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// blt 0x831b88d8
	if (cr0.lt) goto loc_831B88D8;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x831b88e4
	goto loc_831B88E4;
loc_831B88D8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bcb28
	sub_831BCB28(ctx, base);
loc_831B88E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_831B88E8:
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

__attribute__((alias("__imp__sub_831B8900"))) PPC_WEAK_FUNC(sub_831B8900);
PPC_FUNC_IMPL(__imp__sub_831B8900) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r30,-4096
	r30.s64 = -4096;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831b8958
	if (cr6.eq) goto loc_831B8958;
	// divwu r11,r30,r3
	r11.u32 = r30.u32 / ctx.r3.u32;
	// twllei r3,0
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x831b8958
	if (!cr6.lt) goto loc_831B8958;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
loc_831B8950:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831b89cc
	goto loc_831B89CC;
loc_831B8958:
	// mullw. r31,r3,r4
	r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x831b8964
	if (!cr0.eq) goto loc_831B8964;
	// li r31,1
	r31.s64 = 1;
loc_831B8964:
	// lis r29,-31932
	r29.s64 = -2092695552;
loc_831B8968:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bgt cr6,0x831b898c
	if (cr6.gt) goto loc_831B898C;
	// bl 0x82bd92e8
	sub_82BD92E8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82bd7d30
	sub_82BD7D30(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831b89cc
	if (!cr0.eq) goto loc_831B89CC;
loc_831B898C:
	// lwz r11,-13840(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -13840);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831b89bc
	if (cr6.eq) goto loc_831B89BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c3330
	sub_831C3330(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831b8968
	if (!cr0.eq) goto loc_831B8968;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x831b8950
	if (cr6.eq) goto loc_831B8950;
	// li r11,12
	r11.s64 = 12;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x831b8950
	goto loc_831B8950;
loc_831B89BC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x831b89cc
	if (cr6.eq) goto loc_831B89CC;
	// li r11,12
	r11.s64 = 12;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_831B89CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831B89D8"))) PPC_WEAK_FUNC(sub_831B89D8);
PPC_FUNC_IMPL(__imp__sub_831B89D8) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x831b8900
	sub_831B8900(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x831b8a24
	if (!cr0.eq) goto loc_831B8A24;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x831b8a24
	if (cr6.eq) goto loc_831B8A24;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831b8a24
	if (cr0.eq) goto loc_831B8A24;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_831B8A24:
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

__attribute__((alias("__imp__sub_831B8A40"))) PPC_WEAK_FUNC(sub_831B8A40);
PPC_FUNC_IMPL(__imp__sub_831B8A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831b8aa0
	if (cr6.eq) goto loc_831B8AA0;
loc_831B8A48:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x831b8a64
	if (cr6.lt) goto loc_831B8A64;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// bgt cr6,0x831b8a64
	if (cr6.gt) goto loc_831B8A64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_831B8A64:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x831b8a80
	if (cr6.lt) goto loc_831B8A80;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x831b8a80
	if (cr6.gt) goto loc_831B8A80;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_831B8A80:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x831b8a98
	if (cr0.eq) goto loc_831B8A98;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831b8a98
	if (cr6.eq) goto loc_831B8A98;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x831b8a48
	if (cr6.eq) goto loc_831B8A48;
loc_831B8A98:
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// blr 
	return;
loc_831B8AA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8AA8"))) PPC_WEAK_FUNC(sub_831B8AA8);
PPC_FUNC_IMPL(__imp__sub_831B8AA8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831b8af0
	if (!cr6.eq) goto loc_831B8AF0;
loc_831B8AC0:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x831b8b38
	goto loc_831B8B38;
loc_831B8AF0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831b8ac0
	if (cr6.eq) goto loc_831B8AC0;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r31,r11,65535
	r31.u64 = r11.u64 | 65535;
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, r31.u32, xer);
	// ble cr6,0x831b8b34
	if (!cr6.gt) goto loc_831B8B34;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831b8b38
	goto loc_831B8B38;
loc_831B8B34:
	// bl 0x831b8a40
	sub_831B8A40(ctx, base);
loc_831B8B38:
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

__attribute__((alias("__imp__sub_831B8B50"))) PPC_WEAK_FUNC(sub_831B8B50);
PPC_FUNC_IMPL(__imp__sub_831B8B50) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// add r24,r11,r4
	r24.u64 = r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831b8bb8
	if (!cr6.eq) goto loc_831B8BB8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831b8bb8
	if (cr6.eq) goto loc_831B8BB8;
loc_831B8B88:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
loc_831B8BAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B8BB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_831B8BB8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831b8b88
	if (cr6.eq) goto loc_831B8B88;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x831b8b88
	if (cr6.eq) goto loc_831B8B88;
	// cmplw cr6,r4,r24
	cr6.compare<uint32_t>(ctx.r4.u32, r24.u32, xer);
	// bgt cr6,0x831b8bac
	if (cr6.gt) goto loc_831B8BAC;
loc_831B8BD0:
	// rlwinm. r28,r5,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x831b8c40
	if (cr0.eq) goto loc_831B8C40;
	// clrlwi. r27,r5,31
	r27.u64 = ctx.r5.u32 & 0x1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bne 0x831b8be8
	if (!cr0.eq) goto loc_831B8BE8;
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
loc_831B8BE8:
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b8c38
	if (cr0.eq) goto loc_831B8C38;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x831b8c24
	if (!cr6.lt) goto loc_831B8C24;
	// subf r24,r30,r31
	r24.s64 = r31.s64 - r30.s64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x831b8c28
	if (!cr6.eq) goto loc_831B8C28;
	// addi r5,r28,-1
	ctx.r5.s64 = r28.s64 + -1;
	// b 0x831b8c2c
	goto loc_831B8C2C;
loc_831B8C24:
	// add r29,r31,r30
	r29.u64 = r31.u64 + r30.u64;
loc_831B8C28:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_831B8C2C:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// ble cr6,0x831b8bd0
	if (!cr6.gt) goto loc_831B8BD0;
	// b 0x831b8bac
	goto loc_831B8BAC;
loc_831B8C38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831b8bb0
	goto loc_831B8BB0;
loc_831B8C40:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831b8bac
	if (cr6.eq) goto loc_831B8BAC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x831b8bb0
	if (!cr0.eq) goto loc_831B8BB0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x831b8bb0
	goto loc_831B8BB0;
}

__attribute__((alias("__imp__sub_831B8C78"))) PPC_WEAK_FUNC(sub_831B8C78);
PPC_FUNC_IMPL(__imp__sub_831B8C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// cntlzw r11,r27
	r11.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831b8cd4
	if (!cr6.eq) goto loc_831B8CD4;
loc_831B8CA8:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831b8e40
	goto loc_831B8E40;
loc_831B8CD4:
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831b8ca8
	if (cr6.eq) goto loc_831B8CA8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831b8dbc
	if (!cr0.eq) goto loc_831B8DBC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831b8d4c
	if (cr6.eq) goto loc_831B8D4C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831b8d4c
	if (cr6.eq) goto loc_831B8D4C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,-10464
	r29.s64 = r11.s64 + -10464;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r28,r9,432
	r28.s64 = ctx.r9.s64 + 432;
	// b 0x831b8d60
	goto loc_831B8D60;
loc_831B8D4C:
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r28,r10,432
	r28.s64 = ctx.r10.s64 + 432;
	// addi r29,r11,-10464
	r29.s64 = r11.s64 + -10464;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_831B8D60:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831b8ca8
	if (!cr0.eq) goto loc_831B8CA8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831b8db0
	if (cr6.eq) goto loc_831B8DB0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831b8db0
	if (cr6.eq) goto loc_831B8DB0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// rlwinm r11,r3,6,21,25
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
loc_831B8DB0:
	// lbz r11,40(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 40);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831b8ca8
	if (!cr0.eq) goto loc_831B8CA8;
loc_831B8DBC:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_831B8DC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831b8dc0
	if (!cr6.eq) goto loc_831B8DC0;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x831b9010
	sub_831B9010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c5348
	sub_831C5348(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b7d40
	sub_831B7D40(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c5420
	sub_831C5420(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x831b8e68
	sub_831B8E68(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
loc_831B8E40:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831B8E48"))) PPC_WEAK_FUNC(sub_831B8E48);
PPC_FUNC_IMPL(__imp__sub_831B8E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,172(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// b 0x831b8e80
	goto loc_831B8E80;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831B8E80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8E68"))) PPC_WEAK_FUNC(sub_831B8E68);
PPC_FUNC_IMPL(__imp__sub_831B8E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8EA0"))) PPC_WEAK_FUNC(sub_831B8EA0);
PPC_FUNC_IMPL(__imp__sub_831B8EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-2080
	ctx.r3.s64 = r11.s64 + -2080;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B8EB0"))) PPC_WEAK_FUNC(sub_831B8EB0);
PPC_FUNC_IMPL(__imp__sub_831B8EB0) {
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
	// lis r31,-31930
	r31.s64 = -2092564480;
	// lwz r3,-10200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -10200);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831b8edc
	if (!cr6.eq) goto loc_831B8EDC;
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x831b8ee8
	goto loc_831B8EE8;
loc_831B8EDC:
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bge cr6,0x831b8eec
	if (!cr6.lt) goto loc_831B8EEC;
	// li r3,20
	ctx.r3.s64 = 20;
loc_831B8EE8:
	// stw r3,-10200(r31)
	PPC_STORE_U32(r31.u32 + -10200, ctx.r3.u32);
loc_831B8EEC:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x831b89d8
	sub_831B89D8(ctx, base);
	// lis r30,-31930
	r30.s64 = -2092564480;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,-10204(r30)
	PPC_STORE_U32(r30.u32 + -10204, ctx.r3.u32);
	// bne 0x831b8f2c
	if (!cr0.eq) goto loc_831B8F2C;
	// li r11,20
	r11.s64 = 20;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,-10200(r31)
	PPC_STORE_U32(r31.u32 + -10200, r11.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x831b89d8
	sub_831B89D8(ctx, base);
	// stw r3,-10204(r30)
	PPC_STORE_U32(r30.u32 + -10204, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831b8f2c
	if (!cr0.eq) goto loc_831B8F2C;
	// li r3,26
	ctx.r3.s64 = 26;
	// b 0x831b8fb8
	goto loc_831B8FB8;
loc_831B8F2C:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-2080
	ctx.r9.s64 = r11.s64 + -2080;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// b 0x831b8f44
	goto loc_831B8F44;
loc_831B8F40:
	// lwz r3,-10204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -10204);
loc_831B8F44:
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r8,r9,640
	ctx.r8.s64 = ctx.r9.s64 + 640;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x831b8f40
	if (cr6.lt) goto loc_831B8F40;
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// addi r7,r10,-10464
	ctx.r7.s64 = ctx.r10.s64 + -10464;
loc_831B8F6C:
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r6,r11,6,21,25
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x831b8f98
	if (cr6.eq) goto loc_831B8F98;
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// beq cr6,0x831b8f98
	if (cr6.eq) goto loc_831B8F98;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831b8fa0
	if (!cr6.eq) goto loc_831B8FA0;
loc_831B8F98:
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_831B8FA0:
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// addi r10,r9,112
	ctx.r10.s64 = ctx.r9.s64 + 112;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// blt cr6,0x831b8f6c
	if (cr6.lt) goto loc_831B8F6C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B8FB8:
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

__attribute__((alias("__imp__sub_831B8FD0"))) PPC_WEAK_FUNC(sub_831B8FD0);
PPC_FUNC_IMPL(__imp__sub_831B8FD0) {
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
	// bl 0x831b9528
	sub_831B9528(ctx, base);
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lbz r11,-14428(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -14428);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831b8ff4
	if (cr0.eq) goto loc_831B8FF4;
	// bl 0x831c55b8
	sub_831C55B8(ctx, base);
loc_831B8FF4:
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r3,-10204(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -10204);
	// bl 0x831b4588
	sub_831B4588(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9010"))) PPC_WEAK_FUNC(sub_831B9010);
PPC_FUNC_IMPL(__imp__sub_831B9010) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2080
	r11.s64 = r11.s64 + -2080;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x831b9060
	if (cr6.lt) goto loc_831B9060;
	// addi r10,r11,608
	ctx.r10.s64 = r11.s64 + 608;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x831b9060
	if (cr6.gt) goto loc_831B9060;
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x831c31d0
	sub_831C31D0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x831b9068
	goto loc_831B9068;
loc_831B9060:
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
loc_831B9068:
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

__attribute__((alias("__imp__sub_831B9080"))) PPC_WEAK_FUNC(sub_831B9080);
PPC_FUNC_IMPL(__imp__sub_831B9080) {
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
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bge cr6,0x831b90b4
	if (!cr6.lt) goto loc_831B90B4;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x831c31d0
	sub_831C31D0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x831b90bc
	goto loc_831B90BC;
loc_831B90B4:
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
loc_831B90BC:
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

__attribute__((alias("__imp__sub_831B90D0"))) PPC_WEAK_FUNC(sub_831B90D0);
PPC_FUNC_IMPL(__imp__sub_831B90D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,-2080
	r11.s64 = r11.s64 + -2080;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x831b9108
	if (cr6.lt) goto loc_831B9108;
	// addi r10,r11,608
	ctx.r10.s64 = r11.s64 + 608;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bgt cr6,0x831b9108
	if (cr6.gt) goto loc_831B9108;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x831c3070
	sub_831C3070(ctx, base);
	return;
loc_831B9108:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B9110"))) PPC_WEAK_FUNC(sub_831B9110);
PPC_FUNC_IMPL(__imp__sub_831B9110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bge cr6,0x831b912c
	if (!cr6.lt) goto loc_831B912C;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// rlwinm r11,r11,0,17,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// b 0x831c3070
	sub_831C3070(ctx, base);
	return;
loc_831B912C:
	// addi r3,r4,32
	ctx.r3.s64 = ctx.r4.s64 + 32;
	// b 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B9138"))) PPC_WEAK_FUNC(sub_831B9138);
PPC_FUNC_IMPL(__imp__sub_831B9138) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi r10,r11,30
	ctx.r10.u64 = r11.u32 & 0x3;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x831b91b0
	if (!cr6.eq) goto loc_831B91B0;
	// andi. r11,r11,264
	r11.u64 = r11.u64 & 264;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b91b0
	if (cr0.eq) goto loc_831B91B0;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf. r30,r29,r11
	r30.s64 = r11.s64 - r29.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x831b91b0
	if (!cr0.gt) goto loc_831B91B0;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x831c42b8
	sub_831C42B8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// bne cr6,0x831b91a4
	if (!cr6.eq) goto loc_831B91A4;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b91b0
	if (cr0.eq) goto loc_831B91B0;
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// b 0x831b91ac
	goto loc_831B91AC;
loc_831B91A4:
	// li r28,-1
	r28.s64 = -1;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
loc_831B91AC:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_831B91B0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831B91D0"))) PPC_WEAK_FUNC(sub_831B91D0);
PPC_FUNC_IMPL(__imp__sub_831B91D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831b91f4
	if (!cr6.eq) goto loc_831B91F4;
	// bl 0x831b9250
	sub_831B9250(ctx, base);
	// b 0x831b9234
	goto loc_831B9234;
loc_831B91F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b9138
	sub_831B9138(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b920c
	if (cr0.eq) goto loc_831B920C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831b9234
	goto loc_831B9234;
loc_831B920C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm. r11,r11,0,17,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b9230
	if (cr0.eq) goto loc_831B9230;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// bl 0x831c56a8
	sub_831C56A8(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r3,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x831b9234
	goto loc_831B9234;
loc_831B9230:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B9234:
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

__attribute__((alias("__imp__sub_831B9250"))) PPC_WEAK_FUNC(sub_831B9250);
PPC_FUNC_IMPL(__imp__sub_831B9250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r27,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r27.u32);
	// li r28,0
	r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// bl 0x831c31d0
	sub_831C31D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// addi r29,r11,-10204
	r29.s64 = r11.s64 + -10204;
	// addi r10,r10,-10200
	ctx.r10.s64 = ctx.r10.s64 + -10200;
loc_831B9290:
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x831b934c
	if (!cr6.lt) goto loc_831B934C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831b9340
	if (cr6.eq) goto loc_831B9340;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	r11.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b9340
	if (cr0.eq) goto loc_831B9340;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b9080
	sub_831B9080(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831b9334
	if (cr0.eq) goto loc_831B9334;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x831b9310
	if (!cr6.eq) goto loc_831B9310;
	// bl 0x831b91d0
	sub_831B91D0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831b9334
	if (cr6.eq) goto loc_831B9334;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// b 0x831b9334
	goto loc_831B9334;
loc_831B9310:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x831b9334
	if (!cr6.eq) goto loc_831B9334;
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b9334
	if (cr0.eq) goto loc_831B9334;
	// bl 0x831b91d0
	sub_831B91D0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831b9334
	if (!cr6.eq) goto loc_831B9334;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_831B9334:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x831b93c4
	sub_831B93C4(ctx, base);
loc_831B9340:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x831b9290
	goto loc_831B9290;
loc_831B934C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x831b9374
	sub_831B9374(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// beq cr6,0x831b936c
	if (cr6.eq) goto loc_831B936C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_831B936C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831B9374"))) PPC_WEAK_FUNC(sub_831B9374);
PPC_FUNC_IMPL(__imp__sub_831B9374) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831c3070
	sub_831C3070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9398"))) PPC_WEAK_FUNC(sub_831B9398);
PPC_FUNC_IMPL(__imp__sub_831B9398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r29.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r28.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r11,-10204
	r29.s64 = r11.s64 + -10204;
	// b 0x831b93e0
	goto loc_831B93E0;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r29.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r28.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831B93E0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x831b9110
	sub_831B9110(ctx, base);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// lwz r27,164(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r10,-10204
	r29.s64 = ctx.r10.s64 + -10204;
	// addi r10,r11,-10200
	ctx.r10.s64 = r11.s64 + -10200;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B93C4"))) PPC_WEAK_FUNC(sub_831B93C4);
PPC_FUNC_IMPL(__imp__sub_831B93C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r29.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r28.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x831b9110
	sub_831B9110(ctx, base);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// lwz r27,164(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r10,-10204
	r29.s64 = ctx.r10.s64 + -10204;
	// addi r10,r11,-10200
	ctx.r10.s64 = r11.s64 + -10200;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9430"))) PPC_WEAK_FUNC(sub_831B9430);
PPC_FUNC_IMPL(__imp__sub_831B9430) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x831b94b0
	if (cr6.eq) goto loc_831B94B0;
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x831b94b0
	if (cr6.eq) goto loc_831B94B0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831b9484
	if (!cr6.eq) goto loc_831B9484;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b9250
	sub_831B9250(ctx, base);
	// b 0x831b94b4
	goto loc_831B94B4;
loc_831B9484:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b9010
	sub_831B9010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b91d0
	sub_831B91D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x831b94ec
	sub_831B94EC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x831b94b4
	goto loc_831B94B4;
loc_831B94B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B94B4:
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

__attribute__((alias("__imp__sub_831B94CC"))) PPC_WEAK_FUNC(sub_831B94CC);
PPC_FUNC_IMPL(__imp__sub_831B94CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// b 0x831b9504
	goto loc_831B9504;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831B9504:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B94EC"))) PPC_WEAK_FUNC(sub_831B94EC);
PPC_FUNC_IMPL(__imp__sub_831B94EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9528"))) PPC_WEAK_FUNC(sub_831B9528);
PPC_FUNC_IMPL(__imp__sub_831B9528) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831b9250
	sub_831B9250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B9530"))) PPC_WEAK_FUNC(sub_831B9530);
PPC_FUNC_IMPL(__imp__sub_831B9530) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831b9550
	if (cr6.eq) goto loc_831B9550;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831b957c
	if (!cr6.eq) goto loc_831B957C;
loc_831B9550:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831b95fc
	goto loc_831B95FC;
loc_831B957C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831b95b8
	if (!cr6.eq) goto loc_831B95B8;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_831B9594:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831b95fc
	goto loc_831B95FC;
loc_831B95B8:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_831B95BC:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// beq 0x831b95dc
	if (cr0.eq) goto loc_831B95DC;
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x831b95bc
	if (!cr0.eq) goto loc_831B95BC;
loc_831B95DC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831b95f8
	if (!cr6.eq) goto loc_831B95F8;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x831b9594
	goto loc_831B9594;
loc_831B95F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B95FC:
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

__attribute__((alias("__imp__sub_831B9610"))) PPC_WEAK_FUNC(sub_831B9610);
PPC_FUNC_IMPL(__imp__sub_831B9610) {
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
	// li r11,-4096
	r11.s64 = -4096;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bgt cr6,0x831b96b4
	if (cr6.gt) goto loc_831B96B4;
	// lis r28,-31932
	r28.s64 = -2092695552;
loc_831B9630:
	// bl 0x82bd92e8
	sub_82BD92E8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831b9650
	if (!cr0.eq) goto loc_831B9650;
	// bl 0x831bbb28
	sub_831BBB28(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x831bbae0
	sub_831BBAE0(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x831b5458
	sub_831B5458(ctx, base);
loc_831B9650:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// mr r31,r30
	r31.u64 = r30.u64;
	// bne cr6,0x831b9660
	if (!cr6.eq) goto loc_831B9660;
	// li r31,1
	r31.s64 = 1;
loc_831B9660:
	// bl 0x82bd92e8
	sub_82BD92E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82bd7d30
	sub_82BD7D30(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x831b96ac
	if (!cr0.eq) goto loc_831B96AC;
	// lwz r11,-13840(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -13840);
	// li r31,12
	r31.s64 = 12;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831b969c
	if (cr6.eq) goto loc_831B969C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c3330
	sub_831C3330(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831b9630
	if (!cr0.eq) goto loc_831B9630;
	// b 0x831b96a4
	goto loc_831B96A4;
loc_831B969C:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_831B96A4:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_831B96AC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x831b96d0
	goto loc_831B96D0;
loc_831B96B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c3330
	sub_831C3330(ctx, base);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_831B96D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831B96D8"))) PPC_WEAK_FUNC(sub_831B96D8);
PPC_FUNC_IMPL(__imp__sub_831B96D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r3,-1440(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1440);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B96E8"))) PPC_WEAK_FUNC(sub_831B96E8);
PPC_FUNC_IMPL(__imp__sub_831B96E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r11,-552(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -552);
	// lwz r3,172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B96F8"))) PPC_WEAK_FUNC(sub_831B96F8);
PPC_FUNC_IMPL(__imp__sub_831B96F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r11,-552(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -552);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9708"))) PPC_WEAK_FUNC(sub_831B9708);
PPC_FUNC_IMPL(__imp__sub_831B9708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// addi r3,r11,-14308
	ctx.r3.s64 = r11.s64 + -14308;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9718"))) PPC_WEAK_FUNC(sub_831B9718);
PPC_FUNC_IMPL(__imp__sub_831B9718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-1432
	ctx.r9.s64 = ctx.r10.s64 + -1432;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_831B9728:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// beq cr6,0x831b975c
	if (cr6.eq) goto loc_831B975C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// blt cr6,0x831b9728
	if (cr6.lt) goto loc_831B9728;
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// blt cr6,0x831b976c
	if (cr6.lt) goto loc_831B976C;
	// cmplwi cr6,r3,36
	cr6.compare<uint32_t>(ctx.r3.u32, 36, xer);
	// bgt cr6,0x831b976c
	if (cr6.gt) goto loc_831B976C;
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_831B975C:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_831B976C:
	// cmplwi cr6,r3,188
	cr6.compare<uint32_t>(ctx.r3.u32, 188, xer);
	// blt cr6,0x831b9780
	if (cr6.lt) goto loc_831B9780;
	// cmplwi cr6,r3,202
	cr6.compare<uint32_t>(ctx.r3.u32, 202, xer);
	// li r3,8
	ctx.r3.s64 = 8;
	// blelr cr6
	if (!cr6.gt) return;
loc_831B9780:
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9788"))) PPC_WEAK_FUNC(sub_831B9788);
PPC_FUNC_IMPL(__imp__sub_831B9788) {
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
	// bl 0x831b5a58
	sub_831B5A58(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831b97ac
	if (!cr0.eq) goto loc_831B97AC;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-1072
	ctx.r3.s64 = r11.s64 + -1072;
	// b 0x831b97b0
	goto loc_831B97B0;
loc_831B97AC:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
loc_831B97B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B97C0"))) PPC_WEAK_FUNC(sub_831B97C0);
PPC_FUNC_IMPL(__imp__sub_831B97C0) {
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
	// bl 0x831b5a58
	sub_831B5A58(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831b97e4
	if (!cr0.eq) goto loc_831B97E4;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-1068
	ctx.r3.s64 = r11.s64 + -1068;
	// b 0x831b97e8
	goto loc_831B97E8;
loc_831B97E4:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
loc_831B97E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B97F8"))) PPC_WEAK_FUNC(sub_831B97F8);
PPC_FUNC_IMPL(__imp__sub_831B97F8) {
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
	// bl 0x831b5a58
	sub_831B5A58(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r11,-1072
	r31.s64 = r11.s64 + -1072;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// beq 0x831b982c
	if (cr0.eq) goto loc_831B982C;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
loc_831B982C:
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x831b5a58
	sub_831B5A58(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// beq 0x831b9844
	if (cr0.eq) goto loc_831B9844;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_831B9844:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b9718
	sub_831B9718(ctx, base);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_831B9868"))) PPC_WEAK_FUNC(sub_831B9868);
PPC_FUNC_IMPL(__imp__sub_831B9868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831b9898
	if (cr6.eq) goto loc_831B9898;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b9898
	if (cr0.eq) goto loc_831B9898;
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(r11.s32, 67, xer);
	// bne cr6,0x831b9890
	if (!cr6.eq) goto loc_831B9890;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831b9898
	if (cr6.eq) goto loc_831B9898;
loc_831B9890:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831B9898:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-1064
	ctx.r3.s64 = r11.s64 + -1064;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B98A8"))) PPC_WEAK_FUNC(sub_831B98A8);
PPC_FUNC_IMPL(__imp__sub_831B98A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// blt cr6,0x831b98d4
	if (cr6.lt) goto loc_831B98D4;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// bgt cr6,0x831b98d4
	if (cr6.gt) goto loc_831B98D4;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,-544(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -544);
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// lhzx r11,r11,r10
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// and r3,r11,r4
	ctx.r3.u64 = r11.u64 & ctx.r4.u64;
	// blr 
	return;
loc_831B98D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B98E0"))) PPC_WEAK_FUNC(sub_831B98E0);
PPC_FUNC_IMPL(__imp__sub_831B98E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-768
	r11.s64 = r11.s64 + -768;
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// lhzx r11,r10,r11
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + r11.u32);
	// and r3,r11,r4
	ctx.r3.u64 = r11.u64 & ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9900"))) PPC_WEAK_FUNC(sub_831B9900);
PPC_FUNC_IMPL(__imp__sub_831B9900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beq cr6,0x831b9930
	if (cr6.eq) goto loc_831B9930;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bge cr6,0x831b9930
	if (!cr6.lt) goto loc_831B9930;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r11,-1436(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1436);
	// lhzx r11,r9,r11
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// and r11,r11,r8
	r11.u64 = r11.u64 & ctx.r8.u64;
	// b 0x831b9934
	goto loc_831B9934;
loc_831B9930:
	// li r11,0
	r11.s64 = 0;
loc_831B9934:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9948"))) PPC_WEAK_FUNC(sub_831B9948);
PPC_FUNC_IMPL(__imp__sub_831B9948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beq cr6,0x831b9978
	if (cr6.eq) goto loc_831B9978;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bge cr6,0x831b9978
	if (!cr6.lt) goto loc_831B9978;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r11,-1436(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1436);
	// lhzx r11,r9,r11
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// and r3,r11,r8
	ctx.r3.u64 = r11.u64 & ctx.r8.u64;
	// blr 
	return;
loc_831B9978:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9980"))) PPC_WEAK_FUNC(sub_831B9980);
PPC_FUNC_IMPL(__imp__sub_831B9980) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x831b99a8
	if (!cr6.eq) goto loc_831B99A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b9610
	sub_831B9610(ctx, base);
	// b 0x831b9a34
	goto loc_831B9A34;
loc_831B99A8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831b99bc
	if (!cr6.eq) goto loc_831B99BC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b4588
	sub_831B4588(ctx, base);
	// b 0x831b9a30
	goto loc_831B9A30;
loc_831B99BC:
	// li r29,-4096
	r29.s64 = -4096;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bgt cr6,0x831b9a18
	if (cr6.gt) goto loc_831B9A18;
	// lis r27,-31932
	r27.s64 = -2092695552;
loc_831B99CC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831b99d8
	if (!cr6.eq) goto loc_831B99D8;
	// li r31,1
	r31.s64 = 1;
loc_831B99D8:
	// bl 0x82bd92e8
	sub_82BD92E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x82bd88f0
	sub_82BD88F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x831b9a68
	if (!cr0.eq) goto loc_831B9A68;
	// lwz r11,-13840(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -13840);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831b9a54
	if (cr6.eq) goto loc_831B9A54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c3330
	sub_831C3330(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831b9a3c
	if (cr0.eq) goto loc_831B9A3C;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// ble cr6,0x831b99cc
	if (!cr6.gt) goto loc_831B99CC;
loc_831B9A18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c3330
	sub_831C3330(ctx, base);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_831B9A30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831B9A34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_831B9A3C:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// bl 0x831b9718
	sub_831B9718(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x831b9a30
	goto loc_831B9A30;
loc_831B9A54:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// bl 0x831b9718
	sub_831B9718(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_831B9A68:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x831b9a34
	goto loc_831B9A34;
}

__attribute__((alias("__imp__sub_831B9A70"))) PPC_WEAK_FUNC(sub_831B9A70);
PPC_FUNC_IMPL(__imp__sub_831B9A70) {
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
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831b9acc
	if (cr6.eq) goto loc_831B9ACC;
	// li r11,-4096
	r11.s64 = -4096;
	// twllei r4,0
	// divwu r11,r11,r4
	r11.u32 = r11.u32 / ctx.r4.u32;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x831b9acc
	if (!cr6.lt) goto loc_831B9ACC;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831b9b14
	goto loc_831B9B14;
loc_831B9ACC:
	// mullw r30,r4,r5
	r30.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831b9ae4
	if (cr6.eq) goto loc_831B9AE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831bc9d8
	sub_831BC9D8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_831B9AE4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b9980
	sub_831B9980(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x831b9b10
	if (cr0.eq) goto loc_831B9B10;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bge cr6,0x831b9b10
	if (!cr6.lt) goto loc_831B9B10;
	// subf r5,r29,r30
	ctx.r5.s64 = r30.s64 - r29.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r31
	ctx.r3.u64 = r29.u64 + r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_831B9B10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831B9B14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831B9B28"))) PPC_WEAK_FUNC(sub_831B9B28);
PPC_FUNC_IMPL(__imp__sub_831B9B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r27,0
	r27.s64 = 0;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831b9ba0
	if (!cr6.eq) goto loc_831B9BA0;
loc_831B9B74:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831b9d18
	goto loc_831B9D18;
loc_831B9BA0:
	// cntlzw r11,r26
	r11.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831b9b74
	if (cr6.eq) goto loc_831B9B74;
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x831b9010
	sub_831B9010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831b9cd0
	if (!cr0.eq) goto loc_831B9CD0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831b9c34
	if (cr6.eq) goto loc_831B9C34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831b9c34
	if (cr6.eq) goto loc_831B9C34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,-10464
	r29.s64 = r11.s64 + -10464;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r28,r9,432
	r28.s64 = ctx.r9.s64 + 432;
	// b 0x831b9c48
	goto loc_831B9C48;
loc_831B9C34:
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r28,r10,432
	r28.s64 = ctx.r10.s64 + 432;
	// addi r29,r11,-10464
	r29.s64 = r11.s64 + -10464;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_831B9C48:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831b9ca4
	if (!cr0.eq) goto loc_831B9CA4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831b9c98
	if (cr6.eq) goto loc_831B9C98;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831b9c98
	if (cr6.eq) goto loc_831B9C98;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// rlwinm r11,r3,6,21,25
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
loc_831B9C98:
	// lbz r11,40(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 40);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831b9cd0
	if (cr0.eq) goto loc_831B9CD0;
loc_831B9CA4:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r27,-1
	r27.s64 = -1;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
loc_831B9CD0:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x831b9d08
	if (!cr6.eq) goto loc_831B9D08;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c5348
	sub_831C5348(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831bccf8
	sub_831BCCF8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c5420
	sub_831C5420(ctx, base);
loc_831B9D08:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x831b9d20
	sub_831B9D20(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_831B9D18:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831B9D20"))) PPC_WEAK_FUNC(sub_831B9D20);
PPC_FUNC_IMPL(__imp__sub_831B9D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9D50"))) PPC_WEAK_FUNC(sub_831B9D50);
PPC_FUNC_IMPL(__imp__sub_831B9D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_831B9D54:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831b9d54
	if (!cr6.eq) goto loc_831B9D54;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x831b9d88
	goto loc_831B9D88;
loc_831B9D6C:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// beqlr 
	if (cr0.eq) return;
loc_831B9D88:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831b9d6c
	if (!cr6.eq) goto loc_831B9D6C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9DA0"))) PPC_WEAK_FUNC(sub_831B9DA0);
PPC_FUNC_IMPL(__imp__sub_831B9DA0) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831b9dec
	if (!cr6.eq) goto loc_831B9DEC;
loc_831B9DBC:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x831b9e18
	goto loc_831B9E18;
loc_831B9DEC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831b9dbc
	if (cr6.eq) goto loc_831B9DBC;
loc_831B9DF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x831b9e18
	if (cr0.eq) goto loc_831B9E18;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831b9df4
	if (cr6.eq) goto loc_831B9DF4;
loc_831B9E18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9E28"))) PPC_WEAK_FUNC(sub_831B9E28);
PPC_FUNC_IMPL(__imp__sub_831B9E28) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x831b9da0
	sub_831B9DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B9E30"))) PPC_WEAK_FUNC(sub_831B9E30);
PPC_FUNC_IMPL(__imp__sub_831B9E30) {
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
	// bne cr6,0x831b9e70
	if (!cr6.eq) goto loc_831B9E70;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831b9e78
	goto loc_831B9E78;
loc_831B9E70:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,0,27,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
loc_831B9E78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9E88"))) PPC_WEAK_FUNC(sub_831B9E88);
PPC_FUNC_IMPL(__imp__sub_831B9E88) {
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
	// bne cr6,0x831b9ec8
	if (!cr6.eq) goto loc_831B9EC8;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831b9ed0
	goto loc_831B9ED0;
loc_831B9EC8:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,0,26,26
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
loc_831B9ED0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B9EE8"))) PPC_WEAK_FUNC(sub_831B9EE8);
PPC_FUNC_IMPL(__imp__sub_831B9EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r26,0
	r26.s64 = 0;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831b9f4c
	if (!cr6.eq) goto loc_831B9F4C;
loc_831B9F20:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ba014
	goto loc_831BA014;
loc_831B9F4C:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831b9f20
	if (cr6.eq) goto loc_831B9F20;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831b9f20
	if (cr6.eq) goto loc_831B9F20;
	// bl 0x831c5198
	sub_831C5198(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// bne 0x831b9fa4
	if (!cr0.eq) goto loc_831B9FA4;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x831ba014
	goto loc_831BA014;
loc_831B9FA4:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831b9fe4
	if (!cr6.eq) goto loc_831B9FE4;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// addi r4,r10,-24560
	ctx.r4.s64 = ctx.r10.s64 + -24560;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// bl 0x831c5a80
	sub_831C5A80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831ba010
	goto loc_831BA010;
loc_831B9FE4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c5828
	sub_831C5828(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x831ba03c
	sub_831BA03C(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x831ba014
	goto loc_831BA014;
loc_831BA010:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_831BA014:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831BA01C"))) PPC_WEAK_FUNC(sub_831BA01C);
PPC_FUNC_IMPL(__imp__sub_831BA01C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,84(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x831ba054
	goto loc_831BA054;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831BA054:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BA03C"))) PPC_WEAK_FUNC(sub_831BA03C);
PPC_FUNC_IMPL(__imp__sub_831BA03C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BA078"))) PPC_WEAK_FUNC(sub_831BA078);
PPC_FUNC_IMPL(__imp__sub_831BA078) {
	PPC_FUNC_PROLOGUE();
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x831b9ee8
	sub_831B9EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BA080"))) PPC_WEAK_FUNC(sub_831BA080);
PPC_FUNC_IMPL(__imp__sub_831BA080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r3,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// b 0x831b4588
	sub_831B4588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BA094"))) PPC_WEAK_FUNC(sub_831BA094);
PPC_FUNC_IMPL(__imp__sub_831BA094) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BA098"))) PPC_WEAK_FUNC(sub_831BA098);
PPC_FUNC_IMPL(__imp__sub_831BA098) {
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
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// and. r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831ba0e0
	if (cr0.eq) goto loc_831BA0E0;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
loc_831BA0D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ba114
	goto loc_831BA114;
loc_831BA0E0:
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgt cr6,0x831ba0ec
	if (cr6.gt) goto loc_831BA0EC;
	// li r4,4
	ctx.r4.s64 = 4;
loc_831BA0EC:
	// addi r31,r4,-1
	r31.s64 = ctx.r4.s64 + -1;
	// add r11,r31,r3
	r11.u64 = r31.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x831b9610
	sub_831B9610(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831ba0d8
	if (cr0.eq) goto loc_831BA0D8;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// andc r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 & ~r31.u64;
	// stw r11,-4(r3)
	PPC_STORE_U32(ctx.r3.u32 + -4, r11.u32);
loc_831BA114:
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

__attribute__((alias("__imp__sub_831BA128"))) PPC_WEAK_FUNC(sub_831BA128);
PPC_FUNC_IMPL(__imp__sub_831BA128) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x831ba16c
	if (!cr6.eq) goto loc_831BA16C;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
loc_831BA164:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ba344
	goto loc_831BA344;
loc_831BA16C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831c3db8
	sub_831C3DB8(ctx, base);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x831ba18c
	if (!cr6.lt) goto loc_831BA18C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_831BA18C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c3ed0
	sub_831C3ED0(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// blt 0x831ba164
	if (cr0.lt) goto loc_831BA164;
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// andi. r11,r7,264
	r11.u64 = ctx.r7.u64 & 264;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831ba1c0
	if (!cr0.eq) goto loc_831BA1C0;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// subf r3,r11,r24
	ctx.r3.s64 = r24.s64 - r11.s64;
	// b 0x831ba344
	goto loc_831BA344;
loc_831BA1C0:
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// clrlwi. r10,r7,30
	ctx.r10.u64 = ctx.r7.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r26,r11,-10464
	r26.s64 = r11.s64 + -10464;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// subf r25,r11,r9
	r25.s64 = ctx.r9.s64 - r11.s64;
	// beq 0x831ba238
	if (cr0.eq) goto loc_831BA238;
	// srawi r10,r28,5
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1F) != 0);
	ctx.r10.s64 = r28.s32 >> 5;
	// rlwinm r8,r28,6,21,25
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0x7C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831ba228
	if (cr0.eq) goto loc_831BA228;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x831ba228
	if (!cr6.lt) goto loc_831BA228;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_831BA20C:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,10
	cr6.compare<uint32_t>(ctx.r6.u32, 10, xer);
	// bne cr6,0x831ba21c
	if (!cr6.eq) goto loc_831BA21C;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_831BA21C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x831ba20c
	if (cr6.lt) goto loc_831BA20C;
loc_831BA228:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x831ba258
	if (!cr6.eq) goto loc_831BA258;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x831ba344
	goto loc_831BA344;
loc_831BA238:
	// rlwinm. r10,r7,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831ba228
	if (!cr0.eq) goto loc_831BA228;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x831ba344
	goto loc_831BA344;
loc_831BA258:
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831ba340
	if (cr0.eq) goto loc_831BA340;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831ba274
	if (!cr6.eq) goto loc_831BA274;
	// li r25,0
	r25.s64 = 0;
	// b 0x831ba340
	goto loc_831BA340;
loc_831BA274:
	// srawi r8,r28,5
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1F) != 0);
	ctx.r8.s64 = r28.s32 >> 5;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// rlwinm r29,r8,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r30,r28,6,21,25
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r29,r26
	r11.u64 = PPC_LOAD_U32(r29.u32 + r26.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831ba33c
	if (cr0.eq) goto loc_831BA33C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c3ed0
	sub_831C3ED0(ctx, base);
	// cmpw cr6,r3,r24
	cr6.compare<int32_t>(ctx.r3.s32, r24.s32, xer);
	// bne cr6,0x831ba2e8
	if (!cr6.eq) goto loc_831BA2E8;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// b 0x831ba2d4
	goto loc_831BA2D4;
loc_831BA2C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bne cr6,0x831ba2d0
	if (!cr6.eq) goto loc_831BA2D0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_831BA2D0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_831BA2D4:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x831ba2c0
	if (cr6.lt) goto loc_831BA2C0;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// rlwinm. r11,r11,0,18,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// b 0x831ba334
	goto loc_831BA334;
loc_831BA2E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c3ed0
	sub_831C3ED0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831ba164
	if (cr0.lt) goto loc_831BA164;
	// cmplwi cr6,r31,512
	cr6.compare<uint32_t>(r31.u32, 512, xer);
	// bgt cr6,0x831ba320
	if (cr6.gt) goto loc_831BA320;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831ba320
	if (cr0.eq) goto loc_831BA320;
	// rlwinm. r11,r11,0,21,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r31,512
	r31.s64 = 512;
	// beq 0x831ba324
	if (cr0.eq) goto loc_831BA324;
loc_831BA320:
	// lwz r31,24(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 24);
loc_831BA324:
	// lwzx r11,r29,r26
	r11.u64 = PPC_LOAD_U32(r29.u32 + r26.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_831BA334:
	// beq 0x831ba33c
	if (cr0.eq) goto loc_831BA33C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_831BA33C:
	// subf r24,r31,r24
	r24.s64 = r24.s64 - r31.s64;
loc_831BA340:
	// add r3,r25,r24
	ctx.r3.u64 = r25.u64 + r24.u64;
loc_831BA344:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_831BA358"))) PPC_WEAK_FUNC(sub_831BA358);
PPC_FUNC_IMPL(__imp__sub_831BA358) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831ba3b8
	if (!cr6.eq) goto loc_831BA3B8;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ba3e0
	goto loc_831BA3E0;
loc_831BA3B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b9010
	sub_831B9010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ba128
	sub_831BA128(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x831ba418
	sub_831BA418(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_831BA3E0:
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

__attribute__((alias("__imp__sub_831BA3F8"))) PPC_WEAK_FUNC(sub_831BA3F8);
PPC_FUNC_IMPL(__imp__sub_831BA3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// b 0x831ba430
	goto loc_831BA430;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831BA430:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BA418"))) PPC_WEAK_FUNC(sub_831BA418);
PPC_FUNC_IMPL(__imp__sub_831BA418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b90d0
	sub_831B90D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BA450"))) PPC_WEAK_FUNC(sub_831BA450);
PPC_FUNC_IMPL(__imp__sub_831BA450) {
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
	// bne cr6,0x831ba490
	if (!cr6.eq) goto loc_831BA490;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ba4cc
	goto loc_831BA4CC;
loc_831BA490:
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x831ba4c4
	goto loc_831BA4C4;
loc_831BA49C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,97
	cr6.compare<uint32_t>(ctx.r10.u32, 97, xer);
	// blt cr6,0x831ba4bc
	if (cr6.lt) goto loc_831BA4BC;
	// cmplwi cr6,r10,122
	cr6.compare<uint32_t>(ctx.r10.u32, 122, xer);
	// bgt cr6,0x831ba4bc
	if (cr6.gt) goto loc_831BA4BC;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
loc_831BA4BC:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_831BA4C4:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x831ba49c
	if (!cr0.eq) goto loc_831BA49C;
loc_831BA4CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BA4E0"))) PPC_WEAK_FUNC(sub_831BA4E0);
PPC_FUNC_IMPL(__imp__sub_831BA4E0) {
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
	// bne cr6,0x831ba524
	if (!cr6.eq) goto loc_831BA524;
loc_831BA4F4:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x831ba594
	goto loc_831BA594;
loc_831BA524:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831ba4f4
	if (cr6.eq) goto loc_831BA4F4;
loc_831BA52C:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// blt cr6,0x831ba544
	if (cr6.lt) goto loc_831BA544;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(r11.u32, 90, xer);
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// ble cr6,0x831ba548
	if (!cr6.gt) goto loc_831BA548;
loc_831BA544:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_831BA548:
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// blt cr6,0x831ba564
	if (cr6.lt) goto loc_831BA564;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(r11.u32, 90, xer);
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// ble cr6,0x831ba568
	if (!cr6.gt) goto loc_831BA568;
loc_831BA564:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_831BA568:
	// clrlwi. r11,r9,16
	r11.u64 = ctx.r9.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// beq 0x831ba588
	if (cr0.eq) goto loc_831BA588;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x831ba52c
	if (cr6.eq) goto loc_831BA52C;
loc_831BA588:
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
loc_831BA594:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BA5A8"))) PPC_WEAK_FUNC(sub_831BA5A8);
PPC_FUNC_IMPL(__imp__sub_831BA5A8) {
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
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831ba66c
	if (cr6.eq) goto loc_831BA66C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831ba5f8
	if (!cr6.eq) goto loc_831BA5F8;
loc_831BA5C8:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x831ba670
	goto loc_831BA670;
loc_831BA5F8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831ba5c8
	if (cr6.eq) goto loc_831BA5C8;
loc_831BA600:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// blt cr6,0x831ba618
	if (cr6.lt) goto loc_831BA618;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(r11.u32, 90, xer);
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// ble cr6,0x831ba61c
	if (!cr6.gt) goto loc_831BA61C;
loc_831BA618:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_831BA61C:
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// blt cr6,0x831ba638
	if (cr6.lt) goto loc_831BA638;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(r11.u32, 90, xer);
	// bgt cr6,0x831ba638
	if (cr6.gt) goto loc_831BA638;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_831BA638:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// beq 0x831ba660
	if (cr0.eq) goto loc_831BA660;
	// clrlwi. r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831ba660
	if (cr0.eq) goto loc_831BA660;
	// clrlwi r8,r11,16
	ctx.r8.u64 = r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x831ba600
	if (cr6.eq) goto loc_831BA600;
loc_831BA660:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
loc_831BA66C:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_831BA670:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BA680"))) PPC_WEAK_FUNC(sub_831BA680);
PPC_FUNC_IMPL(__imp__sub_831BA680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// rlwinm r10,r3,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FE;
	// lwz r11,-544(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -544);
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// lhzx r11,r10,r11
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + r11.u32);
	// rlwinm r3,r11,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BA6A0"))) PPC_WEAK_FUNC(sub_831BA6A0);
PPC_FUNC_IMPL(__imp__sub_831BA6A0) {
	PPC_FUNC_PROLOGUE();
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x831b9948
	sub_831B9948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BA6A8"))) PPC_WEAK_FUNC(sub_831BA6A8);
PPC_FUNC_IMPL(__imp__sub_831BA6A8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831ba6f8
	if (!cr6.eq) goto loc_831BA6F8;
loc_831BA6CC:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831ba748
	goto loc_831BA748;
loc_831BA6F8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c5aa8
	sub_831C5AA8(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// blt cr6,0x831ba738
	if (cr6.lt) goto loc_831BA738;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// b 0x831ba6cc
	goto loc_831BA6CC;
loc_831BA718:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// blt cr6,0x831ba734
	if (cr6.lt) goto loc_831BA734;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(r11.u32, 90, xer);
	// bgt cr6,0x831ba734
	if (cr6.gt) goto loc_831BA734;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
loc_831BA734:
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_831BA738:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x831ba718
	if (!cr0.eq) goto loc_831BA718;
	// li r3,0
	ctx.r3.s64 = 0;
loc_831BA748:
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

__attribute__((alias("__imp__sub_831BA760"))) PPC_WEAK_FUNC(sub_831BA760);
PPC_FUNC_IMPL(__imp__sub_831BA760) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x831ba6a8
	sub_831BA6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BA768"))) PPC_WEAK_FUNC(sub_831BA768);
PPC_FUNC_IMPL(__imp__sub_831BA768) {
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
	// bne cr6,0x831ba7a8
	if (!cr6.eq) goto loc_831BA7A8;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ba7e0
	goto loc_831BA7E0;
loc_831BA7A8:
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x831ba7d8
	goto loc_831BA7D8;
loc_831BA7B4:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, xer);
	// blt cr6,0x831ba7d0
	if (cr6.lt) goto loc_831BA7D0;
	// cmplwi cr6,r10,90
	cr6.compare<uint32_t>(ctx.r10.u32, 90, xer);
	// bgt cr6,0x831ba7d0
	if (cr6.gt) goto loc_831BA7D0;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
loc_831BA7D0:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_831BA7D8:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x831ba7b4
	if (!cr0.eq) goto loc_831BA7B4;
loc_831BA7E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BA7F0"))) PPC_WEAK_FUNC(sub_831BA7F0);
PPC_FUNC_IMPL(__imp__sub_831BA7F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rotlwi r10,r3,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// rotlwi r11,r3,1
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r9,r3,r4
	ctx.r9.s32 = ctx.r3.s32 / ctx.r4.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// andc r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 & ~ctx.r10.u64;
	// andc r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 & ~r11.u64;
	// divw r10,r3,r4
	ctx.r10.s32 = ctx.r3.s32 / ctx.r4.s32;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// twllei r4,0
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// twllei r4,0
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, r11.u32);
	// twlgei r8,-1
	// twlgei r7,-1
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x831ba850
	if (!cr6.lt) goto loc_831BA850;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x831ba850
	if (!cr6.gt) goto loc_831BA850;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, r11.u32);
loc_831BA850:
	// ld r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BA858"))) PPC_WEAK_FUNC(sub_831BA858);
PPC_FUNC_IMPL(__imp__sub_831BA858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// b 0x831ba86c
	goto loc_831BA86C;
loc_831BA85C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831ba87c
	if (cr6.eq) goto loc_831BA87C;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
loc_831BA86C:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831ba85c
	if (cr0.eq) goto loc_831BA85C;
loc_831BA87C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x831ba88c
	if (!cr6.lt) goto loc_831BA88C;
	// li r11,-1
	r11.s64 = -1;
	// b 0x831ba894
	goto loc_831BA894;
loc_831BA88C:
	// ble cr6,0x831ba894
	if (!cr6.gt) goto loc_831BA894;
	// li r11,1
	r11.s64 = 1;
loc_831BA894:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BA8A0"))) PPC_WEAK_FUNC(sub_831BA8A0);
PPC_FUNC_IMPL(__imp__sub_831BA8A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831ba8c8
	if (cr0.eq) goto loc_831BA8C8;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
loc_831BA8B0:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x831ba8c8
	if (cr6.eq) goto loc_831BA8C8;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x831ba8b0
	if (!cr0.eq) goto loc_831BA8B0;
loc_831BA8C8:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BA8E0"))) PPC_WEAK_FUNC(sub_831BA8E0);
PPC_FUNC_IMPL(__imp__sub_831BA8E0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ba900
	if (cr6.eq) goto loc_831BA900;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831ba92c
	if (!cr6.eq) goto loc_831BA92C;
loc_831BA900:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831ba9ac
	goto loc_831BA9AC;
loc_831BA92C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831ba968
	if (!cr6.eq) goto loc_831BA968;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_831BA944:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831ba9ac
	goto loc_831BA9AC;
loc_831BA968:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_831BA96C:
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// beq 0x831ba98c
	if (cr0.eq) goto loc_831BA98C;
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x831ba96c
	if (!cr0.eq) goto loc_831BA96C;
loc_831BA98C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831ba9a8
	if (!cr6.eq) goto loc_831BA9A8;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x831ba944
	goto loc_831BA944;
loc_831BA9A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831BA9AC:
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

__attribute__((alias("__imp__sub_831BA9C0"))) PPC_WEAK_FUNC(sub_831BA9C0);
PPC_FUNC_IMPL(__imp__sub_831BA9C0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831baa1c
	if (!cr6.eq) goto loc_831BAA1C;
loc_831BA9F0:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831baa70
	goto loc_831BAA70;
loc_831BAA1C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831ba9f0
	if (cr6.eq) goto loc_831BA9F0;
	// lis r11,16383
	r11.s64 = 1073676288;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r10,73
	ctx.r10.s64 = 73;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x831baa50
	if (!cr6.gt) goto loc_831BAA50;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// b 0x831baa54
	goto loc_831BAA54;
loc_831BAA50:
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
loc_831BAA54:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831BAA70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831BAA78"))) PPC_WEAK_FUNC(sub_831BAA78);
PPC_FUNC_IMPL(__imp__sub_831BAA78) {
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
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r3,r10,23424
	ctx.r3.s64 = ctx.r10.s64 + 23424;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831ba9c0
	sub_831BA9C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BAAD8"))) PPC_WEAK_FUNC(sub_831BAAD8);
PPC_FUNC_IMPL(__imp__sub_831BAAD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x831bab48
	if (cr0.eq) goto loc_831BAB48;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_831BAAF4:
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831bab28
	if (cr6.eq) goto loc_831BAB28;
loc_831BAB00:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x831bab28
	if (cr0.eq) goto loc_831BAB28;
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// subf. r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831bab28
	if (!cr0.eq) goto loc_831BAB28;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x831bab00
	if (!cr0.eq) goto loc_831BAB00;
loc_831BAB28:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x831baaf4
	if (!cr0.eq) goto loc_831BAAF4;
loc_831BAB48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BAB50"))) PPC_WEAK_FUNC(sub_831BAB50);
PPC_FUNC_IMPL(__imp__sub_831BAB50) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831bab74
	if (cr6.eq) goto loc_831BAB74;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831baba0
	if (!cr6.eq) goto loc_831BABA0;
loc_831BAB74:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831bac4c
	goto loc_831BAC4C;
loc_831BABA0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831babb4
	if (!cr6.eq) goto loc_831BABB4;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// b 0x831bab74
	goto loc_831BAB74;
loc_831BABB4:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_831BABB8:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x831babd0
	if (cr0.eq) goto loc_831BABD0;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x831babb8
	if (!cr0.eq) goto loc_831BABB8;
loc_831BABD0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831bac0c
	if (!cr6.eq) goto loc_831BAC0C;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_831BABE8:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831bac4c
	goto loc_831BAC4C;
loc_831BAC0C:
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// sth r9,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// beq 0x831bac2c
	if (cr0.eq) goto loc_831BAC2C;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831bac0c
	if (!cr0.eq) goto loc_831BAC0C;
loc_831BAC2C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831bac48
	if (!cr6.eq) goto loc_831BAC48;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x831babe8
	goto loc_831BABE8;
loc_831BAC48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831BAC4C:
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

__attribute__((alias("__imp__sub_831BAC60"))) PPC_WEAK_FUNC(sub_831BAC60);
PPC_FUNC_IMPL(__imp__sub_831BAC60) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x831baca4
	if (!cr6.eq) goto loc_831BACA4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831bacac
	if (!cr6.eq) goto loc_831BACAC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831bacb4
	if (!cr6.eq) goto loc_831BACB4;
loc_831BAC8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831BAC90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_831BACA4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831bacb4
	if (cr6.eq) goto loc_831BACB4;
loc_831BACAC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831bace0
	if (!cr6.eq) goto loc_831BACE0;
loc_831BACB4:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831bac90
	goto loc_831BAC90;
loc_831BACE0:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x831bacf4
	if (!cr6.eq) goto loc_831BACF4;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// b 0x831bac8c
	goto loc_831BAC8C;
loc_831BACF4:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831bad30
	if (!cr6.eq) goto loc_831BAD30;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_831BAD0C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831bac90
	goto loc_831BAC90;
loc_831BAD30:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x831bad68
	if (!cr6.eq) goto loc_831BAD68;
loc_831BAD44:
	// lhz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// sth r7,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r7.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// beq 0x831bad9c
	if (cr0.eq) goto loc_831BAD9C;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831bad44
	if (!cr0.eq) goto loc_831BAD44;
	// b 0x831bad9c
	goto loc_831BAD9C;
loc_831BAD68:
	// lhz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// sth r7,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r7.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// beq 0x831bad90
	if (cr0.eq) goto loc_831BAD90;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x831bad90
	if (cr0.eq) goto loc_831BAD90;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x831bad68
	if (!cr0.eq) goto loc_831BAD68;
loc_831BAD90:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x831bad9c
	if (!cr6.eq) goto loc_831BAD9C;
	// sth r8,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r8.u16);
loc_831BAD9C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831bac8c
	if (!cr6.eq) goto loc_831BAC8C;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x831badc0
	if (!cr6.eq) goto loc_831BADC0;
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,80
	ctx.r3.s64 = 80;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// sth r8,-2(r11)
	PPC_STORE_U16(r11.u32 + -2, ctx.r8.u16);
	// b 0x831bac90
	goto loc_831BAC90;
loc_831BADC0:
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x831bad0c
	goto loc_831BAD0C;
}

__attribute__((alias("__imp__sub_831BADD0"))) PPC_WEAK_FUNC(sub_831BADD0);
PPC_FUNC_IMPL(__imp__sub_831BADD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831bade0
	if (!cr6.eq) goto loc_831BADE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831BADE0:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831bae10
	if (cr0.eq) goto loc_831BAE10;
loc_831BADE8:
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x831bae10
	if (cr0.eq) goto loc_831BAE10;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x831bae10
	if (!cr6.eq) goto loc_831BAE10;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// bne 0x831bade8
	if (!cr0.eq) goto loc_831BADE8;
loc_831BAE10:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BAE20"))) PPC_WEAK_FUNC(sub_831BAE20);
PPC_FUNC_IMPL(__imp__sub_831BAE20) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831bae64
	if (!cr6.eq) goto loc_831BAE64;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831baf80
	goto loc_831BAF80;
loc_831BAE64:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831bae98
	if (!cr6.eq) goto loc_831BAE98;
loc_831BAE6C:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_831BAE74:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831baf80
	goto loc_831BAF80;
loc_831BAE98:
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// li r31,0
	r31.s64 = 0;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// sth r31,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, r31.u16);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bgt cr6,0x831baec4
	if (cr6.gt) goto loc_831BAEC4;
loc_831BAEB8:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x831bae74
	goto loc_831BAE74;
loc_831BAEC4:
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// blt cr6,0x831bae6c
	if (cr6.lt) goto loc_831BAE6C;
	// cmplwi cr6,r6,36
	cr6.compare<uint32_t>(ctx.r6.u32, 36, xer);
	// bgt cr6,0x831bae6c
	if (cr6.gt) goto loc_831BAE6C;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x831baef8
	if (cr6.eq) goto loc_831BAEF8;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r4,2
	r11.s64 = ctx.r4.s64 + 2;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_831BAEF8:
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_831BAEFC:
	// divwu r10,r3,r6
	ctx.r10.u32 = ctx.r3.u32 / ctx.r6.u32;
	// twllei r6,0
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// divwu r3,r3,r6
	ctx.r3.u32 = ctx.r3.u32 / ctx.r6.u32;
	// twllei r6,0
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// ble cr6,0x831baf24
	if (!cr6.gt) goto loc_831BAF24;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// b 0x831baf28
	goto loc_831BAF28;
loc_831BAF24:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_831BAF28:
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831baf44
	if (cr6.eq) goto loc_831BAF44;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// blt cr6,0x831baefc
	if (cr6.lt) goto loc_831BAEFC;
loc_831BAF44:
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// blt cr6,0x831baf54
	if (cr6.lt) goto loc_831BAF54;
	// sth r31,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, r31.u16);
	// b 0x831baeb8
	goto loc_831BAEB8;
loc_831BAF54:
	// sth r31,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r31.u16);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
loc_831BAF5C:
	// lhz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// sth r9,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x831baf5c
	if (cr6.lt) goto loc_831BAF5C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_831BAF80:
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

__attribute__((alias("__imp__sub_831BAF98"))) PPC_WEAK_FUNC(sub_831BAF98);
PPC_FUNC_IMPL(__imp__sub_831BAF98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r6,10
	cr6.compare<int32_t>(ctx.r6.s32, 10, xer);
	// bne cr6,0x831bafb0
	if (!cr6.eq) goto loc_831BAFB0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x831bafb0
	if (!cr6.lt) goto loc_831BAFB0;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x831bae20
	sub_831BAE20(ctx, base);
	return;
loc_831BAFB0:
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x831bae20
	sub_831BAE20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BAFB8"))) PPC_WEAK_FUNC(sub_831BAFB8);
PPC_FUNC_IMPL(__imp__sub_831BAFB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r11,-1060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1060);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x831c6d98
	sub_831C6D98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BAFCC"))) PPC_WEAK_FUNC(sub_831BAFCC);
PPC_FUNC_IMPL(__imp__sub_831BAFCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BAFD0"))) PPC_WEAK_FUNC(sub_831BAFD0);
PPC_FUNC_IMPL(__imp__sub_831BAFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x831baff8
	if (cr6.eq) goto loc_831BAFF8;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_831BAFF8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x831bb030
	if (!cr6.eq) goto loc_831BB030;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f1,-8872(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// b 0x831bb124
	goto loc_831BB124;
loc_831BB030:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lhz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// addi r30,r11,-544
	r30.s64 = r11.s64 + -544;
	// b 0x831bb048
	goto loc_831BB048;
loc_831BB040:
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 0);
loc_831BB048:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x831b9900
	sub_831B9900(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831bb040
	if (!cr0.eq) goto loc_831BB040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b1a88
	sub_831B1A88(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bl 0x831c6e58
	sub_831C6E58(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x831bb098
	if (cr6.eq) goto loc_831BB098;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_831BB098:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andi. r10,r11,576
	ctx.r10.u64 = r11.u64 & 576;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x831bb0c0
	if (cr0.eq) goto loc_831BB0C0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lfd f31,-8872(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// beq cr6,0x831bb120
	if (cr6.eq) goto loc_831BB120;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x831bb120
	goto loc_831BB120;
loc_831BB0C0:
	// andi. r10,r11,129
	ctx.r10.u64 = r11.u64 & 129;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x831bb0f0
	if (cr0.eq) goto loc_831BB0F0;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// bne cr6,0x831bb0e8
	if (!cr6.eq) goto loc_831BB0E8;
	// lfd f0,-5184(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -5184);
	// fneg f31,f0
	f31.u64 = f0.u64 ^ 0x8000000000000000;
	// b 0x831bb10c
	goto loc_831BB10C;
loc_831BB0E8:
	// lfd f31,-5184(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + -5184);
	// b 0x831bb10c
	goto loc_831BB10C;
loc_831BB0F0:
	// rlwinm. r11,r11,0,23,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831bb11c
	if (cr0.eq) goto loc_831BB11C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f0,16(r3)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// lfd f31,-8872(r11)
	f31.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x831bb11c
	if (!cr6.eq) goto loc_831BB11C;
loc_831BB10C:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,34
	r11.s64 = 34;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x831bb120
	goto loc_831BB120;
loc_831BB11C:
	// lfd f31,16(r3)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
loc_831BB120:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_831BB124:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831BB130"))) PPC_WEAK_FUNC(sub_831BB130);
PPC_FUNC_IMPL(__imp__sub_831BB130) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x831bafd0
	sub_831BAFD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BB138"))) PPC_WEAK_FUNC(sub_831BB138);
PPC_FUNC_IMPL(__imp__sub_831BB138) {
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
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x831bb160
	if (cr6.eq) goto loc_831BB160;
	// stw r25,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r25.u32);
loc_831BB160:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x831bb194
	if (!cr6.eq) goto loc_831BB194;
loc_831BB168:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831bb3d0
	goto loc_831BB3D0;
loc_831BB194:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x831bb1ac
	if (cr6.eq) goto loc_831BB1AC;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// blt cr6,0x831bb168
	if (cr6.lt) goto loc_831BB168;
	// cmpwi cr6,r28,36
	cr6.compare<int32_t>(r28.s32, 36, xer);
	// bgt cr6,0x831bb168
	if (cr6.gt) goto loc_831BB168;
loc_831BB1AC:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lhz r31,0(r25)
	r31.u64 = PPC_LOAD_U16(r25.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// addi r30,r11,-544
	r30.s64 = r11.s64 + -544;
	// addi r29,r25,2
	r29.s64 = r25.s64 + 2;
	// b 0x831bb1cc
	goto loc_831BB1CC;
loc_831BB1C4:
	// lhz r31,0(r29)
	r31.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
loc_831BB1CC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b9900
	sub_831B9900(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831bb1c4
	if (!cr0.eq) goto loc_831BB1C4;
	// clrlwi r11,r31,16
	r11.u64 = r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// bne cr6,0x831bb1f8
	if (!cr6.eq) goto loc_831BB1F8;
	// ori r24,r24,2
	r24.u64 = r24.u64 | 2;
	// b 0x831bb200
	goto loc_831BB200;
loc_831BB1F8:
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(r11.u32, 43, xer);
	// bne cr6,0x831bb208
	if (!cr6.eq) goto loc_831BB208;
loc_831BB200:
	// lhz r31,0(r29)
	r31.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
loc_831BB208:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x831bb248
	if (!cr6.eq) goto loc_831BB248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c6f10
	sub_831C6F10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831bb228
	if (cr0.eq) goto loc_831BB228;
	// li r28,10
	r28.s64 = 10;
	// b 0x831bb280
	goto loc_831BB280;
loc_831BB228:
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(r11.u32, 120, xer);
	// beq cr6,0x831bb244
	if (cr6.eq) goto loc_831BB244;
	// cmplwi cr6,r11,88
	cr6.compare<uint32_t>(r11.u32, 88, xer);
	// beq cr6,0x831bb244
	if (cr6.eq) goto loc_831BB244;
	// li r28,8
	r28.s64 = 8;
	// b 0x831bb280
	goto loc_831BB280;
loc_831BB244:
	// li r28,16
	r28.s64 = 16;
loc_831BB248:
	// cmpwi cr6,r28,16
	cr6.compare<int32_t>(r28.s32, 16, xer);
	// bne cr6,0x831bb280
	if (!cr6.eq) goto loc_831BB280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c6f10
	sub_831C6F10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831bb280
	if (!cr0.eq) goto loc_831BB280;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(r11.u32, 120, xer);
	// beq cr6,0x831bb274
	if (cr6.eq) goto loc_831BB274;
	// cmplwi cr6,r11,88
	cr6.compare<uint32_t>(r11.u32, 88, xer);
	// bne cr6,0x831bb280
	if (!cr6.eq) goto loc_831BB280;
loc_831BB274:
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// lhz r31,2(r29)
	r31.u64 = PPC_LOAD_U16(r29.u32 + 2);
	// addi r29,r11,2
	r29.s64 = r11.s64 + 2;
loc_831BB280:
	// li r26,-1
	r26.s64 = -1;
	// twllei r28,0
	// divwu r30,r26,r28
	r30.u32 = r26.u32 / r28.u32;
loc_831BB28C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c6f10
	sub_831C6F10(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831bb2d8
	if (!cr6.eq) goto loc_831BB2D8;
	// clrlwi r11,r31,16
	r11.u64 = r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// blt cr6,0x831bb2b0
	if (cr6.lt) goto loc_831BB2B0;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(r11.u32, 90, xer);
	// ble cr6,0x831bb2c0
	if (!cr6.gt) goto loc_831BB2C0;
loc_831BB2B0:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// blt cr6,0x831bb318
	if (cr6.lt) goto loc_831BB318;
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(r11.u32, 122, xer);
	// bgt cr6,0x831bb318
	if (cr6.gt) goto loc_831BB318;
loc_831BB2C0:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// blt cr6,0x831bb2d4
	if (cr6.lt) goto loc_831BB2D4;
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(r11.u32, 122, xer);
	// bgt cr6,0x831bb2d4
	if (cr6.gt) goto loc_831BB2D4;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
loc_831BB2D4:
	// addi r3,r11,-55
	ctx.r3.s64 = r11.s64 + -55;
loc_831BB2D8:
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// bge cr6,0x831bb318
	if (!cr6.lt) goto loc_831BB318;
	// ori r24,r24,8
	r24.u64 = r24.u64 | 8;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// blt cr6,0x831bb338
	if (cr6.lt) goto loc_831BB338;
	// bne cr6,0x831bb30c
	if (!cr6.eq) goto loc_831BB30C;
	// mr r11,r26
	r11.u64 = r26.u64;
	// twllei r28,0
	// divwu r10,r11,r28
	ctx.r10.u32 = r11.u32 / r28.u32;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x831bb338
	if (!cr6.gt) goto loc_831BB338;
loc_831BB30C:
	// ori r24,r24,4
	r24.u64 = r24.u64 | 4;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x831bb340
	if (!cr6.eq) goto loc_831BB340;
loc_831BB318:
	// rlwinm. r11,r24,0,28,28
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r29,r29,-2
	r29.s64 = r29.s64 + -2;
	// bne 0x831bb34c
	if (!cr0.eq) goto loc_831BB34C;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x831bb330
	if (cr6.eq) goto loc_831BB330;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_831BB330:
	// li r27,0
	r27.s64 = 0;
	// b 0x831bb3b4
	goto loc_831BB3B4;
loc_831BB338:
	// mullw r11,r27,r28
	r11.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// add r27,r11,r3
	r27.u64 = r11.u64 + ctx.r3.u64;
loc_831BB340:
	// lhz r31,0(r29)
	r31.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// b 0x831bb28c
	goto loc_831BB28C;
loc_831BB34C:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// rlwinm. r11,r24,0,29,29
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r31,r10,65535
	r31.u64 = ctx.r10.u64 | 65535;
	// bne 0x831bb388
	if (!cr0.eq) goto loc_831BB388;
	// clrlwi. r11,r24,31
	r11.u64 = r24.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831bb3b4
	if (!cr0.eq) goto loc_831BB3B4;
	// rlwinm. r11,r24,0,30,30
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831bb378
	if (cr0.eq) goto loc_831BB378;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bgt cr6,0x831bb388
	if (cr6.gt) goto loc_831BB388;
loc_831BB378:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831bb3b4
	if (!cr6.eq) goto loc_831BB3B4;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(r27.u32, r31.u32, xer);
	// ble cr6,0x831bb3b4
	if (!cr6.gt) goto loc_831BB3B4;
loc_831BB388:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,34
	r11.s64 = 34;
	// clrlwi. r10,r24,31
	ctx.r10.u64 = r24.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beq 0x831bb3a4
	if (cr0.eq) goto loc_831BB3A4;
	// mr r27,r26
	r27.u64 = r26.u64;
	// b 0x831bb3b4
	goto loc_831BB3B4;
loc_831BB3A4:
	// rlwinm. r11,r24,0,30,30
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r27,r30
	r27.u64 = r30.u64;
	// bne 0x831bb3b4
	if (!cr0.eq) goto loc_831BB3B4;
	// mr r27,r31
	r27.u64 = r31.u64;
loc_831BB3B4:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x831bb3c0
	if (cr6.eq) goto loc_831BB3C0;
	// stw r29,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r29.u32);
loc_831BB3C0:
	// rlwinm. r11,r24,0,30,30
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831bb3cc
	if (cr0.eq) goto loc_831BB3CC;
	// neg r27,r27
	r27.s64 = -r27.s64;
loc_831BB3CC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_831BB3D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_831BB3D8"))) PPC_WEAK_FUNC(sub_831BB3D8);
PPC_FUNC_IMPL(__imp__sub_831BB3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-544
	ctx.r3.s64 = ctx.r10.s64 + -544;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x831bb138
	sub_831BB138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BB3F8"))) PPC_WEAK_FUNC(sub_831BB3F8);
PPC_FUNC_IMPL(__imp__sub_831BB3F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// blt cr6,0x831bb418
	if (cr6.lt) goto loc_831BB418;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(r11.u32, 90, xer);
	// bgt cr6,0x831bb418
	if (cr6.gt) goto loc_831BB418;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_831BB418:
	// clrlwi r3,r11,16
	ctx.r3.u64 = r11.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BB420"))) PPC_WEAK_FUNC(sub_831BB420);
PPC_FUNC_IMPL(__imp__sub_831BB420) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831bb470
	if (!cr6.eq) goto loc_831BB470;
loc_831BB444:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831bb530
	goto loc_831BB530;
loc_831BB470:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x831bb480
	if (cr6.eq) goto loc_831BB480;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831bb444
	if (cr6.eq) goto loc_831BB444;
loc_831BB480:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x831bb498
	if (cr6.gt) goto loc_831BB498;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
loc_831BB498:
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831bb4d0
	if (!cr6.eq) goto loc_831BB4D0;
loc_831BB4C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x831bb530
	goto loc_831BB530;
loc_831BB4D0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x831bb50c
	if (cr6.lt) goto loc_831BB50C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// blt 0x831bb4f8
	if (cr0.lt) goto loc_831BB4F8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x831bb4c8
	goto loc_831BB4C8;
loc_831BB4F8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bcb28
	sub_831BCB28(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831bb4c8
	if (!cr6.eq) goto loc_831BB4C8;
loc_831BB50C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r31,r29
	ctx.r10.u64 = r31.u64 + r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stb r9,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r9.u8);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r3,r11,-2
	ctx.r3.s64 = r11.s64 + -2;
loc_831BB530:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831BB538"))) PPC_WEAK_FUNC(sub_831BB538);
PPC_FUNC_IMPL(__imp__sub_831BB538) {
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
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831bb564
	if (!cr6.eq) goto loc_831BB564;
loc_831BB558:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// b 0x831bb5b0
	goto loc_831BB5B0;
loc_831BB564:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831bb558
	if (cr6.eq) goto loc_831BB558;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831bb558
	if (cr6.eq) goto loc_831BB558;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r11,-31972
	r11.s64 = -2095316992;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,29184
	ctx.r3.s64 = r11.s64 + 29184;
	// bl 0x831bb420
	sub_831BB420(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831bb5a0
	if (!cr0.lt) goto loc_831BB5A0;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_831BB5A0:
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x831bb5d0
	if (!cr6.eq) goto loc_831BB5D0;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,34
	r11.s64 = 34;
loc_831BB5B0:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831BB5D0:
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

__attribute__((alias("__imp__sub_831BB5E8"))) PPC_WEAK_FUNC(sub_831BB5E8);
PPC_FUNC_IMPL(__imp__sub_831BB5E8) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x831bb538
	sub_831BB538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BB5F8"))) PPC_WEAK_FUNC(sub_831BB5F8);
PPC_FUNC_IMPL(__imp__sub_831BB5F8) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831bb61c
	if (cr6.eq) goto loc_831BB61C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831bb648
	if (!cr6.eq) goto loc_831BB648;
loc_831BB61C:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831bb6f4
	goto loc_831BB6F4;
loc_831BB648:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831bb65c
	if (!cr6.eq) goto loc_831BB65C;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// b 0x831bb61c
	goto loc_831BB61C;
loc_831BB65C:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_831BB660:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831bb678
	if (cr6.eq) goto loc_831BB678;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x831bb660
	if (!cr0.eq) goto loc_831BB660;
loc_831BB678:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831bb6b4
	if (!cr6.eq) goto loc_831BB6B4;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_831BB690:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831bb6f4
	goto loc_831BB6F4;
loc_831BB6B4:
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// beq 0x831bb6d4
	if (cr0.eq) goto loc_831BB6D4;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831bb6b4
	if (!cr0.eq) goto loc_831BB6B4;
loc_831BB6D4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831bb6f0
	if (!cr6.eq) goto loc_831BB6F0;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x831bb690
	goto loc_831BB690;
loc_831BB6F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831BB6F4:
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

__attribute__((alias("__imp__sub_831BB708"))) PPC_WEAK_FUNC(sub_831BB708);
PPC_FUNC_IMPL(__imp__sub_831BB708) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x831bb74c
	if (!cr6.eq) goto loc_831BB74C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831bb754
	if (!cr6.eq) goto loc_831BB754;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831bb75c
	if (!cr6.eq) goto loc_831BB75C;
loc_831BB734:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831BB738:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_831BB74C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831bb75c
	if (cr6.eq) goto loc_831BB75C;
loc_831BB754:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831bb788
	if (!cr6.eq) goto loc_831BB788;
loc_831BB75C:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831bb738
	goto loc_831BB738;
loc_831BB788:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x831bb79c
	if (!cr6.eq) goto loc_831BB79C;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// b 0x831bb734
	goto loc_831BB734;
loc_831BB79C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831bb7d8
	if (!cr6.eq) goto loc_831BB7D8;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_831BB7B4:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831bb738
	goto loc_831BB738;
loc_831BB7D8:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x831bb810
	if (!cr6.eq) goto loc_831BB810;
loc_831BB7EC:
	// lbz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// beq 0x831bb844
	if (cr0.eq) goto loc_831BB844;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831bb7ec
	if (!cr0.eq) goto loc_831BB7EC;
	// b 0x831bb844
	goto loc_831BB844;
loc_831BB810:
	// lbz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// beq 0x831bb838
	if (cr0.eq) goto loc_831BB838;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x831bb838
	if (cr0.eq) goto loc_831BB838;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x831bb810
	if (!cr0.eq) goto loc_831BB810;
loc_831BB838:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x831bb844
	if (!cr6.eq) goto loc_831BB844;
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
loc_831BB844:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831bb734
	if (!cr6.eq) goto loc_831BB734;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x831bb864
	if (!cr6.eq) goto loc_831BB864;
	// add r11,r10,r4
	r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// stb r8,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r8.u8);
	// b 0x831bb738
	goto loc_831BB738;
loc_831BB864:
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x831bb7b4
	goto loc_831BB7B4;
}

__attribute__((alias("__imp__sub_831BB878"))) PPC_WEAK_FUNC(sub_831BB878);
PPC_FUNC_IMPL(__imp__sub_831BB878) {
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
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x831bb8b8
	if (!cr6.eq) goto loc_831BB8B8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831bb8c0
	if (!cr6.eq) goto loc_831BB8C0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831bb8c8
	if (!cr6.eq) goto loc_831BB8C8;
loc_831BB8A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831BB8A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_831BB8B8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831bb8c8
	if (cr6.eq) goto loc_831BB8C8;
loc_831BB8C0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831bb8f4
	if (!cr6.eq) goto loc_831BB8F4;
loc_831BB8C8:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831bb8a4
	goto loc_831BB8A4;
loc_831BB8F4:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831bb910
	if (cr6.eq) goto loc_831BB910;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831bb910
	if (!cr6.eq) goto loc_831BB910;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// b 0x831bb8c8
	goto loc_831BB8C8;
loc_831BB910:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_831BB918:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831bb930
	if (cr6.eq) goto loc_831BB930;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x831bb918
	if (!cr0.eq) goto loc_831BB918;
loc_831BB930:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831bb96c
	if (!cr6.eq) goto loc_831BB96C;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_831BB948:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831bb8a4
	goto loc_831BB8A4;
loc_831BB96C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x831bb99c
	if (!cr6.eq) goto loc_831BB99C;
loc_831BB978:
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// beq 0x831bb9d8
	if (cr0.eq) goto loc_831BB9D8;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831bb978
	if (!cr0.eq) goto loc_831BB978;
	// b 0x831bb9d8
	goto loc_831BB9D8;
loc_831BB99C:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831bb9d4
	if (cr6.eq) goto loc_831BB9D4;
loc_831BB9A4:
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// beq 0x831bb9cc
	if (cr0.eq) goto loc_831BB9CC;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831bb9cc
	if (cr0.eq) goto loc_831BB9CC;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x831bb9a4
	if (!cr0.eq) goto loc_831BB9A4;
loc_831BB9CC:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x831bb9d8
	if (!cr6.eq) goto loc_831BB9D8;
loc_831BB9D4:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
loc_831BB9D8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831bb8a0
	if (!cr6.eq) goto loc_831BB8A0;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x831bb9f8
	if (!cr6.eq) goto loc_831BB9F8;
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// stb r9,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r9.u8);
	// b 0x831bb8a4
	goto loc_831BB8A4;
loc_831BB9F8:
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x831bb948
	goto loc_831BB948;
}

__attribute__((alias("__imp__sub_831BBA10"))) PPC_WEAK_FUNC(sub_831BBA10);
PPC_FUNC_IMPL(__imp__sub_831BBA10) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x831c31d0
	sub_831C31D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831bba94
	if (cr6.eq) goto loc_831BBA94;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// addi r9,r11,-14324
	ctx.r9.s64 = r11.s64 + -14324;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_831BBA54:
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831bba84
	if (cr6.eq) goto loc_831BBA84;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x831bba78
	if (cr6.eq) goto loc_831BBA78;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831bba54
	goto loc_831BBA54;
loc_831BBA78:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x831b4588
	sub_831B4588(ctx, base);
loc_831BBA84:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x831b4588
	sub_831B4588(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_831BBA94:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x831bbab8
	sub_831BBAB8(ctx, base);
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

__attribute__((alias("__imp__sub_831BBAB8"))) PPC_WEAK_FUNC(sub_831BBAB8);
PPC_FUNC_IMPL(__imp__sub_831BBAB8) {
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
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x831c3070
	sub_831C3070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BBAE0"))) PPC_WEAK_FUNC(sub_831BBAE0);
PPC_FUNC_IMPL(__imp__sub_831BBAE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-1048
	ctx.r9.s64 = ctx.r10.s64 + -1048;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_831BBAF0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// beq cr6,0x831bbb0c
	if (cr6.eq) goto loc_831BBB0C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// blt cr6,0x831bbaf0
	if (cr6.lt) goto loc_831BBAF0;
loc_831BBB0C:
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// b 0x82bd4ca8
	sub_82BD4CA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BBB24"))) PPC_WEAK_FUNC(sub_831BBB24);
PPC_FUNC_IMPL(__imp__sub_831BBB24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BBB28"))) PPC_WEAK_FUNC(sub_831BBB28);
PPC_FUNC_IMPL(__imp__sub_831BBB28) {
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
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x831bbae0
	sub_831BBAE0(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x831bbae0
	sub_831BBAE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BBB58"))) PPC_WEAK_FUNC(sub_831BBB58);
PPC_FUNC_IMPL(__imp__sub_831BBB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// stw r3,-14316(r11)
	PPC_STORE_U32(r11.u32 + -14316, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BBB68"))) PPC_WEAK_FUNC(sub_831BBB68);
PPC_FUNC_IMPL(__imp__sub_831BBB68) {
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
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x831b22b0
	sub_831B22B0(ctx, base);
	// cmpwi cr6,r3,101
	cr6.compare<int32_t>(ctx.r3.s32, 101, xer);
	// beq cr6,0x831bbba4
	if (cr6.eq) goto loc_831BBBA4;
loc_831BBB90:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// bl 0x831b2c30
	sub_831B2C30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831bbb90
	if (!cr0.eq) goto loc_831BBB90;
loc_831BBBA4:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x831b22b0
	sub_831B22B0(ctx, base);
	// cmpwi cr6,r3,120
	cr6.compare<int32_t>(ctx.r3.s32, 120, xer);
	// bne cr6,0x831bbbbc
	if (!cr6.eq) goto loc_831BBBBC;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_831BBBBC:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lwz r11,-2236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -2236);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r9.u8);
loc_831BBBD8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x831bbbd8
	if (!cr6.eq) goto loc_831BBBD8;
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

__attribute__((alias("__imp__sub_831BBC08"))) PPC_WEAK_FUNC(sub_831BBC08);
PPC_FUNC_IMPL(__imp__sub_831BBC08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r9,-2236(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2236);
	// beq 0x831bbc40
	if (cr0.eq) goto loc_831BBC40;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_831BBC28:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x831bbc40
	if (cr6.eq) goto loc_831BBC40;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831bbc28
	if (!cr0.eq) goto loc_831BBC28;
loc_831BBC40:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x831bbc68
	goto loc_831BBC68;
loc_831BBC54:
	// cmpwi cr6,r10,101
	cr6.compare<int32_t>(ctx.r10.s32, 101, xer);
	// beq cr6,0x831bbc74
	if (cr6.eq) goto loc_831BBC74;
	// cmpwi cr6,r10,69
	cr6.compare<int32_t>(ctx.r10.s32, 69, xer);
	// beq cr6,0x831bbc74
	if (cr6.eq) goto loc_831BBC74;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_831BBC68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831bbc54
	if (!cr0.eq) goto loc_831BBC54;
loc_831BBC74:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_831BBC78:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r8,48
	cr6.compare<uint32_t>(ctx.r8.u32, 48, xer);
	// beq cr6,0x831bbc78
	if (cr6.eq) goto loc_831BBC78;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x831bbca0
	if (!cr6.eq) goto loc_831BBCA0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_831BBCA0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// bne 0x831bbca0
	if (!cr0.eq) goto loc_831BBCA0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BBCC0"))) PPC_WEAK_FUNC(sub_831BBCC0);
PPC_FUNC_IMPL(__imp__sub_831BBCC0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f13,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f0,-8872(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BBCE0"))) PPC_WEAK_FUNC(sub_831BBCE0);
PPC_FUNC_IMPL(__imp__sub_831BBCE0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831bbd18
	if (cr6.eq) goto loc_831BBD18;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831c7d90
	sub_831C7D90(ctx, base);
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// b 0x831bbd28
	goto loc_831BBD28;
loc_831BBD18:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831c7e38
	sub_831C7E38(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_831BBD28:
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

__attribute__((alias("__imp__sub_831BBD40"))) PPC_WEAK_FUNC(sub_831BBD40);
PPC_FUNC_IMPL(__imp__sub_831BBD40) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x831bbce0
	sub_831BBCE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BBD48"))) PPC_WEAK_FUNC(sub_831BBD48);
PPC_FUNC_IMPL(__imp__sub_831BBD48) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831bbb68
	sub_831BBB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BBD50"))) PPC_WEAK_FUNC(sub_831BBD50);
PPC_FUNC_IMPL(__imp__sub_831BBD50) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831bbc08
	sub_831BBC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BBD58"))) PPC_WEAK_FUNC(sub_831BBD58);
PPC_FUNC_IMPL(__imp__sub_831BBD58) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831bbdac
	if (!cr6.eq) goto loc_831BBDAC;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831bbfc4
	goto loc_831BBFC4;
loc_831BBDAC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x831bbde0
	if (!cr6.eq) goto loc_831BBDE0;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_831BBDBC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831bbfc4
	goto loc_831BBFC4;
loc_831BBDE0:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// mr r11,r31
	r11.u64 = r31.u64;
	// bgt cr6,0x831bbdf0
	if (cr6.gt) goto loc_831BBDF0;
	// li r11,0
	r11.s64 = 0;
loc_831BBDF0:
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x831bbe08
	if (cr6.gt) goto loc_831BBE08;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x831bbdbc
	goto loc_831BBDBC;
loc_831BBE08:
	// extsb. r28,r8
	r28.s64 = ctx.r8.s8;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x831bbe58
	if (cr0.eq) goto loc_831BBE58;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// addi r11,r11,-45
	r11.s64 = r11.s64 + -45;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// ble cr6,0x831bbe58
	if (!cr6.gt) goto loc_831BBE58;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_831BBE30:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831bbe30
	if (!cr6.eq) goto loc_831BBE30;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
loc_831BBE58:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r26,45
	r26.s64 = 45;
	// cmpwi cr6,r10,45
	cr6.compare<int32_t>(ctx.r10.s32, 45, xer);
	// bne cr6,0x831bbe74
	if (!cr6.eq) goto loc_831BBE74;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// stb r26,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r26.u8);
loc_831BBE74:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x831bbea0
	if (!cr6.gt) goto loc_831BBEA0;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r9,-2236(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2236);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_831BBEA0:
	// cntlzw r10,r28
	ctx.r10.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// bne cr6,0x831bbec0
	if (!cr6.eq) goto loc_831BBEC0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x831bbec8
	goto loc_831BBEC8;
loc_831BBEC0:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
loc_831BBEC8:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-5708
	ctx.r5.s64 = r11.s64 + -5708;
	// bl 0x831b9530
	sub_831B9530(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831bbef8
	if (cr0.eq) goto loc_831BBEF8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bcaa0
	sub_831BCAA0(ctx, base);
loc_831BBEF8:
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x831bbf0c
	if (cr6.eq) goto loc_831BBF0C;
	// li r11,69
	r11.s64 = 69;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_831BBF0C:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// beq cr6,0x831bbf98
	if (cr6.eq) goto loc_831BBF98;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x831bbf34
	if (!cr0.lt) goto loc_831BBF34;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// stb r26,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r26.u8);
loc_831BBF34:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// blt cr6,0x831bbf60
	if (cr6.lt) goto loc_831BBF60;
	// li r7,100
	ctx.r7.s64 = 100;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.s32 = r11.s32 / ctx.r7.s32;
	// divw r7,r11,r7
	ctx.r7.s32 = r11.s32 / ctx.r7.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,100
	ctx.r8.s64 = ctx.r7.s64 * 100;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
loc_831BBF60:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// blt cr6,0x831bbf8c
	if (cr6.lt) goto loc_831BBF8C;
	// li r7,10
	ctx.r7.s64 = 10;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.s32 = r11.s32 / ctx.r7.s32;
	// divw r7,r11,r7
	ctx.r7.s32 = r11.s32 / ctx.r7.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = ctx.r7.s64 * 10;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
loc_831BBF8C:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r11.u8);
loc_831BBF98:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r11,-11060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -11060);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831bbfc0
	if (cr0.eq) goto loc_831BBFC0;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bne cr6,0x831bbfc0
	if (!cr6.eq) goto loc_831BBFC0;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
loc_831BBFC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831BBFC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_831BBFD0"))) PPC_WEAK_FUNC(sub_831BBFD0);
PPC_FUNC_IMPL(__imp__sub_831BBFD0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x831c8148
	sub_831C8148(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831bc038
	if (!cr6.eq) goto loc_831BC038;
loc_831BC00C:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831bc0dc
	goto loc_831BC0DC;
loc_831BC038:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x831bc00c
	if (cr6.eq) goto loc_831BC00C;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// bne cr6,0x831bc054
	if (!cr6.eq) goto loc_831BC054;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x831bc078
	goto loc_831BC078;
loc_831BC054:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x831bc064
	if (cr6.gt) goto loc_831BC064;
	// li r11,0
	r11.s64 = 0;
loc_831BC064:
	// addi r10,r9,-45
	ctx.r10.s64 = ctx.r9.s64 + -45;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subf r10,r10,r29
	ctx.r10.s64 = r29.s64 - ctx.r10.s64;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - r11.s64;
loc_831BC078:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt cr6,0x831bc088
	if (cr6.gt) goto loc_831BC088;
	// li r10,0
	ctx.r10.s64 = 0;
loc_831BC088:
	// addi r11,r9,-45
	r11.s64 = ctx.r9.s64 + -45;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x831c7ee0
	sub_831C7EE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831bc0bc
	if (cr0.eq) goto loc_831BC0BC;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x831bc0dc
	goto loc_831BC0DC;
loc_831BC0BC:
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831bbd58
	sub_831BBD58(ctx, base);
loc_831BC0DC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831BC0E8"))) PPC_WEAK_FUNC(sub_831BC0E8);
PPC_FUNC_IMPL(__imp__sub_831BC0E8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,48
	r28.s64 = 48;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,1023
	r30.s64 = 1023;
	// li r26,0
	r26.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge cr6,0x831bc118
	if (!cr6.lt) goto loc_831BC118;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_831BC118:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831bc14c
	if (!cr6.eq) goto loc_831BC14C;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831bc524
	goto loc_831BC524;
loc_831BC14C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831bc180
	if (!cr6.eq) goto loc_831BC180;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_831BC15C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831bc524
	goto loc_831BC524;
loc_831BC180:
	// addi r11,r6,11
	r11.s64 = ctx.r6.s64 + 11;
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bgt cr6,0x831bc19c
	if (cr6.gt) goto loc_831BC19C;
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x831bc15c
	goto loc_831BC15C;
loc_831BC19C:
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,20,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFE;
	// cmpldi cr6,r10,4094
	cr6.compare<uint64_t>(ctx.r10.u64, 4094, xer);
	// bne cr6,0x831bc244
	if (!cr6.eq) goto loc_831BC244;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x831bc1bc
	if (!cr6.eq) goto loc_831BC1BC;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x831bc1c0
	goto loc_831BC1C0;
loc_831BC1BC:
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
loc_831BC1C0:
	// addi r30,r31,2
	r30.s64 = r31.s64 + 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831bbfd0
	sub_831BBFD0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831bc1e4
	if (cr0.eq) goto loc_831BC1E4;
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
	// b 0x831bc524
	goto loc_831BC524;
loc_831BC1E4:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// bne cr6,0x831bc1f8
	if (!cr6.eq) goto loc_831BC1F8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_831BC1F8:
	// subfic r10,r29,0
	xer.ca = r29.u32 <= 0;
	ctx.r10.s64 = 0 - r29.s64;
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// li r4,101
	ctx.r4.s64 = 101;
	// addi r11,r10,120
	r11.s64 = ctx.r10.s64 + 120;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// bl 0x831b6f40
	sub_831B6F40(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831bc520
	if (cr0.eq) goto loc_831BC520;
	// subfic r11,r29,0
	xer.ca = r29.u32 <= 0;
	r11.s64 = 0 - r29.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// stb r26,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, r26.u8);
	// b 0x831bc520
	goto loc_831BC520;
loc_831BC244:
	// clrldi r11,r11,63
	r11.u64 = r11.u64 & 0x1;
	// li r27,45
	r27.s64 = 45;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x831bc25c
	if (cr6.eq) goto loc_831BC25C;
	// stb r27,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r27.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_831BC25C:
	// subfic r10,r29,0
	xer.ca = r29.u32 <= 0;
	ctx.r10.s64 = 0 - r29.s64;
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r9,r29,0
	xer.ca = r29.u32 <= 0;
	ctx.r9.s64 = 0 - r29.s64;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,120
	ctx.r8.s64 = ctx.r10.s64 + 120;
	// rlwinm r10,r9,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stb r8,1(r31)
	PPC_STORE_U8(r31.u32 + 1, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r10,97
	ctx.r10.s64 = ctx.r10.s64 + 97;
	// rlwinm r9,r9,0,20,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFE;
	// addi r5,r10,-58
	ctx.r5.s64 = ctx.r10.s64 + -58;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// bne cr6,0x831bc2c8
	if (!cr6.eq) goto loc_831BC2C8;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r10,r10,0,51
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFF000;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// bne cr6,0x831bc2c0
	if (!cr6.eq) goto loc_831BC2C0;
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x831bc2d4
	goto loc_831BC2D4;
loc_831BC2C0:
	// li r30,1022
	r30.s64 = 1022;
	// b 0x831bc2d4
	goto loc_831BC2D4;
loc_831BC2C8:
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_831BC2D4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x831bc2ec
	if (!cr6.eq) goto loc_831BC2EC;
	// stb r26,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r26.u8);
	// b 0x831bc300
	goto loc_831BC300;
loc_831BC2EC:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r11,-2236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -2236);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
loc_831BC300:
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r11,r11,0,51
	r11.u64 = __builtin_rotateleft64(r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// ble cr6,0x831bc3f8
	if (!cr6.gt) goto loc_831BC3F8;
	// li r10,15
	ctx.r10.s64 = 15;
	// rldicr r10,r10,48,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFF000000000000;
loc_831BC318:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x831bc370
	if (!cr6.gt) goto loc_831BC370;
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rldicl r11,r11,52,12
	r11.u64 = __builtin_rotateleft64(r11.u64, 52) & 0xFFFFFFFFFFFFF;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// srd r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,57
	cr6.compare<uint32_t>(ctx.r9.u32, 57, xer);
	// ble cr6,0x831bc354
	if (!cr6.gt) goto loc_831BC354;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
loc_831BC354:
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsh. r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// rldicl r10,r10,60,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// bge 0x831bc318
	if (!cr0.lt) goto loc_831BC318;
loc_831BC370:
	// extsh. r11,r7
	r11.s64 = ctx.r7.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x831bc3f8
	if (cr0.lt) goto loc_831BC3F8;
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rldicl r11,r11,52,12
	r11.u64 = __builtin_rotateleft64(r11.u64, 52) & 0xFFFFFFFFFFFFF;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// srd r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// ble cr6,0x831bc3f8
	if (!cr6.gt) goto loc_831BC3F8;
	// addi r11,r8,-1
	r11.s64 = ctx.r8.s64 + -1;
loc_831BC39C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,102
	cr6.compare<int32_t>(ctx.r10.s32, 102, xer);
	// beq cr6,0x831bc3b4
	if (cr6.eq) goto loc_831BC3B4;
	// cmpwi cr6,r10,70
	cr6.compare<int32_t>(ctx.r10.s32, 70, xer);
	// bne cr6,0x831bc3c0
	if (!cr6.eq) goto loc_831BC3C0;
loc_831BC3B4:
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x831bc39c
	goto loc_831BC39C;
loc_831BC3C0:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x831bc3ec
	if (cr6.eq) goto loc_831BC3EC;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bne cr6,0x831bc3e0
	if (!cr6.eq) goto loc_831BC3E0;
	// addi r10,r5,58
	ctx.r10.s64 = ctx.r5.s64 + 58;
	// b 0x831bc3e4
	goto loc_831BC3E4;
loc_831BC3E0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_831BC3E4:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x831bc3f8
	goto loc_831BC3F8;
loc_831BC3EC:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
loc_831BC3F8:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x831bc424
	if (!cr6.gt) goto loc_831BC424;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x831bc420
	if (cr0.eq) goto loc_831BC420;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_831BC414:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x831bc414
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831BC414;
loc_831BC420:
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_831BC424:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831bc434
	if (!cr6.eq) goto loc_831BC434;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_831BC434:
	// subfic r11,r29,0
	xer.ca = r29.u32 <= 0;
	r11.s64 = 0 - r29.s64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r11,r11,63,53
	r11.u64 = __builtin_rotateleft64(r11.u64, 63) & 0x7FF;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// blt cr6,0x831bc46c
	if (cr6.lt) goto loc_831BC46C;
	// li r9,43
	ctx.r9.s64 = 43;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x831bc474
	goto loc_831BC474;
loc_831BC46C:
	// stb r27,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r27.u8);
	// neg r11,r11
	r11.s64 = -r11.s64;
loc_831BC474:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpdi cr6,r11,1000
	cr6.compare<int64_t>(r11.s64, 1000, xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r28.u8);
	// blt cr6,0x831bc4b4
	if (cr6.lt) goto loc_831BC4B4;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// divd r7,r11,r9
	ctx.r7.s64 = r11.s64 / ctx.r9.s64;
	// divd r6,r11,r9
	ctx.r6.s64 = r11.s64 / ctx.r9.s64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,1000
	ctx.r7.s64 = ctx.r6.s64 * 1000;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x831bc4bc
	if (!cr6.eq) goto loc_831BC4BC;
loc_831BC4B4:
	// cmpdi cr6,r11,100
	cr6.compare<int64_t>(r11.s64, 100, xer);
	// blt cr6,0x831bc4e0
	if (cr6.lt) goto loc_831BC4E0;
loc_831BC4BC:
	// li r9,100
	ctx.r9.s64 = 100;
	// divd r7,r11,r9
	ctx.r7.s64 = r11.s64 / ctx.r9.s64;
	// divd r6,r11,r9
	ctx.r6.s64 = r11.s64 / ctx.r9.s64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,100
	ctx.r7.s64 = ctx.r6.s64 * 100;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_831BC4E0:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x831bc4f0
	if (!cr6.eq) goto loc_831BC4F0;
	// cmpdi cr6,r11,10
	cr6.compare<int64_t>(r11.s64, 10, xer);
	// blt cr6,0x831bc514
	if (cr6.lt) goto loc_831BC514;
loc_831BC4F0:
	// li r9,10
	ctx.r9.s64 = 10;
	// divd r8,r11,r9
	ctx.r8.s64 = r11.s64 / ctx.r9.s64;
	// divd r7,r11,r9
	ctx.r7.s64 = r11.s64 / ctx.r9.s64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = ctx.r7.s64 * 10;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_831BC514:
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r26,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r26.u8);
loc_831BC520:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831BC524:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831BC530"))) PPC_WEAK_FUNC(sub_831BC530);
PPC_FUNC_IMPL(__imp__sub_831BC530) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// bne cr6,0x831bc580
	if (!cr6.eq) goto loc_831BC580;
loc_831BC554:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831bc6ec
	goto loc_831BC6EC;
loc_831BC580:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831bc554
	if (cr6.eq) goto loc_831BC554;
	// extsb. r26,r7
	r26.s64 = ctx.r7.s8;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// li r28,48
	r28.s64 = 48;
	// beq 0x831bc5c0
	if (cr0.eq) goto loc_831BC5C0;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, r27.s32, xer);
	// bne cr6,0x831bc5c0
	if (!cr6.eq) goto loc_831BC5C0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-45
	r11.s64 = r11.s64 + -45;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// stb r9,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r9.u8);
loc_831BC5C0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// bne cr6,0x831bc5d8
	if (!cr6.eq) goto loc_831BC5D8;
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
loc_831BC5D8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x831bc620
	if (cr6.gt) goto loc_831BC620;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_831BC5E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831bc5e8
	if (!cr6.eq) goto loc_831BC5E8;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
	// stb r28,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r28.u8);
	// b 0x831bc624
	goto loc_831BC624;
loc_831BC620:
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
loc_831BC624:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x831bc6e8
	if (!cr6.gt) goto loc_831BC6E8;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_831BC630:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831bc630
	if (!cr6.eq) goto loc_831BC630;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r30,r31,1
	r30.s64 = r31.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r11,-2236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -2236);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x831bc6e8
	if (!cr6.lt) goto loc_831BC6E8;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x831bc690
	if (cr6.eq) goto loc_831BC690;
	// neg r27,r11
	r27.s64 = -r11.s64;
	// b 0x831bc6a0
	goto loc_831BC6A0;
loc_831BC690:
	// neg r11,r11
	r11.s64 = -r11.s64;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x831bc6a0
	if (cr6.lt) goto loc_831BC6A0;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_831BC6A0:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x831bc6d8
	if (cr6.eq) goto loc_831BC6D8;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_831BC6AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831bc6ac
	if (!cr6.eq) goto loc_831BC6AC;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// add r3,r30,r27
	ctx.r3.u64 = r30.u64 + r27.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
loc_831BC6D8:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_831BC6E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831BC6EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831BC6F8"))) PPC_WEAK_FUNC(sub_831BC6F8);
PPC_FUNC_IMPL(__imp__sub_831BC6F8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x831c8148
	sub_831C8148(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831bc75c
	if (!cr6.eq) goto loc_831BC75C;
loc_831BC730:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831bca58
	sub_831BCA58(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831bc7d8
	goto loc_831BC7D8;
loc_831BC75C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x831bc730
	if (cr6.eq) goto loc_831BC730;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// bne cr6,0x831bc778
	if (!cr6.eq) goto loc_831BC778;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x831bc788
	goto loc_831BC788;
loc_831BC778:
	// addi r10,r11,-45
	ctx.r10.s64 = r11.s64 + -45;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subf r4,r10,r29
	ctx.r4.s64 = r29.s64 - ctx.r10.s64;
loc_831BC788:
	// addi r10,r11,-45
	ctx.r10.s64 = r11.s64 + -45;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// add r5,r11,r30
	ctx.r5.u64 = r11.u64 + r30.u64;
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x831c7ee0
	sub_831C7EE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831bc7bc
	if (cr0.eq) goto loc_831BC7BC;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x831bc7d8
	goto loc_831BC7D8;
loc_831BC7BC:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831bc530
	sub_831BC530(ctx, base);
loc_831BC7D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

