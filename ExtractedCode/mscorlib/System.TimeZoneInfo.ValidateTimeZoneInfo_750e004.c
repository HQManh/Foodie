// rea decompile_all
// name: System.TimeZoneInfo$$ValidateTimeZoneInfo
// address: 0x750e004
// body: available
// range: 0x750e004-0x750e34b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750e1c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750e22c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750e2c0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TimeZoneInfo__ValidateTimeZoneInfo
               (long param_1,long param_2,long param_3,undefined1 *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_09521717 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_09521717 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_0921d180);
    System_ArgumentNullException___ctor(uVar6,uVar8);
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar6 = thunk_FUN_03fc39d4(&DAT_0920fe80);
      uVar6 = SR__Format(uVar6,param_1,0);
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar8 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_0921d180);
      System_ArgumentException___ctor(uVar8,uVar6,uVar4);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091db770);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar6);
    }
    if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_TimeZoneInfo__UtcOffsetOutOfRange(param_2);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((param_2 * -0x6832fd919f07a5f5 + 0x72884f61000U >> 9 |
          param_2 * -0x6832fd919f07a5f5 << 0x37) < 0x72884f611) {
        *param_4 = 0;
        if ((param_3 != 0) && (*(long *)(param_3 + 0x18) != 0)) {
          *param_4 = 1;
          uVar1 = *(uint *)(param_3 + 0x18);
          if (0 < (int)uVar1) {
            lVar9 = 0;
            lVar7 = 0;
            do {
              if (uVar1 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar5 = *(long *)(param_3 + 0x20 + lVar9 * 8);
              if (lVar5 == 0) {
                thunk_FUN_03fc39d4(&DAT_09187130);
                uVar6 = thunk_FUN_03f9944c();
                puVar3 = &DAT_0920ec20;
LAB_0750e204:
                uVar8 = thunk_FUN_03fc39d4(puVar3);
                System_InvalidTimeZoneException___ctor(uVar6,uVar8,0);
                goto LAB_0750e218;
              }
              if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = System_TimeZoneInfo__IsValidAdjustmentRuleOffest(param_2,lVar5);
              if ((uVar2 & 1) == 0) {
                thunk_FUN_03fc39d4(&DAT_09187130);
                uVar6 = thunk_FUN_03f9944c();
                puVar3 = &DAT_09210000;
                goto LAB_0750e204;
              }
              if (lVar7 != 0) {
                uVar6 = *(undefined8 *)(lVar5 + 0x10);
                uVar8 = *(undefined8 *)(lVar7 + 0x18);
                if (*(int *)(DAT_09183548 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar2 = System_DateTime__op_LessThanOrEqual(uVar6,uVar8,0);
                if ((uVar2 & 1) != 0) {
                  thunk_FUN_03fc39d4(&DAT_09187130);
                  uVar6 = thunk_FUN_03f9944c();
                  puVar3 = &DAT_0920f4a0;
                  goto LAB_0750e204;
                }
              }
              uVar1 = *(uint *)(param_3 + 0x18);
              lVar9 = lVar9 + 1;
              lVar7 = lVar5;
            } while ((int)lVar9 < (int)uVar1);
          }
        }
        return;
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar6 = thunk_FUN_03f9944c();
      uVar8 = thunk_FUN_03fc39d4(&DAT_0920efa8);
      uVar4 = thunk_FUN_03fc39d4(&DAT_09217e80);
      System_ArgumentException___ctor(uVar6,uVar8,uVar4);
    }
    else {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar6 = thunk_FUN_03f9944c();
      uVar8 = thunk_FUN_03fc39d4(&DAT_09217e80);
      uVar4 = thunk_FUN_03fc39d4(&DAT_0920efb0);
      System_ArgumentOutOfRangeException___ctor(uVar6,uVar8,uVar4);
    }
  }
LAB_0750e218:
  uVar8 = thunk_FUN_03fc39d4(&DAT_091db770);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar8);
}

