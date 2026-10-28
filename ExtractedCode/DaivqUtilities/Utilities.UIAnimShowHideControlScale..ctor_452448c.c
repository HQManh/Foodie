// rea decompile_all
// name: Utilities.UIAnimShowHideControlScale$$.ctor
// address: 0x452448c
// body: available
// range: 0x452448c-0x4524533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4524530 to 0x45206f4 Utilities.UIAnimShowHideControl$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIAnimShowHideControlScale___ctor(long param_1)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  cVar1 = DAT_09515cf3;
  lVar2 = DAT_0918cbd0;
  uVar3 = *(undefined4 *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
  *(undefined8 *)(param_1 + 0x68) = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf3 = '\x01';
    lVar2 = DAT_0918cbd0;
  }
  uVar3 = *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x14);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0xc);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = 0x1a0000001b;
  *(undefined8 *)(param_1 + 0x88) = 0x3e8000003eb33333;
  Utilities_UIAnimShowHideControl___ctor(param_1,0);
  return;
}

