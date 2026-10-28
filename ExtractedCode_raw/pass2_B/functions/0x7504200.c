// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$GetMergedPatterns
// address: 0x7504200
// body: available
// range: 0x7504200-0x75043bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750428c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75043a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75043ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75043b8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_DateTimeFormatInfo__GetMergedPatterns(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  if ((DAT_09521696 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_09521696 = 1;
  }
  if (param_1 == 0) goto LAB_075043ac;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = System_String__op_Equality(param_2,*(undefined8 *)(param_1 + 0x20),0);
    if ((uVar2 & 1) == 0) {
      uVar6 = (uint)*(ulong *)(param_1 + 0x18);
      if ((int)uVar6 < 1) {
        uVar8 = 0;
      }
      else {
        uVar2 = 0;
        uVar7 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar2) goto LAB_075043a8;
          uVar5 = System_String__op_Equality(param_2,*(undefined8 *)(param_1 + 0x20 + uVar2 * 8),0);
          uVar6 = *(uint *)(param_1 + 0x18);
          uVar7 = (ulong)uVar6;
        } while (((uVar5 & 1) == 0) && (uVar2 = uVar2 + 1, (long)uVar2 < (long)(int)uVar6));
        uVar8 = (uint)uVar2;
      }
      if ((int)uVar8 < (int)uVar6) {
        lVar3 = System_Array__Clone(param_1,0);
        uVar1 = DAT_091805f8;
        if (lVar3 == 0) {
LAB_075043ac:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = thunk_FUN_03f99350(lVar3,DAT_091805f8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar3,uVar1);
        }
        if ((*(uint *)(lVar4 + 0x18) == 0) || (*(uint *)(lVar4 + 0x18) <= uVar8)) goto LAB_075043a8;
        ((undefined8 *)(lVar4 + 0x20))[(int)uVar8] = *(undefined8 *)(lVar4 + 0x20);
        thunk_FUN_03f5d7b8();
      }
      else {
        lVar4 = FUN_03f5c394(DAT_091805f8,uVar6 + 1);
        System_Array__Copy(param_1,0,lVar4,1,*(undefined4 *)(param_1 + 0x18),0);
        if (lVar4 == 0) goto LAB_075043ac;
      }
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_075043a8;
      *(undefined8 *)(lVar4 + 0x20) = param_2;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x20),param_2);
    }
    else {
      lVar3 = System_Array__Clone(param_1,0);
      uVar1 = DAT_091805f8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_03f99350(lVar3,DAT_091805f8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar3,uVar1);
        }
      }
    }
    return lVar4;
  }
LAB_075043a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

