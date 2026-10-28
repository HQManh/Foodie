// rea decompile_all
// name: AnhPD.FoodOrder.PieceLedger$$BeltStart
// address: 0x41f7750
// body: available
// range: 0x41f7750-0x41f79ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f79a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceLedger__BeltStart(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_09516ba9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f998);
    FUN_03f5c2a4(&DAT_0919f9e8);
    FUN_03f5c2a4(&DAT_091a6780);
    FUN_03f5c2a4(&DAT_091a6788);
    FUN_03f5c2a4(&DAT_091a6790);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_091bea10);
    FUN_03f5c2a4(&DAT_091fc638);
    DAT_09516ba9 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(DAT_09189140 + 0xb8);
  if (*(char *)(lVar4 + 0xa8) == '\0') {
    return;
  }
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar4 = *(long *)(DAT_09189140 + 0xb8);
  }
  if (*(long *)(lVar4 + 0x30) != 0) {
    FUN_06fca5d0(*(long *)(lVar4 + 0x30),DAT_0919f998);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(param_1,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_1 == 0) goto LAB_041f79a8;
      AnhPD_FoodOrder_IngredientSpawnerController__CountBeltServings
                (param_1,*(undefined8 *)(*(long *)(DAT_09189140 + 0xb8) + 0x30),0);
    }
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x30);
    *(undefined1 *)(*(long *)(DAT_09189140 + 0xb8) + 0x98) = 1;
    if ((lVar4 != 0) && (lVar4 = FUN_06fca26c(lVar4,DAT_0919f9e8), lVar4 != 0)) {
      FUN_06542714(&local_58,lVar4,DAT_091bea10);
      iVar5 = 0;
      local_68 = 0;
      puStack_60 = &local_58;
      while (uVar1 = FUN_072735e8(&local_58,DAT_091a6788), (uVar1 & 1) != 0) {
        iVar5 = (int)local_48 + iVar5;
      }
      FUN_072735e4(&local_58,DAT_091a6780);
      local_68 = CONCAT44(local_68._4_4_,iVar5);
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_68);
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189140);
      }
      uVar3 = AnhPD_FoodOrder_PieceLedger__DescribeCounts
                        (*(undefined8 *)(*(long *)(DAT_09189140 + 0xb8) + 0x30));
      System_String__Format(DAT_091fc638,uVar2,uVar3,0);
      AnhPD_FoodOrder_PieceLedger__Log();
      return;
    }
  }
LAB_041f79a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

