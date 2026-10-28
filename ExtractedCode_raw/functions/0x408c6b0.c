// rea decompile_all
// name: TrungKienPack.SimpleFade$$SetFade
// address: 0x408c6b0
// body: available
// range: 0x408c6b0-0x408c83f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408c838 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x408c83c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_SimpleFade__SetFade(undefined4 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((DAT_09515ccc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e68);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd28);
    FUN_03f5c2a4(&DAT_091f0050);
    FUN_03f5c2a4(&DAT_091f0058);
    FUN_03f5c2a4(&DAT_091947d8);
    DAT_09515ccc = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091947d8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_2);
    uVar2 = DAT_09175e68;
    *(undefined4 *)(lVar1 + 0x18) = param_1;
    uVar2 = thunk_FUN_03f9944c(uVar2);
    FUN_06dfc2b4(uVar2,lVar1,DAT_091f0050,0);
    uVar5 = *(undefined4 *)(param_2 + 0x28);
    uVar6 = *(undefined4 *)(param_2 + 0x2c);
    uVar4 = *(undefined4 *)(lVar1 + 0x18);
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = DG_Tweening_DOTween__To(uVar6,uVar4,uVar5,uVar2,0);
    uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar3,lVar1,DAT_091f0058,0);
    FUN_04d956bc(uVar2,uVar3,DAT_091dbd28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

