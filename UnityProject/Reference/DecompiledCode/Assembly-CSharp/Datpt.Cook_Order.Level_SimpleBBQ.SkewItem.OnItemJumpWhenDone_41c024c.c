// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.SkewItem$$OnItemJumpWhenDone
// address: 0x41c024c
// body: available
// range: 0x41c024c-0x41c03e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c03e0 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c03e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_SkewItem__OnItemJumpWhenDone
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if ((DAT_09516994 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091f0128);
    FUN_03f5c2a4(&DAT_091948f0);
    DAT_09516994 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091948f0);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_4);
    *(undefined8 *)(lVar1 + 0x18) = param_5;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18),param_5);
    lVar2 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins(0);
    lVar3 = Datpt_Cook_Order_ItemMovingBase__get_TF(param_4,0);
    if ((lVar3 != 0) && (UnityEngine_Transform__get_position(lVar3,0), lVar2 != 0)) {
      uVar6 = Datpt_Cook_Order_LevelControlCookOrder__GetRandomInHalfNearestSafeArea(lVar2,0);
      uVar4 = Datpt_Cook_Order_ItemMovingBase__get_TF(param_4,0);
      DG_Tweening_ShortcutExtensions__DOScale(0x3f800000,0x3e4ccccd,uVar4,0);
      uVar4 = Datpt_Cook_Order_ItemMovingBase__get_TF(param_4,0);
      uVar4 = DG_Tweening_ShortcutExtensions__DOJump
                        (uVar6,param_2,param_3,0x40000000,0x3f000000,uVar4,1,0,0);
      uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar5,lVar1,DAT_091f0128,0);
      FUN_04d956bc(uVar4,uVar5,DAT_091dbd18);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

