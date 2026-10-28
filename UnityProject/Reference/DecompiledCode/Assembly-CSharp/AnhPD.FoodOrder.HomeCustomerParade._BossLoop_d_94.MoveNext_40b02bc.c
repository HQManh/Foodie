// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade.<BossLoop>d__94$$MoveNext
// address: 0x40b02bc
// body: available
// range: 0x40b02bc-0x40b05af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b05ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_HomeCustomerParade_<BossLoop>d__94__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  if ((DAT_09515ee3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174b80);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091eb240);
    FUN_03f5c2a4(&DAT_091eb248);
    FUN_03f5c2a4(&DAT_09191380);
    FUN_03f5c2a4(&DAT_0918ce90);
    FUN_03f5c2a4(&DAT_0918cec0);
    DAT_09515ee3 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x20);
  uVar2 = 0;
  if (iVar1 < 2) {
    if ((iVar1 != 0) && (iVar1 != 1)) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_040b0394:
    lVar3 = thunk_FUN_03f9944c(DAT_09191380);
    System_Object___ctor(lVar3,0);
    plVar8 = (long *)(param_1 + 0x28);
    *plVar8 = lVar3;
    thunk_FUN_03f5d7b8(plVar8,lVar3);
    uVar2 = 0;
    if (*plVar8 != 0) {
      plVar4 = (long *)(*plVar8 + 0x18);
      *plVar4 = lVar7;
      uVar2 = thunk_FUN_03f5d7b8(plVar4,lVar7);
      if (lVar7 != 0) {
        uVar5 = AnhPD_FoodOrder_HomeCustomerParade__get_IsMapOpen(lVar7,0);
        if ((((uVar5 & 1) == 0) || (*(char *)(lVar7 + 0x131) != '\0')) ||
           (lVar3 = AnhPD_FoodOrder_HomeCustomerParade__CurrentBossId(lVar7,0), lVar3 == 0)) {
          uVar10 = *(undefined4 *)(lVar7 + 0xb4);
          uVar2 = thunk_FUN_03f9944c(DAT_0918ce90);
          UnityEngine_WaitForSeconds___ctor(uVar10,uVar2,0);
          *(undefined8 *)(param_1 + 0x18) = uVar2;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
          uVar10 = 1;
        }
        else {
          uVar2 = 0;
          if (*plVar8 == 0) goto LAB_040b05ac;
          puVar6 = (undefined8 *)(*plVar8 + 0x10);
          *puVar6 = 0;
          thunk_FUN_03f5d7b8(puVar6,0);
          uVar10 = *(undefined4 *)(lVar7 + 0x50);
          uVar9 = *(undefined8 *)(param_1 + 0x28);
          uVar2 = thunk_FUN_03f9944c(DAT_09174b80);
          FUN_070a8c30(uVar2,uVar9,DAT_091eb240,0);
          uVar2 = AnhPD_FoodOrder_HomeCustomerParade__SpawnRoutine(uVar10,lVar7,lVar3,0,1,uVar2,0);
          *(undefined8 *)(param_1 + 0x18) = uVar2;
          thunk_FUN_03f5d7b8();
          uVar10 = 2;
        }
LAB_040b0590:
        *(undefined4 *)(param_1 + 0x10) = uVar10;
        return 1;
      }
    }
  }
  else {
    if (iVar1 == 2) {
      lVar3 = *(long *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar3 == 0) goto LAB_040b05ac;
      if (*(long *)(lVar3 + 0x10) != 0) {
        uVar2 = thunk_FUN_03f9944c(DAT_09177ab8);
        FUN_053007d8(uVar2,lVar3,DAT_091eb248,0);
        uVar9 = thunk_FUN_03f9944c(DAT_0918cec0);
        UnityEngine_WaitUntil___ctor(uVar9,uVar2,0);
        *(undefined8 *)(param_1 + 0x18) = uVar9;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar9);
        uVar10 = 3;
        goto LAB_040b0590;
      }
    }
    else {
      if (iVar1 != 3) {
        if (iVar1 != 4) {
          return 0;
        }
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),0);
        goto LAB_040b0394;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    if (lVar7 != 0) {
      uVar10 = UnityEngine_Random__Range
                         (*(undefined4 *)(lVar7 + 0xac),*(undefined4 *)(lVar7 + 0xb0),0);
      uVar2 = thunk_FUN_03f9944c(DAT_0918ce90);
      UnityEngine_WaitForSeconds___ctor(uVar10,uVar2,0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
      uVar10 = 4;
      goto LAB_040b0590;
    }
  }
LAB_040b05ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar2);
}

