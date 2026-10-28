// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$ScanGridItems
// address: 0x40c86b4
// body: available
// range: 0x40c86b4-0x40c88f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c88f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c88f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__ScanGridItems(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  long local_40;
  
  if ((DAT_09515fa6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2a50);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_091ac698);
    FUN_03f5c2a4(&DAT_091ac6a0);
    FUN_03f5c2a4(&DAT_091ac6b0);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515fa6 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = **(undefined8 **)(DAT_091881a0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0xf0);
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x18);
        *(undefined4 *)(lVar4 + 0x18) = 0;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
          lVar4 = *(long *)(param_1 + 0xf0);
        }
        if ((*(long *)(param_1 + 0x80) != 0) &&
           (uVar3 = AnhPD_FoodOrder_GridIngController__GetRemainingItems
                              (*(long *)(param_1 + 0x80),0), lVar4 != 0)) {
          FUN_057e0e78(lVar4,uVar3,DAT_091ac698);
          if (*(long *)(param_1 + 0xf0) != 0) {
            FUN_057e185c(&local_68,*(long *)(param_1 + 0xf0),DAT_091ac6b0);
            puStack_48 = puStack_60;
            local_50 = local_68;
            local_40 = local_58;
            local_68 = 0;
            puStack_60 = &local_50;
            while (uVar2 = FUN_071bd28c(&local_50,DAT_091a2a58), lVar4 = local_40, (uVar2 & 1) != 0)
            {
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
              if ((uVar2 & 1) != 0) {
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar2 = AnhPD_FoodOrder_DragItem__get_IsLandedInCell(lVar4,0);
                if ((uVar2 & 1) != 0) {
                  AnhPD_FoodOrder_ServeShelfController__TryAutoMergeToPlate(param_1,lVar4,1,0);
                }
              }
            }
            FUN_071bd288(&local_50,DAT_091a2a50);
            lVar4 = *(long *)(param_1 + 0xf0);
            if (lVar4 != 0) {
              iVar1 = *(int *)(lVar4 + 0x18);
              *(undefined4 *)(lVar4 + 0x18) = 0;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (iVar1 < 1) {
                return;
              }
              System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

