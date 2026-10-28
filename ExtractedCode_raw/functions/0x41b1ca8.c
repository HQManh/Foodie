// rea decompile_all
// name: Datpt.Cook_Order.LevelControlCookOrder$$ReturnIngreCutted
// address: 0x41b1ca8
// body: available
// range: 0x41b1ca8-0x41b1e63 inclusive
// range: 0x41b1ea0-0x41b1ee7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b1e60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b1ed4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b1ed8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b1edc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b1ee4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041b1e58) */
/* WARNING: Removing unreachable block (ram,0x041b1e5c) */
/* WARNING: Removing unreachable block (ram,0x041b1ed0) */

void Datpt_Cook_Order_LevelControlCookOrder__ReturnIngreCutted(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  ulong local_60;
  
  if ((DAT_09516907 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2b10);
    FUN_03f5c2a4(&DAT_091a3320);
    FUN_03f5c2a4(&DAT_091a2b18);
    FUN_03f5c2a4(&DAT_091a3328);
    FUN_03f5c2a4(&DAT_091a3330);
    FUN_03f5c2a4(&DAT_091a2b20);
    FUN_03f5c2a4(&DAT_091ad998);
    FUN_03f5c2a4(&DAT_091ac7f8);
    DAT_09516907 = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (*(char *)(param_1 + 0x19f) != '\0') {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_0579a6a8(&local_c0,param_2,DAT_091ac7f8);
    local_60 = local_b0;
    local_98 = &local_70;
    puStack_68 = puStack_b8;
    local_70 = local_c0;
    local_a0 = 0;
    while (uVar3 = FUN_071aef5c(&local_70,DAT_091a2b18), uVar2 = local_60, lVar4 = local_a0,
          (uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = (int)local_60;
      FUN_057849ac(&local_c0,*(long *)(param_1 + 0x178),DAT_091ad998);
      local_90 = local_c0;
      local_c0 = 0;
      puStack_88 = puStack_b8;
      uStack_78 = uStack_a8;
      local_80 = local_b0;
      puStack_b8 = &local_90;
      while (uVar3 = FUN_071a9a8c(&local_90,DAT_091a3328), (uVar3 & 1) != 0) {
        if (iVar1 == (int)local_80) {
          lVar4 = UnityEngine_Camera__get_main(0);
          UnityEngine_Input__get_mousePosition(0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          UnityEngine_Camera__ScreenToWorldPoint(lVar4,0);
          Datpt_Cook_Order_LevelControlCookOrder__GenerateNewIngredientCutted
                    (param_1,uVar2 & 0xffffffff);
        }
      }
      FUN_071a9a88(&local_90,DAT_091a3320);
    }
    FUN_071aef58(local_98,DAT_091a2b10);
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar4);
    }
  }
  return;
}

