// rea decompile_all
// name: Mono.Math.BigInteger$$IsProbablePrime
// address: 0x7427384
// body: available
// range: 0x7427384-0x742752b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7427520 to 0x742a96c Mono.Math.Prime.PrimalityTests$$Test (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7427524 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7427528 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Mono_Math_BigInteger__IsProbablePrime(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  if ((DAT_09520fd0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b70);
    DAT_09520fd0 = 1;
  }
  if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = **(long **)(DAT_09181b70 + 0xb8);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) == 0) {
LAB_07427528:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar2 = Mono_Math_BigInteger__op_Implicit
                      (*(undefined4 *)
                        (lVar4 + ((long)(((ulong)*(uint *)(lVar4 + 0x18) << 0x20) + -0x100000000) >>
                                 0x1e) + 0x20));
    iVar1 = Mono_Math_BigInteger_Kernel__Compare(param_1,uVar2);
    if (iVar1 < 1) {
      uVar6 = 0;
      do {
        if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = **(long **)(DAT_09181b70 + 0xb8);
        if (lVar4 == 0) goto LAB_07427524;
        uVar5 = (uint)((long)uVar6 < (long)*(int *)(lVar4 + 0x18));
        if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar6) break;
        if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar4 = **(long **)(DAT_09181b70 + 0xb8);
          if (lVar4 == 0) goto LAB_07427524;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_07427528;
        uVar3 = Mono_Math_BigInteger__op_Equality(param_1,*(undefined4 *)(lVar4 + uVar6 * 4 + 0x20))
        ;
        uVar6 = uVar6 + 1;
      } while ((uVar3 & 1) == 0);
    }
    else {
      uVar6 = 0;
      do {
        if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = **(long **)(DAT_09181b70 + 0xb8);
        if (lVar4 == 0) goto LAB_07427524;
        if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar6) {
          uVar6 = Mono_Math_Prime_PrimalityTests__Test(param_1,2);
          return uVar6;
        }
        if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar4 = **(long **)(DAT_09181b70 + 0xb8);
          if (lVar4 == 0) goto LAB_07427524;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_07427528;
        iVar1 = Mono_Math_BigInteger_Kernel__DwordMod
                          (param_1,*(undefined4 *)(lVar4 + uVar6 * 4 + 0x20));
        uVar6 = uVar6 + 1;
      } while (iVar1 != 0);
      uVar5 = 0;
    }
    return (ulong)uVar5;
  }
LAB_07427524:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

