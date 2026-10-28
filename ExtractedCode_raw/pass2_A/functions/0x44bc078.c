// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$BeginDeepPick
// address: 0x44bc078
// body: available
// range: 0x44bc078-0x44bc233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44bc230 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__BeginDeepPick
               (long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  if ((DAT_09518244 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbea8);
    FUN_03f5c2a4(&DAT_091dc028);
    DAT_09518244 = 1;
  }
  *(undefined8 *)(param_1 + 0x2d0) = param_2;
  thunk_FUN_03f5d7b8(param_1 + 0x2d0,param_2);
  if (*(long *)(param_1 + 0x2d8) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x30);
    if (lVar2 != 0) {
      if ((*(long *)(param_1 + 0x2e8) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x58), lVar4 == 0)) goto LAB_044bc230;
      CakeOrder_InGame_InGameBackgroundsControl__ChangeTintColorAll
                (*(undefined4 *)(lVar4 + 0x44),*(undefined4 *)(lVar4 + 0x48),
                 *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),lVar2,0);
    }
    fVar6 = (float)UnityEngine_Time__get_unscaledTime(0);
    if ((*(long *)(param_1 + 0x2e8) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x50), lVar2 != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x1e0);
      iVar1 = *(int *)(DAT_09188ad0 + 0xe4);
      *(float *)(param_1 + 0x2b8) = fVar6 + *(float *)(lVar2 + 0x14);
      if (iVar1 == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar3 & 1) == 0) {
LAB_044bc218:
        *(undefined1 *)(param_1 + 0x2b4) = 1;
        return;
      }
      if (*(long *)(param_1 + 0x1e0) != 0) {
        uVar5 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x1e0),0);
        uVar10 = *(undefined8 *)(param_1 + 0x2c0);
        fVar6 = *(float *)(param_1 + 0x2c8);
        if (DAT_0951615d == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_0951615d = '\x01';
        }
        if ((*(long *)(param_1 + 0x2e8) != 0) &&
           (lVar2 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x50), lVar2 != 0)) {
          fVar9 = *(float *)(lVar2 + 0x10);
          uVar7 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x24);
          fVar8 = (float)((ulong)uVar10 >> 0x20) + (float)((ulong)uVar7 >> 0x20) * fVar9;
          uVar5 = DG_Tweening_ShortcutExtensions__DOMove
                            (CONCAT44(fVar8,(float)uVar10 + (float)uVar7 * fVar9),fVar8,
                             fVar6 + *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x2c) * fVar9,
                             *(undefined4 *)(lVar2 + 0x14),uVar5,0,0);
          if ((*(long *)(param_1 + 0x2e8) != 0) &&
             (lVar2 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x50), lVar2 != 0)) {
            uVar5 = FUN_04d95dc4(uVar5,*(undefined8 *)(lVar2 + 0x18),DAT_091dbea8);
            FUN_04d9656c(uVar5,1,DAT_091dc028);
            goto LAB_044bc218;
          }
        }
      }
    }
  }
LAB_044bc230:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

