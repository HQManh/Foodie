// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleKFCCombo$$DisplayCombo
// address: 0x413ebd8
// body: available
// range: 0x413ebd8-0x413ed33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413ece4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413ed30 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleKFCCombo__DisplayCombo(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined4 local_34;
  
  if ((DAT_095163b4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    DAT_095163b4 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x100);
  local_34 = 0;
  local_38[0] = 0;
  local_3c[0] = 0;
  local_40[0] = 0;
  if (lVar2 != 0) {
    lVar4 = 4;
    do {
      uVar5 = lVar4 - 4;
      if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar5) {
LAB_0413ece8:
        uVar3 = UnityEngine_Component__get_transform(param_1,0);
        DG_Tweening_ShortcutExtensions__DOComplete(uVar3,0,0);
        uVar3 = UnityEngine_Component__get_transform(param_1,0);
        AnhPD_APDUtilities__Appear(0x3dcccccd,uVar3,0);
        return;
      }
      lVar2 = *(long *)(param_1 + 0x108);
      if (lVar2 == 0) break;
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar5) goto LAB_0413ece8;
      if (*(uint *)(lVar2 + 0x18) <= uVar5) {
LAB_0413ed30:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar3 = *(undefined8 *)(lVar2 + lVar4 * 8);
      if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_BurgerPieceTable__ChickenPiecesOfId(&local_58,uVar3);
      uStack_68 = uStack_50;
      local_70 = local_58;
      local_60 = local_48;
      uVar1 = AnhPD_FoodOrder_BurgerPieceTable__TryGetChickenState
                        (&local_70,&local_34,local_38,local_3c,local_40);
      if ((uVar1 & 1) != 0) {
        lVar2 = *(long *)(param_1 + 0x100);
        if (lVar2 == 0) break;
        if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_0413ed30;
        lVar2 = *(long *)(lVar2 + lVar4 * 8);
        if (lVar2 == 0) break;
        AnhPD_FoodOrder_KFCDisplay__Display(lVar2,local_34,local_38[0],local_3c[0],local_40[0]);
      }
      lVar2 = *(long *)(param_1 + 0x100);
      lVar4 = lVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

