// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation.<>c__DisplayClass53_1$$<ReleaseQueueKey>b__2
// address: 0x44dafe4
// body: available
// range: 0x44dafe4-0x44db27b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44db18c to 0x6ee612c FUN_06ee612c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44db264 to 0x44db2f8 CookOrder.Cooking.Implement.IngCellDisplay$$PlayColorLockUnlock (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44db278 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass53_1__<ReleaseQueueKey>b__2
               (long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09518326 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_0919d980);
    FUN_03f5c2a4(&DAT_0919d920);
    FUN_03f5c2a4(&DAT_0919d9a0);
    FUN_03f5c2a4(&DAT_0919d9a8);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e7130);
    FUN_03f5c2a4(&DAT_0918f148);
    DAT_09518326 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918f148);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),param_1);
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar3 & 1) != 0) {
        if ((*(long *)(param_1 + 0x18) == 0) || (*(long *)(*(long *)(param_1 + 0x18) + 0x10) == 0))
        goto LAB_044db278;
        CookOrder_Cooking_Implement_CookingKeyVisual__Despawn();
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (*(char *)(param_1 + 0x14) == '\0') {
          return;
        }
        if (((*(long *)(param_1 + 0x18) != 0) &&
            (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar4 != 0)) &&
           (lVar4 = *(long *)(lVar4 + 0xd8), lVar4 != 0)) {
          iVar1 = FUN_06ee60a4(lVar4,*(undefined4 *)(param_1 + 0x10),DAT_0919d9a0);
          lVar4 = *(long *)(param_1 + 0x18);
          if (iVar1 + -1 < 1) {
            if (((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) &&
               (lVar4 = *(long *)(*(long *)(lVar4 + 0x18) + 0xd8), lVar4 != 0)) {
              FUN_06ee7514(lVar4,*(undefined4 *)(param_1 + 0x10),DAT_0919d980);
              if (((*(long *)(param_1 + 0x18) != 0) &&
                  (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar4 != 0)) &&
                 (lVar4 = *(long *)(lVar4 + 0xd0), lVar4 != 0)) {
                uVar3 = FUN_053d750c(lVar4,*(undefined4 *)(param_1 + 0x10),DAT_091a82c0);
                if ((uVar3 & 1) == 0) {
                  return;
                }
                if (((*(long *)(param_1 + 0x18) != 0) &&
                    (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar4 != 0)) &&
                   (lVar4 = *(long *)(lVar4 + 0x358), lVar4 != 0)) {
                  uVar3 = FUN_06ef1fe8(lVar4,*(undefined4 *)(param_1 + 0x10),lVar2 + 0x10,
                                       DAT_0919d920);
                  if ((uVar3 & 1) == 0) {
                    return;
                  }
                  lVar4 = *(long *)(lVar2 + 0x10);
                  uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
                  System_Action___ctor(uVar5,lVar2,DAT_091e7130,0);
                  if (lVar4 != 0) {
                    CookOrder_Cooking_Implement_IngCellDisplay__PlayColorLockUnlock(lVar4,uVar5);
                    return;
                  }
                }
              }
            }
          }
          else if (((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) &&
                  (lVar2 = *(long *)(*(long *)(lVar4 + 0x18) + 0xd8), lVar2 != 0)) {
            FUN_06ee612c(lVar2,*(undefined4 *)(param_1 + 0x10),iVar1 + -1,DAT_0919d9a8);
            return;
          }
        }
      }
    }
  }
LAB_044db278:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

