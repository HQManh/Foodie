// rea decompile_all
// name: AnhPD.FoodOrder.CookingStation$$TryPickSwapRaw
// address: 0x4100938
// body: available
// range: 0x4100938-0x4100bc3 inclusive
// range: 0x4100c2c-0x4100c53 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4100bb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4100bb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4100bbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4100bc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_CookingStation__TryPickSwapRaw(undefined8 param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_0951616a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2a50);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_0917b338);
    FUN_03f5c2a4(&DAT_091ac6b0);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951616a = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  *param_2 = 0;
  thunk_FUN_03f5d7b8(param_2,0);
  lVar8 = **(long **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(lVar8,0);
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    if ((lVar8 == 0) || (lVar4 = AnhPD_FoodOrder_MessyController__GetDragItems(lVar8,0), lVar4 == 0)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_98,lVar4,DAT_091ac6b0);
    uStack_78 = puStack_90;
    local_80 = local_98;
    local_70 = local_88;
    local_98 = 0;
    puStack_90 = &local_80;
    do {
      do {
        do {
          do {
            uVar1 = FUN_071bd28c(&local_80,DAT_091a2a58);
            lVar4 = local_70;
            if ((uVar1 & 1) == 0) goto LAB_04100b9c;
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
          } while ((uVar3 & 1) == 0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        } while ((((*(char *)(lVar4 + 0xe9) != '\0') || (*(char *)(lVar4 + 0xea) != '\0')) ||
                 (lVar9 = *(long *)(lVar4 + 0xa0), lVar9 == 0)) ||
                (uVar3 = AnhPD_FoodOrder_IngCell__IsLanded(lVar9,lVar4,0), (uVar3 & 1) == 0));
        plVar10 = *(long **)(lVar9 + 0x30);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar10;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917b338) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04100b24;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917b338,0);
LAB_04100b24:
        iVar2 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      } while (((iVar2 != 1) ||
               (iVar2 = AnhPD_FoodOrder_IngCell__get_OccupiedCount(lVar9,0), iVar2 != 1)) ||
              ((uVar3 = AnhPD_FoodOrder_MessyController__IsBookedByShelf(lVar8,lVar4,0),
               (uVar3 & 1) != 0 ||
               (uVar3 = AnhPD_FoodOrder_CookingStation__AcceptsWhenIdle
                                  (param_1,*(undefined8 *)(lVar4 + 0x78)), (uVar3 & 1) == 0))));
      if (*(long *)(lVar8 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = AnhPD_FoodOrder_LevelInfo__WantsStationResult
                        (*(long *)(lVar8 + 0x110),param_1,*(undefined8 *)(lVar4 + 0x78),0);
    } while ((uVar3 & 1) == 0);
    *param_2 = lVar4;
    thunk_FUN_03f5d7b8(param_2,lVar4);
LAB_04100b9c:
    FUN_071bd288(&local_80,DAT_091a2a50);
  }
  return uVar1 & 1;
}

