// rea decompile_all
// name: Lean.Touch.LeanTouch$$UpdateEvents
// address: 0x7357ad4
// body: available
// range: 0x7357ad4-0x7357e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7357e3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanTouch__UpdateEvents(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if ((DAT_095207e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187728);
    FUN_03f5c2a4(&DAT_091ae150);
    FUN_03f5c2a4(&DAT_091ae158);
    FUN_03f5c2a4(&DAT_091ae180);
    FUN_03f5c2a4(&DAT_091ae188);
    DAT_095207e9 = 1;
  }
  if (*(int *)(DAT_09187728 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 8);
  if (lVar2 == 0) goto LAB_07357e3c;
  iVar1 = *(int *)(lVar2 + 0x18);
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      if (*(int *)(DAT_09187728 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 8);
      if ((lVar2 == 0) || (lVar2 = FUN_057e0998(lVar2,iVar4,DAT_091ae188), lVar2 == 0))
      goto LAB_07357e3c;
      if (*(char *)(lVar2 + 0x1a) != '\0') {
        if (*(int *)(DAT_09187728 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x38);
        if (lVar3 != 0) {
          if (*(int *)(DAT_09187728 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar3 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x38);
            if (lVar3 == 0) goto LAB_07357e3c;
          }
          (**(code **)(lVar3 + 0x18))
                    (*(undefined8 *)(lVar3 + 0x40),lVar2,*(undefined8 *)(lVar3 + 0x28));
        }
      }
      if (*(char *)(lVar2 + 0x20) != '\0') {
        if (*(int *)(DAT_09187728 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x40);
        if (lVar3 != 0) {
          if (*(int *)(DAT_09187728 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar3 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x40);
            if (lVar3 == 0) goto LAB_07357e3c;
          }
          (**(code **)(lVar3 + 0x18))
                    (*(undefined8 *)(lVar3 + 0x40),lVar2,*(undefined8 *)(lVar3 + 0x28));
        }
      }
      if ((*(char *)(lVar2 + 0x18) != '\0') && (*(char *)(lVar2 + 0x19) == '\0')) {
        if (*(int *)(DAT_09187728 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x18);
        if (lVar3 != 0) {
          if (*(int *)(DAT_09187728 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar3 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x18);
            if (lVar3 == 0) goto LAB_07357e3c;
          }
          (**(code **)(lVar3 + 0x18))
                    (*(undefined8 *)(lVar3 + 0x40),lVar2,*(undefined8 *)(lVar3 + 0x28));
        }
      }
      if (*(int *)(DAT_09187728 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x20);
      if (lVar3 != 0) {
        if (*(int *)(DAT_09187728 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar3 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x20);
          if (lVar3 == 0) goto LAB_07357e3c;
        }
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),lVar2,*(undefined8 *)(lVar3 + 0x28));
      }
      if ((*(char *)(lVar2 + 0x18) == '\0') && (*(char *)(lVar2 + 0x19) != '\0')) {
        if (*(int *)(DAT_09187728 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x28);
        if (lVar3 != 0) {
          if (*(int *)(DAT_09187728 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar3 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x28);
            if (lVar3 == 0) goto LAB_07357e3c;
          }
          (**(code **)(lVar3 + 0x18))
                    (*(undefined8 *)(lVar3 + 0x40),lVar2,*(undefined8 *)(lVar3 + 0x28));
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
    if (*(int *)(DAT_09187728 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(DAT_09187728 + 0xb8);
    if (*(long *)(lVar2 + 0x48) != 0) {
      if (*(int *)(DAT_09187728 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar2 = *(long *)(DAT_09187728 + 0xb8);
      }
      lVar3 = *(long *)(lVar2 + 0x68);
      if (lVar3 != 0) {
        iVar1 = *(int *)(lVar3 + 0x18);
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
          lVar2 = *(long *)(DAT_09187728 + 0xb8);
          lVar3 = *(long *)(lVar2 + 0x68);
          if (lVar3 == 0) goto LAB_07357e3c;
        }
        FUN_057e0e78(lVar3,*(undefined8 *)(lVar2 + 8),DAT_091ae150);
        lVar2 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x48);
        if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07357e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 0x18))
                    (*(undefined8 *)(lVar2 + 0x40),
                     *(undefined8 *)(*(long *)(DAT_09187728 + 0xb8) + 0x68),
                     *(undefined8 *)(lVar2 + 0x28));
          return;
        }
      }
LAB_07357e3c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

