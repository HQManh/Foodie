// rea decompile_all
// name: AnhPD.APDUtilities$$ReplaceByTarget
// address: 0x41ca410
// body: available
// range: 0x41ca410-0x41ca59f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ca598 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41ca59c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_APDUtilities__ReplaceByTarget(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if ((DAT_095169f9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd10);
    FUN_03f5c2a4(&DAT_091e12c0);
    FUN_03f5c2a4(&DAT_0918df80);
    DAT_095169f9 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918df80);
  AnhPD_APDUtilities_<>c__DisplayClass11_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_3);
    puVar5 = (undefined8 *)(lVar1 + 0x18);
    *puVar5 = param_1;
    thunk_FUN_03f5d7b8(puVar5,param_1);
    plVar4 = (long *)(lVar1 + 0x20);
    *plVar4 = param_2;
    thunk_FUN_03f5d7b8(plVar4,param_2);
    if (*plVar4 != 0) {
      uVar3 = *puVar5;
      UnityEngine_Transform__get_position(*plVar4,0);
      DG_Tweening_ShortcutExtensions__DOMove(uVar3,0,0);
      if (*plVar4 != 0) {
        uVar3 = *puVar5;
        UnityEngine_Transform__get_eulerAngles(*plVar4,0);
        DG_Tweening_ShortcutExtensions__DORotate(uVar3,0,0);
        if (*plVar4 != 0) {
          uVar3 = *(undefined8 *)(lVar1 + 0x18);
          UnityEngine_Transform__get_localScale(*plVar4,0);
          uVar3 = DG_Tweening_ShortcutExtensions__DOScale(uVar3,0);
          uVar2 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar2,lVar1,DAT_091e12c0,0);
          FUN_04d956bc(uVar3,uVar2,DAT_091dbd10);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

