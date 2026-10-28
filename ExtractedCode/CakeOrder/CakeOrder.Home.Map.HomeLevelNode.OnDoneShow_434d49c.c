// rea decompile_all
// name: CakeOrder.Home.Map.HomeLevelNode$$OnDoneShow
// address: 0x434d49c
// body: available
// range: 0x434d49c-0x434d6cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434d6bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434d6c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434d6cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Map_HomeLevelNode__OnDoneShow(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  if ((DAT_0951779e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dbe48);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_09180740);
    DAT_0951779e = 1;
  }
  CakeOrder_BaseUI_UIElementAbstract__OnDoneShow(param_1,0);
  if ((*(int *)(param_1 + 0x4c) != 2) || (*(long *)(param_1 + 0xd0) != 0)) {
    return;
  }
  uVar2 = FUN_03f5c394(DAT_09180740,*(int *)(param_1 + 0xcc) + 1);
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0xd0),uVar2);
  if (*(long *)(param_1 + 0xb8) != 0) {
    plVar6 = *(long **)(param_1 + 0xd0);
    uVar2 = DG_Tweening_ShortcutExtensions__DOScale
                      (*(undefined4 *)(param_1 + 0x88),
                       *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x44),
                       *(undefined8 *)(param_1 + 0x70),0);
    lVar3 = FUN_04d95e8c(uVar2,0x1b,DAT_091dbeb0);
    if (plVar6 != (long *)0x0) {
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
LAB_0434d6c4:
        uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar2,0);
      }
      if ((int)plVar6[3] == 0) {
LAB_0434d6c0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar6[4] = lVar3;
      thunk_FUN_03f5d7b8(plVar6 + 4,lVar3);
      if (*(int *)(param_1 + 0xcc) < 1) {
        return;
      }
      lVar3 = 0x28;
      uVar7 = 0;
      while (lVar4 = *(long *)(param_1 + 0x78), lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_0434d6c0;
        lVar5 = *(long *)(param_1 + 0x80);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0434d6c0;
        if (*(long *)(param_1 + 0xb8) == 0) break;
        plVar6 = *(long **)(param_1 + 0xd0);
        uVar2 = DG_Tweening_ShortcutExtensions__DOScale
                          (*(undefined4 *)(lVar5 + uVar7 * 4 + 0x20),
                           *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x44),
                           *(undefined8 *)(lVar4 + uVar7 * 8 + 0x20),0);
        uVar2 = FUN_04d95e8c(uVar2,6,DAT_091dbeb0);
        if ((*(long *)(param_1 + 0xb8) == 0) ||
           (lVar4 = FUN_04d95c7c((float)(int)uVar7 * 0.1 +
                                 *(float *)(*(long *)(param_1 + 0xb8) + 0x44),uVar2,DAT_091dbe48),
           plVar6 == (long *)0x0)) break;
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
        goto LAB_0434d6c4;
        uVar1 = uVar7 + 1;
        if (*(uint *)(plVar6 + 3) <= uVar1) goto LAB_0434d6c0;
        plVar6[uVar7 + 5] = lVar4;
        thunk_FUN_03f5d7b8((long)plVar6 + lVar3,lVar4);
        lVar3 = lVar3 + 8;
        uVar7 = uVar1;
        if ((long)*(int *)(param_1 + 0xcc) <= (long)uVar1) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

