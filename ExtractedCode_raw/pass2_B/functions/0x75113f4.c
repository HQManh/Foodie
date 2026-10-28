// rea decompile_all
// name: System.TimeZoneInfo$$TZif_ParsePosixFormat
// address: 0x75113f4
// body: available
// range: 0x75113f4-0x7511687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7511684 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_TimeZoneInfo__TZif_ParsePosixFormat
               (long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
               undefined8 *param_9)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int local_64;
  
  if ((DAT_095216ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_095216ea = 1;
  }
  local_64 = 0;
  *param_2 = 0;
  thunk_FUN_03f5d7b8(param_2,0);
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  *param_4 = 0;
  thunk_FUN_03f5d7b8(param_4,0);
  *param_5 = 0;
  thunk_FUN_03f5d7b8(param_5,0);
  *param_6 = 0;
  thunk_FUN_03f5d7b8(param_6,0);
  *param_7 = 0;
  thunk_FUN_03f5d7b8(param_7,0);
  *param_8 = 0;
  thunk_FUN_03f5d7b8(param_8,0);
  *param_9 = 0;
  thunk_FUN_03f5d7b8(param_9,0);
  local_64 = 0;
  if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_TimeZoneInfo__TZif_ParsePosixName(param_1,&local_64);
  *param_2 = uVar4;
  thunk_FUN_03f5d7b8(param_2,uVar4);
  uVar4 = System_TimeZoneInfo__TZif_ParsePosixOffset(param_1,&local_64);
  *param_3 = uVar4;
  thunk_FUN_03f5d7b8(param_3,uVar4);
  uVar4 = System_TimeZoneInfo__TZif_ParsePosixName(param_1,&local_64);
  *param_4 = uVar4;
  thunk_FUN_03f5d7b8(param_4,uVar4);
  uVar5 = System_String__IsNullOrEmpty(*param_4,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_TimeZoneInfo__TZif_ParsePosixOffset(param_1,&local_64);
    *param_5 = uVar4;
    thunk_FUN_03f5d7b8(param_5,uVar4);
    iVar1 = local_64;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((local_64 < *(int *)(param_1 + 0x10)) &&
       (sVar2 = System_String__get_Chars(param_1,local_64,0), sVar2 == 0x2c)) {
      local_64 = iVar1 + 1;
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_TimeZoneInfo__TZif_ParsePosixDateTime(param_1,&local_64,param_6,param_7);
      iVar1 = local_64;
      if ((local_64 < *(int *)(param_1 + 0x10)) &&
         (sVar2 = System_String__get_Chars(param_1,local_64,0), sVar2 == 0x2c)) {
        local_64 = iVar1 + 1;
        if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_TimeZoneInfo__TZif_ParsePosixDateTime(param_1,&local_64,param_8,param_9);
      }
    }
  }
  uVar5 = System_String__IsNullOrEmpty(*param_2,0);
  if ((uVar5 & 1) == 0) {
    uVar3 = System_String__IsNullOrEmpty(*param_3,0);
    uVar3 = uVar3 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}

