// rea decompile_all
// name: AnhPD.FoodOrder.ListIngredientBoardView$$Fill
// address: 0x4224640
// body: available
// range: 0x4224640-0x4224973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4224958 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ListIngredientBoardView__Fill
               (long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  if ((DAT_09516d49 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af048);
    FUN_03f5c2a4(&DAT_091ad858);
    FUN_03f5c2a4(&DAT_091aec80);
    FUN_03f5c2a4(&DAT_091ad860);
    FUN_03f5c2a4(&DAT_091af050);
    FUN_03f5c2a4(&DAT_091af618);
    FUN_03f5c2a4(&DAT_091af058);
    FUN_03f5c2a4(&DAT_091aec88);
    FUN_03f5c2a4(&DAT_091af620);
    FUN_03f5c2a4(&DAT_091aec90);
    FUN_03f5c2a4(&DAT_091d4d78);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516d49 = 1;
  }
  lVar2 = UnityEngine_Component__get_gameObject(param_1,0);
  if (lVar2 != 0) {
    UnityEngine_GameObject__SetActive(lVar2,1,0);
    lVar2 = *(long *)(param_1 + 0x48);
    if (lVar2 != 0) {
      lVar5 = *(long *)(param_1 + 0x50);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (param_3 != 0) {
          if (param_2 == 0) goto LAB_04224958;
          if ((*(int *)(param_3 + 0x18) == *(int *)(param_2 + 0x18)) &&
             (FUN_057f7f98(lVar2,param_3,DAT_091af048), param_4 != 0)) {
            if (*(long *)(param_1 + 0x50) == 0) goto LAB_04224958;
            FUN_057813d4(*(long *)(param_1 + 0x50),param_4,DAT_091ad858);
          }
        }
        if ((*(long *)(param_1 + 0x38) != 0) && (param_2 != 0)) {
          iVar8 = *(int *)(*(long *)(param_1 + 0x38) + 0x18);
          iVar7 = *(int *)(param_2 + 0x18);
          if (iVar8 < iVar7) {
            do {
              uVar4 = *(undefined8 *)(param_1 + 0x30);
              lVar2 = *(long *)(param_1 + 0x38);
              uVar3 = AnhPD_FoodOrder_ListIngredientBoardView__get_IconParent(param_1);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              uVar4 = FUN_04c353a8(uVar4,uVar3,0,DAT_091d4d78);
              lVar5 = DAT_091aec80;
              if (lVar2 == 0) goto LAB_04224958;
              lVar6 = *(long *)(lVar2 + 0x10);
              *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
              if (lVar6 == 0) goto LAB_04224958;
              uVar1 = *(uint *)(lVar2 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar2 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar2,uVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              iVar7 = *(int *)(param_2 + 0x18);
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar7);
          }
          *(int *)(param_1 + 0x40) = iVar7;
          if (0 < iVar7) {
            iVar8 = 0;
            do {
              if (*(long *)(param_1 + 0x38) == 0) goto LAB_04224958;
              lVar2 = FUN_057e0998(*(long *)(param_1 + 0x38),iVar8,DAT_091aec90);
              lVar5 = FUN_057e0998(param_2,iVar8,DAT_091af620);
              if (lVar5 == 0) goto LAB_04224958;
              uVar4 = *(undefined8 *)(lVar5 + 0x18);
              lVar5 = FUN_057e0998(param_2,iVar8,DAT_091af620);
              if ((lVar5 == 0) || (lVar2 == 0)) goto LAB_04224958;
              AnhPD_FoodOrder_OrderIngredientIcon__Bind(lVar2,uVar4,*(undefined8 *)(lVar5 + 0x10));
              if ((*(long *)(param_1 + 0x38) == 0) ||
                 ((lVar2 = FUN_057e0998(*(long *)(param_1 + 0x38),iVar8,DAT_091aec90), lVar2 == 0 ||
                  (lVar2 = UnityEngine_Component__get_transform(lVar2,0), lVar2 == 0))))
              goto LAB_04224958;
              UnityEngine_Transform__SetAsLastSibling(lVar2,0);
              iVar7 = *(int *)(param_2 + 0x18);
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar7);
          }
          lVar2 = *(long *)(param_1 + 0x38);
          while (lVar2 != 0) {
            if (*(int *)(lVar2 + 0x18) <= iVar7) {
              return;
            }
            lVar2 = FUN_057e0998(lVar2,iVar7,DAT_091aec90);
            if (lVar2 == 0) break;
            AnhPD_FoodOrder_OrderIngredientIcon__Hide();
            iVar7 = iVar7 + 1;
            lVar2 = *(long *)(param_1 + 0x38);
          }
        }
      }
    }
  }
LAB_04224958:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

