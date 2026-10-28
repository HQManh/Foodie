// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$Goto
// address: 0x4575f9c
// body: available
// range: 0x4575f9c-0x45760d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45760d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint DG_Tweening_Core_TweenManager__Goto(float param_1,long param_2,byte param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float __y;
  float fVar6;
  
  if (param_2 != 0) {
    __y = *(float *)(param_2 + 0xa0);
    cVar1 = *(char *)(param_2 + 0x110);
    *(byte *)(param_2 + 0x110) = param_3 & 1;
    *(undefined1 *)(param_2 + 0x118) = 1;
    *(undefined4 *)(param_2 + 0x114) = *(undefined4 *)(param_2 + 0xac);
    iVar4 = 1;
    if (0.0 < __y) {
      if (DAT_09516626 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09516626 = '\x01';
      }
      fVar6 = param_1 / __y;
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      __y = *(float *)(param_2 + 0xa0);
      iVar4 = -0x80000000;
      if ((float)(int)fVar6 != INFINITY) {
        iVar4 = (int)fVar6;
      }
    }
    iVar5 = *(int *)(param_2 + 0xa4);
    if (((iVar5 == -1) || (iVar4 < iVar5)) &&
       (fVar6 = fmodf(param_1,__y), bVar2 = __y <= fVar6, __y = fVar6, iVar5 = iVar4, bVar2)) {
      __y = 0.0;
    }
    uVar3 = DG_Tweening_Tween__DoGoto(__y,param_2,iVar5,param_4,0);
    if (((cVar1 != '\0') && ((param_3 & 1) == 0)) &&
       (((uVar3 & 1) == 0 && (*(long *)(param_2 + 0x60) != 0)))) {
      DG_Tweening_Tween__OnTweenCallback(*(long *)(param_2 + 0x60),param_2,0);
    }
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

