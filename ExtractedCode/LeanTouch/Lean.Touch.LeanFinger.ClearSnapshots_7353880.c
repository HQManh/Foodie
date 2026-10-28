// rea decompile_all
// name: Lean.Touch.LeanFinger$$ClearSnapshots
// address: 0x7353880
// body: available
// range: 0x7353880-0x7353a97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7353a00 to 0x57e25b4 FUN_057e25b4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7353a7c to 0x75d9dec System.Array$$Clear (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7353a94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanFinger__ClearSnapshots(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  if ((DAT_09520792 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187720);
    FUN_03f5c2a4(&DAT_091ae1e0);
    FUN_03f5c2a4(&DAT_091ae1d8);
    FUN_03f5c2a4(&DAT_091ae1e8);
    FUN_03f5c2a4(&DAT_091ae1f8);
    FUN_03f5c2a4(&DAT_091ae200);
    FUN_03f5c2a4(&DAT_091ae208);
    DAT_09520792 = 1;
  }
  if (param_2 < 1) {
    if (param_2 == 0) {
      return;
    }
    if (*(int *)(DAT_09187720 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09187720 + 0xb8) != 0) {
      FUN_057e0e78(**(long **)(DAT_09187720 + 0xb8),*(undefined8 *)(param_1 + 0x48),DAT_091ae1e0);
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 != 0) {
        iVar5 = *(int *)(lVar4 + 0x18);
        *(undefined4 *)(lVar4 + 0x18) = 0;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (iVar5 < 1) {
          return;
        }
        System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar5,0);
        return;
      }
    }
  }
  else if (*(long *)(param_1 + 0x48) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x48) + 0x18) < param_2) {
      return;
    }
    iVar5 = 0;
    do {
      if (*(int *)(DAT_09187720 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_07353a94;
      lVar6 = **(long **)(DAT_09187720 + 0xb8);
      uVar2 = FUN_057e0998(*(long *)(param_1 + 0x48),iVar5,DAT_091ae208);
      lVar4 = DAT_091ae1d8;
      if (lVar6 == 0) goto LAB_07353a94;
      lVar3 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar3 == 0) goto LAB_07353a94;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar6,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      iVar5 = iVar5 + 1;
    } while (param_2 != iVar5);
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_057e25b4(*(long *)(param_1 + 0x48),0,param_2,DAT_091ae1f8);
      return;
    }
  }
LAB_07353a94:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

