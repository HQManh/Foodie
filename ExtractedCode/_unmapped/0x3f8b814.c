// rea decompile_all
// name: FUN_03f8b814
// address: 0x3f8b814
// body: available
// range: 0x3f8b814-0x3f8b863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8b860 to 0x3f8b864 FUN_03f8b864 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_03f8b814(long param_1,undefined8 param_2,int param_3,ulong param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  *param_5 = 0;
  uVar3 = (uint)param_4;
  if (uVar3 != 0) {
    if ((param_4 & 0xffff7fe8) != 0) {
      *(undefined4 *)(param_1 + 0x14) = 0x273d;
      return 0xfffffffd;
    }
    uVar1 = uVar3 & 7;
    if (0x7fff < uVar3) {
      uVar1 = uVar3 & 7 | 0x8000;
    }
    param_4 = (ulong)uVar1;
  }
  uVar2 = FUN_03f8b864(param_1,param_2,(long)param_3,param_4,param_5,0,0);
  return uVar2;
}

