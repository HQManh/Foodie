// rea decompile_all
// name: AnhPD.FoodOrder.ShelfMergeQueue$$AbortPlate
// address: 0x40d5070
// body: available
// range: 0x40d5070-0x40d51df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d51dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ShelfMergeQueue__AbortPlate
               (long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  
  if ((DAT_09515ffd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b3a38);
    FUN_03f5c2a4(&DAT_091b3a40);
    FUN_03f5c2a4(&DAT_091b3a48);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515ffd = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_040d51dc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar6 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
  if (-1 < iVar6 + -1) {
    do {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_040d51dc;
      iVar6 = iVar6 + -1;
      lVar1 = FUN_057e0998(*(long *)(param_1 + 0x10),iVar6,DAT_091b3a48);
      if (lVar1 == 0) goto LAB_040d51dc;
      uVar7 = *(undefined8 *)(lVar1 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar7,param_2,0);
      if ((uVar2 & 1) == 0) {
        if (*(char *)(lVar1 + 0x2c) == '\0') {
          if (param_4 != 0) {
            uVar3 = *(undefined8 *)(lVar1 + 0x18);
            pcVar5 = *(code **)(param_4 + 0x18);
            uVar7 = *(undefined8 *)(param_4 + 0x40);
            uVar4 = *(undefined8 *)(param_4 + 0x28);
            goto LAB_040d51a0;
          }
        }
        else {
          uVar2 = param_3;
          if (*(char *)(lVar1 + 0x34) == '\0') {
            uVar2 = AnhPD_FoodOrder_ShelfMergeQueue__IsOverdue(lVar1);
            if (param_3 == 0) goto LAB_040d51a4;
            uVar2 = uVar2 & 1;
          }
          if (uVar2 != 0) {
            uVar3 = *(undefined8 *)(lVar1 + 0x18);
            pcVar5 = *(code **)(param_3 + 0x18);
            uVar7 = *(undefined8 *)(param_3 + 0x40);
            uVar4 = *(undefined8 *)(param_3 + 0x28);
LAB_040d51a0:
            (*pcVar5)(uVar7,uVar3,uVar4);
          }
        }
LAB_040d51a4:
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_040d51dc;
        FUN_057e251c(*(long *)(param_1 + 0x10),iVar6,DAT_091b3a38);
      }
    } while (0 < iVar6);
  }
  return;
}

