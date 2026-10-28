// rea decompile_all
// name: FUN_03f8b0b4
// address: 0x3f8b0b4
// body: available
// range: 0x3f8b0b4-0x3f8b13f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8b13c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f8b0b4(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  sockaddr local_38;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar2 = (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
  local_38.sa_data[6] = '\0';
  local_38.sa_data[7] = '\0';
  local_38.sa_data[8] = '\0';
  local_38.sa_data[9] = '\0';
  local_38.sa_data[10] = '\0';
  local_38.sa_data[0xb] = '\0';
  local_38.sa_data[0xc] = '\0';
  local_38.sa_data[0xd] = '\0';
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  local_38.sa_data[0] = (char)uVar2;
  local_38.sa_data[1] = (char)(uVar2 >> 8);
  local_38.sa_family = 2;
  local_38.sa_data[2] = (char)uVar1;
  local_38.sa_data[3] = (char)(uVar1 >> 8);
  local_38.sa_data[4] = (char)(uVar1 >> 0x10);
  local_38.sa_data[5] = (char)(uVar1 >> 0x18);
  iVar4 = bind(*(int *)(param_1 + 4),&local_38,0x10);
  if (iVar4 == -1) {
    FUN_03f8aea4(param_1);
    uVar5 = 0xfffffffd;
  }
  else {
    uVar5 = 0;
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

