// rea decompile_all
// name: System.Guid$$EatAllWhitespace
// address: 0x75aed50
// body: available
// range: 0x75aed50-0x75aef9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75aee60 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75aef4c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75aef64 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75aef94 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75aef98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] System_Guid__EatAllWhitespace(long param_1,ulong param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long local_60;
  ulong uStack_58;
  
  if ((DAT_09521ca1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_091b97d0);
    FUN_03f5c2a4(&DAT_091b97e8);
    FUN_03f5c2a4(&DAT_091b97c8);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091ba9a8);
    DAT_09521ca1 = 1;
  }
  uVar4 = (uint)param_2;
  local_60 = 0;
  uStack_58 = 0;
  if ((int)uVar4 < 1) {
    uVar6 = 0;
LAB_075aee20:
    uVar5 = (uint)uVar6;
    if (uVar5 != uVar4) {
      lVar3 = FUN_03f5c394(DAT_0917fcc8,param_2 & 0xffffffff);
      if ((int)uVar5 < 1) {
        param_2 = 0;
      }
      else {
        if (uVar4 < uVar5) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        uStack_58 = uVar6 & 0xffffffff;
        local_60 = param_1;
        auVar9 = FUN_06109734(lVar3,DAT_091ba9a8);
        FUN_05ff6b08(&local_60,auVar9._0_8_,auVar9._8_8_,DAT_091b97d0);
        param_2 = uVar6 & 0xffffffff;
      }
      if ((int)uVar5 < (int)uVar4) {
        puVar7 = (undefined2 *)(param_1 + (long)(int)uVar5 * 2);
        lVar8 = (long)(int)uVar4 - (long)(int)uVar5;
        do {
          if (uVar4 <= (uint)uVar6) {
LAB_075aef94:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar1 = *puVar7;
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_Char__IsWhiteSpace(uVar1,0);
          if ((uVar2 & 1) == 0) {
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar5 = (uint)param_2;
            if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_075aef94;
            param_2 = (ulong)(uVar5 + 1);
            *(undefined2 *)(lVar3 + (long)(int)uVar5 * 2 + 0x20) = uVar1;
          }
          lVar8 = lVar8 + -1;
          uVar6 = (ulong)((uint)uVar6 + 1);
          puVar7 = puVar7 + 1;
        } while (lVar8 != 0);
      }
      if (lVar3 == 0) {
        if ((uint)param_2 != 0) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        param_2 = 0;
        param_1 = 0;
      }
      else {
        if (*(uint *)(lVar3 + 0x18) < (uint)param_2) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        param_1 = lVar3 + 0x20;
      }
    }
  }
  else {
    uVar6 = 0;
    do {
      uVar1 = *(undefined2 *)(param_1 + uVar6 * 2);
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Char__IsWhiteSpace(uVar1,0);
      if ((uVar2 & 1) != 0) goto LAB_075aee20;
      uVar6 = uVar6 + 1;
    } while ((param_2 & 0xffffffff) != uVar6);
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  return auVar9;
}

