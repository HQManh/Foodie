// rea decompile_all
// name: FUN_07357028
// address: 0x7357028
// body: available
// range: 0x7357028-0x7357427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7357420 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7357424 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_07357028(ulong param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long unaff_x20;
  long *unaff_x22;
  float fVar10;
  float unaff_s8;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a36b0);
    FUN_03f5c2a4(&DAT_091a36b8);
    FUN_03f5c2a4(&DAT_091a36c0);
    FUN_03f5c2a4(&DAT_091a8398);
    FUN_03f5c2a4(&DAT_091a83a0);
    FUN_03f5c2a4(&DAT_09187728);
    FUN_03f5c2a4(&DAT_091ae148);
    FUN_03f5c2a4(&DAT_091ae168);
    FUN_03f5c2a4(&DAT_091ae178);
    FUN_03f5c2a4(&DAT_091ae180);
    FUN_03f5c2a4(&DAT_091ae188);
    *(undefined1 *)(unaff_x20 + 0x7e6) = 1;
  }
  lVar3 = *unaff_x22;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar3 = *unaff_x22;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar5 != 0) {
    iVar9 = *(int *)(lVar5 + 0x18);
    if (-1 < iVar9 + -1) {
      do {
        lVar3 = *unaff_x22;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar3 = *unaff_x22;
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
        if (lVar3 == 0) goto LAB_07357420;
        iVar9 = iVar9 + -1;
        lVar3 = FUN_057e0998(lVar3,iVar9,DAT_091ae188);
        if (lVar3 == 0) goto LAB_07357420;
        fVar10 = *(float *)(lVar3 + 0x14) + unaff_s8;
        *(float *)(lVar3 + 0x14) = fVar10;
        if ((*(char *)(lVar3 + 0x22) == '\0') && (*(float *)(param_2 + 0x28) < fVar10)) {
          lVar5 = *unaff_x22;
          *(undefined1 *)(lVar3 + 0x22) = 1;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar5 = *unaff_x22;
          }
          lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x50);
          if (lVar6 != 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar6 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
              if (lVar6 == 0) goto LAB_07357420;
            }
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),lVar3,*(undefined8 *)(lVar6 + 0x28));
          }
        }
      } while (0 < iVar9);
      lVar3 = *unaff_x22;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar3 = *unaff_x22;
    }
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar5 != 0) {
      iVar9 = *(int *)(lVar5 + 0x18);
      if (-1 < iVar9 + -1) {
        do {
          lVar3 = *unaff_x22;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar3 = *unaff_x22;
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
          if (lVar3 == 0) goto LAB_07357420;
          iVar9 = iVar9 + -1;
          lVar3 = FUN_057e0998(lVar3,iVar9,DAT_091ae188);
          if (lVar3 == 0) goto LAB_07357420;
          if (*(char *)(lVar3 + 0x18) == '\0') {
            lVar5 = *unaff_x22;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar5 = *unaff_x22;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar5 == 0) goto LAB_07357420;
            FUN_057e251c(lVar5,iVar9,DAT_091ae178);
            lVar5 = DAT_091ae148;
            lVar6 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
            if (lVar6 == 0) goto LAB_07357420;
            lVar7 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_07357420;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
              *plVar8 = lVar3;
              thunk_FUN_03f5d7b8(plVar8,lVar3);
            }
            else {
              FUN_057e0c68(lVar6,lVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            *(undefined4 *)(lVar3 + 0x14) = 0;
            Lean_Touch_LeanFinger__ClearSnapshots(lVar3,0xffffffff);
            lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
            if (lVar5 != 0) {
              if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                FUN_03f5c424();
                lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
                if (lVar5 == 0) goto LAB_07357420;
              }
              (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),lVar3,*(undefined8 *)(lVar5 + 0x28));
            }
          }
          else {
            *(char *)(lVar3 + 0x19) = *(char *)(lVar3 + 0x18);
            *(undefined1 *)(lVar3 + 0x18) = 0;
            *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar3 + 0x28);
            *(undefined8 *)(lVar3 + 0x34) = *(undefined8 *)(lVar3 + 0x3c);
            *(undefined1 *)(lVar3 + 0x1a) = 0;
            *(undefined1 *)(lVar3 + 0x20) = 0;
          }
        } while (0 < iVar9);
        lVar3 = *unaff_x22;
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar3 = *unaff_x22;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x88);
      if (lVar3 != 0) {
        FUN_053ebbdc(lVar3,DAT_091a83a0);
        lVar3 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
        if (lVar3 != 0) {
          FUN_057e185c(&stack0x00000018,lVar3,DAT_091ae168);
          while( true ) {
            uVar4 = FUN_071bd28c(&stack0x00000018,DAT_091a36b8);
            uVar2 = in_stack_00000028;
            if ((uVar4 & 1) == 0) {
              FUN_071bd288(&stack0x00000018,DAT_091a36b0);
              return;
            }
            lVar3 = *unaff_x22;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar3 = *unaff_x22;
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x88);
            if (lVar3 == 0) break;
            FUN_053ec72c(lVar3,uVar2,DAT_091a8398);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
    }
  }
LAB_07357420:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

