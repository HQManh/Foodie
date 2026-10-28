// rea decompile_all
// name: Coffee.UIEffects.UIEffectContext$$.cctor
// address: 0x43f1f08
// body: available
// range: 0x43f1f08-0x43f3a63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f3a58 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f3a5c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f3a60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffectContext___cctor(void)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((DAT_09517dec & 1) == 0) {
    FUN_03f5c2a4(&DAT_091749d0);
    FUN_03f5c2a4(&DAT_091c0370);
    FUN_03f5c2a4(&DAT_0917fce0);
    FUN_03f5c2a4(&DAT_09177e58);
    FUN_03f5c2a4(&DAT_091a9168);
    FUN_03f5c2a4(&DAT_0917b6f0);
    FUN_03f5c2a4(&DAT_091b16f8);
    FUN_03f5c2a4(&DAT_0917cfe8);
    FUN_03f5c2a4(&DAT_0917e0b0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f12c0);
    FUN_03f5c2a4(&DAT_091f12c8);
    FUN_03f5c2a4(&DAT_091f12d0);
    FUN_03f5c2a4(&DAT_09195530);
    FUN_03f5c2a4(&DAT_0918c380);
    FUN_03f5c2a4(&DAT_0917fb50);
    FUN_03f5c2a4(&DAT_091807e8);
    FUN_03f5c2a4(&DAT_0920e5f8);
    FUN_03f5c2a4(&DAT_09216770);
    FUN_03f5c2a4(&DAT_092152b8);
    FUN_03f5c2a4(&DAT_092151a8);
    FUN_03f5c2a4(&DAT_09216790);
    FUN_03f5c2a4(&DAT_0920e600);
    FUN_03f5c2a4(&DAT_09216078);
    FUN_03f5c2a4(&DAT_0920c1f0);
    FUN_03f5c2a4(&DAT_0920e580);
    FUN_03f5c2a4(&DAT_0920c208);
    FUN_03f5c2a4(&DAT_09215f88);
    FUN_03f5c2a4(&DAT_09215628);
    FUN_03f5c2a4(&DAT_092161a0);
    FUN_03f5c2a4(&DAT_092167b8);
    FUN_03f5c2a4(&DAT_0920e318);
    FUN_03f5c2a4(&DAT_0920e598);
    FUN_03f5c2a4(&DAT_09216778);
    FUN_03f5c2a4(&DAT_092163f0);
    FUN_03f5c2a4(&DAT_092152e0);
    FUN_03f5c2a4(&DAT_09214e20);
    FUN_03f5c2a4(&DAT_09216600);
    FUN_03f5c2a4(&DAT_0920e5d0);
    FUN_03f5c2a4(&DAT_092155e8);
    FUN_03f5c2a4(&DAT_091ffc30);
    FUN_03f5c2a4(&DAT_092155e0);
    FUN_03f5c2a4(&DAT_092031c0);
    FUN_03f5c2a4(&DAT_091ffc28);
    FUN_03f5c2a4(&DAT_091fd278);
    FUN_03f5c2a4(&DAT_0920e590);
    FUN_03f5c2a4(&DAT_09215608);
    FUN_03f5c2a4(&DAT_09214d68);
    FUN_03f5c2a4(&DAT_092152b0);
    FUN_03f5c2a4(&DAT_0920c210);
    FUN_03f5c2a4(&DAT_09215270);
    FUN_03f5c2a4(&DAT_091ffc38);
    FUN_03f5c2a4(&DAT_092166f0);
    FUN_03f5c2a4(&DAT_091ffc20);
    FUN_03f5c2a4(&DAT_092161a8);
    FUN_03f5c2a4(&DAT_092152d8);
    FUN_03f5c2a4(&DAT_09216768);
    FUN_03f5c2a4(&DAT_092167c8);
    FUN_03f5c2a4(&DAT_092167c0);
    FUN_03f5c2a4(&DAT_09216070);
    FUN_03f5c2a4(&DAT_09215df8);
    FUN_03f5c2a4(&DAT_092151a0);
    FUN_03f5c2a4(&DAT_091ffc48);
    FUN_03f5c2a4(&DAT_0920c220);
    FUN_03f5c2a4(&DAT_0920e5e8);
    FUN_03f5c2a4(&DAT_092167a0);
    FUN_03f5c2a4(&DAT_09214e18);
    FUN_03f5c2a4(&DAT_09216788);
    FUN_03f5c2a4(&DAT_0920c1f8);
    FUN_03f5c2a4(&DAT_09215bc0);
    FUN_03f5c2a4(&DAT_09215188);
    FUN_03f5c2a4(&DAT_092167b0);
    FUN_03f5c2a4(&DAT_091ffc40);
    FUN_03f5c2a4(&DAT_0920c200);
    FUN_03f5c2a4(&DAT_09216610);
    FUN_03f5c2a4(&DAT_092167d0);
    FUN_03f5c2a4(&DAT_092031d0);
    FUN_03f5c2a4(&DAT_09200fa8);
    FUN_03f5c2a4(&DAT_09215190);
    FUN_03f5c2a4(&DAT_09215180);
    FUN_03f5c2a4(&DAT_092167a8);
    FUN_03f5c2a4(&DAT_09215610);
    FUN_03f5c2a4(&DAT_09216080);
    FUN_03f5c2a4(&DAT_0920e608);
    FUN_03f5c2a4(&DAT_0920e5e0);
    FUN_03f5c2a4(&DAT_0920e610);
    FUN_03f5c2a4(&DAT_0920e5d8);
    FUN_03f5c2a4(&DAT_09216798);
    FUN_03f5c2a4(&DAT_09216190);
    FUN_03f5c2a4(&DAT_09215620);
    FUN_03f5c2a4(&DAT_092152e8);
    FUN_03f5c2a4(&DAT_092152c0);
    FUN_03f5c2a4(&DAT_0920e588);
    FUN_03f5c2a4(&DAT_0920e5f0);
    FUN_03f5c2a4(&DAT_092155f8);
    FUN_03f5c2a4(&DAT_09216198);
    FUN_03f5c2a4(&DAT_09215bb8);
    FUN_03f5c2a4(&DAT_09216608);
    FUN_03f5c2a4(&DAT_09215198);
    FUN_03f5c2a4(&DAT_0920e578);
    FUN_03f5c2a4(&DAT_092031c8);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_09200f98);
    FUN_03f5c2a4(&DAT_09216780);
    FUN_03f5c2a4(&DAT_09214e08);
    FUN_03f5c2a4(&DAT_0920c218);
    FUN_03f5c2a4(&DAT_09215600);
    FUN_03f5c2a4(&DAT_0920e310);
    FUN_03f5c2a4(&DAT_09215618);
    FUN_03f5c2a4(&DAT_092155f0);
    FUN_03f5c2a4(&DAT_09215308);
    FUN_03f5c2a4(&DAT_09214e60);
    DAT_09517dec = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918c380);
  *(undefined2 *)(lVar3 + 0x200) = 0x101;
  System_Object___ctor(lVar3,0);
  **(long **)(DAT_0918c380 + 0xb8) = lVar3;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918c380 + 0xb8),lVar3);
  uVar4 = thunk_FUN_03f9944c(DAT_0917cfe8);
  FUN_058941e8(uVar4,0x2000,DAT_091b16f8);
  puVar5 = (undefined8 *)(*(long *)(DAT_0918c380 + 0xb8) + 8);
  *puVar5 = uVar4;
  thunk_FUN_03f5d7b8(puVar5,uVar4);
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092163f0,0);
  uVar4 = DAT_09215270;
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x10) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar4,0);
  uVar4 = DAT_092166f0;
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x14) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar4,0);
  uVar4 = DAT_09214e08;
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x18) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar4,0);
  uVar4 = DAT_09214e60;
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x1c) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar4,0);
  uVar4 = DAT_09214e20;
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x20) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar4,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x24) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09214e18,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x28) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216070,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x2c) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216080,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x30) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216078,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x34) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092167a0,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x38) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092167a8,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x3c) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092167b8,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x40) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092167c0,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x44) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092167c8,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x48) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092167d0,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x4c) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092167b0,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x50) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216798,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x54) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216778,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x58) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216770,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x5c) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216780,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x60) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216790,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 100) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216768,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x68) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216788,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x6c) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216600,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x70) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216608,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x74) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216610,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x78) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092161a0,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x7c) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216198,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x80) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216190,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x84) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092161a8,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x88) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215308,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x8c) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092152b8,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x90) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092152b0,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x94) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092152c0,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x98) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092152d8,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x9c) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092152e0,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xa0) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092152e8,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xa4) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215df8,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xa8) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215188,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xac) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092151a8,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xb0) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215180,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xb4) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215190,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xb8) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215198,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xbc) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092151a0,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xc0) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215610,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xc4) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215608,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 200) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092155e8,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xcc) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092155f0,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xd0) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092155f8,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xd4) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215600,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xd8) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215620,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xdc) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215628,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xe0) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215618,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xe4) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215f88,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xe8) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092155e0,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xec) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215bc0,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xf0) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215bb8,0);
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xf4) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09214d68,0);
  uVar4 = DAT_091805f8;
  *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xf8) = uVar2;
  lVar3 = FUN_03f5c394(uVar4,6);
  if (lVar3 == 0) goto LAB_043f3a60;
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = DAT_091f5700;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20));
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar3 + 0x28) = DAT_0920e578;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28));
      if (2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x30) = DAT_0920e598;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30));
        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar3 + 0x38) = DAT_0920e580;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x38));
          if (4 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x40) = DAT_0920e590;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x40));
            if (5 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x48) = DAT_0920e588;
              thunk_FUN_03f5d7b8();
              lVar7 = *(long *)(DAT_0918c380 + 0xb8);
              *(long *)(lVar7 + 0x100) = lVar3;
              thunk_FUN_03f5d7b8(lVar7 + 0x100,lVar3);
              lVar3 = FUN_03f5c394(DAT_091805f8,2);
              if (lVar3 == 0) goto LAB_043f3a60;
              if (*(int *)(lVar3 + 0x18) != 0) {
                *(undefined8 *)(lVar3 + 0x20) = DAT_091f5700;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20));
                if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar3 + 0x28) = DAT_091fd278;
                  thunk_FUN_03f5d7b8();
                  lVar7 = *(long *)(DAT_0918c380 + 0xb8);
                  *(long *)(lVar7 + 0x108) = lVar3;
                  thunk_FUN_03f5d7b8(lVar7 + 0x108,lVar3);
                  lVar3 = FUN_03f5c394(DAT_091805f8,8);
                  if (lVar3 == 0) goto LAB_043f3a60;
                  if (*(int *)(lVar3 + 0x18) != 0) {
                    *(undefined8 *)(lVar3 + 0x20) = DAT_091f5700;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20));
                    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                      *(undefined8 *)(lVar3 + 0x28) = DAT_0920c1f8;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28));
                      if (2 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x30) = DAT_0920c200;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30));
                        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                          *(undefined8 *)(lVar3 + 0x38) = DAT_0920c1f0;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x38));
                          if (4 < *(uint *)(lVar3 + 0x18)) {
                            *(undefined8 *)(lVar3 + 0x40) = DAT_0920c218;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x40));
                            if (5 < *(uint *)(lVar3 + 0x18)) {
                              *(undefined8 *)(lVar3 + 0x48) = DAT_0920c220;
                              thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x48));
                              if (6 < *(uint *)(lVar3 + 0x18)) {
                                *(undefined8 *)(lVar3 + 0x50) = DAT_0920c210;
                                thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x50));
                                if ((*(uint *)(lVar3 + 0x18) & 0xfffffff8) != 0) {
                                  *(undefined8 *)(lVar3 + 0x58) = DAT_0920c208;
                                  thunk_FUN_03f5d7b8();
                                  lVar7 = *(long *)(DAT_0918c380 + 0xb8);
                                  *(long *)(lVar7 + 0x110) = lVar3;
                                  thunk_FUN_03f5d7b8(lVar7 + 0x110,lVar3);
                                  lVar3 = FUN_03f5c394(DAT_091805f8,10);
                                  if (lVar3 == 0) goto LAB_043f3a60;
                                  if (*(int *)(lVar3 + 0x18) != 0) {
                                    *(undefined8 *)(lVar3 + 0x20) = DAT_091f5700;
                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20));
                                    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                                      *(undefined8 *)(lVar3 + 0x28) = DAT_0920e5f0;
                                      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28));
                                      if (2 < *(uint *)(lVar3 + 0x18)) {
                                        *(undefined8 *)(lVar3 + 0x30) = DAT_0920e5e0;
                                        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30));
                                        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                                          *(undefined8 *)(lVar3 + 0x38) = DAT_0920e5e8;
                                          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x38));
                                          if (4 < *(uint *)(lVar3 + 0x18)) {
                                            *(undefined8 *)(lVar3 + 0x40) = DAT_0920e610;
                                            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x40));
                                            if (5 < *(uint *)(lVar3 + 0x18)) {
                                              *(undefined8 *)(lVar3 + 0x48) = DAT_0920e5f8;
                                              thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x48));
                                              if (6 < *(uint *)(lVar3 + 0x18)) {
                                                *(undefined8 *)(lVar3 + 0x50) = DAT_0920e600;
                                                thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x50));
                                                if ((*(uint *)(lVar3 + 0x18) & 0xfffffff8) != 0) {
                                                  *(undefined8 *)(lVar3 + 0x58) = DAT_0920e5d8;
                                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x58));
                                                  if (8 < *(uint *)(lVar3 + 0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x60) = DAT_0920e608;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x60))
                                                    ;
                                                    if (9 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x68) = DAT_0920e5d0;
                                                      thunk_FUN_03f5d7b8();
                                                      lVar7 = *(long *)(DAT_0918c380 + 0xb8);
                                                      *(long *)(lVar7 + 0x118) = lVar3;
                                                      thunk_FUN_03f5d7b8(lVar7 + 0x118,lVar3);
                                                      lVar3 = FUN_03f5c394(DAT_091805f8,3);
                                                      if (lVar3 == 0) goto LAB_043f3a60;
                                                      if (*(int *)(lVar3 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar3 + 0x20) = DAT_091f5700
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar3 + 0x20));
                                                        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe)
                                                            != 0) {
                                                          *(undefined8 *)(lVar3 + 0x28) =
                                                               DAT_0920e310;
                                                          thunk_FUN_03f5d7b8((undefined8 *)
                                                                             (lVar3 + 0x28));
                                                          if (2 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x30) =
                                                                 DAT_0920e318;
                                                            thunk_FUN_03f5d7b8();
                                                            lVar7 = *(long *)(DAT_0918c380 + 0xb8);
                                                            *(long *)(lVar7 + 0x120) = lVar3;
                                                            thunk_FUN_03f5d7b8(lVar7 + 0x120,lVar3);
                                                            lVar3 = FUN_03f5c394(DAT_091805f8,3);
                                                            if (lVar3 == 0) goto LAB_043f3a60;
                                                            if (*(int *)(lVar3 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar3 + 0x20) =
                                                                   DAT_091f5700;
                                                              thunk_FUN_03f5d7b8((undefined8 *)
                                                                                 (lVar3 + 0x20));
                                                              if ((*(uint *)(lVar3 + 0x18) &
                                                                  0xfffffffe) != 0) {
                                                                *(undefined8 *)(lVar3 + 0x28) =
                                                                     DAT_09200f98;
                                                                thunk_FUN_03f5d7b8((undefined8 *)
                                                                                   (lVar3 + 0x28));
                                                                if (2 < *(uint *)(lVar3 + 0x18)) {
                                                                  *(undefined8 *)(lVar3 + 0x30) =
                                                                       DAT_09200fa8;
                                                                  thunk_FUN_03f5d7b8();
                                                                  lVar7 = *(long *)(DAT_0918c380 +
                                                                                   0xb8);
                                                                  *(long *)(lVar7 + 0x128) = lVar3;
                                                                  thunk_FUN_03f5d7b8(lVar7 + 0x128,
                                                                                     lVar3);
                                                                  lVar3 = FUN_03f5c394(DAT_091805f8,
                                                                                       7);
                                                                  if (lVar3 == 0) goto LAB_043f3a60;
                                                                  if (*(int *)(lVar3 + 0x18) != 0) {
                                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                                         DAT_091f5700;
                                                                    thunk_FUN_03f5d7b8((undefined8 *
                                                                                       )(lVar3 + 
                                                  0x20));
                                                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar3 + 0x28) = DAT_091ffc28;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28))
                                                    ;
                                                    if (2 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x30) = DAT_091ffc30;
                                                      thunk_FUN_03f5d7b8((undefined8 *)
                                                                         (lVar3 + 0x30));
                                                      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) !=
                                                          0) {
                                                        *(undefined8 *)(lVar3 + 0x38) = DAT_091ffc20
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar3 + 0x38));
                                                        if (4 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x40) =
                                                               DAT_091ffc40;
                                                          thunk_FUN_03f5d7b8((undefined8 *)
                                                                             (lVar3 + 0x40));
                                                          if (5 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x48) =
                                                                 DAT_091ffc38;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar3 + 0x48));
                                                            if (6 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x50) =
                                                                   DAT_091ffc48;
                                                              thunk_FUN_03f5d7b8();
                                                              lVar7 = *(long *)(DAT_0918c380 + 0xb8)
                                                              ;
                                                              *(long *)(lVar7 + 0x130) = lVar3;
                                                              thunk_FUN_03f5d7b8(lVar7 + 0x130,lVar3
                                                                                );
                                                              lVar3 = FUN_03f5c394(DAT_091805f8,4);
                                                              if (lVar3 == 0) goto LAB_043f3a60;
                                                              if (*(int *)(lVar3 + 0x18) != 0) {
                                                                *(undefined8 *)(lVar3 + 0x20) =
                                                                     DAT_091f5700;
                                                                thunk_FUN_03f5d7b8((undefined8 *)
                                                                                   (lVar3 + 0x20));
                                                                if ((*(uint *)(lVar3 + 0x18) &
                                                                    0xfffffffe) != 0) {
                                                                  *(undefined8 *)(lVar3 + 0x28) =
                                                                       DAT_092031d0;
                                                                  thunk_FUN_03f5d7b8((undefined8 *)
                                                                                     (lVar3 + 0x28))
                                                                  ;
                                                                  if (2 < *(uint *)(lVar3 + 0x18)) {
                                                                    *(undefined8 *)(lVar3 + 0x30) =
                                                                         DAT_092031c0;
                                                                    thunk_FUN_03f5d7b8((undefined8 *
                                                                                       )(lVar3 + 
                                                  0x30));
                                                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                                                    *(undefined8 *)(lVar3 + 0x38) = DAT_092031c8;
                                                    thunk_FUN_03f5d7b8();
                                                    lVar7 = *(long *)(DAT_0918c380 + 0xb8);
                                                    *(long *)(lVar7 + 0x138) = lVar3;
                                                    thunk_FUN_03f5d7b8(lVar7 + 0x138,lVar3);
                                                    lVar7 = FUN_03f5c394(DAT_0917fb50,5);
                                                    lVar3 = DAT_091c0370;
                                                    lVar8 = *(long *)(DAT_091c0370 + 0x38);
                                                    if (lVar8 == 0) {
                                                      FUN_03f95ac8(DAT_091c0370);
                                                      lVar8 = *(long *)(lVar3 + 0x38);
                                                    }
                                                    lVar8 = *(long *)(lVar8 + 0x10);
                                                    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                                                      lVar8 = FUN_03f95a6c();
                                                    }
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      FUN_03f5c424();
                                                    }
                                                    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10
                                                                     );
                                                    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                                                      lVar3 = FUN_03f95a6c();
                                                    }
                                                    if (lVar7 == 0) {
LAB_043f3a60:
                    /* WARNING: Subroutine does not return */
                                                      FUN_03f5c550();
                                                    }
                                                    if (*(int *)(lVar7 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar7 + 0x20) =
                                                           **(undefined8 **)(lVar3 + 0xb8);
                                                      thunk_FUN_03f5d7b8();
                                                      lVar3 = FUN_03f5c394(DAT_091807e8,1);
                                                      if (DAT_09515ce9 == '\0') {
                                                        FUN_03f5c2a4(&DAT_0918cb68);
                                                        DAT_09515ce9 = '\x01';
                                                      }
                                                      if (lVar3 == 0) goto LAB_043f3a60;
                                                      if (*(int *)(lVar3 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                              (*(long *)(DAT_0918cb68 + 0xb8) + 8);
                                                        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe)
                                                            != 0) {
                                                          *(long *)(lVar7 + 0x28) = lVar3;
                                                          thunk_FUN_03f5d7b8((long *)(lVar7 + 0x28),
                                                                             lVar3);
                                                          lVar3 = FUN_03f5c394(DAT_091807e8,3);
                                                          if (DAT_09515ce9 == '\0') {
                                                            FUN_03f5c2a4(&DAT_0918cb68);
                                                            DAT_09515ce9 = '\x01';
                                                          }
                                                          cVar1 = DAT_09516db4;
                                                          if (lVar3 == 0) goto LAB_043f3a60;
                                                          uVar9 = (ulong)*(uint *)(lVar3 + 0x18);
                                                          if (uVar9 != 0) {
                                                            *(undefined8 *)(lVar3 + 0x20) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(DAT_0918cb68 + 0xb8) +
                                                                  8);
                                                            if (cVar1 == '\0') {
                                                              FUN_03f5c2a4(&DAT_0918cb68);
                                                              uVar9 = *(ulong *)(lVar3 + 0x18);
                                                              DAT_09516db4 = '\x01';
                                                            }
                                                            cVar1 = DAT_09516afb;
                                                            uVar6 = (uint)uVar9;
                                                            if ((uVar9 & 0xfffffffe) != 0) {
                                                              *(undefined8 *)(lVar3 + 0x28) =
                                                                   *(undefined8 *)
                                                                    (*(long *)(DAT_0918cb68 + 0xb8)
                                                                    + 0x28);
                                                              if (cVar1 == '\0') {
                                                                FUN_03f5c2a4(&DAT_0918cb68);
                                                                uVar6 = (uint)*(undefined8 *)
                                                                               (lVar3 + 0x18);
                                                                DAT_09516afb = '\x01';
                                                              }
                                                              if (2 < uVar6) {
                                                                *(undefined8 *)(lVar3 + 0x30) =
                                                                     *(undefined8 *)
                                                                      (*(long *)(DAT_0918cb68 + 0xb8
                                                                                ) + 0x10);
                                                                if (2 < *(uint *)(lVar7 + 0x18)) {
                                                                  *(long *)(lVar7 + 0x30) = lVar3;
                                                                  thunk_FUN_03f5d7b8((long *)(lVar7 
                                                  + 0x30),lVar3);
                                                  lVar3 = FUN_03f5c394(DAT_091807e8,4);
                                                  if (DAT_09515ce9 == '\0') {
                                                    FUN_03f5c2a4(&DAT_0918cb68);
                                                    DAT_09515ce9 = '\x01';
                                                  }
                                                  if (lVar3 == 0) goto LAB_043f3a60;
                                                  uVar6 = *(uint *)(lVar3 + 0x18);
                                                  if (uVar6 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                         *(undefined8 *)
                                                          (*(long *)(DAT_0918cb68 + 0xb8) + 8);
                                                    if (1 < uVar6) {
                                                      uVar4 = *(undefined8 *)
                                                               (*(long *)(DAT_0918cb68 + 0xb8) + 8);
                                                      *(ulong *)(lVar3 + 0x28) =
                                                           CONCAT44(-(float)((ulong)uVar4 >> 0x20),
                                                                    -(float)uVar4);
                                                      if (uVar6 != 2) {
                                                        *(undefined8 *)(lVar3 + 0x30) =
                                                             0xbf8000003f800000;
                                                        if (3 < uVar6) {
                                                          *(undefined8 *)(lVar3 + 0x38) =
                                                               0x3f800000bf800000;
                                                          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc)
                                                              != 0) {
                                                            *(long *)(lVar7 + 0x38) = lVar3;
                                                            thunk_FUN_03f5d7b8((long *)(lVar7 + 0x38
                                                                                       ),lVar3);
                                                            lVar3 = FUN_03f5c394(DAT_091807e8,8);
                                                            if (DAT_09515ce9 == '\0') {
                                                              FUN_03f5c2a4(&DAT_0918cb68);
                                                              DAT_09515ce9 = '\x01';
                                                            }
                                                            if (lVar3 == 0) goto LAB_043f3a60;
                                                            uVar6 = *(uint *)(lVar3 + 0x18);
                                                            uVar9 = (ulong)uVar6;
                                                            if (uVar9 != 0) {
                                                              *(undefined8 *)(lVar3 + 0x20) =
                                                                   *(undefined8 *)
                                                                    (*(long *)(DAT_0918cb68 + 0xb8)
                                                                    + 8);
                                                              if (1 < uVar6) {
                                                                uVar4 = *(undefined8 *)
                                                                         (*(long *)(DAT_0918cb68 +
                                                                                   0xb8) + 8);
                                                                *(ulong *)(lVar3 + 0x28) =
                                                                     CONCAT44(-(float)((ulong)uVar4
                                                                                      >> 0x20),
                                                                              -(float)uVar4);
                                                                if ((uVar6 != 2) &&
                                                                   (*(undefined8 *)(lVar3 + 0x30) =
                                                                         0xbf8000003f800000,
                                                                   cVar1 = DAT_09516db4, 3 < uVar6))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x38) =
                                                                       0x3f800000bf800000;
                                                                  if (cVar1 == '\0') {
                                                                    FUN_03f5c2a4(&DAT_0918cb68);
                                                                    uVar9 = *(ulong *)(lVar3 + 0x18)
                                                                    ;
                                                                    DAT_09516db4 = '\x01';
                                                                  }
                                                                  cVar1 = DAT_09516afb;
                                                                  if (4 < (uint)uVar9) {
                                                                    *(undefined8 *)(lVar3 + 0x40) =
                                                                         *(undefined8 *)
                                                                          (*(long *)(DAT_0918cb68 +
                                                                                    0xb8) + 0x28);
                                                                    if (cVar1 == '\0') {
                                                                      FUN_03f5c2a4(&DAT_0918cb68);
                                                                      uVar9 = *(ulong *)(lVar3 + 
                                                  0x18);
                                                  DAT_09516afb = '\x01';
                                                  }
                                                  cVar1 = DAT_09516db3;
                                                  if (5 < (uint)uVar9) {
                                                    *(undefined8 *)(lVar3 + 0x48) =
                                                         *(undefined8 *)
                                                          (*(long *)(DAT_0918cb68 + 0xb8) + 0x10);
                                                    if (cVar1 == '\0') {
                                                      FUN_03f5c2a4(&DAT_0918cb68);
                                                      uVar9 = *(ulong *)(lVar3 + 0x18);
                                                      DAT_09516db3 = '\x01';
                                                    }
                                                    cVar1 = DAT_09517e09;
                                                    if (6 < (uint)uVar9) {
                                                      *(undefined8 *)(lVar3 + 0x50) =
                                                           *(undefined8 *)
                                                            (*(long *)(DAT_0918cb68 + 0xb8) + 0x20);
                                                      if (cVar1 == '\0') {
                                                        FUN_03f5c2a4(&DAT_0918cb68);
                                                        uVar9 = *(ulong *)(lVar3 + 0x18);
                                                        DAT_09517e09 = '\x01';
                                                      }
                                                      if ((uVar9 & 0xfffffff8) != 0) {
                                                        *(undefined8 *)(lVar3 + 0x58) =
                                                             *(undefined8 *)
                                                              (*(long *)(DAT_0918cb68 + 0xb8) + 0x18
                                                              );
                                                        if (4 < *(uint *)(lVar7 + 0x18)) {
                                                          *(long *)(lVar7 + 0x40) = lVar3;
                                                          thunk_FUN_03f5d7b8((long *)(lVar7 + 0x40),
                                                                             lVar3);
                                                          lVar3 = *(long *)(DAT_0918c380 + 0xb8);
                                                          *(long *)(lVar3 + 0x140) = lVar7;
                                                          thunk_FUN_03f5d7b8(lVar3 + 0x140,lVar7);
                                                          uVar4 = FUN_03f5c394(DAT_0917fce0,0x100);
                                                          lVar3 = *(long *)(DAT_0918c380 + 0xb8);
                                                          *(undefined8 *)(lVar3 + 0x150) = uVar4;
                                                          thunk_FUN_03f5d7b8(lVar3 + 0x150,uVar4);
                                                          if (*(int *)(DAT_09195530 + 0xe4) == 0) {
                                                            FUN_03f5c424();
                                                          }
                                                          uVar10 = **(undefined8 **)
                                                                     (DAT_09195530 + 0xb8);
                                                          uVar4 = thunk_FUN_03f9944c(DAT_09177e58);
                                                          FUN_053017a8(uVar4,uVar10,DAT_091f12c0,0);
                                                          uVar11 = **(undefined8 **)
                                                                     (DAT_09195530 + 0xb8);
                                                          uVar10 = thunk_FUN_03f9944c(DAT_0917e0b0);
                                                          FUN_05d78cfc(uVar10,uVar11,DAT_091f12c8,0)
                                                          ;
                                                          uVar12 = **(undefined8 **)
                                                                     (DAT_09195530 + 0xb8);
                                                          uVar11 = thunk_FUN_03f9944c(DAT_091749d0);
                                                          FUN_070a8c30(uVar11,uVar12,DAT_091f12d0,0)
                                                          ;
                                                          uVar12 = thunk_FUN_03f9944c(DAT_0917b6f0);
                                                          FUN_05565d84(uVar12,uVar4,uVar10,uVar11,
                                                                       DAT_091a9168);
                                                          lVar3 = *(long *)(DAT_0918c380 + 0xb8);
                                                          *(undefined8 *)(lVar3 + 0x158) = uVar12;
                                                          thunk_FUN_03f5d7b8(lVar3 + 0x158,uVar12);
                                                          return;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

