// rea decompile_all
// name: FUN_03f8c774
// address: 0x3f8c774
// body: available
// range: 0x3f8c774-0x3f8c88b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f8c774(long param_1,int param_2,uint param_3,long *param_4,socklen_t param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  socklen_t local_48;
  int local_44;
  long local_40;
  long lStack_38;
  
  if ((param_2 == 1) && ((param_3 & 0xfffffffe) == 0x14)) {
    lVar1 = *param_4;
    param_5 = 0x10;
    param_4 = &local_40;
    local_40 = (long)((int)lVar1 / 1000);
    lStack_38 = (long)(((int)lVar1 % 1000) * 1000);
  }
  iVar2 = setsockopt(*(int *)(param_1 + 4),param_2,param_3,param_4,param_5);
  if (iVar2 == -1) {
    FUN_03f8aea4(param_1);
    uVar3 = 0xfffffffd;
  }
  else {
    uVar3 = 0;
    if ((param_2 == 1) && (param_3 == 2)) {
      local_48 = 4;
      iVar2 = getsockopt(*(int *)(param_1 + 4),1,3,&local_44,&local_48);
      if ((iVar2 == 0) && (local_44 == 2)) {
        setsockopt(*(int *)(param_1 + 4),1,0xf,param_4,param_5);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

