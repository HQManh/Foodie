// rea decompile_all
// name: AnhPD.FoodOrder.IngDirtyPlateCleaner$$PlayRemoveFx
// address: 0x42443e4
// body: available
// range: 0x42443e4-0x424464f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4244648 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x424464c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngDirtyPlateCleaner__PlayRemoveFx
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined4 uVar7;
  
  if ((DAT_09516e58 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091eb948);
    FUN_03f5c2a4(&DAT_09191748);
    DAT_09516e58 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09191748);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar6 = (long *)(lVar1 + 0x10);
    *plVar6 = param_5;
    thunk_FUN_03f5d7b8(plVar6,param_5);
    *(undefined8 *)(lVar1 + 0x30) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30),param_4);
    if (*plVar6 != 0) {
      lVar2 = AnhPD_FoodOrder_DragItemBase__get_Tf(*plVar6,0);
      plVar6 = (long *)(lVar1 + 0x18);
      *plVar6 = lVar2;
      thunk_FUN_03f5d7b8(plVar6,lVar2);
      if (*plVar6 != 0) {
        uVar7 = UnityEngine_Transform__get_localScale(*plVar6,0);
        lVar2 = DAT_09183190;
        *(undefined4 *)(lVar1 + 0x20) = uVar7;
        *(undefined4 *)(lVar1 + 0x24) = param_2;
        *(undefined4 *)(lVar1 + 0x28) = param_3;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = DG_Tweening_DOTween__Sequence(0);
        uVar3 = DG_Tweening_TweenSettingsExtensions__AppendInterval(param_1,uVar3,0);
        uVar4 = DG_Tweening_ShortcutExtensions__DOScale
                          ((float)*(undefined8 *)(lVar1 + 0x20) * 1.18,
                           (float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20) * 1.18,
                           *(float *)(lVar1 + 0x28) * 1.18,0x3df5c28f,*(undefined8 *)(lVar1 + 0x18),
                           0);
        uVar4 = FUN_04d95e8c(uVar4,6,DAT_091dbeb0);
        uVar3 = DG_Tweening_TweenSettingsExtensions__Append(uVar3,uVar4,0);
        uVar4 = *(undefined8 *)(lVar1 + 0x18);
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        puVar5 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
        uVar4 = DG_Tweening_ShortcutExtensions__DOScale
                          (*puVar5,puVar5[1],puVar5[2],0x3df5c28f,uVar4,0);
        uVar4 = FUN_04d95e8c(uVar4,0x1a,DAT_091dbeb0);
        uVar3 = DG_Tweening_TweenSettingsExtensions__Append(uVar3,uVar4,0);
        uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar4,lVar1,DAT_091eb948,0);
        FUN_04d956bc(uVar3,uVar4,DAT_091dbd18);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

