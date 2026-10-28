// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$SetOccupied
// address: 0x40dd428
// body: available
// range: 0x40dd428-0x40dd547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40dd544 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorGrid__SetOccupied(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((DAT_09516053 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82d8);
    DAT_09516053 = 1;
  }
  if (param_2 != 0) {
    iVar7 = *(int *)(param_2 + 0x20);
    iVar4 = *(int *)(param_2 + 0x28);
    if (iVar7 <= iVar7 + iVar4 + -1) {
      iVar6 = *(int *)(param_2 + 0x24);
      iVar3 = *(int *)(param_2 + 0x2c);
      iVar5 = iVar7 << 10;
      iVar2 = iVar7;
      do {
        if (iVar6 <= iVar6 + iVar3 + -1) {
          do {
            lVar1 = *(long *)(param_1 + 0x30);
            if ((param_3 & 1) == 0) {
              if (lVar1 == 0) goto LAB_040dd544;
              FUN_053d7700(lVar1,iVar5 + iVar6,DAT_091a82d8);
            }
            else {
              if (lVar1 == 0) goto LAB_040dd544;
              FUN_053d8048(lVar1,iVar5 + iVar6,DAT_091a82b0);
            }
            iVar3 = *(int *)(param_2 + 0x2c);
            iVar6 = iVar6 + 1;
          } while (iVar6 <= *(int *)(param_2 + 0x24) + iVar3 + -1);
          iVar2 = *(int *)(param_2 + 0x20);
          iVar4 = *(int *)(param_2 + 0x28);
          iVar6 = *(int *)(param_2 + 0x24);
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0x400;
      } while (iVar7 <= iVar2 + iVar4 + -1);
    }
    return;
  }
LAB_040dd544:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

