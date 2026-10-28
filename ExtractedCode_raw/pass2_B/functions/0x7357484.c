// rea decompile_all
// name: Lean.Touch.LeanTouch$$PollFingers
// address: 0x7357484
// body: available
// range: 0x7357484-0x735769f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x735769c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanTouch__PollFingers(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_34;
  
  if ((DAT_095207e8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183148);
    DAT_095207e8 = 1;
  }
  local_34 = 0;
  local_40 = 0;
  local_44 = 0;
  local_48[0] = 0;
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (*(int *)(DAT_09183148 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = CW_Common_CwInput__GetTouchCount(0);
    if (0 < iVar1) {
      iVar1 = 0;
      while( true ) {
        if (*(int *)(DAT_09183148 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar2 = CW_Common_CwInput__GetTouchCount(0);
        if (iVar2 <= iVar1) break;
        if (*(int *)(DAT_09183148 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        CW_Common_CwInput__GetTouch(iVar1,&local_34,&local_40,&local_44,local_48,0);
        Lean_Touch_LeanTouch__AddFinger
                  ((undefined4)local_40,local_40._4_4_,local_44,param_1,local_34,local_48[0]);
        iVar1 = iVar1 + 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x39) != '\0') {
    if (*(int *)(DAT_09183148 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = CW_Common_CwInput__GetMouseExists(0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_09183148 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      CW_Common_CwInput__GetMousePosition(0);
      lVar5 = Lean_Touch_LeanTouch__AddFinger(param_1,0xffffffd6,1);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined1 *)(lVar5 + 0x44) = 0;
      *(undefined1 *)(lVar5 + 0x19) = 1;
    }
  }
  if (*(char *)(param_1 + 0x3a) != '\0') {
    if (*(int *)(DAT_09183148 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = CW_Common_CwInput__GetMouseExists(0);
    if ((uVar4 & 1) != 0) {
      uVar6 = 0;
      uVar7 = 0;
      iVar1 = 0;
      do {
        if (*(int *)(DAT_09183148 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = CW_Common_CwInput__GetMouseIsHeld(iVar1,0);
        uVar6 = uVar6 | uVar3;
        uVar3 = CW_Common_CwInput__GetMouseWentUp(iVar1,0);
        iVar1 = iVar1 + 1;
        uVar7 = uVar7 | uVar3;
      } while (iVar1 != 5);
      if (((uVar6 | uVar7) & 1) != 0) {
        if (*(int *)(DAT_09183148 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        CW_Common_CwInput__GetMousePosition(0);
        Lean_Touch_LeanTouch__AddFinger(param_1,0xffffffff,uVar6 & 1);
      }
    }
  }
  if ((*(char *)(param_1 + 0x3b) != '\0') && (lVar5 = *(long *)(param_1 + 0x20), lVar5 != 0)) {
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
  }
  return;
}

