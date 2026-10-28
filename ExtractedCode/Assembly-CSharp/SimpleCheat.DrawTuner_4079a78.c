// rea decompile_all
// name: SimpleCheat$$DrawTuner
// address: 0x4079a78
// body: available
// range: 0x4079a78-0x407a69b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407a694 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x407a698 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void SimpleCheat__DrawTuner(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_84;
  float local_78;
  undefined4 local_74;
  
  if ((DAT_09515c33 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c01c8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09183ae0);
    FUN_03f5c2a4(&DAT_0917ff68);
    FUN_03f5c2a4(&DAT_09184fd0);
    FUN_03f5c2a4(&DAT_09184fd8);
    FUN_03f5c2a4(&DAT_09191248);
    FUN_03f5c2a4(&DAT_0918ac20);
    FUN_03f5c2a4(&DAT_09213d10);
    FUN_03f5c2a4(&DAT_0920a0f8);
    FUN_03f5c2a4(&DAT_09203a68);
    FUN_03f5c2a4(&DAT_0920a0f0);
    FUN_03f5c2a4(&DAT_09220830);
    FUN_03f5c2a4(&DAT_0921bb50);
    FUN_03f5c2a4(&DAT_091f9648);
    FUN_03f5c2a4(&DAT_09217558);
    FUN_03f5c2a4(&DAT_0921bb58);
    FUN_03f5c2a4(&DAT_092172d0);
    FUN_03f5c2a4(&DAT_09217550);
    FUN_03f5c2a4(&DAT_091f9640);
    FUN_03f5c2a4(&DAT_09213d18);
    FUN_03f5c2a4(&DAT_0921aaf0);
    FUN_03f5c2a4(&DAT_092134c8);
    FUN_03f5c2a4(&DAT_0920ac40);
    FUN_03f5c2a4(&DAT_091f9660);
    DAT_09515c33 = 1;
  }
  lVar1 = DAT_091c01c8;
  lVar6 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar6 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar6 = *(long *)(lVar1 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar1 + 0xb8),0);
  lVar1 = DAT_091c01c8;
  lVar6 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar6 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar6 = *(long *)(lVar1 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__Label(DAT_09203a68,**(undefined8 **)(lVar1 + 0xb8),0);
  lVar1 = FUN_03f5c394(DAT_0917ff68,1);
  uVar2 = UnityEngine_GUILayout__Width(0x41e00000,0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
LAB_0407a698:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    thunk_FUN_03f5d7b8();
    uVar3 = UnityEngine_GUILayout__Button(DAT_092134c8,lVar1,0);
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x21) = 0;
    }
    UnityEngine_GUILayout__EndHorizontal(0);
    if (*(int *)(DAT_09183ae0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09515cea == '\0') {
      FUN_03f5c2a4(&DAT_09183ae0);
      DAT_09515cea = '\x01';
    }
    if (*(int *)(DAT_09183ae0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_74 = CONCAT31(local_74._1_3_,*(undefined1 *)(*(long *)(DAT_09183ae0 + 0xb8) + 8));
    uVar2 = FUN_03f5c42c(DAT_09535400,&local_74);
    uVar2 = System_String__Format(DAT_092172d0,uVar2,0);
    if (DAT_09515ceb == '\0') {
      FUN_03f5c2a4(&DAT_09183ae0);
      DAT_09515ceb = '\x01';
    }
    if (*(int *)(DAT_09183ae0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_78 = (float)CONCAT31(local_78._1_3_,*(undefined1 *)(*(long *)(DAT_09183ae0 + 0xb8) + 10));
    uVar4 = FUN_03f5c42c(DAT_09535400,&local_78);
    uVar4 = System_String__Format(DAT_09217550,uVar4,0);
    if (DAT_09515cec == '\0') {
      FUN_03f5c2a4(&DAT_09183ae0);
      DAT_09515cec = '\x01';
    }
    if (*(int *)(DAT_09183ae0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_84 = CONCAT31(local_84._1_3_,*(undefined1 *)(*(long *)(DAT_09183ae0 + 0xb8) + 0xb));
    uVar5 = FUN_03f5c42c(DAT_09535400,&local_84);
    uVar5 = System_String__Format(DAT_0921bb50,uVar5,0);
    uVar2 = System_String__Concat(uVar2,uVar4,uVar5,0);
    lVar1 = DAT_091c01c8;
    lVar6 = *(long *)(DAT_091c01c8 + 0x38);
    if (lVar6 == 0) {
      FUN_03f95ac8(DAT_091c01c8);
      lVar6 = *(long *)(lVar1 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    UnityEngine_GUILayout__Label(uVar2,**(undefined8 **)(lVar1 + 0xb8),0);
    UnityEngine_GUILayout__Space(0x40c00000,0);
    uVar13 = *(undefined4 *)(param_1 + 0x24);
    if (*(int *)(DAT_0918ac20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar13 = SimpleCheat__Row(uVar13,0,0x3f800000,DAT_09217558,DAT_091f9640);
    *(undefined4 *)(param_1 + 0x24) = uVar13;
    uVar13 = SimpleCheat__Row(*(undefined4 *)(param_1 + 0x28),0,0x3f800000,DAT_0921bb58,DAT_091f9640
                             );
    *(undefined4 *)(param_1 + 0x28) = uVar13;
    uVar13 = SimpleCheat__Row(*(undefined4 *)(param_1 + 0x2c),0,0x3f000000,DAT_0921aaf0,DAT_091f9648
                             );
    *(undefined4 *)(param_1 + 0x2c) = uVar13;
    lVar1 = DAT_091c01c8;
    lVar6 = *(long *)(DAT_091c01c8 + 0x38);
    if (lVar6 == 0) {
      FUN_03f95ac8(DAT_091c01c8);
      lVar6 = *(long *)(lVar1 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar1 + 0xb8),0);
    if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09515ced == '\0') {
      FUN_03f5c2a4(&DAT_09184fd0);
      DAT_09515ced = '\x01';
    }
    if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar9 = (float)SimpleCheat__Row(*(undefined4 *)(*(long *)(DAT_09184fd0 + 0xb8) + 0x28),0,
                                    0x3f800000,DAT_09220830,DAT_091f9640);
    lVar1 = FUN_03f5c394(DAT_0917ff68,1);
    uVar2 = UnityEngine_GUILayout__Width(0x42300000,0);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) == 0) goto LAB_0407a698;
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      thunk_FUN_03f5d7b8();
      uVar3 = UnityEngine_GUILayout__Button(DAT_091f9660,lVar1,0);
      fVar14 = 0.3;
      if ((uVar3 & 1) == 0) {
        fVar14 = fVar9;
      }
      UnityEngine_GUILayout__EndHorizontal(0);
      if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09515ced == '\0') {
        FUN_03f5c2a4(&DAT_09184fd0);
        DAT_09515ced = '\x01';
      }
      if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar9 = *(float *)(*(long *)(DAT_09184fd0 + 0xb8) + 0x28);
      if (DAT_09515cee == '\0') {
        FUN_03f5c2a4(&DAT_09187e98);
        DAT_09515cee = '\x01';
      }
      fVar11 = ABS(fVar9);
      fVar10 = ABS(fVar14);
      if (ABS(fVar14) <= fVar11) {
        fVar10 = fVar11;
      }
      fVar12 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
      fVar11 = fVar10 * 1e-06;
      if (fVar10 * 1e-06 <= fVar12) {
        fVar11 = fVar12;
      }
      if (fVar11 <= ABS(fVar9 - fVar14)) {
        if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Lofelt_NiceVibrations_HapticController__set_outputLevel(fVar14,0);
      }
      lVar1 = FUN_03f5c394(DAT_0917ff68,1);
      uVar2 = UnityEngine_GUILayout__Height(0x42180000,0);
      if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x18) == 0) goto LAB_0407a698;
        *(undefined8 *)(lVar1 + 0x20) = uVar2;
        thunk_FUN_03f5d7b8();
        uVar3 = UnityEngine_GUILayout__Button(DAT_0920a0f0,lVar1,0);
        if ((uVar3 & 1) != 0) {
          uVar13 = *(undefined4 *)(param_1 + 0x24);
          uVar15 = *(undefined4 *)(param_1 + 0x28);
          uVar16 = *(undefined4 *)(param_1 + 0x2c);
          if (*(int *)(DAT_09184fd8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          Lofelt_NiceVibrations_HapticPatterns__PlayConstant(uVar13,uVar15,uVar16,0);
          local_74 = *(undefined4 *)(param_1 + 0x24);
          uVar2 = FUN_03f5c42c(DAT_09535450,&local_74);
          local_78 = *(float *)(param_1 + 0x28);
          uVar4 = FUN_03f5c42c(DAT_09535450,&local_78);
          local_84 = *(undefined4 *)(param_1 + 0x2c);
          uVar5 = FUN_03f5c42c(DAT_09535450,&local_84);
          uVar2 = System_String__Format(DAT_09213d10,uVar2,uVar4,uVar5,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__Log(uVar2,0);
        }
        lVar1 = DAT_091c01c8;
        lVar6 = *(long *)(DAT_091c01c8 + 0x38);
        if (lVar6 == 0) {
          FUN_03f95ac8(DAT_091c01c8);
          lVar6 = *(long *)(lVar1 + 0x38);
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03f95a6c();
        }
        uVar3 = UnityEngine_GUILayout__Button(DAT_0920a0f8,**(undefined8 **)(lVar1 + 0xb8),0);
        if ((uVar3 & 1) != 0) {
          uVar13 = *(undefined4 *)(param_1 + 0x24);
          uVar15 = *(undefined4 *)(param_1 + 0x28);
          if (*(int *)(DAT_09184fd8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          Lofelt_NiceVibrations_HapticPatterns__PlayEmphasis(uVar13,uVar15,0);
        }
        UnityEngine_GUILayout__Space(0x40c00000,0);
        lVar1 = DAT_091c01c8;
        lVar6 = *(long *)(DAT_091c01c8 + 0x38);
        if (lVar6 == 0) {
          FUN_03f95ac8(DAT_091c01c8);
          lVar6 = *(long *)(lVar1 + 0x38);
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03f95a6c();
        }
        UnityEngine_GUILayout__Label(DAT_0920ac40,**(undefined8 **)(lVar1 + 0xb8),0);
        iVar8 = 0;
        while( true ) {
          if (*(int *)(DAT_0918ac20 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar1 = DAT_091c01c8;
          if (**(long **)(DAT_0918ac20 + 0xb8) == 0) break;
          lVar6 = (long)iVar8;
          if (*(int *)(**(long **)(DAT_0918ac20 + 0xb8) + 0x18) <= iVar8) {
            return;
          }
          lVar7 = *(long *)(DAT_091c01c8 + 0x38);
          if (lVar7 == 0) {
            FUN_03f95ac8(DAT_091c01c8);
            lVar7 = *(long *)(lVar1 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar1 + 0xb8),0);
          if (iVar8 < 0x7ffffffd) {
            do {
              if (*(int *)(DAT_0918ac20 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar1 = **(long **)(DAT_0918ac20 + 0xb8);
              if (lVar1 == 0) goto LAB_0407a694;
              if (*(int *)(lVar1 + 0x18) <= lVar6) break;
              if (*(int *)(DAT_0918ac20 + 0xe4) == 0) {
                FUN_03f5c424();
                lVar1 = **(long **)(DAT_0918ac20 + 0xb8);
                if (lVar1 == 0) goto LAB_0407a694;
              }
              if (*(uint *)(lVar1 + 0x18) <= (uint)lVar6) goto LAB_0407a698;
              uVar13 = *(undefined4 *)(lVar1 + lVar6 * 4 + 0x20);
              uVar2 = SimpleCheat__ShortName(uVar13);
              lVar1 = FUN_03f5c394(DAT_0917ff68,1);
              uVar4 = UnityEngine_GUILayout__Height(0x4200000042000000,0);
              if (lVar1 == 0) goto LAB_0407a694;
              if (*(int *)(lVar1 + 0x18) == 0) goto LAB_0407a698;
              *(undefined8 *)(lVar1 + 0x20) = uVar4;
              thunk_FUN_03f5d7b8();
              uVar3 = UnityEngine_GUILayout__Button(uVar2,lVar1,0);
              if ((uVar3 & 1) != 0) {
                if (*(int *)(DAT_09184fd8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                Lofelt_NiceVibrations_HapticPatterns__PlayPreset(uVar13,0);
                local_74 = uVar13;
                uVar2 = FUN_03f5c42c(DAT_09191248,&local_74);
                local_78 = (float)Lofelt_NiceVibrations_HapticPatterns__GetPresetDuration(uVar13,0);
                local_78 = local_78 * 1000.0;
                uVar4 = FUN_03f5c42c(DAT_09535450,&local_78);
                uVar2 = System_String__Format(DAT_09213d18,uVar2,uVar4,0);
                if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_091835d0);
                }
                UnityEngine_Debug__Log(uVar2,0);
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 < iVar8 + 3);
          }
          UnityEngine_GUILayout__EndHorizontal(0);
          iVar8 = iVar8 + 3;
        }
      }
    }
  }
LAB_0407a694:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

