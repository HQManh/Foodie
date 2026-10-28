// rea decompile_all
// name: Mono.Math.BigInteger.ModulusRing$$BarrettReduction
// address: 0x742aafc
// body: available
// range: 0x742aafc-0x742ad53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742acbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742ad04 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742ad08 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Math_BigInteger_ModulusRing__BarrettReduction(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_09520fd4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b70);
    DAT_09520fd4 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x10);
  if ((lVar10 != 0) && (param_2 != 0)) {
    uVar2 = *(uint *)(lVar10 + 0x10);
    uVar3 = *(uint *)(param_2 + 0x10);
    if (uVar3 < uVar2) {
      return;
    }
    if (*(long *)(param_2 + 0x18) != 0) {
      if ((long)*(int *)(*(long *)(param_2 + 0x18) + 0x18) < (long)(ulong)uVar3) {
        thunk_FUN_03fc39d4(&DAT_09186b90);
        uVar6 = thunk_FUN_03f9944c();
        uVar7 = thunk_FUN_03fc39d4(&DAT_09225920);
        System_IndexOutOfRangeException___ctor(uVar6,uVar7,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091e6228);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,uVar7);
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        iVar4 = *(int *)(*(long *)(param_1 + 0x18) + 0x10);
        auVar11 = thunk_FUN_03f9944c(DAT_09181b70);
        lVar5 = auVar11._0_8_;
        Mono_Math_BigInteger___ctor(lVar5,auVar11._8_8_,(uVar3 - uVar2) + iVar4 + 1);
        lVar8 = *(long *)(param_1 + 0x18);
        if ((lVar8 != 0) && (lVar5 != 0)) {
          uVar3 = uVar2 + 1;
          Mono_Math_BigInteger_Kernel__Multiply
                    (*(undefined8 *)(param_2 + 0x18),uVar2 - 1,
                     *(int *)(param_2 + 0x10) - (uVar2 - 1),*(undefined8 *)(lVar8 + 0x18),0,
                     *(undefined4 *)(lVar8 + 0x10),*(undefined8 *)(lVar5 + 0x18),0);
          uVar1 = *(uint *)(param_2 + 0x10);
          if (uVar3 <= *(uint *)(param_2 + 0x10)) {
            uVar1 = uVar3;
          }
          *(uint *)(param_2 + 0x10) = uVar1;
          Mono_Math_BigInteger__Normalize(param_2);
          auVar11 = thunk_FUN_03f9944c(DAT_09181b70);
          lVar8 = auVar11._0_8_;
          Mono_Math_BigInteger___ctor(lVar8,auVar11._8_8_,uVar3);
          if (lVar8 != 0) {
            Mono_Math_BigInteger_Kernel__MultiplyMod2p32pmod
                      (*(undefined8 *)(lVar5 + 0x18),uVar3,*(int *)(lVar5 + 0x10) - uVar3,
                       *(undefined8 *)(lVar10 + 0x18),0,*(undefined4 *)(lVar10 + 0x10),
                       *(undefined8 *)(lVar8 + 0x18),0,uVar3);
            Mono_Math_BigInteger__Normalize(lVar8);
            if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar4 = Mono_Math_BigInteger_Kernel__Compare(lVar8,param_2);
            if (iVar4 < 1) goto LAB_0742ad14;
            auVar11 = thunk_FUN_03f9944c(DAT_09181b70);
            lVar5 = auVar11._0_8_;
            Mono_Math_BigInteger___ctor(lVar5,auVar11._8_8_,uVar2 + 2);
            if ((lVar5 != 0) && (lVar9 = *(long *)(lVar5 + 0x18), lVar9 != 0)) {
              if (uVar3 < *(uint *)(lVar9 + 0x18)) {
                *(undefined4 *)(lVar9 + (ulong)uVar3 * 4 + 0x20) = 1;
                Mono_Math_BigInteger_Kernel__MinusEq(lVar5,lVar8);
                Mono_Math_BigInteger_Kernel__PlusEq(param_2,lVar5);
                while( true ) {
                  if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  iVar4 = Mono_Math_BigInteger_Kernel__Compare(param_2,lVar10);
                  lVar8 = lVar10;
                  if (iVar4 < 0) break;
LAB_0742ad14:
                  Mono_Math_BigInteger_Kernel__MinusEq(param_2,lVar8);
                }
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

