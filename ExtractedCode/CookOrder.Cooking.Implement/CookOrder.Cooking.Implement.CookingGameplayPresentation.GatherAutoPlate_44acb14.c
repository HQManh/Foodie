// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$GatherAutoPlate
// address: 0x44acb14
// body: available
// range: 0x44acb14-0x44acf8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44acf88 to 0x454cccc DG.Tweening.TweenSettingsExtensions$$AppendCallback (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44acf8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__GatherAutoPlate
               (long param_1,long param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_09518218 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5330);
    FUN_03f5c2a4(&DAT_091ca340);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cb420);
    FUN_03f5c2a4(&DAT_09178620);
    FUN_03f5c2a4(&DAT_09179688);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbeb8);
    FUN_03f5c2a4(&DAT_091e6ed8);
    FUN_03f5c2a4(&DAT_091e6ee0);
    FUN_03f5c2a4(&DAT_091e70b0);
    FUN_03f5c2a4(&DAT_091e70b8);
    FUN_03f5c2a4(&DAT_0918f100);
    FUN_03f5c2a4(&DAT_0918f030);
    DAT_09518218 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f100);
  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass34_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_1);
    plVar5 = (long *)(lVar1 + 0x18);
    *plVar5 = param_2;
    thunk_FUN_03f5d7b8(plVar5,param_2);
    *(undefined4 *)(lVar1 + 0x28) = param_4;
    if (*plVar5 != 0) {
      lVar2 = FUN_04a6a14c(*plVar5,DAT_091c5330);
      plVar6 = (long *)(lVar1 + 0x20);
      *plVar6 = lVar2;
      thunk_FUN_03f5d7b8(plVar6,lVar2);
      if ((*(long *)(param_1 + 0x2e8) != 0) && (*plVar6 != 0)) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x28);
        CookOrder_Cooking_Implement_CookingDishRenderer__StopMerge(*plVar6,0);
        CookOrder_Cooking_Implement_CookingGameplayPresentation__Focus(param_1,*plVar5);
        if (param_3 != 0) {
          uVar7 = *(undefined8 *)(param_3 + 0x28);
          if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar4 = *(undefined8 **)(DAT_0918f030 + 0xb8);
          lVar8 = puVar4[5];
          if (lVar8 == 0) {
            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar4 = *(undefined8 **)(DAT_0918f030 + 0xb8);
            }
            uVar9 = *puVar4;
            lVar8 = thunk_FUN_03f9944c(DAT_09178620);
            FUN_053239c8(lVar8,uVar9,DAT_091e6ed8,0);
            plVar3 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x28);
            *plVar3 = lVar8;
            thunk_FUN_03f5d7b8(plVar3,lVar8);
          }
          uVar7 = FUN_04af6d6c(uVar7,lVar8,DAT_091ca340);
          uVar7 = FUN_04b0462c(uVar7,DAT_091cae30);
          *(undefined8 *)(lVar1 + 0x30) = uVar7;
          thunk_FUN_03f5d7b8();
          if (*(char *)(param_1 + 0xa8) == '\0') {
            if ((*plVar5 != 0) &&
               (lVar2 = UnityEngine_Component__get_gameObject(*plVar5,0), lVar2 != 0)) {
              UnityEngine_GameObject__SetActive(lVar2,0,0);
              lVar2 = *plVar5;
              CookOrder_Cooking_Implement_CookingGameplayPresentation__get_MergePoint(param_1);
              if (lVar2 != 0) {
                UnityEngine_Transform__set_position(lVar2,0);
LAB_044acf30:
                uVar9 = *(undefined8 *)(param_1 + 0x38);
                uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
                DG_Tweening_TweenCallback___ctor(uVar7,lVar1,DAT_091e70b0,0);
                DG_Tweening_TweenSettingsExtensions__AppendCallback(uVar9,uVar7,0);
                return;
              }
            }
          }
          else {
            uVar9 = *(undefined8 *)(param_3 + 0x28);
            uVar7 = thunk_FUN_03f9944c(DAT_09179688);
            FUN_0533040c(uVar7,lVar1,DAT_091e70b8,0);
            uVar7 = FUN_04b0ce00(uVar9,uVar7,DAT_091cb420);
            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f030);
            }
            puVar4 = *(undefined8 **)(DAT_0918f030 + 0xb8);
            lVar8 = puVar4[6];
            if (lVar8 == 0) {
              if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f030);
                puVar4 = *(undefined8 **)(DAT_0918f030 + 0xb8);
              }
              uVar9 = *puVar4;
              lVar8 = thunk_FUN_03f9944c(DAT_09178620);
              FUN_053239c8(lVar8,uVar9,DAT_091e6ee0,0);
              plVar3 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x30);
              *plVar3 = lVar8;
              thunk_FUN_03f5d7b8(plVar3,lVar8);
            }
            uVar7 = FUN_04af6d6c(uVar7,lVar8,DAT_091ca340);
            uVar7 = FUN_04b0462c(uVar7,DAT_091cae30);
            if (*plVar6 != 0) {
              CookOrder_Cooking_Implement_CookingDishRenderer__Draw
                        (*plVar6,*(undefined8 *)(param_1 + 0x2e0),*(undefined4 *)(lVar1 + 0x28),
                         uVar7,0,0,0,*(undefined8 *)(lVar1 + 0x30),0);
              if ((*(long *)(lVar1 + 0x18) != 0) &&
                 (lVar8 = UnityEngine_Component__get_gameObject(*(long *)(lVar1 + 0x18),0),
                 lVar8 != 0)) {
                UnityEngine_GameObject__SetActive(lVar8,1,0);
                uVar7 = *(undefined8 *)(param_1 + 0x38);
                lVar8 = *plVar5;
                CookOrder_Cooking_Implement_CookingGameplayPresentation__get_MergePoint(param_1);
                if (lVar2 != 0) {
                  uVar9 = DG_Tweening_ShortcutExtensions__DOJump(lVar8,1,0,0);
                  uVar9 = FUN_04d95dc4(uVar9,*(undefined8 *)(lVar2 + 0x48),DAT_091dbeb8);
                  DG_Tweening_TweenSettingsExtensions__Insert(0,uVar7,uVar9,0);
                  goto LAB_044acf30;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

