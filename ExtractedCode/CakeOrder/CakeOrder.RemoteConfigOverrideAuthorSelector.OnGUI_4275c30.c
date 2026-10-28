// rea decompile_all
// name: CakeOrder.RemoteConfigOverrideAuthorSelector$$OnGUI
// address: 0x4275c30
// body: available
// range: 0x4275c30-0x4276207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42761dc to 0x86c929c UnityEngine.GUILayout$$EndArea (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4276200 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4276204 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_RemoteConfigOverrideAuthorSelector__OnGUI(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  
  if ((DAT_09517058 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c01c8);
    FUN_03f5c2a4(&DAT_09184ac8);
    FUN_03f5c2a4(&DAT_0917ff68);
    FUN_03f5c2a4(&DAT_09184b20);
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09189e78);
    FUN_03f5c2a4(&DAT_0920ca00);
    FUN_03f5c2a4(&DAT_092004e8);
    FUN_03f5c2a4(&DAT_0920e950);
    DAT_09517058 = 1;
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    return;
  }
  iVar1 = UnityEngine_Screen__get_height(0);
  fVar10 = 640.0;
  if ((float)iVar1 + -40.0 <= 640.0) {
    fVar10 = (float)iVar1 + -40.0;
  }
  iVar1 = UnityEngine_Screen__get_width(0);
  iVar2 = UnityEngine_Screen__get_height(0);
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189c30);
  }
  if (*(int *)(DAT_09184ac8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar12 = ((float)iVar1 + -920.0) * 0.5;
  fVar14 = ((float)iVar2 - fVar10) * 0.5;
  uVar7 = *(undefined8 *)(*(long *)(DAT_09184ac8 + 0xb8) + 0x20);
  if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09184ac0);
  }
  UnityEngine_GUI__Box(fVar12,fVar14,0x44660000,fVar10,uVar7,0);
  UnityEngine_GUILayout__BeginArea(fVar12 + 24.0,fVar14 + 20.0,0x445a0000,fVar10 + -40.0,0);
  lVar3 = UnityEngine_GUI__get_skin(0);
  if (lVar3 != 0) {
    uVar7 = UnityEngine_GUISkin__get_label(lVar3,0);
    lVar3 = thunk_FUN_03f9944c(DAT_09184b20);
    UnityEngine_GUIStyle___ctor(lVar3,uVar7,0);
    if (lVar3 != 0) {
      UnityEngine_GUIStyle__set_alignment(lVar3,4,0);
      UnityEngine_GUIStyle__set_fontSize(lVar3,0x28,0);
      UnityEngine_GUIStyle__set_fontStyle(lVar3,1,0);
      lVar4 = DAT_091c01c8;
      lVar5 = *(long *)(DAT_091c01c8 + 0x38);
      if (lVar5 == 0) {
        FUN_03f95ac8(DAT_091c01c8);
        lVar5 = *(long *)(lVar4 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      UnityEngine_GUILayout__Label(DAT_0920ca00,lVar3,**(undefined8 **)(lVar4 + 0xb8),0);
      UnityEngine_GUILayout__Space(0x41000000,0);
      lVar3 = UnityEngine_GUI__get_skin(0);
      if (lVar3 != 0) {
        uVar7 = UnityEngine_GUISkin__get_label(lVar3,0);
        lVar3 = thunk_FUN_03f9944c(DAT_09184b20);
        UnityEngine_GUIStyle___ctor(lVar3,uVar7,0);
        if (lVar3 != 0) {
          UnityEngine_GUIStyle__set_alignment(lVar3,4,0);
          UnityEngine_GUIStyle__set_fontSize(lVar3,0x1c,0);
          lVar4 = DAT_091c01c8;
          lVar5 = *(long *)(DAT_091c01c8 + 0x38);
          if (lVar5 == 0) {
            FUN_03f95ac8(DAT_091c01c8);
            lVar5 = *(long *)(lVar4 + 0x38);
          }
          lVar5 = *(long *)(lVar5 + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          if (*(int *)(lVar5 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          UnityEngine_GUILayout__Label(DAT_0920e950,lVar3,**(undefined8 **)(lVar4 + 0xb8),0);
          UnityEngine_GUILayout__Space(0x41600000,0);
          lVar3 = DAT_091c01c8;
          uVar11 = *(undefined4 *)(param_1 + 0x2c);
          uVar13 = *(undefined4 *)(param_1 + 0x30);
          lVar4 = *(long *)(DAT_091c01c8 + 0x38);
          if (lVar4 == 0) {
            FUN_03f95ac8(DAT_091c01c8);
            lVar4 = *(long *)(lVar3 + 0x38);
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          uVar11 = UnityEngine_GUILayout__BeginScrollView(uVar11,**(undefined8 **)(lVar3 + 0xb8),0);
          *(undefined4 *)(param_1 + 0x2c) = uVar11;
          *(undefined4 *)(param_1 + 0x30) = uVar13;
          lVar3 = UnityEngine_GUI__get_skin(0);
          if (lVar3 != 0) {
            uVar7 = UnityEngine_GUISkin__get_button(lVar3,0);
            lVar3 = thunk_FUN_03f9944c(DAT_09184b20);
            UnityEngine_GUIStyle___ctor(lVar3,uVar7,0);
            if (lVar3 != 0) {
              UnityEngine_GUIStyle__set_fontSize(lVar3,0x20,0);
              UnityEngine_GUIStyle__set_alignment(lVar3,4,0);
              if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar4 = **(long **)(DAT_09189e78 + 0xb8);
              if (lVar4 != 0) {
                if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
                  uVar9 = 0;
                  uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
                  do {
                    if (uVar6 <= uVar9) goto LAB_04276200;
                    uVar8 = *(undefined8 *)(lVar4 + 0x20 + uVar9 * 8);
                    lVar5 = FUN_03f5c394(DAT_0917ff68,1);
                    uVar7 = UnityEngine_GUILayout__Height(0x42580000,0);
                    if (lVar5 == 0) goto LAB_04276204;
                    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_04276200;
                    *(undefined8 *)(lVar5 + 0x20) = uVar7;
                    thunk_FUN_03f5d7b8();
                    uVar6 = UnityEngine_GUILayout__Button(uVar8,lVar3,lVar5,0);
                    if ((uVar6 & 1) != 0) {
                      CakeOrder_RemoteConfigOverrideAuthorSelector__SelectAuthor(param_1,uVar8);
                    }
                    UnityEngine_GUILayout__Space(0x41000000,0);
                    uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
                    uVar9 = uVar9 + 1;
                  } while ((long)uVar9 < (long)(int)*(uint *)(lVar4 + 0x18));
                }
                lVar4 = FUN_03f5c394(DAT_0917ff68,1);
                uVar7 = UnityEngine_GUILayout__Height(0x42580000,0);
                if (lVar4 != 0) {
                  if (*(int *)(lVar4 + 0x18) != 0) {
                    *(undefined8 *)(lVar4 + 0x20) = uVar7;
                    thunk_FUN_03f5d7b8();
                    uVar9 = UnityEngine_GUILayout__Button(DAT_092004e8,lVar3,lVar4,0);
                    if ((uVar9 & 1) != 0) {
                      CakeOrder_RemoteConfigOverrideAuthorSelector__SelectDefault(param_1);
                    }
                    UnityEngine_GUILayout__EndScrollView(0);
                    UnityEngine_GUILayout__EndArea(0);
                    return;
                  }
LAB_04276200:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04276204:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

