// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderStrategy$$RandomFlexibleId
// address: 0x41361e8
// body: available
// range: 0x41361e8-0x4136347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4136344 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_BurgerOrderStrategy__RandomFlexibleId(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_09516362 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_09184720);
    FUN_03f5c2a4(&DAT_091b05a8);
    DAT_09516362 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (param_3 == 0) {
LAB_041362d0:
    if (param_2 == (long *)0x0) {
LAB_04136344:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *param_2;
  }
  else {
    FUN_057e185c(&local_58,param_3,DAT_091b05a8);
    iVar5 = 0;
    while (uVar2 = FUN_071bd28c(&local_58,DAT_091a45a0), (uVar2 & 1) != 0) {
      uVar1 = AnhPD_FoodOrder_BurgerOrderStrategy__IsFlexibleId(uVar2,local_48);
      iVar5 = iVar5 + (uVar1 & 1);
    }
    FUN_071bd288(&local_58,DAT_091a4598);
    if (iVar5 < 2) goto LAB_041362d0;
    if (param_2 == (long *)0x0) goto LAB_04136344;
    lVar4 = *param_2;
    if ((*(byte *)(DAT_09184720 + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09184720 + 0x130) * 8 + -8) ==
        DAT_09184720)) {
      uVar3 = *(undefined4 *)(param_1 + 0x20);
      goto LAB_041362dc;
    }
  }
  uVar3 = 0;
LAB_041362dc:
  (**(code **)(lVar4 + 0x2b8))(param_2,uVar3,*(undefined8 *)(lVar4 + 0x2c0));
  return;
}

