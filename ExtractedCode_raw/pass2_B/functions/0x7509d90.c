// rea decompile_all
// name: System.Globalization.TimeSpanFormat.FormatLiterals$$Init
// address: 0x7509d90
// body: available
// range: 0x7509d90-0x750a127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7509e74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750a120 to 0x7440678 System.Text.StringBuilderCache$$Release (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x750a124 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_TimeSpanFormat_FormatLiterals__Init
               (undefined8 *param_1,long param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  
  if ((DAT_095216c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_095216c2 = 1;
  }
  uVar5 = DAT_091805f8;
  param_1[2] = 0;
  piVar10 = (int *)(param_1 + 1);
  piVar10[0] = 0;
  piVar10[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  lVar3 = FUN_03f5c394(uVar5,6);
  plVar9 = param_1 + 4;
  *plVar9 = lVar3;
  thunk_FUN_03f5d7b8(plVar9,lVar3);
  lVar3 = *plVar9;
  if (lVar3 != 0) {
    uVar8 = 0;
    lVar12 = 0x20;
    do {
      if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar8) {
        plVar4 = (long *)System_Text_StringBuilderCache__Acquire(0x10,0);
        if ((int)param_3 < 1) goto LAB_0750a044;
        bVar2 = false;
        uVar8 = 0;
        uVar11 = 0;
        uVar7 = 0x27;
        goto LAB_07509ea0;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_0750a124;
      *(undefined8 *)(lVar3 + uVar8 * 8 + 0x20) = **(undefined8 **)(DAT_09535468 + 0xb8);
      thunk_FUN_03f5d7b8(lVar3 + lVar12);
      lVar3 = *plVar9;
      uVar8 = uVar8 + 1;
      lVar12 = lVar12 + 8;
    } while (lVar3 != 0);
  }
LAB_07509e74:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_07509ea0:
  do {
    if (param_3 <= uVar11) {
LAB_0750a124:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar1 = *(ushort *)(param_2 + (long)(int)uVar11 * 2);
    if (uVar1 < 0x47) {
      if (uVar1 < 0x26) {
        if (uVar1 != 0x22) {
LAB_07509fb8:
          if (plVar4 != (long *)0x0) {
            System_Text_StringBuilder__Append(plVar4,uVar1,0);
            goto LAB_0750a018;
          }
          goto LAB_07509e74;
        }
      }
      else if (uVar1 != 0x27) {
        if (uVar1 == 0x46) {
LAB_07509fcc:
          if (bVar2) goto LAB_0750a010;
          bVar2 = false;
          uVar8 = 5;
          *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
          goto LAB_0750a018;
        }
        goto LAB_07509fb8;
      }
      if (bVar2) {
        if (uVar1 == uVar7) {
          if (plVar4 == (long *)0x0) goto LAB_07509e74;
          lVar3 = *plVar9;
          uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          if (lVar3 == 0) goto LAB_07509e74;
          if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_0750a124;
          *(undefined8 *)(lVar3 + uVar8 * 8 + 0x20) = uVar5;
          thunk_FUN_03f5d7b8();
          System_Text_StringBuilder__set_Length(plVar4,0,0);
          bVar2 = false;
        }
        else {
LAB_0750a010:
          bVar2 = true;
        }
      }
      else {
        bVar2 = true;
        uVar7 = uVar1;
      }
    }
    else if (uVar1 < 0x69) {
      if (uVar1 == 0x5c) {
        if (bVar2) goto LAB_07509fb8;
        bVar2 = false;
        uVar11 = uVar11 + 1;
      }
      else if (uVar1 == 100) {
        if (bVar2) goto LAB_0750a010;
        bVar2 = false;
        uVar8 = 1;
        *piVar10 = *piVar10 + 1;
      }
      else {
        if (uVar1 == 0x66) goto LAB_07509fcc;
        if (uVar1 != 0x68) goto LAB_07509fb8;
        if (bVar2) goto LAB_0750a010;
        bVar2 = false;
        uVar8 = 2;
        *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
      }
    }
    else if (uVar1 == 0x6d) {
      if (bVar2) goto LAB_0750a010;
      bVar2 = false;
      uVar8 = 3;
      *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
    }
    else {
      if (uVar1 != 0x73) goto LAB_07509fb8;
      if (bVar2) goto LAB_0750a010;
      bVar2 = false;
      uVar8 = 4;
      *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
    }
LAB_0750a018:
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < (int)param_3);
LAB_0750a044:
  uVar5 = System_Globalization_TimeSpanFormat_FormatLiterals__get_MinuteSecondSep(param_1);
  uVar6 = System_Globalization_TimeSpanFormat_FormatLiterals__get_SecondFractionSep(param_1);
  uVar5 = System_String__Concat(uVar5,uVar6,0);
  *param_1 = uVar5;
  thunk_FUN_03f5d7b8(param_1,uVar5);
  if ((param_4 & 1) == 0) {
    if (1 < *piVar10 - 1U) {
      *piVar10 = 2;
    }
    if (1 < *(int *)((long)param_1 + 0xc) - 1U) {
      *(undefined4 *)((long)param_1 + 0xc) = 2;
    }
    if (1 < *(int *)(param_1 + 2) - 1U) {
      *(undefined4 *)(param_1 + 2) = 2;
    }
    if (1 < *(int *)((long)param_1 + 0x14) - 1U) {
      *(undefined4 *)((long)param_1 + 0x14) = 2;
    }
    if (*(int *)(param_1 + 3) - 1U < 7) goto LAB_0750a100;
  }
  else {
    param_1[2] = 0x200000002;
    piVar10[0] = 2;
    piVar10[1] = 2;
  }
  *(undefined4 *)(param_1 + 3) = 7;
LAB_0750a100:
  System_Text_StringBuilderCache__Release(plVar4,0);
  return;
}

