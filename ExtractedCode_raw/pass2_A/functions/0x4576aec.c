// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$GetActiveTweens
// address: 0x4576aec
// body: available
// range: 0x4576aec-0x4576cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4576cec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4576cf0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long DG_Tweening_Core_TweenManager__GetActiveTweens(byte param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_095188d8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1128);
    FUN_03f5c2a4(&DAT_091b1120);
    FUN_03f5c2a4(&DAT_091b1158);
    FUN_03f5c2a4(&DAT_0917cec8);
    FUN_03f5c2a4(&DAT_0918c158);
    DAT_095188d8 = 1;
  }
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(*(long *)(DAT_0918c158 + 0xb8) + 0x78) != '\0') {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    DG_Tweening_Core_TweenManager__ReorganizeActiveTweens();
  }
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x18);
  if (iVar1 < 1) {
    lVar6 = 0;
  }
  else {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
      iVar1 = *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x18);
    }
    if (param_2 == 0) {
      param_2 = thunk_FUN_03f9944c(DAT_0917cec8);
      FUN_057e0478(param_2,iVar1,DAT_091b1120);
    }
    if (0 < iVar1) {
      lVar6 = 0;
      do {
        if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = DAT_091b1128;
        lVar4 = *(long *)(*(long *)(DAT_0918c158 + 0xb8) + 0x48);
        if (lVar4 == 0) goto LAB_04576cec;
        if (*(uint *)(lVar4 + 0x18) <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar4 = *(long *)(lVar4 + lVar6 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_04576cec;
        if (*(byte *)(lVar4 + 0x110) == (param_1 & 1)) {
          if (param_2 == 0) goto LAB_04576cec;
          lVar5 = *(long *)(param_2 + 0x10);
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_04576cec;
          uVar2 = *(uint *)(param_2 + 0x18);
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar2 + 1;
            *(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = lVar4;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(param_2,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar6 = lVar6 + 1;
      } while (iVar1 != (int)lVar6);
    }
    if (param_2 == 0) {
LAB_04576cec:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = 0;
    if (0 < *(int *)(param_2 + 0x18)) {
      lVar6 = param_2;
    }
  }
  return lVar6;
}

