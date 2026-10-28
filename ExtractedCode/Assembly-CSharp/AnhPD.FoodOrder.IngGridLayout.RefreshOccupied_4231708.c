// rea decompile_all
// name: AnhPD.FoodOrder.IngGridLayout$$RefreshOccupied
// address: 0x4231708
// body: available
// range: 0x4231708-0x42318e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42318d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42318d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42318d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42318dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42318e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngGridLayout__RefreshOccupied(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_09516e65 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2df8);
    FUN_03f5c2a4(&DAT_091a2e00);
    FUN_03f5c2a4(&DAT_091a2e08);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82b8);
    FUN_03f5c2a4(&DAT_091acf90);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516e65 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_053d74ac(*(long *)(param_1 + 0x28),DAT_091a82b8);
  if (param_2 != 0) {
    FUN_057e185c(&local_88,param_2,DAT_091acf90);
    local_60 = local_78;
    uStack_68 = puStack_80;
    local_70 = local_88;
    local_88 = 0;
    puStack_80 = &local_70;
    while (uVar1 = FUN_071bd28c(&local_70,DAT_091a2e00), lVar4 = local_60, (uVar1 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(lVar4,0);
      if ((uVar1 & 1) != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = UnityEngine_Component__get_gameObject(lVar4,0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = UnityEngine_GameObject__get_activeInHierarchy(lVar2,0);
        if ((((uVar1 & 1) != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
           (0 < (int)*(ulong *)(lVar4 + 0x18))) {
          uVar1 = 0;
          uVar3 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          do {
            if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_053d8048(*(long *)(param_1 + 0x28),*(undefined4 *)(lVar4 + 0x20 + uVar1 * 4),
                         DAT_091a82b0);
            uVar3 = (ulong)*(uint *)(lVar4 + 0x18);
            uVar1 = uVar1 + 1;
          } while ((long)uVar1 < (long)(int)*(uint *)(lVar4 + 0x18));
        }
      }
    }
    FUN_071bd288(&local_70,DAT_091a2df8);
  }
  return;
}

