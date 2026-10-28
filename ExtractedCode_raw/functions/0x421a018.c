// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLoader$$.ctor
// address: 0x421a018
// body: available
// range: 0x421a018-0x421a19f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421a19c to 0x865f230 UnityEngine.MonoBehaviour$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLoader___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((DAT_09516cf1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f5c8);
    FUN_03f5c2a4(&DAT_09176a40);
    FUN_03f5c2a4(&DAT_091aa4e0);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917b9d0);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_09516cf1 = 1;
  }
  uVar1 = DAT_0917cce8;
  *(undefined4 *)(param_1 + 0x38) = 0xfffffff6;
  *(undefined8 *)(param_1 + 0x28) = 0x40a000003e19999a;
  *(undefined8 *)(param_1 + 0x20) = 0x3f8000003e19999a;
  *(undefined8 *)(param_1 + 0x30) = 0x412000003f000000;
  *(undefined8 *)(param_1 + 0x48) = 0x3ecccccd3f000000;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_057e0400(uVar1,DAT_091b0558);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(uVar1,DAT_091b0558);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar1);
  uVar1 = DAT_09176a40;
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x6c) = uVar2;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_06fd76bc(uVar1,DAT_0919f5c8);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xb0),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917b9d0);
  FUN_0564e1ec(uVar1,DAT_091aa4e0);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xb8),uVar1);
  UnityEngine_MonoBehaviour___ctor(param_1,0);
  return;
}

