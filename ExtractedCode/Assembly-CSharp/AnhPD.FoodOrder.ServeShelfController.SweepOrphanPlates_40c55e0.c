// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$SweepOrphanPlates
// address: 0x40c55e0
// body: available
// range: 0x40c55e0-0x40c575b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c5758 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__SweepOrphanPlates(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  
  if ((DAT_09515f8e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8610);
    FUN_03f5c2a4(&DAT_091afe48);
    FUN_03f5c2a4(&DAT_091afe50);
    FUN_03f5c2a4(&DAT_091afe58);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515f8e = 1;
  }
  if (*(long *)(param_1 + 0x90) == 0) {
LAB_040c5758:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x90) + 0x18);
  if (-1 < iVar3 + -1) {
    do {
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_040c5758;
      iVar3 = iVar3 + -1;
      lVar1 = FUN_057e0998(*(long *)(param_1 + 0x90),iVar3,DAT_091afe58);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar2 = UnityEngine_Object__op_Implicit(lVar1,0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + 0x90) == 0) goto LAB_040c5758;
        FUN_057e251c(*(long *)(param_1 + 0x90),iVar3,DAT_091afe48);
        if (*(long *)(param_1 + 0xa8) == 0) goto LAB_040c5758;
        AnhPD_FoodOrder_ShelfSnapshot__MarkDirty(*(long *)(param_1 + 0xa8),0);
      }
      else {
        if (lVar1 == 0) goto LAB_040c5758;
        uVar2 = AnhPD_FoodOrder_ServePlate__get_IsEmpty(lVar1);
        if ((((uVar2 & 1) != 0) && (*(char *)(lVar1 + 0xb2) == '\0')) &&
           (*(char *)(lVar1 + 0xb1) == '\0')) {
          if (*(long *)(param_1 + 0x98) == 0) goto LAB_040c5758;
          uVar2 = FUN_053ebc3c(*(long *)(param_1 + 0x98),lVar1,DAT_091a8610);
          if ((uVar2 & 1) == 0) {
            if (*(long *)(param_1 + 0xa0) == 0) goto LAB_040c5758;
            uVar2 = AnhPD_FoodOrder_ShelfMergeQueue__HasInbound(*(long *)(param_1 + 0xa0),lVar1,0);
            if ((uVar2 & 1) == 0) {
              AnhPD_FoodOrder_ServeShelfController__RemovePlate(param_1,lVar1);
            }
          }
        }
      }
    } while (0 < iVar3);
  }
  return;
}

