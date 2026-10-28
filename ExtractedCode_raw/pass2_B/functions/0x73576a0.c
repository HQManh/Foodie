// rea decompile_all
// name: Lean.Touch.LeanTouch$$EndFingers
// address: 0x73576a0
// body: available
// range: 0x73576a0-0x7357a17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7357a08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7357a0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7357a10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7357a14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanTouch__EndFingers(float param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  
  if ((DAT_095207e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a36b0);
    FUN_03f5c2a4(&DAT_091a36b8);
    FUN_03f5c2a4(&DAT_091a36c0);
    FUN_03f5c2a4(&DAT_09187728);
    FUN_03f5c2a4(&DAT_091ae150);
    FUN_03f5c2a4(&DAT_091ae158);
    FUN_03f5c2a4(&DAT_091ae168);
    DAT_095207e7 = 1;
  }
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  if (*(int *)(DAT_09187728 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(DAT_09187728 + 0xb8);
  lVar2 = *(long *)(lVar4 + 0x90);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
      lVar4 = *(long *)(DAT_09187728 + 0xb8);
      lVar2 = *(long *)(lVar4 + 0x90);
      if (lVar2 == 0) goto LAB_07357a10;
    }
    FUN_057e0e78(lVar2,*(undefined8 *)(lVar4 + 0x88),DAT_091ae150);
    lVar2 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x90);
    if (lVar2 != 0) {
      FUN_057e185c(&local_a8,lVar2,DAT_091ae168);
      local_80 = local_98;
      puStack_88 = puStack_a0;
      local_90 = local_a8;
      local_a8 = 0;
      puStack_a0 = &local_90;
      while (uVar3 = FUN_071bd28c(&local_90,DAT_091a36b8), (uVar3 & 1) != 0) {
        if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        Lean_Touch_LeanTouch__AddFinger
                  (*(undefined4 *)(local_80 + 0x3c),*(undefined4 *)(local_80 + 0x40),
                   *(undefined4 *)(local_80 + 0x28),param_2,*(undefined4 *)(local_80 + 0x10),0);
      }
      FUN_071bd288(&local_90,DAT_091a36b0);
      if (*(int *)(DAT_09187728 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 8);
      if (lVar2 != 0) {
        FUN_057e185c(&local_a8,lVar2,DAT_091ae168);
        puStack_88 = puStack_a0;
        local_90 = local_a8;
        local_80 = local_98;
        local_a8 = 0;
        puStack_a0 = &local_90;
        do {
          while( true ) {
            uVar3 = FUN_071bd28c(&local_90,DAT_091a36b8);
            lVar2 = local_80;
            if ((uVar3 & 1) == 0) {
              FUN_071bd288(&local_90,DAT_091a36b0);
              return;
            }
            if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(char *)(local_80 + 0x18) == '\0') break;
            if (*(char *)(local_80 + 0x19) != '\0') {
LAB_073578d4:
              fVar6 = *(float *)(local_80 + 0x14) + param_1;
              *(float *)(local_80 + 0x14) = fVar6;
              lVar4 = DAT_09187728;
              if ((*(float *)(param_2 + 0x28) < fVar6) && (*(char *)(local_80 + 0x21) == '\0')) {
                *(undefined1 *)(local_80 + 0x21) = 1;
                if (*(int *)(lVar4 + 0xe4) == 0) {
                  FUN_03f5c424();
                  lVar4 = DAT_09187728;
                }
                lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
                if (lVar5 != 0) {
                  if (*(int *)(lVar4 + 0xe4) == 0) {
                    FUN_03f5c424();
                    lVar5 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x30);
                    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                  }
                  (**(code **)(lVar5 + 0x18))
                            (*(undefined8 *)(lVar5 + 0x40),lVar2,*(undefined8 *)(lVar5 + 0x28));
                }
              }
            }
          }
          if (*(char *)(local_80 + 0x19) == '\0') goto LAB_073578d4;
          if (*(float *)(local_80 + 0x14) <= *(float *)(param_2 + 0x28)) {
            fVar6 = *(float *)(local_80 + 0x3c);
            fVar8 = *(float *)(local_80 + 0x40);
            fVar9 = *(float *)(local_80 + 0x2c);
            fVar10 = *(float *)(local_80 + 0x30);
            if (DAT_09516ea4 == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_09516ea4 = '\x01';
            }
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (*(int *)(DAT_09187728 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            fVar7 = (float)Lean_Touch_LeanTouch__get_ScalingFactor();
            fVar6 = fVar6 - fVar9;
            fVar8 = fVar8 - fVar10;
            if (*(float *)(param_2 + 0x2c) <= SQRT(fVar6 * fVar6 + fVar8 * fVar8) * fVar7) {
              *(undefined4 *)(lVar2 + 0x1c) = 0;
              *(undefined1 *)(lVar2 + 0x20) = 1;
            }
            else {
              *(undefined1 *)(lVar2 + 0x1a) = 1;
              *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            }
          }
          else {
            *(undefined4 *)(local_80 + 0x1c) = 0;
          }
        } while( true );
      }
    }
  }
LAB_07357a10:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

