// rea decompile_all
// name: CakeOrder.Home.Map.HomeLevelNode.VisualConfig$$.ctor
// address: 0x434dc24
// body: available
// range: 0x434dc24-0x434dc67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434dc64 to 0x75f9574 System.Object$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Map_HomeLevelNode_VisualConfig___ctor
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long param_5)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  
  auVar2 = NEON_fmov(0x3f800000,4);
  uVar3 = 0x3eb33333;
  *(undefined8 *)(param_5 + 0x18) = 0x3f4ccccd3f99999a;
  *(undefined8 *)(param_5 + 0x10) = 0x3e8000003eb33333;
  *(long *)(param_5 + 0x28) = auVar2._8_8_;
  *(long *)(param_5 + 0x20) = auVar2._0_8_;
  uVar1 = UnityEngine_Color__get_gray(0);
  *(undefined4 *)(param_5 + 0x30) = uVar1;
  *(undefined4 *)(param_5 + 0x34) = uVar3;
  *(undefined4 *)(param_5 + 0x38) = param_3;
  *(undefined4 *)(param_5 + 0x3c) = param_4;
  *(undefined8 *)(param_5 + 0x40) = 0x3eb333333f000000;
  System_Object___ctor(param_5,0);
  return;
}

