// rea decompile_all
// name: Coffee.UIEffects.TmpProxy$$InitializeOnLoad
// address: 0x43f838c
// body: available
// range: 0x43f838c-0x43f866b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f8664 to 0x43e6ab4 Coffee.UIEffectInternal.UIExtraCallbacks$$add_onAfterCanvasRebuild (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f8668 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_TmpProxy__InitializeOnLoad(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_09517e1f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174858);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091a77e8);
    FUN_03f5c2a4(&DAT_09184e30);
    FUN_03f5c2a4(&DAT_0918b838);
    FUN_03f5c2a4(&DAT_0918be78);
    FUN_03f5c2a4(&DAT_091f0e88);
    FUN_03f5c2a4(&DAT_091f0e90);
    FUN_03f5c2a4(&DAT_091f0e98);
    FUN_03f5c2a4(&DAT_09195138);
    FUN_03f5c2a4(&DAT_0918c3c8);
    DAT_09517e1f = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_0918be78);
  Coffee_UIEffects_TmpProxy___ctor();
  if (*(int *)(DAT_09184e30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Coffee_UIEffects_GraphicProxy__Register(uVar1);
  if (*(int *)(DAT_0918b838 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918b838);
  }
  lVar4 = *(long *)(*(long *)(DAT_0918b838 + 0xb8) + 0x58);
  if (*(int *)(DAT_09195138 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = *(undefined8 **)(DAT_09195138 + 0xb8);
  lVar5 = puVar3[1];
  if (lVar5 == 0) {
    if (*(int *)(DAT_09195138 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar3 = *(undefined8 **)(DAT_09195138 + 0xb8);
    }
    uVar1 = *puVar3;
    lVar5 = thunk_FUN_03f9944c(DAT_09174858);
    FUN_070a8c30(lVar5,uVar1,DAT_091f0e88,0);
    plVar2 = (long *)(*(long *)(DAT_09195138 + 0xb8) + 8);
    *plVar2 = lVar5;
    thunk_FUN_03f5d7b8(plVar2,lVar5);
  }
  if (lVar4 != 0) {
    FUN_0523ada8(lVar4,lVar5,DAT_091a77e8);
    if (*(int *)(DAT_09195138 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = *(undefined8 **)(DAT_09195138 + 0xb8);
    lVar4 = puVar3[2];
    if (lVar4 == 0) {
      if (*(int *)(DAT_09195138 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar3 = *(undefined8 **)(DAT_09195138 + 0xb8);
      }
      uVar1 = *puVar3;
      lVar4 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(lVar4,uVar1,DAT_091f0e90,0);
      plVar2 = (long *)(*(long *)(DAT_09195138 + 0xb8) + 0x10);
      *plVar2 = lVar4;
      thunk_FUN_03f5d7b8(plVar2,lVar4);
    }
    if (*(int *)(DAT_0918c3c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Coffee_UIEffectInternal_UIExtraCallbacks__add_onBeforeCanvasRebuild(lVar4,0);
    if (*(int *)(DAT_09195138 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = *(undefined8 **)(DAT_09195138 + 0xb8);
    lVar4 = puVar3[3];
    if (lVar4 == 0) {
      if (*(int *)(DAT_09195138 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar3 = *(undefined8 **)(DAT_09195138 + 0xb8);
      }
      uVar1 = *puVar3;
      lVar4 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(lVar4,uVar1,DAT_091f0e98,0);
      plVar2 = (long *)(*(long *)(DAT_09195138 + 0xb8) + 0x18);
      *plVar2 = lVar4;
      thunk_FUN_03f5d7b8(plVar2,lVar4);
    }
    if (*(int *)(DAT_0918c3c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Coffee_UIEffectInternal_UIExtraCallbacks__add_onAfterCanvasRebuild(lVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

