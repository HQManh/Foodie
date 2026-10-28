// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade.<EatRoutine>d__112$$MoveNext
// address: 0x40b1588
// body: available
// range: 0x40b1588-0x40b183b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b1838 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 AnhPD_FoodOrder_HomeCustomerParade_<EatRoutine>d__112__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  
  if ((DAT_09515ee9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091eb1f0);
    FUN_03f5c2a4(&DAT_091eb1f8);
    FUN_03f5c2a4(&DAT_09191348);
    FUN_03f5c2a4(&DAT_0918ce90);
    FUN_03f5c2a4(&DAT_0918cec0);
    DAT_09515ee9 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x20);
  uVar9 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar2 = thunk_FUN_03f9944c(DAT_09191348);
      System_Object___ctor(uVar2,0);
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar2);
      if (lVar6 != 0) {
        uVar9 = UnityEngine_Random__Range
                          (*(undefined4 *)(lVar6 + 0x98),*(undefined4 *)(lVar6 + 0x9c),0);
        uVar2 = thunk_FUN_03f9944c(DAT_0918ce90);
        UnityEngine_WaitForSeconds___ctor(uVar9,uVar2,0);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
        uVar3 = 1;
        uVar9 = 1;
        goto LAB_040b181c;
      }
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
      lVar5 = *(long *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x10) = 0;
        fVar8 = (float)UnityEngine_Time__get_time(0);
        if (lVar6 != 0) {
          lVar4 = *(long *)(param_1 + 0x30);
          *(float *)(lVar5 + 0x14) = fVar8 + *(float *)(lVar6 + 0xa8);
          if (lVar4 != 0) {
            lVar6 = *(long *)(lVar4 + 0x10);
            uVar7 = *(undefined8 *)(param_1 + 0x28);
            uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar2,uVar7,DAT_091eb1f0,0);
            if (lVar6 != 0) {
              uVar9 = 1;
              AnhPD_FoodOrder_Customer__ChangeState(lVar6,1,uVar2,0,0);
              uVar7 = *(undefined8 *)(param_1 + 0x28);
              uVar2 = thunk_FUN_03f9944c(DAT_09177ab8);
              FUN_053007d8(uVar2,uVar7,DAT_091eb1f8,0);
              uVar7 = thunk_FUN_03f9944c(DAT_0918cec0);
              UnityEngine_WaitUntil___ctor(uVar7,uVar2,0);
              *(undefined8 *)(param_1 + 0x18) = uVar7;
              thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar7);
              uVar3 = 2;
              goto LAB_040b181c;
            }
          }
        }
      }
    }
LAB_040b1838:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((*(long *)(param_1 + 0x30) == 0) ||
        (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar5 == 0)) ||
       (AnhPD_FoodOrder_Customer__ChangeState(lVar5,2,0,0,0), lVar6 == 0)) goto LAB_040b1838;
    uVar9 = *(undefined4 *)(lVar6 + 0xa0);
    uVar2 = thunk_FUN_03f9944c(DAT_0918ce90);
    UnityEngine_WaitForSeconds___ctor(uVar9,uVar2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
    uVar9 = 1;
    uVar3 = 3;
  }
  else {
    if (iVar1 != 3) {
      return 0;
    }
    uVar3 = 0xffffffff;
  }
LAB_040b181c:
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  return uVar9;
}

