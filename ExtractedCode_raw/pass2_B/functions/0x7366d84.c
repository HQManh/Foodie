// rea decompile_all
// name: Lofelt.NiceVibrations.HapticPatterns.Pattern$$ToRumble
// address: 0x7366d84
// body: available
// range: 0x7366d84-0x7366f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7366f70 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7366f74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lofelt_NiceVibrations_HapticPatterns_Pattern__ToRumble(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  long local_50;
  ulong uStack_48;
  long local_40;
  long local_38;
  
  if ((DAT_0952089d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09180528);
    DAT_0952089d = 1;
  }
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  if (*param_2 != 0) {
    iVar1 = *(int *)(*param_2 + 0x18);
    uVar2 = iVar1 - 1;
    uVar6 = (ulong)uVar2;
    if (uVar2 == 0 || iVar1 < 1) {
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
    }
    else {
      local_50 = FUN_03f5c394(DAT_091801b8,uVar6);
      thunk_FUN_03f5d7b8(&local_50,local_50);
      local_40 = FUN_03f5c394(DAT_09180528,uVar6);
      thunk_FUN_03f5d7b8(&local_40,local_40);
      local_38 = FUN_03f5c394(DAT_09180528,uVar6);
      thunk_FUN_03f5d7b8(&local_38,local_38);
      lVar3 = *param_2;
      uStack_48 = uStack_48 & 0xffffffff00000000;
      if (lVar3 == 0) goto LAB_07366f74;
      uVar2 = *(uint *)(lVar3 + 0x18);
      uVar4 = 0;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      do {
        if (uVar2 - 1 == uVar4) {
LAB_07366f70:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar5 = lVar3 + uVar4 * 4;
        fVar7 = (*(float *)(lVar5 + 0x24) - *(float *)(lVar5 + 0x20)) * 1000.0;
        iVar1 = -0x80000000;
        if (fVar7 != INFINITY) {
          iVar1 = (int)fVar7;
        }
        if (local_50 == 0) goto LAB_07366f74;
        if (*(uint *)(local_50 + 0x18) <= uVar4) goto LAB_07366f70;
        lVar5 = param_2[1];
        *(int *)(local_50 + uVar4 * 4 + 0x20) = iVar1;
        if (lVar5 == 0) goto LAB_07366f74;
        if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_07366f70;
        if (local_40 == 0) goto LAB_07366f74;
        if (*(uint *)(local_40 + 0x18) <= uVar4) goto LAB_07366f70;
        lVar5 = lVar5 + uVar4 * 4;
        *(undefined4 *)(local_40 + uVar4 * 4 + 0x20) = *(undefined4 *)(lVar5 + 0x20);
        if (local_38 == 0) goto LAB_07366f74;
        if (*(uint *)(local_38 + 0x18) <= uVar4) goto LAB_07366f70;
        *(undefined4 *)(local_38 + uVar4 * 4 + 0x20) = *(undefined4 *)(lVar5 + 0x20);
        if (local_50 == 0) goto LAB_07366f74;
        if (*(uint *)(local_50 + 0x18) <= uVar4) goto LAB_07366f70;
        lVar5 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        uStack_48 = CONCAT44(uStack_48._4_4_,*(int *)(local_50 + lVar5 + 0x20) + (int)uStack_48);
      } while (uVar6 != uVar4);
      param_1[1] = uStack_48;
      *param_1 = local_50;
      param_1[3] = local_38;
      param_1[2] = local_40;
    }
    return;
  }
LAB_07366f74:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

