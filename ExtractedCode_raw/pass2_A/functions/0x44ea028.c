// rea decompile_all
// name: FUN_044ea028
// address: 0x44ea028
// body: available
// range: 0x44ea028-0x44ea3f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ea3d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ea3dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ea3e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ea3e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ea3e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ea3f0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044ea3ec) */

void FUN_044ea028(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int unaff_w20;
  long *unaff_x22;
  uint uVar8;
  undefined8 *unaff_x23;
  uint uVar9;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000058;
  
  do {
    lVar4 = *unaff_x22;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar4 = *unaff_x22;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
    if (lVar4 == 0) goto LAB_044ea3d8;
    unaff_w20 = unaff_w20 + -1;
    lVar4 = FUN_057e0998(lVar4,unaff_w20,*unaff_x23);
    if (lVar4 == 0) goto LAB_044ea3d8;
    if (*(char *)(lVar4 + 0x19) == '\0') {
      *(undefined1 *)(lVar4 + 0x19) = 1;
    }
    else {
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar5 = *unaff_x22;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
      if (lVar5 == 0) goto LAB_044ea3d8;
      FUN_057e251c(lVar5,unaff_w20,*unaff_x24);
      lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
      if (lVar5 == 0) goto LAB_044ea3d8;
      FUN_061a19e4(lVar5,lVar4,*unaff_x25);
    }
  } while (0 < unaff_w20);
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
      uVar8 = 0;
      uVar9 = 0;
      iVar1 = 0;
      do {
        if (*(int *)(DAT_09183148 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = CW_Common_CwInput__GetMouseIsHeld(iVar1);
        uVar8 = uVar8 | uVar3;
        uVar3 = CW_Common_CwInput__GetMouseWentUp(iVar1);
        iVar1 = iVar1 + 1;
        uVar9 = uVar9 | uVar3;
      } while (iVar1 != 5);
      if (*(int *)(DAT_09183148 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      CW_Common_CwInput__GetMousePosition();
      CW_Common_CwInputManager__AddFinger();
      if (((uVar8 | uVar9) & 1) != 0) {
        if (*(int *)(DAT_09183148 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        CW_Common_CwInput__GetMousePosition();
        CW_Common_CwInputManager__AddFinger();
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
      CW_Common_CwInput__GetTouch
                (iVar1,&stack0x0000005c,&stack0x00000048,&stack0x00000058,&stack0x00000044);
      CW_Common_CwInputManager__AddFinger
                (uStack0000000000000048,uStack000000000000004c,in_stack_00000058);
      iVar1 = iVar1 + 1;
    }
  }
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar4 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
  if (lVar4 != 0) {
    FUN_057e185c(&stack0x00000008,lVar4,DAT_091b2698);
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    while( true ) {
      uVar6 = FUN_071bd28c(&stack0x00000020,DAT_091a5170);
      lVar4 = in_stack_00000030;
      if ((uVar6 & 1) == 0) {
        FUN_071bd288(in_stack_00000010,DAT_091a5168);
        return;
      }
      if (in_stack_00000030 == 0) break;
      lVar5 = *unaff_x22;
      if (*(char *)(in_stack_00000030 + 0x18) != '\0') {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar5 = *unaff_x22;
        }
        lVar7 = **(long **)(lVar5 + 0xb8);
        if (lVar7 != 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar7 = **(long **)(*unaff_x22 + 0xb8);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          (**(code **)(lVar7 + 0x18))
                    (*(undefined8 *)(lVar7 + 0x40),lVar4,*(undefined8 *)(lVar7 + 0x28));
          lVar5 = *unaff_x22;
        }
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar5 = *unaff_x22;
      }
      lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar7 != 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar7 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        (**(code **)(lVar7 + 0x18))
                  (*(undefined8 *)(lVar7 + 0x40),lVar4,*(undefined8 *)(lVar7 + 0x28));
      }
      if (*(char *)(lVar4 + 0x19) != '\0') {
        lVar5 = *unaff_x22;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar5 = *unaff_x22;
        }
        lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
        if (lVar7 != 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar7 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          (**(code **)(lVar7 + 0x18))
                    (*(undefined8 *)(lVar7 + 0x40),lVar4,*(undefined8 *)(lVar7 + 0x28));
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_044ea3d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

