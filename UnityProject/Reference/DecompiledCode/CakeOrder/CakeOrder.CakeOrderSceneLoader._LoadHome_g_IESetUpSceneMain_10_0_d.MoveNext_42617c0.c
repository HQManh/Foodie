// rea decompile_all
// name: CakeOrder.CakeOrderSceneLoader.<<LoadHome>g__IESetUpSceneMain|10_0>d$$MoveNext
// address: 0x42617c0
// body: available
// range: 0x42617c0-0x426198b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4261988 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_CakeOrderSceneLoader_<<LoadHome>g__IESetUpSceneMain_10_0>d__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_09516f7f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b4cf8);
    FUN_03f5c2a4(&DAT_091b4d00);
    DAT_09516f7f = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    lVar2 = *(long *)(DAT_091b4cf8 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_04261988;
    CakeOrder_BaseUI_SceneMainUI__Show(**(long **)(lVar2 + 0xb8),0);
LAB_0426195c:
    uVar4 = 0;
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    else {
      if (iVar1 != 0) goto LAB_0426195c;
      lVar2 = *(long *)(DAT_091b48d0 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_04261988;
      CakeOrder_AudioManagerCakeOrder__SetSoundTimeScale(0x3f800000);
    }
    uVar3 = FUN_05a8f088(DAT_091b4d00);
    if ((uVar3 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar4 = 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      lVar2 = *(long *)(DAT_091b4cf8 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_04261988:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar5 = CakeOrder_BaseUI_SceneMainUI__SetUp(**(long **)(lVar2 + 0xb8),0);
      uVar4 = Cysharp_Threading_Tasks_UniTaskExtensions__ToCoroutine(auVar5._0_8_,auVar5._8_8_,0,0);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar4);
      uVar4 = 1;
      *(undefined4 *)(param_1 + 0x10) = 2;
    }
  }
  return uVar4;
}

