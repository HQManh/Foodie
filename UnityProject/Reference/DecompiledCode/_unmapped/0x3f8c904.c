// rea decompile_all
// name: FUN_03f8c904
// address: 0x3f8c904
// body: available
// range: 0x3f8c904-0x3f8c9b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f8c904(long param_1,undefined4 param_2,int param_3,uint *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint local_38 [2];
  undefined8 local_28;
  
  local_28 = 0;
  iVar2 = FUN_03f8c0a0(param_2,param_3,(long)&local_28 + 4,&local_28);
  if (iVar2 == -1) {
    uVar4 = 0x273a;
LAB_03f8c998:
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    uVar3 = 0xfffffffd;
  }
  else {
    if (param_3 == -0x81) {
      if (param_5 != 1) {
        uVar4 = 0x2726;
        goto LAB_03f8c998;
      }
      uVar1 = *param_4;
      param_4 = local_38;
      param_5 = 8;
      local_38[0] = (uint)((char)uVar1 == '\0');
      local_38[1] = 0;
    }
    uVar3 = FUN_03f8c774(param_1,local_28._4_4_,(undefined4)local_28,param_4,param_5);
  }
  return uVar3;
}

