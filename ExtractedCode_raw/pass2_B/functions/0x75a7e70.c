// rea decompile_all
// name: System.DateTimeParse$$AdjustTimeZoneToLocal
// address: 0x75a7e70
// body: available
// range: 0x75a7e70-0x75a810b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a8108 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_DateTimeParse__AdjustTimeZoneToLocal(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_70;
  undefined1 local_64 [4];
  undefined8 local_60;
  undefined1 local_54 [4];
  
  if ((DAT_09521c5a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    FUN_03f5c2a4(&DAT_0920ec78);
    DAT_09521c5a = 1;
  }
  local_54[0] = 0;
  local_60 = 0;
  local_64[0] = 0;
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_DateTime__get_Ticks(param_1 + 0x38);
  if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918bdc0);
  }
  lVar2 = System_TimeZoneInfo__get_Local(0);
  local_54[0] = 0;
  if (uVar1 < 864000000000) {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if ((param_2 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_DateTime__get_Now();
    }
    if (lVar2 == 0) {
LAB_075a8108:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = System_TimeZoneInfo__GetUtcOffset(lVar2,uVar4,2,0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar1 = lVar2 + (uVar1 - lVar5);
    if ((long)uVar1 < 0) {
      uVar1 = uVar1 + 864000000000;
    }
  }
  else {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = uVar1 - *(long *)(param_1 + 0x28);
    if (uVar1 < 0x2bca2875f4374000) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_DateTime___ctor(&local_60,uVar1,1);
      uVar4 = local_60;
      local_64[0] = 0;
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_TimeZoneInfo__get_Local(0);
      lVar2 = System_TimeZoneInfo__GetUtcOffsetFromUtc(uVar4,uVar3,local_64,local_54,0);
    }
    else {
      if (lVar2 == 0) goto LAB_075a8108;
      lVar2 = System_TimeZoneInfo__GetUtcOffset(lVar2,*(undefined8 *)(param_1 + 0x38),2,0);
    }
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar1 = lVar2 + uVar1;
  }
  if (uVar1 < 0x2bca2875f4374000) {
    local_70 = 0;
    System_DateTime___ctor(&local_70,uVar1);
    *(undefined8 *)(param_1 + 0x38) = local_70;
  }
  else {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = DAT_0920ec78;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x10);
    System_DateTimeResult__SetFailure(param_1,4,uVar4,0);
  }
  return uVar1 < 0x2bca2875f4374000;
}

