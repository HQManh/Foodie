// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$.ctor
// address: 0x40f0600
// body: available
// range: 0x40f0600-0x40f0813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f0810 to 0x865f230 UnityEngine.MonoBehaviour$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientConveyorItem___ctor(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined8 uVar6;
  
  if ((DAT_095160de & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8648);
    FUN_03f5c2a4(&DAT_09179ed0);
    FUN_03f5c2a4(&DAT_091adad8);
    FUN_03f5c2a4(&DAT_0917c4d0);
    DAT_095160de = 1;
  }
  uVar2 = DAT_0917c4d0;
  auVar4 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x80) = 0x3f8000003f0ccccd;
  *(undefined8 *)(param_1 + 0x78) = 0x3f0ccccd3f0ccccd;
  *(long *)(param_1 + 0x70) = auVar4._8_8_;
  *(long *)(param_1 + 0x68) = auVar4._0_8_;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  uVar2 = thunk_FUN_03f9944c(uVar2);
  FUN_057e0400(uVar2,DAT_091adad8);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x90),uVar2);
  cVar1 = DAT_09515cf3;
  *(undefined8 *)(param_1 + 0xb0) = 0x100000001;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf3 = '\x01';
  }
  lVar3 = DAT_0918cbd0;
  uVar2 = DAT_09179ed0;
  uVar5 = *(undefined4 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14);
  uVar6 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
  *(undefined8 *)(param_1 + 0x134) = 0x3f8000003e8f5c29;
  *(undefined8 *)(param_1 + 0x100) = 0x3e6147ae3e19999a;
  *(undefined8 *)(param_1 + 300) = 0x3e99999a3f800000;
  *(undefined8 *)(param_1 + 0x124) = 0x3e6147ae3df5c28f;
  *(long *)(param_1 + 0x158) = auVar4._8_8_;
  *(long *)(param_1 + 0x150) = auVar4._0_8_;
  *(undefined8 *)(param_1 + 0x164) = 0x3dcccccd3e4ccccd;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(undefined4 *)(param_1 + 0x16c) = 6;
  *(undefined8 *)(param_1 + 0xd4) = uVar6;
  *(undefined4 *)(param_1 + 0xdc) = uVar5;
  *(undefined8 *)(param_1 + 0x180) = 0x3d23d70a00000032;
  lVar3 = *(long *)(lVar3 + 0xb8);
  *(undefined8 *)(param_1 + 0x170) = 0x3e6147ae3f8ccccd;
  *(undefined8 *)(param_1 + 0x178) = 0x50000001b;
  uVar6 = *(undefined8 *)(lVar3 + 0xc);
  uVar5 = *(undefined4 *)(lVar3 + 0x14);
  *(undefined8 *)(param_1 + 0x1b0) = 0x3df5c28f3e19999a;
  *(undefined8 *)(param_1 + 0x1a0) = uVar6;
  *(undefined4 *)(param_1 + 0x1a8) = uVar5;
  *(undefined8 *)(param_1 + 0x1b8) = 0x3e99999a00000006;
  *(undefined8 *)(param_1 + 0x1c0) = 0x3e4ccccd3e800000;
  *(undefined4 *)(param_1 + 0x1c8) = 5;
  uVar2 = thunk_FUN_03f9944c(uVar2);
  FUN_053eb530(uVar2,DAT_091a8648);
  *(undefined8 *)(param_1 + 0x208) = uVar2;
  thunk_FUN_03f5d7b8(param_1 + 0x208,uVar2);
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  UnityEngine_MonoBehaviour___ctor(param_1,0);
  return;
}

