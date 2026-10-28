// rea decompile_all
// name: AnhPD.FoodOrder.DragItemStackable$$AddVisual
// address: 0x4113fe4
// body: available
// range: 0x4113fe4-0x41141cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41141c8 to 0x41142d0 AnhPD.FoodOrder.DragItemStackable$$RefreshTopVisual (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41141cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_DragItemStackable__AddVisual
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if ((DAT_0951621d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091acd50);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091b4c88);
    DAT_0951621d = 1;
  }
  lVar2 = *(long *)(DAT_091b4c88 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  uVar7 = *(undefined8 *)(param_5 + 0xf8);
  lVar6 = **(long **)(lVar2 + 0xb8);
  lVar2 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_5);
  if (lVar2 != 0) {
    uVar8 = UnityEngine_Transform__get_position(lVar2,0);
    uVar10 = param_2;
    uVar11 = param_3;
    lVar2 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_5);
    if (((lVar2 != 0) && (uVar9 = UnityEngine_Transform__get_rotation(lVar2,0), lVar6 != 0)) &&
       (lVar2 = Utilities_ObjectPoolDictArray__GetGameObject
                          (uVar8,param_2,param_3,uVar9,uVar10,uVar11,param_4,lVar6,uVar7,0,0),
       lVar2 != 0)) {
      UnityEngine_GameObject__SetActive(lVar2,1,0);
      lVar6 = UnityEngine_GameObject__get_transform(lVar2,0);
      uVar7 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_5);
      if (lVar6 != 0) {
        UnityEngine_Transform__SetParent(lVar6,uVar7,0,0);
        lVar6 = DAT_091acd50;
        lVar3 = *(long *)(param_5 + 0x110);
        if (lVar3 != 0) {
          lVar4 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
              *plVar5 = lVar2;
              thunk_FUN_03f5d7b8(plVar5,lVar2);
            }
            else {
              FUN_057e0c68(lVar3,lVar2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_5 + 0x110) != 0) {
              AnhPD_FoodOrder_DragItemStackable__LayoutVisual
                        (param_5,lVar2,*(undefined4 *)(*(long *)(param_5 + 0x110) + 0x18));
              AnhPD_FoodOrder_DragItemStackable__RefreshTopVisual(param_5);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

