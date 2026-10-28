// rea decompile_all
// name: Coffee.UIEffects.UIEffect$$.ctor
// address: 0x43ee090
// body: available
// range: 0x43ee090-0x43ee29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ee298 to 0x89bc508 UnityEngine.EventSystems.UIBehaviour$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffect___ctor(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_09517dcd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184da0);
    FUN_03f5c2a4(&DAT_0918c370);
    DAT_09517dcd = 1;
  }
  auVar5 = NEON_fmov(0x3f800000,4);
  uVar7 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  uVar6 = auVar5._8_8_;
  uVar4 = auVar5._0_8_;
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x11c) = 0x3f00000000000000;
  uVar3 = DAT_09184da0;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xc4) = 0x3f8000003f000000;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f000000;
  *(undefined8 *)(param_1 + 0xe8) = uVar7;
  *(undefined1 *)(param_1 + 0x104) = 1;
  *(undefined4 *)(param_1 + 0x118) = 6;
  *(undefined8 *)(param_1 + 0x108) = 0x3e4ccccd3e4ccccd;
  *(undefined8 *)(param_1 + 0x110) = 0x3f80000000000000;
  uVar3 = thunk_FUN_03f9944c(uVar3);
  UnityEngine_Gradient___ctor(uVar3,0);
  *(undefined8 *)(param_1 + 0x138) = uVar3;
  thunk_FUN_03f5d7b8(param_1 + 0x138,uVar3);
  *(undefined4 *)(param_1 + 0x15c) = 1;
  *(undefined8 *)(param_1 + 0x14c) = uVar6;
  *(undefined8 *)(param_1 + 0x144) = uVar4;
  *(undefined8 *)(param_1 + 400) = uVar6;
  *(undefined8 *)(param_1 + 0x188) = uVar4;
  *(undefined8 *)(param_1 + 0x154) = 0x3f0000003dcccccd;
  *(undefined8 *)(param_1 + 0x1b0) = uVar6;
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  *(undefined8 *)(param_1 + 0x1c0) = uVar6;
  *(undefined8 *)(param_1 + 0x1b8) = uVar4;
  *(undefined8 *)(param_1 + 0x1d0) = uVar6;
  *(undefined8 *)(param_1 + 0x1c8) = uVar4;
  *(undefined8 *)(param_1 + 0x1e0) = uVar6;
  *(undefined8 *)(param_1 + 0x1d8) = uVar4;
  *(undefined8 *)(param_1 + 0x160) = 0xa00000001;
  uVar3 = DAT_09184da0;
  *(undefined8 *)(param_1 + 0x180) = 0x43f800000;
  *(undefined4 *)(param_1 + 0x16c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x170) = 0x1bf800000;
  *(undefined8 *)(param_1 + 0x178) = 0x3f0000003f666666;
  *(undefined8 *)(param_1 + 0x1a0) = 0x13f800000;
  uVar3 = thunk_FUN_03f9944c(uVar3);
  UnityEngine_Gradient___ctor(uVar3,0);
  *(undefined8 *)(param_1 + 0x1e8) = uVar3;
  thunk_FUN_03f5d7b8(param_1 + 0x1e8,uVar3);
  *(undefined8 *)(param_1 + 0x238) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x240) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x218) = uVar6;
  *(undefined8 *)(param_1 + 0x210) = uVar4;
  *(undefined8 *)(param_1 + 0x24c) = uVar6;
  *(undefined8 *)(param_1 + 0x244) = uVar4;
  *(undefined8 *)(param_1 + 0x208) = 0x43f000000;
  lVar2 = DAT_0918c370;
  *(undefined8 *)(param_1 + 0x260) = uVar7;
  *(undefined4 *)(param_1 + 500) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  iVar1 = *(int *)(lVar2 + 0xe4);
  *(undefined1 *)(param_1 + 0x201) = 1;
  *(undefined4 *)(param_1 + 0x224) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x228) = 0x3f8000003f000000;
  *(undefined4 *)(param_1 + 0x230) = 1;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  UnityEngine_EventSystems_UIBehaviour___ctor(param_1,0);
  return;
}

