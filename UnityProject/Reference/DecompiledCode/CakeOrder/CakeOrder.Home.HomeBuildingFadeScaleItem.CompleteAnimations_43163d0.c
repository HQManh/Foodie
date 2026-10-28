// rea decompile_all
// name: CakeOrder.Home.HomeBuildingFadeScaleItem$$CompleteAnimations
// address: 0x43163d0
// body: available
// range: 0x43163d0-0x4316493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431648c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4316490 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeBuildingFadeScaleItem__CompleteAnimations(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if ((DAT_095175f5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095175f5 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if ((lVar3 != 0) && (0 < (int)*(ulong *)(lVar3 + 0x18))) {
    uVar4 = 0;
    uVar1 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    do {
      if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar2 = *(long *)(lVar3 + 0x20 + uVar4 * 8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Inequality(lVar2,0,0);
      if ((uVar1 & 1) != 0) {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar2 + 0x40) != 0) {
          DG_Tweening_TweenExtensions__Complete(*(long *)(lVar2 + 0x40),0);
        }
      }
      uVar1 = (ulong)*(uint *)(lVar3 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
  return;
}

