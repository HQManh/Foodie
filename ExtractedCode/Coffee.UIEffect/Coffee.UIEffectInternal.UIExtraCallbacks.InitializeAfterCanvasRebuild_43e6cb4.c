// rea decompile_all
// name: Coffee.UIEffectInternal.UIExtraCallbacks$$InitializeAfterCanvasRebuild
// address: 0x43e6cb4
// body: available
// range: 0x43e6cb4-0x43e6e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e6e48 to 0x898fa64 UnityEngine.Canvas$$add_willRenderCanvases (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43e6e4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffectInternal_UIExtraCallbacks__InitializeAfterCanvasRebuild(void)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if ((DAT_09517d7c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182388);
    FUN_03f5c2a4(&DAT_09173098);
    FUN_03f5c2a4(&DAT_091dc958);
    FUN_03f5c2a4(&DAT_0918c3c8);
    FUN_03f5c2a4(&DAT_0918eb28);
    FUN_03f5c2a4(&DAT_0921d5e8);
    DAT_09517d7c = 1;
  }
  if (*(int *)(DAT_0918c3c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  pcVar3 = *(char **)(DAT_0918c3c8 + 0xb8);
  if (*pcVar3 != '\0') {
    return;
  }
  if (*(int *)(DAT_0918c3c8 + 0xe4) == 0) {
    FUN_03f5c424();
    pcVar3 = *(char **)(DAT_0918c3c8 + 0xb8);
  }
  *pcVar3 = '\x01';
  if (*(int *)(DAT_09182388 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_UI_CanvasUpdateRegistry__IsRebuildingLayout(0);
  uVar2 = DAT_09173098;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = System_Type__GetTypeFromHandle(uVar2,0);
  if ((lVar1 != 0) && (lVar1 = System_Type__GetProperty(lVar1,DAT_0921d5e8,0x28,0), lVar1 != 0)) {
    System_Reflection_PropertyInfo__GetValue(lVar1,0,0);
    uVar2 = thunk_FUN_03f9944c(DAT_0918eb28);
    UnityEngine_Canvas_WillRenderCanvases___ctor(uVar2,0,DAT_091dc958,0);
    UnityEngine_Canvas__remove_willRenderCanvases(uVar2,0);
    uVar2 = thunk_FUN_03f9944c(DAT_0918eb28);
    UnityEngine_Canvas_WillRenderCanvases___ctor(uVar2,0,DAT_091dc958,0);
    UnityEngine_Canvas__add_willRenderCanvases(uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

