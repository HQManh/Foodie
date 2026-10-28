// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade.<CelebrateRoutine>d__126$$MoveNext
// address: 0x40b0d08
// body: available
// range: 0x40b0d08-0x40b1073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b1068 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b106c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b1070 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_HomeCustomerParade_<CelebrateRoutine>d__126__MoveNext(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  
  if ((DAT_09515ee6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a54f8);
    FUN_03f5c2a4(&DAT_091a5500);
    FUN_03f5c2a4(&DAT_091a5508);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091ce9d8);
    FUN_03f5c2a4(&DAT_091b2f58);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918cec0);
    DAT_09515ee6 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x120) != 0)) {
      FUN_057e185c(&local_78,*(long *)(lVar9 + 0x120),DAT_091b2f58);
      uStack_58 = puStack_70;
      local_60 = local_78;
      local_50 = local_68;
      local_78 = 0;
      puStack_70 = &local_60;
      while (uVar10 = FUN_071bd28c(&local_60,DAT_091a5500), lVar2 = local_50, (uVar10 & 1) != 0) {
        if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar7 = *(undefined8 *)(local_50 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar10 & 1) != 0) {
          lVar5 = *(long *)(lVar2 + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          AnhPD_FoodOrder_Customer__ChangeState(lVar5,0,0,0,0);
        }
        fVar11 = (float)UnityEngine_Time__get_time(0);
        fVar12 = (float)UnityEngine_Random__Range
                                  (*(undefined4 *)(lVar9 + 0xf4),*(undefined4 *)(lVar9 + 0xf8),0);
        *(float *)(lVar2 + 0x70) = fVar11 + fVar12;
      }
      FUN_071bd288(&local_60,DAT_091a54f8);
      *(undefined1 *)(lVar9 + 0x131) = 0;
      if (*(char *)(lVar9 + 0x160) == '\0') {
        return 0;
      }
      if (*(char *)(lVar9 + 0x130) == '\0') {
        return 0;
      }
      uVar7 = AnhPD_FoodOrder_HomeCustomerParade__CelebrateRoutine(lVar9,1,1,0);
      UnityEngine_MonoBehaviour__StartCoroutine(lVar9,uVar7,0);
      return 0;
    }
    goto LAB_040b1070;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar9 == 0) goto LAB_040b1070;
  *(undefined1 *)(lVar9 + 0x131) = 1;
  bVar1 = *(byte *)(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x29) & bVar1) == 0) {
    if (bVar1 == 0) goto LAB_040b0f40;
    uVar10 = *(ulong *)(lVar9 + 0xec);
  }
  else {
    *(undefined1 *)(lVar9 + 0x160) = 0;
    if (bVar1 == 0) {
LAB_040b0f40:
      uVar10 = *(ulong *)(lVar9 + 0xe4);
    }
    else {
      plVar4 = *(long **)(lVar9 + 0x40);
      if (plVar4 == (long *)0x0) goto LAB_040b1070;
      uVar10 = *(ulong *)(lVar9 + 0xec);
      (**(code **)(*plVar4 + 0x188))
                ((*(float *)(lVar9 + 0xdc) + *(float *)(lVar9 + 0xe0)) *
                 (float)(int)(uVar10 >> 0x20),plVar4,*(undefined8 *)(*plVar4 + 400));
    }
  }
  *(undefined4 *)(lVar9 + 0x164) = 0;
  if (*(long *)(lVar9 + 0x120) != 0) {
    FUN_057e185c(&local_78,*(long *)(lVar9 + 0x120),DAT_091b2f58);
    uStack_58 = puStack_70;
    local_60 = local_78;
    local_50 = local_68;
    local_78 = 0;
    puStack_70 = &local_60;
    while (uVar6 = FUN_071bd28c(&local_60,DAT_091a5500), lVar2 = local_50, (uVar6 & 1) != 0) {
      uVar3 = UnityEngine_Random__Range(uVar10 & 0xffffffff,(int)(uVar10 >> 0x20) + 1,0);
      uVar7 = AnhPD_FoodOrder_HomeCustomerParade__HopSeries(lVar9,lVar2,uVar3,0);
      UnityEngine_MonoBehaviour__StartCoroutine(lVar9,uVar7,0);
    }
    FUN_071bd288(&local_60,DAT_091a54f8);
    uVar7 = thunk_FUN_03f9944c(DAT_09177ab8);
    FUN_053007d8(uVar7,lVar9,DAT_091ce9d8,0);
    uVar8 = thunk_FUN_03f9944c(DAT_0918cec0);
    UnityEngine_WaitUntil___ctor(uVar8,uVar7,0);
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar8);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
LAB_040b1070:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

