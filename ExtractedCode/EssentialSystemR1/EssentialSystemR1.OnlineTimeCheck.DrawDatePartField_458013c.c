// rea decompile_all
// name: EssentialSystemR1.OnlineTimeCheck$$DrawDatePartField
// address: 0x458013c
// body: available
// range: 0x458013c-0x4580517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4580510 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4580514 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void EssentialSystemR1_OnlineTimeCheck__DrawDatePartField
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               uint param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint local_44;
  
  if ((DAT_09518920 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c01c8);
    FUN_03f5c2a4(&DAT_09193048);
    FUN_03f5c2a4(&DAT_0917ff68);
    FUN_03f5c2a4(&DAT_09184af8);
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09209ca8);
    DAT_09518920 = 1;
  }
  lVar2 = FUN_03f5c394(DAT_0917ff68,1);
  uVar3 = UnityEngine_GUILayout__ExpandWidth(1,0);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_04580514:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    thunk_FUN_03f5d7b8();
    UnityEngine_GUILayout__BeginVertical(lVar2,0);
    if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = EssentialSystemR1_OnlineTimeCheck__CaptionStyle();
    lVar2 = DAT_091c01c8;
    lVar7 = *(long *)(DAT_091c01c8 + 0x38);
    if (lVar7 == 0) {
      FUN_03f95ac8(DAT_091c01c8);
      lVar7 = *(long *)(lVar2 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    UnityEngine_GUILayout__Label(param_7,uVar3,**(undefined8 **)(lVar2 + 0xb8),0);
    local_44 = param_6;
    uVar3 = FUN_03f5c42c(DAT_09193048,&local_44);
    uVar3 = System_String__Format(DAT_09209ca8,uVar3,0);
    if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184ac0);
    }
    UnityEngine_GUI__SetNextControlName(uVar3,0);
    lVar2 = *(long *)(param_5 + 0x70);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) <= param_6) goto LAB_04580514;
      lVar7 = (long)(int)param_6;
      uVar8 = *(undefined8 *)(lVar2 + lVar7 * 8 + 0x20);
      uVar3 = EssentialSystemR1_OnlineTimeCheck__InputFieldStyle();
      lVar2 = FUN_03f5c394(DAT_0917ff68,1);
      uVar4 = UnityEngine_GUILayout__ExpandWidth(1,0);
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x18) == 0) goto LAB_04580514;
        *(undefined8 *)(lVar2 + 0x20) = uVar4;
        thunk_FUN_03f5d7b8();
        uVar3 = UnityEngine_GUILayout__TextField(uVar8,uVar3,lVar2,0);
        if (*(int *)(DAT_09184af8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09184af8);
        }
        fVar9 = (float)UnityEngine_GUILayoutUtility__GetLastRect(0);
        fVar11 = param_2;
        lVar2 = UnityEngine_Event__get_current(0);
        if (lVar2 != 0) {
          iVar1 = UnityEngine_Event__get_type(lVar2,0);
          if (iVar1 == 0) {
            lVar2 = UnityEngine_Event__get_current(0);
            if (lVar2 == 0) goto LAB_04580510;
            fVar10 = (float)UnityEngine_Event__get_mousePosition(lVar2,0);
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (DAT_09518541 == '\0') {
              FUN_03f5c2a4(&DAT_09189c30);
              DAT_09518541 = '\x01';
            }
            if (fVar9 <= fVar10) {
              if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if ((fVar10 < param_3 + fVar9) && (param_2 <= fVar11)) {
                if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (fVar11 < param_4 + param_2) {
                  EssentialSystemR1_OnlineTimeCheck__SelectDatePart(param_5,param_6);
                }
              }
            }
          }
          lVar2 = *(long *)(param_5 + 0x70);
          if (lVar2 != 0) {
            if (param_6 < *(uint *)(lVar2 + 0x18)) {
              uVar5 = System_String__op_Inequality
                                (uVar3,*(undefined8 *)(lVar2 + lVar7 * 8 + 0x20),0);
              if ((uVar5 & 1) != 0) {
                lVar2 = *(long *)(param_5 + 0x70);
                if (lVar2 == 0) goto LAB_04580510;
                if (*(uint *)(lVar2 + 0x18) <= param_6) goto LAB_04580514;
                puVar6 = (undefined8 *)(lVar2 + lVar7 * 8 + 0x20);
                *puVar6 = uVar3;
                thunk_FUN_03f5d7b8(puVar6,uVar3);
                EssentialSystemR1_OnlineTimeCheck__TryApplyDatePartText(param_5);
              }
              UnityEngine_GUILayout__EndVertical(0);
              return;
            }
            goto LAB_04580514;
          }
        }
      }
    }
  }
LAB_04580510:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

