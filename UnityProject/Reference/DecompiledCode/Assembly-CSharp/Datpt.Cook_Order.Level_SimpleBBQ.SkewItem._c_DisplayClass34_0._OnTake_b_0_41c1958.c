// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.SkewItem.<>c__DisplayClass34_0$$<OnTake>b__0
// address: 0x41c1958
// body: available
// range: 0x41c1958-0x41c1adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c1ad4 to 0x4d59cfc FUN_04d59cfc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c1ad8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_SkewItem_<>c__DisplayClass34_0__<OnTake>b__0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_095169a4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d96f0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd28);
    FUN_03f5c2a4(&DAT_091f0138);
    DAT_095169a4 = 1;
  }
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar2 = Datpt_Cook_Order_ItemMovingBase__get_TF(*(long *)(param_1 + 0x18),0);
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      uVar4 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
      uVar2 = DG_Tweening_ShortcutExtensions__DOPunchScale
                        ((float)uVar4 * 0.1,(float)((ulong)uVar4 >> 0x20) * 0.1,
                         *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14) * 0.1,0x3e4ccccd,
                         0x3f800000,uVar2,10,0);
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 == 0) {
        lVar3 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(lVar3,param_1,DAT_091f0138,0);
        *(long *)(param_1 + 0x20) = lVar3;
        thunk_FUN_03f5d7b8((long *)(param_1 + 0x20),lVar3);
      }
      FUN_04d956bc(uVar2,lVar3,DAT_091dbd28);
      lVar3 = Datpt_Cook_Order_SoundControl__get_Ins();
      if (lVar3 != 0) {
        FUN_04d59cfc(lVar3,1,0,DAT_091d96f0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

