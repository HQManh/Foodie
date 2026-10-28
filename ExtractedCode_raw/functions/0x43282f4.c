// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMainNormalMode$$ShowOnlyLevelButton
// address: 0x43282f4
// body: available
// range: 0x43282f4-0x432850f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43284fc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4328500 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432850c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMainNormalMode__ShowOnlyLevelButton
               (undefined4 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((DAT_0951768c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180768);
    DAT_0951768c = 1;
  }
  plVar1 = (long *)FUN_03f5c394(DAT_09180768,4);
  if (plVar1 == (long *)0x0) {
LAB_04328500:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *(long *)(param_2 + 0x68);
  if ((lVar5 != 0) &&
     (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_04328504:
    uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar5;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar5);
    lVar5 = *(long *)(param_2 + 0x70);
    if ((lVar5 != 0) &&
       (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
    goto LAB_04328504;
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
      plVar1[5] = lVar5;
      thunk_FUN_03f5d7b8(plVar1 + 5,lVar5);
      lVar5 = *(long *)(param_2 + 0x88);
      if ((lVar5 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
      goto LAB_04328504;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar5;
        thunk_FUN_03f5d7b8(plVar1 + 6,lVar5);
        lVar5 = *(long *)(param_2 + 0xa0);
        if ((lVar5 != 0) &&
           (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
        goto LAB_04328504;
        if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
          plVar1[7] = lVar5;
          thunk_FUN_03f5d7b8(plVar1 + 7,lVar5);
          if (0 < (int)plVar1[3]) {
            uVar6 = 0;
            uVar4 = plVar1[3] & 0xffffffff;
            do {
              if (uVar4 <= uVar6) goto LAB_043284fc;
              lVar5 = plVar1[uVar6 + 4];
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = UnityEngine_Object__op_Implicit(lVar5,0);
              if ((uVar4 & 1) != 0) {
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar4 = UnityEngine_Object__op_Equality(lVar5,param_3,0);
                if ((uVar4 & 1) == 0) {
                  if (lVar5 == 0) goto LAB_04328500;
                  CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar5,0);
                }
                else {
                  if (lVar5 == 0) goto LAB_04328500;
                  CakeOrder_BaseUI_UIElementAbstract__Show(param_1,lVar5,0);
                }
              }
              uVar4 = (ulong)*(uint *)(plVar1 + 3);
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)*(uint *)(plVar1 + 3));
          }
          return;
        }
      }
    }
  }
LAB_043284fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

