// rea decompile_all
// name: AnhPD.FoodOrder.CustomerSpawner$$get_IsAllCustomersIn
// address: 0x420f068
// body: available
// range: 0x420f068-0x420f153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420f150 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_CustomerSpawner__get_IsAllCustomersIn(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  if ((DAT_09516c63 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b2670);
    FUN_03f5c2a4(&DAT_091ac288);
    FUN_03f5c2a4(&DAT_091ac290);
    DAT_09516c63 = 1;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    if (((0 < *(int *)(*(long *)(param_1 + 0x98) + 0x18)) || (*(long *)(param_1 + 0xa0) != 0)) ||
       (*(long *)(param_1 + 0xa8) != 0)) {
      return false;
    }
    lVar2 = *(long *)(param_1 + 0x88);
    if (lVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x90);
      do {
        iVar1 = *(int *)(lVar2 + 0x18);
        if (iVar1 <= iVar4) {
          return iVar1 <= iVar4;
        }
        lVar2 = FUN_057e0998(lVar2,iVar4,DAT_091ac290);
        if (lVar2 != 0) {
          if ((*(long *)(param_1 + 0x88) == 0) ||
             (lVar2 = FUN_057e0998(*(long *)(param_1 + 0x88),iVar4,DAT_091ac290), lVar2 == 0))
          break;
          uVar3 = CakeOrder_InGame_CustomerSpawnData__get_IsCleanDishStaff(lVar2,0);
          if ((uVar3 & 1) == 0) {
            return iVar1 <= iVar4;
          }
        }
        lVar2 = *(long *)(param_1 + 0x88);
        iVar4 = iVar4 + 1;
      } while (lVar2 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

