// rea decompile_all
// name: System.DateTime$$ToLocalTime
// address: 0x7596ddc
// body: available
// range: 0x7596ddc-0x7596f97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7596f94 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_DateTime__ToLocalTime(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined8 local_38;
  
  if ((DAT_09521bad & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_09521bad = 1;
  }
  local_3c[0] = 0;
  local_40[0] = 0;
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = System_DateTime__get_Kind(param_1);
  if (iVar1 == 2) {
    local_38 = *param_1;
  }
  else {
    uVar5 = *param_1;
    local_3c[0] = 0;
    local_40[0] = 0;
    if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_TimeZoneInfo__get_Local(0);
    lVar3 = System_TimeZoneInfo__GetUtcOffsetFromUtc(uVar5,uVar2,local_3c,local_40,0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = System_DateTime__get_Ticks(param_1);
    if (lVar4 + lVar3 < 0x2bca2875f4374000) {
      if (lVar4 + lVar3 < 0) {
        if ((param_2 & 1) != 0) goto LAB_07596f50;
        local_38 = 0x8000000000000000;
      }
      else {
        local_38 = 0;
        System_DateTime___ctor(&local_38);
      }
    }
    else {
      if ((param_2 & 1) != 0) {
LAB_07596f50:
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar5 = thunk_FUN_03f9944c();
        uVar2 = thunk_FUN_03fc39d4(&DAT_0920d620);
        System_ArgumentException___ctor(uVar5,uVar2,0);
        uVar2 = thunk_FUN_03fc39d4(&DAT_091c79b0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar2);
      }
      local_38 = 0xabca2875f4373fff;
    }
  }
  return local_38;
}

