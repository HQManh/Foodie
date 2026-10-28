// rea decompile_all
// name: Mono.Math.BigInteger$$Randomize
// address: 0x74299a8
// body: available
// range: 0x74299a8-0x7429b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7429b1c to 0x7428974 Mono.Math.BigInteger$$Normalize (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7429b20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7429b24 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Math_BigInteger__Randomize(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_09520fc6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b70);
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520fc6 = 1;
  }
  if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = Mono_Math_BigInteger__op_Equality(param_1,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar2 = Mono_Math_BigInteger__BitCount(param_1);
  iVar1 = (int)uVar2 >> 5;
  uVar2 = uVar2 & 0x1f;
  if (uVar2 != 0) {
    iVar1 = iVar1 + 1;
  }
  uVar4 = FUN_03f5c394(DAT_0917fc88,iVar1 << 2);
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x198))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x1a0));
    System_Buffer__BlockCopy(uVar4,0,*(undefined8 *)(param_1 + 0x18),0,iVar1 << 2,0);
    if (uVar2 == 0) {
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 == 0) goto LAB_07429b20;
      if (*(uint *)(lVar5 + 0x18) <= (uint)((long)iVar1 + -1)) goto LAB_07429b24;
      lVar5 = lVar5 + ((long)iVar1 + -1) * 4;
      uVar2 = *(uint *)(lVar5 + 0x20) | 0x80000000;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 == 0) goto LAB_07429b20;
      if (*(uint *)(lVar5 + 0x18) <= (uint)((long)iVar1 + -1)) {
LAB_07429b24:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar5 = lVar5 + ((long)iVar1 + -1) * 4;
      uVar2 = (*(uint *)(lVar5 + 0x20) | 1 << (ulong)(uVar2 - 1 & 0x1f)) &
              0xffffffffU >> (ulong)(-uVar2 & 0x1f);
    }
    *(uint *)(lVar5 + 0x20) = uVar2;
    Mono_Math_BigInteger__Normalize(param_1);
    return;
  }
LAB_07429b20:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

