// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$PruneBindings
// address: 0x40c97a0
// body: available
// range: 0x40c97a0-0x40c9973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c9970 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController_WholeDishMode__PruneBindings(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  
  if ((DAT_09515faf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8610);
    FUN_03f5c2a4(&DAT_091afe28);
    FUN_03f5c2a4(&DAT_091b43a0);
    FUN_03f5c2a4(&DAT_091b43a8);
    FUN_03f5c2a4(&DAT_091b43b0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515faf = 1;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
LAB_040c9970:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar4 = *(int *)(*(long *)(param_1 + 0x18) + 0x18);
  if (-1 < iVar4 + -1) {
    do {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_040c9970;
      iVar4 = iVar4 + -1;
      lVar1 = FUN_057e0998(*(long *)(param_1 + 0x18),iVar4,DAT_091b43b0);
      if (lVar1 == 0) goto LAB_040c9970;
      uVar5 = *(undefined8 *)(lVar1 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar2 & 1) == 0) {
LAB_040c9938:
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_040c9970;
        FUN_057e251c(*(long *)(param_1 + 0x18),iVar4,DAT_091b43a0);
      }
      else {
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x90), lVar3 == 0)) goto LAB_040c9970;
        uVar2 = FUN_057e1004(lVar3,*(undefined8 *)(lVar1 + 0x10),DAT_091afe28);
        if ((uVar2 & 1) == 0) goto LAB_040c9938;
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x98), lVar3 == 0)) goto LAB_040c9970;
        uVar2 = FUN_053ebc3c(lVar3,*(undefined8 *)(lVar1 + 0x10),DAT_091a8610);
        if ((uVar2 & 1) == 0) {
          if (*(long *)(lVar1 + 0x10) == 0) goto LAB_040c9970;
          if ((*(char *)(*(long *)(lVar1 + 0x10) + 0xb1) == '\0') &&
             (uVar2 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__IsOrderStillOpen(lVar1),
             (uVar2 & 1) == 0)) {
            lVar1 = *(long *)(lVar1 + 0x10);
            if (lVar1 == 0) goto LAB_040c9970;
            *(undefined8 *)(lVar1 + 0xa0) = 0;
            *(undefined8 *)(lVar1 + 0x98) = 0;
            *(undefined8 *)(lVar1 + 0x90) = 0;
            *(undefined8 *)(lVar1 + 0x88) = 0;
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_040c9970;
            FUN_057e251c(*(long *)(param_1 + 0x18),iVar4,DAT_091b43a0);
            if ((*(long *)(param_1 + 0x10) == 0) ||
               (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0xa8), lVar1 == 0)) goto LAB_040c9970;
            *(undefined1 *)(lVar1 + 0x78) = 1;
          }
        }
      }
    } while (0 < iVar4);
  }
  return;
}

