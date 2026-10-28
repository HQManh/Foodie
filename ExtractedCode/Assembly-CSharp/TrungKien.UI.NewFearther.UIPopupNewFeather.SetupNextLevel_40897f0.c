// rea decompile_all
// name: TrungKien.UI.NewFearther.UIPopupNewFeather$$SetupNextLevel
// address: 0x40897f0
// body: available
// range: 0x40897f0-0x4089f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4089b84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4089e18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4089f74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4089f78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4089f7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4089f80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4089f84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4089f88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4089f90 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04089e94) */
/* WARNING: Removing unreachable block (ram,0x04089f8c) */
/* WARNING: Removing unreachable block (ram,0x04089c08) */

undefined4 TrungKien_UI_NewFearther_UIPopupNewFeather__SetupNextLevel(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_48;
  
  if ((DAT_09515cac & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ae9c0);
    FUN_03f5c2a4(&DAT_091ae9c8);
    FUN_03f5c2a4(&DAT_091ae9d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c470);
    FUN_03f5c2a4(&DAT_092144b8);
    DAT_09515cac = 1;
  }
  lVar7 = *(long *)(param_1 + 0x118);
  local_48 = 0;
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
    }
    if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = TrungKien_UI_NewFearther_UIPopupNewFeather__TryGetRestaurantOpenedByWonLevel(&local_48);
    if ((uVar3 & 1) != 0) {
      uVar12 = *(undefined8 *)(param_1 + 0xc0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0xc0) == 0) goto LAB_04089f88;
        lVar4 = TrungKien_UI_NewFearther_UINewFeartherConfig__FindRestaurantConfig
                          (*(long *)(param_1 + 0xc0),local_48);
        lVar7 = DAT_091ae9c0;
        if (lVar4 != 0) {
          lVar5 = *(long *)(param_1 + 0x118);
          if (lVar5 == 0) goto LAB_04089f88;
          lVar8 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_04089f88;
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            plVar9 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
            *plVar9 = lVar4;
            thunk_FUN_03f5d7b8(plVar9);
          }
          else {
            FUN_057e0c68(lVar5,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar9 = (long *)TrungKien_UI_NewFearther_UIPopupNewFeather__GetNextLevelNewToolIds();
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917a768) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04089a18;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a768,0);
LAB_04089a18:
      plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
joined_r0x04089a30:
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *plVar9;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09185b10) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04089a9c;
            }
            uVar3 = uVar3 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_04089a9c:
        uVar3 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        if ((uVar3 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_04089bfc;
          lVar7 = *plVar9;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 == 0) goto LAB_04089bd4;
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_04089bbc;
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *plVar9;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917ae48) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04089b00;
            }
            uVar3 = uVar3 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917ae48,0);
LAB_04089b00:
        uVar12 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        lVar4 = TrungKien_UI_NewFearther_UIPopupNewFeather__FindConfigByToolId(param_1,uVar12);
        lVar7 = DAT_091ae9c0;
      } while (lVar4 == 0);
      lVar5 = *(long *)(param_1 + 0x118);
      if (lVar5 != 0) {
        lVar8 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            plVar10 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
            *plVar10 = lVar4;
            thunk_FUN_03f5d7b8(plVar10);
          }
          else {
            FUN_057e0c68(lVar5,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          goto joined_r0x04089a30;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  goto LAB_04089f88;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar11 = piVar11 + 4;
    if (uVar3 == 0) break;
LAB_04089bbc:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_04089bf0;
    }
  }
LAB_04089bd4:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185a58,0);
LAB_04089bf0:
  (*(code *)*puVar6)(plVar9,puVar6[1]);
LAB_04089bfc:
  if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar9 = (long *)TrungKien_UI_NewFearther_UIPopupNewFeather__GetNextLevelNewObstacleKeys();
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917a768) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04089c74;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a768,0);
LAB_04089c74:
    plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
joined_r0x04089c8c:
    do {
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *plVar9;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09185b10) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04089d00;
            }
            uVar3 = uVar3 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_04089d00:
        uVar3 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        if ((uVar3 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_04089e88;
          lVar7 = *plVar9;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 == 0) goto LAB_04089e60;
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_04089e48;
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *plVar9;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917ae48) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04089d64;
            }
            uVar3 = uVar3 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917ae48,0);
LAB_04089d64:
        uVar12 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        uVar13 = *(undefined8 *)(param_1 + 0xc0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      } while ((uVar3 & 1) == 0);
      if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = TrungKien_UI_NewFearther_UINewFeartherConfig__FindObstacleConfig
                        (*(long *)(param_1 + 0xc0),uVar12);
      lVar7 = DAT_091ae9c0;
    } while (lVar4 == 0);
    lVar5 = *(long *)(param_1 + 0x118);
    if (lVar5 != 0) {
      lVar8 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          plVar10 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
          *plVar10 = lVar4;
          thunk_FUN_03f5d7b8(plVar10);
        }
        else {
          FUN_057e0c68(lVar5,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        goto joined_r0x04089c8c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_04089f88;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar11 = piVar11 + 4;
    if (uVar3 == 0) break;
LAB_04089e48:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_04089e7c;
    }
  }
LAB_04089e60:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185a58,0);
LAB_04089e7c:
  (*(code *)*puVar6)(plVar9,puVar6[1]);
LAB_04089e88:
  *(undefined1 *)(param_1 + 0x124) = 1;
  if (*(long *)(param_1 + 0x118) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x118) + 0x18) != 0) {
      TrungKien_UI_NewFearther_UIPopupNewFeather__ShowFeatherAt(param_1,0);
      return 1;
    }
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_092144b8,0);
    TrungKien_UI_NewFearther_UIPopupNewFeather__CollectCurrentFeather(param_1);
    plVar9 = *(long **)(param_1 + 0xd0);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x558))
                (plVar9,**(undefined8 **)(DAT_09535468 + 0xb8),*(undefined8 *)(*plVar9 + 0x560));
      plVar9 = *(long **)(param_1 + 0xd8);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x558))
                  (plVar9,**(undefined8 **)(DAT_09535468 + 0xb8),*(undefined8 *)(*plVar9 + 0x560));
        TrungKien_UI_NewFearther_UIPopupNewFeather__UpdateButtons(param_1);
        return 0;
      }
    }
  }
LAB_04089f88:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

