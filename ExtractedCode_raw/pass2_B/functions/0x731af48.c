// rea decompile_all
// name: IapAdsSystem.InAppManager$$DrawFakePurchaseWindow
// address: 0x731af48
// body: available
// range: 0x731af48-0x731b27f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x731b274 to 0x86c7a08 UnityEngine.GUILayout$$Space (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x731b278 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731b27c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_InAppManager__DrawFakePurchaseWindow(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if ((DAT_09520565 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c01c8);
    FUN_03f5c2a4(&DAT_0917ff68);
    FUN_03f5c2a4(&DAT_09184b20);
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_091b3038);
    FUN_03f5c2a4(&DAT_092022c0);
    FUN_03f5c2a4(&DAT_0920c400);
    FUN_03f5c2a4(&DAT_0920ddd8);
    DAT_09520565 = 1;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar1 = FUN_057e0998(*(long *)(param_1 + 0xb0),0,DAT_091b3038);
    if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184ac0);
    }
    lVar2 = UnityEngine_GUI__get_skin(0);
    if (lVar2 != 0) {
      uVar3 = UnityEngine_GUISkin__get_label(lVar2,0);
      lVar2 = thunk_FUN_03f9944c(DAT_09184b20);
      UnityEngine_GUIStyle___ctor(lVar2,uVar3,0);
      if (lVar2 != 0) {
        UnityEngine_GUIStyle__set_fontSize(lVar2,0x10,0);
        UnityEngine_GUIStyle__set_wordWrap(lVar2,1,0);
        UnityEngine_GUILayout__Space(0x41000000,0);
        if (lVar1 != 0) {
          uVar3 = System_String__Concat(DAT_0920c400,*(undefined8 *)(lVar1 + 0x10),0);
          lVar4 = DAT_091c01c8;
          lVar6 = *(long *)(DAT_091c01c8 + 0x38);
          if (lVar6 == 0) {
            FUN_03f95ac8(DAT_091c01c8);
            lVar6 = *(long *)(lVar4 + 0x38);
          }
          lVar6 = *(long *)(lVar6 + 0x10);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03f95a6c();
          }
          if (*(int *)(lVar6 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          UnityEngine_GUILayout__Label(uVar3,lVar2,**(undefined8 **)(lVar4 + 0xb8),0);
          UnityEngine_GUILayout__FlexibleSpace(0);
          lVar2 = DAT_091c01c8;
          lVar4 = *(long *)(DAT_091c01c8 + 0x38);
          if (lVar4 == 0) {
            FUN_03f95ac8(DAT_091c01c8);
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
          UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar2 + 0xb8),0);
          lVar2 = FUN_03f5c394(DAT_0917ff68,1);
          uVar3 = UnityEngine_GUILayout__Height(0x42400000,0);
          if (lVar2 != 0) {
            if (*(int *)(lVar2 + 0x18) != 0) {
              *(undefined8 *)(lVar2 + 0x20) = uVar3;
              thunk_FUN_03f5d7b8();
              uVar5 = UnityEngine_GUILayout__Button(DAT_092022c0,lVar2,0);
              if ((uVar5 & 1) != 0) {
                IapAdsSystem_InAppManager__ResolveFakePurchase(param_1,lVar1,0);
              }
              UnityEngine_GUILayout__Space(0x41400000,0);
              lVar2 = FUN_03f5c394(DAT_0917ff68,1);
              uVar3 = UnityEngine_GUILayout__Height(0x42400000,0);
              if (lVar2 == 0) goto LAB_0731b278;
              if (*(int *)(lVar2 + 0x18) != 0) {
                *(undefined8 *)(lVar2 + 0x20) = uVar3;
                thunk_FUN_03f5d7b8();
                uVar5 = UnityEngine_GUILayout__Button(DAT_0920ddd8,lVar2,0);
                if ((uVar5 & 1) != 0) {
                  IapAdsSystem_InAppManager__ResolveFakePurchase(param_1,lVar1,1);
                }
                UnityEngine_GUILayout__EndHorizontal(0);
                UnityEngine_GUILayout__Space(0x41000000,0);
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
        }
      }
    }
  }
LAB_0731b278:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

