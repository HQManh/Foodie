// rea decompile_all
// name: Mono.Math.Prime.PrimalityTests$$GetSPPRounds
// address: 0x742b810
// body: available
// range: 0x742b810-0x742b9b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742b930 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742b9b4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Mono_Math_Prime_PrimalityTests__GetSPPRounds(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = Mono_Math_BigInteger__BitCount();
  if ((int)uVar1 < 0x65) {
    uVar5 = 0x1b;
LAB_0742b8d0:
    bVar4 = true;
  }
  else {
    if (uVar1 < 0x97) {
      uVar5 = 0x12;
      goto LAB_0742b8d0;
    }
    if (uVar1 < 0xc9) {
      uVar5 = 0xf;
      goto LAB_0742b8d0;
    }
    if (uVar1 < 0xfb) {
      uVar5 = 0xc;
      goto LAB_0742b8d0;
    }
    if (uVar1 < 0x12d) {
      uVar5 = 9;
      goto LAB_0742b8d0;
    }
    if (uVar1 < 0x15f) {
      uVar5 = 8;
      goto LAB_0742b8d0;
    }
    if (uVar1 < 0x191) {
      uVar5 = 7;
      goto LAB_0742b8d0;
    }
    if (uVar1 < 0x1f5) {
      uVar5 = 6;
      goto LAB_0742b8d0;
    }
    if (uVar1 < 0x259) {
      uVar5 = 5;
      goto LAB_0742b8d0;
    }
    if (uVar1 < 0x321) {
      uVar5 = 4;
      goto LAB_0742b8d0;
    }
    bVar4 = false;
    uVar5 = 2;
    if (uVar1 < 0x4e3) {
      uVar5 = 3;
    }
  }
  if (param_2 < 3) {
    if (param_2 == 0) {
      uVar5 = uVar5 >> 2;
      if (!bVar4) {
        uVar5 = 1;
      }
      return uVar5;
    }
    if (param_2 == 1) {
      return uVar5 >> 1;
    }
    if (param_2 == 2) {
      return uVar5;
    }
  }
  else {
    if (param_2 == 3) {
      return uVar5 << 1;
    }
    if (param_2 == 4) {
      return uVar5 << 2;
    }
    if (param_2 == 5) {
      thunk_FUN_03fc39d4(&DAT_091842a0);
      uVar2 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_0920ef00);
      System_Exception___ctor(uVar2,uVar3,0);
      goto LAB_0742b9a0;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar2 = thunk_FUN_03f9944c();
  uVar3 = thunk_FUN_03fc39d4(&DAT_09219748);
  System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,0);
LAB_0742b9a0:
  uVar3 = thunk_FUN_03fc39d4(&DAT_091d64f8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

