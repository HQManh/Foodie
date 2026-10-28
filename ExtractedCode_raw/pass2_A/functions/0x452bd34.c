// rea decompile_all
// name: Utilities.UINumberCounterAbstract$$UpdateAmount
// address: 0x452bd34
// body: available
// range: 0x452bd34-0x452bf07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452bed4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x452bf04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UINumberCounterAbstract__UpdateAmount(long *param_1,int param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09518620 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dc048);
    DAT_09518620 = 1;
  }
  lVar2 = param_1[9];
  if (lVar2 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,lVar2,0);
  }
  lVar2 = UnityEngine_Component__get_gameObject(param_1,0);
  if (lVar2 != 0) {
    uVar1 = UnityEngine_GameObject__get_activeInHierarchy(lVar2,0);
    if ((uVar1 & 1) == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1a8);
      uVar4 = *(undefined8 *)(*param_1 + 0x1b0);
      *(float *)(param_1 + 8) = (float)param_2;
                    /* WARNING: Could not recover jumptable at 0x0452bf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,uVar4);
      return;
    }
    DG_Tweening_TweenExtensions__Kill(param_1[10],0,0);
    lVar2 = param_1[6];
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    if (lVar2 != 0) {
      lVar3 = *(long *)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Transform__set_localScale
                (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                 *(undefined4 *)(lVar3 + 0x14),lVar2,0);
      lVar2 = param_1[6];
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      uVar4 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
      uVar4 = DG_Tweening_ShortcutExtensions__DOPunchScale
                        ((float)uVar4 * 0.05,(float)((ulong)uVar4 >> 0x20) * 0.05,
                         *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14) * 0.05,0x3e800000,
                         0x3f800000,lVar2,10,0);
      lVar2 = FUN_04d9656c(uVar4,1,DAT_091dc048);
      param_1[10] = lVar2;
      thunk_FUN_03f5d7b8(param_1 + 10,lVar2);
      uVar4 = Utilities_UINumberCounterAbstract__IETweenCurrentCount(param_1,param_2,param_3);
      lVar2 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar4,0);
      param_1[9] = lVar2;
      thunk_FUN_03f5d7b8(param_1 + 9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

