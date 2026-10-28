// rea decompile_all
// name: CW.Common.CwInputManager$$GetFingers
// address: 0x44e8cf8
// body: available
// range: 0x44e8cf8-0x44e8f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e8f1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e8f20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e8f24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e8f28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CW_Common_CwInputManager__GetFingers(ulong param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  
  if ((DAT_095183c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183150);
    FUN_03f5c2a4(&DAT_091a5168);
    FUN_03f5c2a4(&DAT_091a5170);
    FUN_03f5c2a4(&DAT_091a5178);
    FUN_03f5c2a4(&DAT_091b2688);
    FUN_03f5c2a4(&DAT_091b2690);
    FUN_03f5c2a4(&DAT_091b2698);
    DAT_095183c2 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(int *)(DAT_09183150 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(DAT_09183150 + 0xb8);
  lVar8 = *(long *)(lVar5 + 0x38);
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      lVar5 = *(long *)(DAT_09183150 + 0xb8);
    }
    if (*(long *)(lVar5 + 0x30) != 0) {
      FUN_057e185c(&local_78,*(long *)(lVar5 + 0x30),DAT_091b2698);
      local_50 = local_68;
      uStack_58 = puStack_70;
      local_60 = local_78;
      local_78 = 0;
      puStack_70 = &local_60;
LAB_044e8e24:
      uVar3 = FUN_071bd28c(&local_60,DAT_091a5170);
      lVar5 = local_50;
      if ((uVar3 & 1) == 0) {
        FUN_071bd288(&local_60,DAT_091a5168);
        if (*(int *)(DAT_09183150 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        return *(undefined8 *)(*(long *)(DAT_09183150 + 0xb8) + 0x38);
      }
      if ((param_1 & 1) != 0) goto code_r0x044e8e3c;
      goto LAB_044e8e48;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
code_r0x044e8e3c:
  if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(local_50 + 0x20) == '\0') {
LAB_044e8e48:
    if ((param_2 & 1) != 0) {
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(local_50 + 0x10) == -0x539) goto LAB_044e8e24;
    }
    if (*(int *)(DAT_09183150 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = DAT_091b2688;
    lVar4 = *(long *)(*(long *)(DAT_09183150 + 0xb8) + 0x38);
    if (lVar4 != 0) {
      lVar6 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar2 = *(uint *)(lVar4 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
          plVar7 = (long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
          *plVar7 = lVar5;
          thunk_FUN_03f5d7b8(plVar7,lVar5);
        }
        else {
          FUN_057e0c68(lVar4,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        goto LAB_044e8e24;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_044e8e24;
}

