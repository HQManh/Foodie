// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$Rewind
// address: 0x4576328
// body: available
// range: 0x4576328-0x4576447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4576444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool DG_Tweening_Core_TweenManager__Rewind(long param_1,byte param_2)

{
  char cVar1;
  float fVar2;
  ulong uVar3;
  bool bVar4;
  float fVar5;
  
  if ((DAT_095188d2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c158);
    DAT_095188d2 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  fVar5 = *(float *)(param_1 + 0xac);
  cVar1 = *(char *)(param_1 + 0x110);
  bVar4 = false;
  *(undefined1 *)(param_1 + 0x110) = 0;
  if (0.0 < fVar5) {
    *(byte *)(param_1 + 0x118) = (param_2 ^ 0xff) & 1;
    bVar4 = 0.0 < *(float *)(param_1 + 0x114);
    fVar2 = 0.0;
    if ((param_2 & 1) == 0) {
      bVar4 = *(float *)(param_1 + 0x114) < fVar5;
      fVar2 = fVar5;
    }
    *(float *)(param_1 + 0x114) = fVar2;
  }
  if (((0.0 < *(float *)(param_1 + 0x104)) || (0 < *(int *)(param_1 + 0x10c))) ||
     (*(char *)(param_1 + 0x101) == '\0')) {
    bVar4 = true;
    uVar3 = DG_Tweening_Tween__DoGoto(0,param_1,0,1,0);
    if ((cVar1 != '\0') && ((uVar3 & 1) == 0)) {
      if (*(long *)(param_1 + 0x60) != 0) {
        DG_Tweening_Tween__OnTweenCallback(*(long *)(param_1 + 0x60),param_1,0);
      }
      bVar4 = true;
    }
  }
  else {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    DG_Tweening_Core_TweenManager__ManageOnRewindCallbackWhenAlreadyRewinded(param_1,0);
  }
  return bVar4;
}

