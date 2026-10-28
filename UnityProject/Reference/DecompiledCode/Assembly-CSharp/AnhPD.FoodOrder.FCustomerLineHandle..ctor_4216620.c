// rea decompile_all
// name: AnhPD.FoodOrder.FCustomerLineHandle$$.ctor
// address: 0x4216620
// body: available
// range: 0x4216620-0x4216773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4216770 to 0x865f230 UnityEngine.MonoBehaviour$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FCustomerLineHandle___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_09516cb6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aa450);
    FUN_03f5c2a4(&DAT_091acaa8);
    FUN_03f5c2a4(&DAT_0917b9b0);
    FUN_03f5c2a4(&DAT_0917c170);
    DAT_09516cb6 = 1;
  }
  uVar1 = DAT_0917c170;
  *(undefined8 *)(param_1 + 0x44) = 0x3e8000003e800000;
  *(undefined8 *)(param_1 + 0x3c) = 0x3f0000003f800000;
  *(undefined8 *)(param_1 + 0x4c) = 0x3e99999a40000000;
  *(undefined8 *)(param_1 + 0x5c) = 0x300000002;
  *(undefined4 *)(param_1 + 0x38) = 6;
  *(undefined8 *)(param_1 + 0x7c) = 0x3f19999a3da3d70a;
  *(undefined8 *)(param_1 + 0x74) = 0x3f6666663e19999a;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x84) = 0x3e8000003e4ccccd;
  *(undefined8 *)(param_1 + 0x6c) = 0x3e8000003dcccccd;
  *(undefined8 *)(param_1 + 100) = 0x3dcccccd3e4ccccd;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f19999a;
  *(undefined8 *)(param_1 + 0x98) = 0x3e4ccccd3f4ccccd;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_057e0400(uVar1,DAT_091acaa8);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xe8),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917b9b0);
  FUN_057e0400(uVar1,DAT_091aa450);
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xf8),uVar1);
  UnityEngine_MonoBehaviour___ctor(param_1,0);
  return;
}

