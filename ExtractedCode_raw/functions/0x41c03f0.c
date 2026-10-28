// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.SkewItem$$OnDrop
// address: 0x41c03f0
// body: available
// range: 0x41c03f0-0x41c04fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c04f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_SkewItem__OnDrop
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  Datpt_Cook_Order_IngredientItem__OnDrop(param_4,0);
  lVar1 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins(0);
  uVar2 = Datpt_Cook_Order_ItemMovingBase__get_TF(param_4,0);
  if (lVar1 != 0) {
    uVar3 = Datpt_Cook_Order_LevelControlCookOrder__CheckIngredientInSafeArea(lVar1,uVar2,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    lVar1 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins(0);
    uVar2 = Datpt_Cook_Order_ItemMovingBase__get_TF(param_4,0);
    if (lVar1 != 0) {
      uVar5 = Datpt_Cook_Order_LevelControlCookOrder__GetNearestPosInSafeArea(lVar1,uVar2,0);
      if (DAT_09515ed5 == '\0') {
        FUN_03f5c2a4(&DAT_091898c0);
        DAT_09515ed5 = '\x01';
      }
      puVar4 = *(undefined4 **)(DAT_091898c0 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x041c04f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_4 + 0x3c8))
                (uVar5,param_2,param_3,*puVar4,puVar4[1],puVar4[2],puVar4[3],0x3e4ccccd,param_4,
                 *(undefined8 *)(*param_4 + 0x3d0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

