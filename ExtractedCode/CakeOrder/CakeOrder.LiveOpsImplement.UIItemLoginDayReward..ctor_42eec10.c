// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIItemLoginDayReward$$.ctor
// address: 0x42eec10
// body: available
// range: 0x42eec10-0x42eede7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42eede4 to 0x865f230 UnityEngine.MonoBehaviour$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIItemLoginDayReward___ctor(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if ((DAT_0951749a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0ac0);
    FUN_03f5c2a4(&DAT_091af728);
    FUN_03f5c2a4(&DAT_091ad878);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cdb8);
    FUN_03f5c2a4(&DAT_0917ca48);
    FUN_03f5c2a4(&DAT_0917c468);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_0951749a = 1;
  }
  uVar1 = DAT_0917c468;
  *(undefined4 *)(param_1 + 0xa0) = 0x41400000;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_057e0400(uVar1,DAT_091ad878);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa8),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917cdb8);
  FUN_057e0400(uVar1,DAT_091b0ac0);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xb0),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(uVar1,DAT_091b0558);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xb8),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917ca48);
  FUN_057e0400(uVar1,DAT_091af728);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xc0),uVar1);
  if (DAT_09515cf3 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf3 = '\x01';
  }
  auVar2 = NEON_fmov(0x3f800000,4);
  uVar4 = *(undefined4 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14);
  uVar5 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
  uVar3 = auVar2._8_8_;
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  uVar1 = auVar2._0_8_;
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  *(undefined8 *)(param_1 + 0x108) = uVar3;
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  *(undefined8 *)(param_1 + 0x118) = uVar3;
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  *(undefined8 *)(param_1 + 0x128) = uVar3;
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(undefined4 *)(param_1 + 0xd8) = uVar4;
  UnityEngine_MonoBehaviour___ctor(param_1,0);
  return;
}

