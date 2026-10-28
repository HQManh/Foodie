// rea decompile_all
// name: CW.Common.CwInputManager$$Update
// address: 0x44e9f20
// body: available
// range: 0x44e9f20-0x44ea027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ea024 to 0x89db0a8 FUN_089db0a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044ea3ec) */

void CW_Common_CwInputManager__Update(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined8 local_48;
  
  if ((DAT_095183cb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183150);
    FUN_03f5c2a4(&DAT_09183148);
    FUN_03f5c2a4(&DAT_091a5168);
    FUN_03f5c2a4(&DAT_091a5170);
    FUN_03f5c2a4(&DAT_091a5178);
    FUN_03f5c2a4(&DAT_091b2698);
    FUN_03f5c2a4(&DAT_091b26a0);
    FUN_03f5c2a4(&DAT_091b26a8);
    FUN_03f5c2a4(&DAT_091b26b0);
    FUN_03f5c2a4(&DAT_091bb510);
    DAT_095183cb = 1;
  }
  local_48 = 0;
  local_58 = 0;
  local_5c[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(int *)(DAT_09183150 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(DAT_09183150 + 0xb8) + 0x30);
  if (lVar5 != 0) {
    if (-1 < *(int *)(lVar5 + 0x18) + -1) {
      FUN_089db0a8();
      return;
    }
    if (*(int *)(DAT_09183148 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = CW_Common_CwInput__GetTouchCount();
    if (iVar1 < 1) {
      if (*(int *)(DAT_09183148 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09516af9 == '\0') {
        FUN_03f5c2a4(&DAT_09188428);
        DAT_09516af9 = '\x01';
      }
      if (**(long **)(DAT_09188428 + 0xb8) != 0) {
        uVar7 = 0;
        uVar8 = 0;
        iVar1 = 0;
        do {
          if (*(int *)(DAT_09183148 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = CW_Common_CwInput__GetMouseIsHeld(iVar1);
          uVar7 = uVar7 | uVar3;
          uVar3 = CW_Common_CwInput__GetMouseWentUp(iVar1);
          iVar1 = iVar1 + 1;
          uVar8 = uVar8 | uVar3;
        } while (iVar1 != 5);
        if (*(int *)(DAT_09183148 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        CW_Common_CwInput__GetMousePosition();
        CW_Common_CwInputManager__AddFinger(param_1,0xfffffac7,1);
        if (((uVar7 | uVar8) & 1) != 0) {
          if (*(int *)(DAT_09183148 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          CW_Common_CwInput__GetMousePosition();
          CW_Common_CwInputManager__AddFinger(param_1,0xffffffff,uVar7 & 1);
        }
      }
    }
    else {
      iVar1 = 0;
      while( true ) {
        if (*(int *)(DAT_09183148 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar2 = CW_Common_CwInput__GetTouchCount();
        if (iVar2 <= iVar1) break;
        if (*(int *)(DAT_09183148 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        CW_Common_CwInput__GetTouch(iVar1,(long)&local_48 + 4,&local_58,&local_48,local_5c);
        CW_Common_CwInputManager__AddFinger
                  (local_58 & 0xffffffff,local_58._4_4_,local_48 & 0xffffffff,param_1,local_48._4_4_
                   ,local_5c[0]);
        iVar1 = iVar1 + 1;
      }
    }
    if (*(int *)(DAT_09183150 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(*(long *)(DAT_09183150 + 0xb8) + 0x30);
    if (lVar5 != 0) {
      FUN_057e185c(&uStack_98,lVar5,DAT_091b2698);
      local_70 = lStack_88;
      uStack_78 = puStack_90;
      local_80 = uStack_98;
      uStack_98 = 0;
      puStack_90 = &local_80;
      while( true ) {
        uVar4 = FUN_071bd28c(&local_80,DAT_091a5170);
        lVar5 = local_70;
        if ((uVar4 & 1) == 0) {
          FUN_071bd288(puStack_90,DAT_091a5168);
          return;
        }
        if (local_70 == 0) break;
        if (*(char *)(local_70 + 0x18) != '\0') {
          if (*(int *)(DAT_09183150 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = **(long **)(DAT_09183150 + 0xb8);
          if (lVar6 != 0) {
            if (*(int *)(DAT_09183150 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar6 = **(long **)(DAT_09183150 + 0xb8);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            }
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),lVar5,*(undefined8 *)(lVar6 + 0x28));
          }
        }
        if (*(int *)(DAT_09183150 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = *(long *)(*(long *)(DAT_09183150 + 0xb8) + 8);
        if (lVar6 != 0) {
          if (*(int *)(DAT_09183150 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar6 = *(long *)(*(long *)(DAT_09183150 + 0xb8) + 8);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),lVar5,*(undefined8 *)(lVar6 + 0x28));
        }
        if (*(char *)(lVar5 + 0x19) != '\0') {
          if (*(int *)(DAT_09183150 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = *(long *)(*(long *)(DAT_09183150 + 0xb8) + 0x10);
          if (lVar6 != 0) {
            if (*(int *)(DAT_09183150 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar6 = *(long *)(*(long *)(DAT_09183150 + 0xb8) + 0x10);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            }
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),lVar5,*(undefined8 *)(lVar6 + 0x28));
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

