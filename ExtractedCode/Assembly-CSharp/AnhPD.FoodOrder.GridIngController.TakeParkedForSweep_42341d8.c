// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$TakeParkedForSweep
// address: 0x42341d8
// body: available
// range: 0x42341d8-0x423444f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4234438 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423443c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4234440 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4234444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4234448 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423444c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GridIngController__TakeParkedForSweep(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  
  if ((DAT_09516dd7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2a50);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_091ac690);
    FUN_03f5c2a4(&DAT_091ac6a0);
    FUN_03f5c2a4(&DAT_091ac6b0);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516dd7 = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar8 = **(long **)(DAT_091881a0 + 0xb8);
    FUN_057e185c(&local_88,*(long *)(param_1 + 0xe0),DAT_091ac6b0);
    local_60 = local_78;
    puStack_68 = puStack_80;
    local_70 = local_88;
    local_88 = 0;
    puStack_80 = &local_70;
LAB_042342dc:
    uVar4 = FUN_071bd28c(&local_70,DAT_091a2a58);
    lVar3 = local_60;
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      AnhPD_FoodOrder_IngCellFinder__RemoveOwed(*(long *)(param_1 + 0xc0),local_60);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
      if ((uVar4 & 1) != 0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = UnityEngine_Component__get_gameObject(lVar3,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar4 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
        if (((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0xa0) == 0)) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(lVar8,0);
          if ((uVar4 & 1) != 0) {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = AnhPD_FoodOrder_MessyController__IsBookedByShelf(lVar8,lVar3,0);
            if ((uVar4 & 1) != 0) goto LAB_042342dc;
          }
          lVar5 = DAT_091ac690;
          if (param_2 != 0) {
            lVar7 = *(long *)(param_2 + 0x10);
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar2 = *(uint *)(param_2 + 0x18);
              if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(param_2 + 0x18) = uVar2 + 1;
                plVar6 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
                *plVar6 = lVar3;
                thunk_FUN_03f5d7b8(plVar6,lVar3);
              }
              else {
                FUN_057e0c68(param_2,lVar3,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_042342dc;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      goto LAB_042342dc;
    }
    FUN_071bd288(&local_70,DAT_091a2a50);
    lVar8 = *(long *)(param_1 + 0xe0);
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

