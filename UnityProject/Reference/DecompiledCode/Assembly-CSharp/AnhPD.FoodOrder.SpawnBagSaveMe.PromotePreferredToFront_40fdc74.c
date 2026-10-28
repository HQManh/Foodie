// rea decompile_all
// name: AnhPD.FoodOrder.SpawnBagSaveMe$$PromotePreferredToFront
// address: 0x40fdc74
// body: available
// range: 0x40fdc74-0x40fdda7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40fdd80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SpawnBagSaveMe__PromotePreferredToFront(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_0951615a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adb20);
    FUN_03f5c2a4(&DAT_091adb28);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_0951615a = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  AnhPD_FoodOrder_SpawnBagSaveMe__GetMissingPieces(&local_48);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_48,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if ((**(long **)(DAT_091881a0 + 0xb8) != 0) && (lVar2 = *(long *)(param_1 + 0x58), lVar2 != 0)) {
    uVar3 = *(undefined8 *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
    iVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar4) {
        return;
      }
      lVar2 = FUN_057e0998(lVar2,iVar4,DAT_091adb28);
      if (lVar2 == 0) break;
      uStack_58 = uStack_40;
      local_60 = local_48;
      local_50 = local_38;
      uVar1 = AnhPD_FoodOrder_SpawnBagSaveMe__WantedAsIs
                        (uVar3,*(undefined8 *)(lVar2 + 0x10),&local_60);
      if ((uVar1 & 1) != 0) {
        if (iVar4 == 0) {
          return;
        }
        AnhPD_FoodOrder_SpawnBagSaveMe__MoveToFront(param_1,iVar4);
        return;
      }
      lVar2 = *(long *)(param_1 + 0x58);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

