// rea decompile_all
// name: Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase$$GenerateNewPrime
// address: 0x742bf34
// body: available
// range: 0x742bf34-0x742c217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742c210 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742c214 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Math_Prime_Generator_SequentialSearchPrimeGeneratorBase__GenerateNewPrime
               (long *param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  
  if ((DAT_09520fe5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b70);
    DAT_09520fe5 = 1;
  }
  lVar5 = (**(code **)(*param_1 + 0x1b8))(param_1,param_2,param_3,*(undefined8 *)(*param_1 + 0x1c0))
  ;
  if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09181b70);
  }
  uVar6 = Mono_Math_BigInteger_Kernel__DwordMod(lVar5,0xc0cfd797);
  uVar6 = uVar6 & 0xffffffff;
  iVar2 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  lVar10 = **(long **)(DAT_09181b70 + 0xb8);
  do {
    iVar8 = (int)uVar6;
    if ((((((0x8d3dcb0 < (uint)(iVar8 * 0x4f72c235)) && (iVar8 + (int)(uVar6 / 0x17) * -0x17 != 0))
          && (iVar3 = (int)(uVar6 * 0xaf286bcb >> 0x20),
             iVar8 + (iVar3 + ((uint)(iVar8 - iVar3) >> 1) >> 4) * -0x13 != 0)) &&
         ((iVar8 + (int)(uVar6 / 0x11) * -0x11 != 0 && (iVar8 + (int)(uVar6 / 0xd) * -0xd != 0))))
        && ((iVar8 + (int)(uVar6 / 0xb) * -0xb != 0 &&
            ((iVar3 = (int)(uVar6 * 0x24924925 >> 0x20),
             iVar8 + (iVar3 + ((uint)(iVar8 - iVar3) >> 1) >> 2) * -7 != 0 &&
             (iVar8 + (int)(uVar6 / 3) * -3 != 0)))))) && (iVar8 + (int)(uVar6 / 5) * -5 != 0)) {
      if (lVar10 == 0) {
LAB_0742c214:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (10 < (int)uVar1) {
        uVar9 = 10;
        do {
          if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar6 = (ulong)*(uint *)(lVar10 + (long)(int)uVar9 * 4 + 0x20);
          if ((long)iVar2 < (long)uVar6) break;
          if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar3 = Mono_Math_BigInteger_Kernel__DwordMod(lVar5,uVar6);
          if (iVar3 == 0) goto LAB_0742c1c4;
          uVar1 = *(uint *)(lVar10 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar1);
      }
      uVar6 = (**(code **)(*param_1 + 0x1d8))
                        (param_1,lVar5,param_3,*(undefined8 *)(*param_1 + 0x1e0));
      if ((uVar6 & 1) != 0) {
        lVar7 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
        uVar4 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
        if (lVar7 == 0) goto LAB_0742c214;
        uVar6 = (**(code **)(lVar7 + 0x18))
                          (*(undefined8 *)(lVar7 + 0x40),lVar5,uVar4,*(undefined8 *)(lVar7 + 0x28));
        if ((uVar6 & 1) != 0) {
          return lVar5;
        }
      }
    }
LAB_0742c1c4:
    if (lVar5 == 0) goto LAB_0742c214;
    uVar1 = iVar8 + 0x3f30286b;
    if (iVar8 + 2U < 0xc0cfd797) {
      uVar1 = iVar8 + 2U;
    }
    uVar6 = (ulong)uVar1;
    Mono_Math_BigInteger__Incr2(lVar5);
  } while( true );
}

