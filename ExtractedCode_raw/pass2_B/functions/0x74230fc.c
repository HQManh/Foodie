// rea decompile_all
// name: Mono.Math.BigInteger$$op_Multiply
// address: 0x74230fc
// body: available
// range: 0x74230fc-0x74232a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74231a0 to 0x7423324 Mono.Math.BigInteger$$op_Implicit (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7423238 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74232a0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Math_BigInteger__op_Multiply(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((DAT_09520fc1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b70);
    DAT_09520fc1 = 1;
  }
  if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = Mono_Math_BigInteger__op_Equality(param_1,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Mono_Math_BigInteger__op_Equality(param_2,0);
    if ((uVar3 & 1) == 0) {
      if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
        uVar1 = *(uint *)(param_1 + 0x10);
        if ((long)*(int *)(*(long *)(param_1 + 0x18) + 0x18) < (long)(ulong)uVar1) {
          thunk_FUN_03fc39d4(&DAT_09186b90);
          uVar5 = thunk_FUN_03f9944c();
          puVar6 = &DAT_09217fd0;
LAB_07423278:
          uVar7 = thunk_FUN_03fc39d4(puVar6);
          System_IndexOutOfRangeException___ctor(uVar5,uVar7,0);
          uVar7 = thunk_FUN_03fc39d4(&DAT_091c3778);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar5,uVar7);
        }
        if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
          uVar2 = *(uint *)(param_2 + 0x10);
          if ((long)*(int *)(*(long *)(param_2 + 0x18) + 0x18) < (long)(ulong)uVar2) {
            thunk_FUN_03fc39d4(&DAT_09186b90);
            uVar5 = thunk_FUN_03f9944c();
            puVar6 = &DAT_09217fd8;
            goto LAB_07423278;
          }
          auVar8 = thunk_FUN_03f9944c(DAT_09181b70);
          lVar4 = auVar8._0_8_;
          Mono_Math_BigInteger___ctor(lVar4,auVar8._8_8_,uVar2 + uVar1);
          if (lVar4 != 0) {
            Mono_Math_BigInteger_Kernel__Multiply
                      (*(undefined8 *)(param_1 + 0x18),0,*(undefined4 *)(param_1 + 0x10),
                       *(undefined8 *)(param_2 + 0x18),0,*(undefined4 *)(param_2 + 0x10),
                       *(undefined8 *)(lVar4 + 0x18),0);
            Mono_Math_BigInteger__Normalize(lVar4);
            return lVar4;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = Mono_Math_BigInteger__op_Implicit(0);
  return lVar4;
}

