// rea decompile_all
// name: System.DateTimeOffset$$.ctor
// address: 0x7598c1c
// body: available
// range: 0x7598c1c-0x7598e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7598e10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DateTimeOffset___ctor(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_38;
  
  local_38 = param_2;
  if ((DAT_09521bc5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_09521bc5 = 1;
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar2 = System_DateTime__get_Kind(&local_38);
  if (iVar2 == 2) {
    if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_TimeZoneInfo__GetLocalUtcOffset(param_2,2,0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar4 = System_TimeSpan__op_Inequality(param_3,uVar3,0);
    if ((uVar4 & 1) != 0) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar3 = thunk_FUN_03f9944c();
      puVar5 = &DAT_0920eff0;
LAB_07598dd4:
      uVar6 = thunk_FUN_03fc39d4(puVar5);
      uVar7 = thunk_FUN_03fc39d4(&DAT_092202d8);
      System_ArgumentException___ctor(uVar3,uVar6,uVar7,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091c7a58);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar6);
    }
  }
  else {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = System_DateTime__get_Kind(&local_38);
    if (iVar2 == 1) {
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_TimeSpan__op_Inequality(param_3,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
      if ((uVar4 & 1) != 0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar3 = thunk_FUN_03f9944c();
        puVar5 = &DAT_0920efe8;
        goto LAB_07598dd4;
      }
    }
  }
  if (*(int *)(DAT_09183590 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_DateTimeOffset__ValidateOffset(param_3);
  *(undefined2 *)(param_1 + 1) = uVar1;
  uVar3 = System_DateTimeOffset__ValidateDate(param_2,param_3);
  *param_1 = uVar3;
  return;
}

