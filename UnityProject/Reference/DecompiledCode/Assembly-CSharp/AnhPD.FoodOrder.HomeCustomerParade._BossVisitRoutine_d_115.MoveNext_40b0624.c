// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade.<BossVisitRoutine>d__115$$MoveNext
// address: 0x40b0624
// body: available
// range: 0x40b0624-0x40b0a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b0a68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_HomeCustomerParade_<BossVisitRoutine>d__115__MoveNext
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  float extraout_s0;
  float extraout_s0_00;
  float fVar10;
  undefined4 extraout_s0_01;
  float fVar11;
  
  if ((DAT_09515ee4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091eb210);
    FUN_03f5c2a4(&DAT_09191360);
    FUN_03f5c2a4(&DAT_0918cec0);
    DAT_09515ee4 = 1;
  }
  iVar1 = *(int *)(param_3 + 0x10);
  lVar5 = *(long *)(param_3 + 0x20);
  lVar2 = 0;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
      lVar2 = thunk_FUN_03f9944c(DAT_09191360);
      System_Object___ctor(lVar2,0);
      plVar8 = (long *)(param_3 + 0x30);
      *plVar8 = lVar2;
      thunk_FUN_03f5d7b8(plVar8,lVar2);
      lVar2 = 0;
      if (*plVar8 != 0) {
        *(undefined8 *)(*plVar8 + 0x18) = *(undefined8 *)(param_3 + 0x20);
        thunk_FUN_03f5d7b8();
        lVar2 = 0;
        if (*(long *)(param_3 + 0x30) != 0) {
          *(undefined8 *)(*(long *)(param_3 + 0x30) + 0x20) = *(undefined8 *)(param_3 + 0x28);
          lVar2 = thunk_FUN_03f5d7b8();
          if ((*(long *)(param_3 + 0x30) != 0) &&
             (*(undefined1 *)(*(long *)(param_3 + 0x30) + 0x10) = 0, lVar5 != 0)) {
            lVar2 = AnhPD_FoodOrder_HomeCustomerParade__TurnUpX
                              (lVar5,*(undefined4 *)(lVar5 + 0xb8),0);
            if ((*plVar8 != 0) && (lVar9 = *(long *)(*plVar8 + 0x20), lVar9 != 0)) {
              fVar11 = *(float *)(lVar9 + 0x4c);
              fVar10 = extraout_s0;
              if (extraout_s0 <= fVar11) {
                fVar10 = fVar11;
              }
              lVar2 = AnhPD_FoodOrder_HomeCustomerParade__get_BossSpot(lVar5,0);
              if (extraout_s0_00 <= fVar10) {
                fVar10 = extraout_s0_00;
              }
              if ((*plVar8 != 0) && (lVar5 = *(long *)(*plVar8 + 0x20), lVar5 != 0)) {
                *(float *)(lVar5 + 0x54) = fVar10;
                *(undefined4 *)(lVar5 + 0x58) = *(undefined4 *)(lVar5 + 0x34);
                uVar6 = *(undefined8 *)(param_3 + 0x30);
                uVar7 = thunk_FUN_03f9944c(DAT_09177ab8);
                FUN_053007d8(uVar7,uVar6,DAT_091eb210,0);
                uVar6 = thunk_FUN_03f9944c(DAT_0918cec0);
                UnityEngine_WaitUntil___ctor(uVar6,uVar7,0);
                *(undefined8 *)(param_3 + 0x18) = uVar6;
                thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0x18),uVar6);
                uVar3 = 1;
                lVar2 = 1;
                goto LAB_040b0a50;
              }
            }
          }
        }
      }
      goto LAB_040b0a68;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
      if ((*(long *)(param_3 + 0x30) != 0) && (lVar5 != 0)) {
        lVar9 = *(long *)(*(long *)(param_3 + 0x30) + 0x20);
        lVar2 = AnhPD_FoodOrder_HomeCustomerParade__get_BossSpot(lVar5,0);
        if (lVar9 != 0) {
          *(undefined4 *)(lVar9 + 0x54) = extraout_s0_01;
          *(undefined4 *)(lVar9 + 0x58) = param_2;
          uVar6 = *(undefined8 *)(param_3 + 0x30);
          uVar7 = thunk_FUN_03f9944c(DAT_09177ab8);
          FUN_053007d8(uVar7,uVar6,DAT_091eb210,0);
          uVar6 = thunk_FUN_03f9944c(DAT_0918cec0);
          UnityEngine_WaitUntil___ctor(uVar6,uVar7,0);
          *(undefined8 *)(param_3 + 0x18) = uVar6;
          thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0x18),uVar6);
          lVar2 = 1;
          uVar3 = 2;
          goto LAB_040b0a50;
        }
      }
      goto LAB_040b0a68;
    }
    if (iVar1 != 2) {
      return 0;
    }
    lVar2 = *(long *)(param_3 + 0x30);
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (lVar2 == 0) goto LAB_040b0a68;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      AnhPD_FoodOrder_HomeCustomerParade_<>c__DisplayClass115_0__<BossVisitRoutine>g__ClaimAndChase_1
                ();
      lVar2 = *(long *)(param_3 + 0x30);
      if (lVar2 == 0) goto LAB_040b0a68;
    }
    lVar9 = *(long *)(lVar2 + 0x20);
    if (lVar9 == 0) goto LAB_040b0a68;
    if (*(char *)(lVar9 + 0x40) != '\0') {
      if (lVar5 != 0) {
        uVar7 = AnhPD_FoodOrder_HomeCustomerParade__BrakeRoutine(lVar5,lVar9,0);
        *(undefined8 *)(param_3 + 0x18) = uVar7;
        thunk_FUN_03f5d7b8();
        lVar2 = 1;
        uVar3 = 3;
        goto LAB_040b0a50;
      }
      goto LAB_040b0a68;
    }
  }
  else {
    if (4 < iVar1) {
      if (iVar1 == 5) {
        *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
        if ((*(long *)(param_3 + 0x30) == 0) || (lVar5 == 0)) goto LAB_040b0a68;
        uVar7 = AnhPD_FoodOrder_HomeCustomerParade__ExitRoutine
                          (lVar5,*(undefined8 *)(*(long *)(param_3 + 0x30) + 0x20),0);
        *(undefined8 *)(param_3 + 0x18) = uVar7;
        thunk_FUN_03f5d7b8();
        lVar2 = 1;
        uVar3 = 6;
      }
      else {
        if (iVar1 != 6) {
          return 0;
        }
        uVar3 = 0xffffffff;
      }
      goto LAB_040b0a50;
    }
    if (iVar1 != 3) {
      if (iVar1 != 4) {
        return 0;
      }
      *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x140) = 0;
        lVar2 = thunk_FUN_03f5d7b8(lVar5 + 0x140,0);
        if ((*(long *)(param_3 + 0x30) != 0) &&
           (lVar9 = *(long *)(*(long *)(param_3 + 0x30) + 0x20), lVar9 != 0)) {
          uVar7 = *(undefined8 *)(lVar9 + 0x38);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar2 = UnityEngine_Object__op_Implicit(uVar7,0);
          lVar4 = *(long *)(param_3 + 0x30);
          *(byte *)(lVar9 + 0x40) = (byte)lVar2 & 1;
          if ((lVar4 != 0) && (lVar9 = *(long *)(lVar4 + 0x20), lVar9 != 0)) {
            if (*(char *)(lVar9 + 0x40) == '\0') {
              lVar2 = 0;
              if (*(long *)(lVar9 + 0x10) == 0) goto LAB_040b0a68;
              lVar2 = AnhPD_FoodOrder_Customer__ChangeState(*(long *)(lVar9 + 0x10),4,0,0,0);
              lVar4 = *(long *)(param_3 + 0x30);
              if (lVar4 == 0) goto LAB_040b0a68;
            }
            uVar7 = AnhPD_FoodOrder_HomeCustomerParade__DescendRoutine
                              (lVar5,*(undefined8 *)(lVar4 + 0x20),0);
            *(undefined8 *)(param_3 + 0x18) = uVar7;
            thunk_FUN_03f5d7b8();
            lVar2 = 1;
            uVar3 = 5;
            goto LAB_040b0a50;
          }
        }
      }
      goto LAB_040b0a68;
    }
    lVar2 = *(long *)(param_3 + 0x30);
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (lVar2 == 0) goto LAB_040b0a68;
  }
  if (lVar5 == 0) {
LAB_040b0a68:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(lVar2);
  }
  uVar7 = AnhPD_FoodOrder_HomeCustomerParade__EatRoutine(lVar5,*(undefined8 *)(lVar2 + 0x20),0);
  *(undefined8 *)(param_3 + 0x18) = uVar7;
  thunk_FUN_03f5d7b8();
  lVar2 = 1;
  uVar3 = 4;
LAB_040b0a50:
  *(undefined4 *)(param_3 + 0x10) = uVar3;
  return lVar2;
}

