// rea decompile_all
// name: System.WindowsConsoleDriver$$ReadConsoleInput
// address: 0x76116cc
// body: available
// range: 0x76116cc-0x76117d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_WindowsConsoleDriver__ReadConsoleInput
               (undefined8 param_1,undefined2 *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  char *local_50;
  ulong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if (DAT_09522060 == (code *)0x0) {
    local_60 = "kernel32.dll";
    uStack_58 = 0xc;
    local_50 = "ReadConsoleInput";
    local_48 = 0x10;
    local_40 = 0x100000000;
    local_38 = 0x1c;
    local_34 = 0;
    DAT_09522060 = (code *)thunk_FUN_03f996ec(&local_60);
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_48 = local_48 & 0xffffffff00000000;
  local_50 = (char *)0x0;
  iVar1 = (*DAT_09522060)(param_1,&local_60,param_3,param_4);
  thunk_FUN_03faced8();
  *(undefined1 *)((long)param_2 + 3) = 0;
  *param_2 = (undefined2)local_60;
  *(undefined4 *)(param_2 + 2) = (undefined4)uStack_58;
  param_2[4] = uStack_58._4_2_;
  *(bool *)(param_2 + 1) = local_60._4_4_ != 0;
  param_2[5] = (ushort)uStack_58._6_1_;
  *(char **)(param_2 + 6) = local_50;
  *(bool *)(param_2 + 10) = (int)local_48 != 0;
  *(undefined2 *)((long)param_2 + 0x15) = 0;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  return iVar1 != 0;
}

