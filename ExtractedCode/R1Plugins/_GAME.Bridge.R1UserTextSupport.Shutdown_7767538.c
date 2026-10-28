// rea decompile_all
// name: _GAME.Bridge.R1UserTextSupport$$Shutdown
// address: 0x7767538
// body: available
// range: 0x7767538-0x7767b1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7767b10 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7767b14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7767b18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7767b1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1UserTextSupport__Shutdown(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  long local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09522c78 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091bf6b8);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_09197a50);
    FUN_03f5c2a4(&DAT_091a4658);
    FUN_03f5c2a4(&DAT_091a1d20);
    FUN_03f5c2a4(&DAT_091a1d28);
    FUN_03f5c2a4(&DAT_091a4660);
    FUN_03f5c2a4(&DAT_091a1d30);
    FUN_03f5c2a4(&DAT_091a4668);
    FUN_03f5c2a4(&DAT_091b09c8);
    FUN_03f5c2a4(&DAT_091aa518);
    FUN_03f5c2a4(&DAT_091aa520);
    FUN_03f5c2a4(&DAT_091b09d8);
    FUN_03f5c2a4(&DAT_091b09e0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d6d58);
    FUN_03f5c2a4(&DAT_09189998);
    FUN_03f5c2a4(&DAT_0918b7d0);
    DAT_09522c78 = 1;
  }
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_b0 = 0;
  local_f0 = 0;
  puStack_e8 = (undefined8 *)0x0;
  uStack_c8 = 0;
  local_d0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_c0 = 0;
  local_e0 = 0;
  if (*(int *)(DAT_09189998 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = *(long *)(DAT_09189998 + 0xb8);
  if (*(char *)(lVar6 + 0x30) == '\0') {
    return;
  }
  if (*(int *)(DAT_09189998 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar6 = *(long *)(DAT_09189998 + 0xb8);
  }
  uVar3 = DAT_09180e78;
  *(undefined1 *)(lVar6 + 0x30) = 0;
  uVar3 = thunk_FUN_03f9944c(uVar3);
  System_Action___ctor(uVar3,0,DAT_091d6d58,0);
  if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Application__remove_quitting(uVar3,0);
  if (*(int *)(DAT_0918b7d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = TMPro_TMP_Settings__get_fallbackFontAssets(0);
  if (lVar6 != 0) {
    if (*(int *)(DAT_09189998 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(*(long *)(DAT_09189998 + 0xb8) + 0x18);
    if (lVar4 == 0) goto LAB_07767b1c;
    FUN_057e185c(&local_80,lVar4,DAT_091b09d8);
    puStack_98 = puStack_78;
    local_a0 = local_80;
    local_90 = local_70;
    local_80 = 0;
    puStack_78 = &local_a0;
    while (uVar5 = FUN_071bd28c(&local_a0,DAT_091a4660), (uVar5 & 1) != 0) {
      FUN_057e2274(lVar6,local_90,DAT_091b09e0);
    }
    FUN_071bd288(&local_a0,DAT_091a4658);
  }
  if (*(int *)(DAT_09189998 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = *(long *)(DAT_09189998 + 0xb8);
  lVar4 = *(long *)(lVar6 + 0x18);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      lVar6 = *(long *)(DAT_09189998 + 0xb8);
    }
    if (*(long *)(lVar6 + 0x20) != 0) {
      FUN_057e185c(&local_80,*(long *)(lVar6 + 0x20),DAT_091b09d8);
      local_90 = local_70;
      puStack_98 = puStack_78;
      local_a0 = local_80;
      local_80 = 0;
      puStack_78 = &local_a0;
      while (uVar5 = FUN_071bd28c(&local_a0,DAT_091a4660), lVar6 = local_90, (uVar5 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Equality(lVar6,0,0);
        if ((uVar5 & 1) == 0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = TMPro_TMP_FontAsset__get_atlasTextures(lVar6,0);
          if (lVar4 != 0) {
            lVar4 = TMPro_TMP_FontAsset__get_atlasTextures(lVar6,0);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
              uVar5 = 0;
              uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
              do {
                if (uVar7 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                uVar3 = *(undefined8 *)(lVar4 + 0x20 + uVar5 * 8);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar7 = UnityEngine_Object__op_Inequality(uVar3,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  UnityEngine_Object__Destroy(uVar3,0);
                }
                uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
                uVar5 = uVar5 + 1;
              } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
            }
          }
          uVar3 = *(undefined8 *)(lVar6 + 0x88);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
          if ((uVar5 & 1) != 0) {
            uVar3 = *(undefined8 *)(lVar6 + 0x88);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Object__Destroy(uVar3,0);
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Object__Destroy(lVar6,0);
        }
      }
      FUN_071bd288(&local_a0,DAT_091a4658);
      if (*(int *)(DAT_09189998 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = *(long *)(DAT_09189998 + 0xb8);
      lVar4 = *(long *)(lVar6 + 0x20);
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x18);
        *(undefined4 *)(lVar4 + 0x18) = 0;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
          lVar6 = *(long *)(DAT_09189998 + 0xb8);
        }
        if (*(long *)(lVar6 + 0x28) != 0) {
          FUN_0564f950(&local_d0,*(long *)(lVar6 + 0x28),DAT_091aa520);
          while (uVar5 = FUN_0717ed58(&local_d0,DAT_091a1d28), (uVar5 & 1) != 0) {
            puStack_e8 = puStack_b8;
            local_f0 = local_c0;
            local_e0 = local_b0;
            uVar5 = FUN_0640f598(&local_f0,DAT_09197a50);
            lVar6 = local_e0;
            puVar2 = puStack_e8;
            uVar3 = local_f0;
            if ((uVar5 & 1) != 0) {
              if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puStack_78 = puVar2;
              local_80 = uVar3;
              local_70 = lVar6;
              FUN_04b71ee0(&local_80,DAT_091bf6b8);
            }
          }
          FUN_0717ed54(&local_d0,DAT_091a1d20);
          if (*(int *)(DAT_09189998 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = *(long *)(*(long *)(DAT_09189998 + 0xb8) + 0x28);
          if (lVar6 != 0) {
            iVar1 = *(int *)(lVar6 + 0x18);
            *(undefined4 *)(lVar6 + 0x18) = 0;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (iVar1 < 1) {
              return;
            }
            System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
            return;
          }
        }
      }
    }
  }
LAB_07767b1c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

