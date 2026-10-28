// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$AbortRemaining
// address: 0x40c056c
// body: available
// range: 0x40c056c-0x40c0747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c0740 to 0x40ca354 AnhPD.FoodOrder.ShelfSnapshot$$MarkDirty (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40c0744 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__AbortRemaining(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((DAT_09515f7c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174650);
    FUN_03f5c2a4(&DAT_0919ee60);
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d8bf8);
    FUN_03f5c2a4(&DAT_091d8c08);
    DAT_09515f7c = 1;
  }
  lVar5 = *(long *)(param_1 + 0xa0);
  uVar1 = thunk_FUN_03f9944c(DAT_09174650);
  FUN_070a8c30(uVar1,param_1,DAT_091d8bf8,0);
  uVar2 = thunk_FUN_03f9944c(DAT_09174650);
  FUN_070a8c30(uVar2,param_1,DAT_091d8c08,0);
  if (lVar5 != 0) {
    AnhPD_FoodOrder_ShelfMergeQueue__AbortPlate(lVar5,param_2,uVar1,uVar2,0);
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_06f836dc(*(long *)(param_1 + 0x40),param_2,DAT_0919ee60);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(param_2,0);
      if ((uVar3 & 1) != 0) {
        if (param_2 == 0) goto LAB_040c0744;
        AnhPD_FoodOrder_ServePlate__SetMergeAnimLifted(param_2,0);
        plVar4 = *(long **)(param_2 + 0xa8);
        if (plVar4 != (long *)0x0) {
          if ((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8)
              == DAT_09184728)) {
            AnhPD_FoodOrder_FlexibleDragItem__ResumeVisual(plVar4,0);
          }
        }
      }
      puVar6 = (undefined8 *)(param_1 + 0x38);
      uVar1 = *puVar6;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar1,param_2,0);
      if ((uVar3 & 1) != 0) {
        *puVar6 = 0;
        thunk_FUN_03f5d7b8(puVar6,0);
      }
      if (*(long *)(param_1 + 0xa8) != 0) {
        AnhPD_FoodOrder_ShelfSnapshot__MarkDirty(*(long *)(param_1 + 0xa8),0);
        return;
      }
    }
  }
LAB_040c0744:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

