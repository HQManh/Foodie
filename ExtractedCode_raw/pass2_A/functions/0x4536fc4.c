// rea decompile_all
// name: DG.Tweening.DOTween$$Clear
// address: 0x4536fc4
// body: available
// range: 0x4536fc4-0x4537143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x453712c to 0x4571988 DG.Tweening.Core.DOTweenComponent$$DestroyInstance (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4537140 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTween__Clear(ulong param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_0951868b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091b1180);
    FUN_03f5c2a4(&DAT_0918c158);
    DAT_0951868b = 1;
  }
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  DG_Tweening_Core_TweenManager__PurgeAll(param_2 & 1,0);
  DG_Tweening_Plugins_Core_PluginsManager__PurgeAll(0);
  if ((param_1 & 1) != 0) {
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = NEON_fmov(0x3f800000,4);
    lVar3 = *(long *)(DAT_09183190 + 0xb8);
    *(undefined1 *)(lVar3 + 0x90) = 0;
    *(undefined1 *)(lVar3 + 8) = 0;
    *(undefined1 *)(lVar3 + 0x14) = 0;
    *(undefined8 *)(lVar3 + 0xc) = 2;
    *(undefined1 *)(lVar3 + 0x38) = 1;
    *(undefined8 *)(lVar3 + 0x18) = uVar5;
    *(undefined1 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x24) = 0x3e19999a;
    DG_Tweening_DOTween__set_logBehaviour(2);
    puVar2 = (undefined8 *)(*(long *)(DAT_09183190 + 0xb8) + 0x30);
    *puVar2 = 0;
    thunk_FUN_03f5d7b8(puVar2,0);
    lVar4 = *(long *)(DAT_09183190 + 0xb8);
    *(undefined4 *)(lVar4 + 0x54) = 6;
    *(undefined4 *)(lVar4 + 0x44) = 3;
    lVar3 = *(long *)(lVar4 + 0x88);
    *(undefined8 *)(lVar4 + 0x58) = 0x3fd9cd60;
    *(undefined4 *)(lVar4 + 0x3c) = 0;
    *(undefined1 *)(lVar4 + 0x40) = 0;
    *(undefined4 *)(lVar4 + 0x4c) = 0;
    *(undefined1 *)(lVar4 + 0x48) = 1;
    *(undefined1 *)(lVar4 + 0x50) = 0;
    *(undefined4 *)(lVar4 + 0x6c) = 0;
    *(undefined4 *)(lVar4 + 0x70) = 0;
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x18);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
      }
      DG_Tweening_Core_DOTweenComponent__DestroyInstance(0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

