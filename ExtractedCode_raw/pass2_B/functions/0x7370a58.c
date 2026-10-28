// rea decompile_all
// name: MaxSdkAndroid$$GetSafeAreaInsets
// address: 0x7370a58
// body: available
// range: 0x7370a58-0x7370c0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7370c04 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7370c08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 MaxSdkAndroid__GetSafeAreaInsets(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  float fVar10;
  
  if ((DAT_0952092a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bfac0);
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_09187f20);
    FUN_03f5c2a4(&DAT_09187f38);
    FUN_03f5c2a4(&DAT_09192748);
    FUN_03f5c2a4(&DAT_0921c510);
    DAT_0952092a = 1;
  }
  if (*(int *)(DAT_09187f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = DAT_091c0270;
  lVar4 = *(long *)(DAT_091c0270 + 0x38);
  lVar9 = **(long **)(DAT_09187f20 + 0xb8);
  if (lVar4 == 0) {
    FUN_03f95ac8(DAT_091c0270);
    lVar4 = *(long *)(lVar2 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (lVar9 != 0) {
    lVar2 = FUN_04cc9c38(lVar9,DAT_0921c510,**(undefined8 **)(lVar2 + 0xb8),DAT_091bfac0);
    if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187f38);
    }
    fVar10 = (float)MaxSdkUtils__GetScreenDensity();
    if (lVar2 != 0) {
      iVar1 = -0x80000000;
      if (fVar10 != INFINITY) {
        iVar1 = (int)fVar10;
      }
      uVar6 = (uint)*(ulong *)(lVar2 + 0x18);
      if (0 < (int)uVar6) {
        uVar5 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
        uVar7 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        piVar8 = (int *)(lVar2 + 0x20);
        do {
          if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar5 = uVar5 - 1;
          uVar7 = uVar7 - 1;
          *piVar8 = *piVar8 * iVar1;
          piVar8 = piVar8 + 1;
        } while (uVar5 != 0);
      }
      uVar3 = thunk_FUN_03f9944c(DAT_09192748);
      MaxSdkBase_SafeAreaInsets___ctor(uVar3,lVar2);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

