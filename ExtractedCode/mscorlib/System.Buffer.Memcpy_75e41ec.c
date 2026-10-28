// rea decompile_all
// name: System.Buffer$$Memcpy
// address: 0x75e41ec
// body: available
// range: 0x75e41ec-0x75e42e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e4278 to 0x75e45d8 System.Buffer$$memcpy4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75e42c8 to 0x75e46f0 System.Buffer$$memcpy1 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75e42e4 to 0x75e466c System.Buffer$$memcpy2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Buffer__Memcpy(byte *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong local_28;
  
  local_28 = 0;
  if (0x20 < param_3) {
    local_28 = (ulong)*param_1;
    System_Threading_Interlocked__Read(&local_28,0);
    FUN_03f6c478(param_1,param_2,param_3);
    return;
  }
  if ((((uint)param_2 | (uint)param_1) & 3) != 0) {
    pbVar2 = param_2;
    pbVar3 = param_1;
    if ((0 < param_3) && (((uint)param_1 & (uint)param_2 & 1) != 0)) {
      pbVar2 = param_2 + 1;
      pbVar3 = param_1 + 1;
      *param_1 = *param_2;
      param_3 = param_3 + -1;
    }
    param_2 = pbVar2;
    param_1 = pbVar3;
    if (((((uint)pbVar3 >> 1 & 1) != 0) && (1 < param_3)) && (((uint)pbVar2 >> 1 & 1) != 0)) {
      param_2 = pbVar2 + 2;
      param_1 = pbVar3 + 2;
      *(undefined2 *)pbVar3 = *(undefined2 *)pbVar2;
      param_3 = param_3 + -2;
    }
    uVar1 = (uint)param_1 | (uint)param_2;
    if ((uVar1 & 1) != 0) {
      System_Buffer__memcpy1(param_1,param_2,param_3);
      return;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      System_Buffer__memcpy2(param_1,param_2,param_3);
      return;
    }
  }
  System_Buffer__memcpy4(param_1,param_2,param_3);
  return;
}

