// rea decompile_all
// name: Mono.Security.Cryptography.SymmetricTransform$$FinalEncrypt
// address: 0x74263a0
// body: available
// range: 0x74263a0-0x7426633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74265d8 to 0x3f5c394 FUN_03f5c394 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74265e4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74265e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7426630 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Security_Cryptography_SymmetricTransform__FinalEncrypt
               (long param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  if ((DAT_09520fac & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520fac = 1;
  }
  iVar12 = *(int *)(param_1 + 0x1c);
  iVar2 = 0;
  if (iVar12 != 0) {
    iVar2 = param_4 / iVar12;
  }
  iVar2 = iVar2 * iVar12;
  uVar1 = *(uint *)(param_1 + 0x40);
  iVar4 = param_4 - iVar2;
  if ((uVar1 < 6) && ((1 << (ulong)(uVar1 & 0x1f) & 0x34U) != 0)) {
    iVar11 = iVar2 + iVar12;
  }
  else {
    if (param_4 == 0) {
      lVar5 = FUN_03f5c394(DAT_0917fc88,0);
      return lVar5;
    }
    iVar11 = iVar2;
    if (iVar4 != 0) {
      if (uVar1 == 1) {
        thunk_FUN_03fc39d4(&DAT_09182f98);
        uVar6 = thunk_FUN_03f9944c();
        uVar7 = thunk_FUN_03fc39d4(&DAT_0921d7c0);
        System_Security_Cryptography_CryptographicException___ctor(uVar6,uVar7,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091daae0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,uVar7);
      }
      lVar5 = FUN_03f5c394(DAT_0917fc88,iVar2 + iVar12);
      System_Buffer__BlockCopy(param_2,param_3,lVar5,0,param_4,0);
      if (lVar5 == 0) goto LAB_074265e8;
      param_3 = 0;
      param_2 = lVar5;
      iVar11 = *(int *)(lVar5 + 0x18);
    }
  }
  lVar5 = FUN_03f5c394(DAT_0917fc88,iVar11);
  iVar8 = *(int *)(param_1 + 0x1c);
  iVar12 = 0;
  if (iVar8 < iVar11) {
    do {
      Mono_Security_Cryptography_SymmetricTransform__InternalTransformBlock
                (param_1,param_2,param_3,iVar8,lVar5,iVar12);
      iVar8 = *(int *)(param_1 + 0x1c);
      iVar11 = iVar11 - iVar8;
      param_3 = iVar8 + param_3;
      iVar12 = iVar8 + iVar12;
    } while (iVar8 < iVar11);
  }
  iVar11 = *(int *)(param_1 + 0x40);
  uVar1 = iVar8 - iVar4 & 0xff;
  uVar3 = (undefined1)(iVar8 - iVar4);
  if (iVar11 == 2) {
    if (lVar5 == 0) {
LAB_074265e8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar10 = *(uint *)(lVar5 + 0x18);
    uVar9 = uVar10;
    while (uVar9 = uVar9 - 1, (int)(uVar10 - uVar1) <= (int)uVar9) {
      if (uVar10 <= uVar9) goto LAB_074265e4;
      *(undefined1 *)(lVar5 + (int)uVar9 + 0x20) = uVar3;
      uVar10 = *(uint *)(lVar5 + 0x18);
    }
  }
  else {
    if (iVar11 == 5) {
      if (lVar5 == 0) goto LAB_074265e8;
      Mono_Security_Cryptography_SymmetricTransform__Random
                (param_1,lVar5,*(int *)(lVar5 + 0x18) - uVar1,uVar1 - 1);
    }
    else {
      if (iVar11 != 4) goto LAB_0742659c;
      if (lVar5 == 0) goto LAB_074265e8;
    }
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_074265e4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined1 *)(lVar5 + (*(int *)(lVar5 + 0x18) + -1) + 0x20) = uVar3;
  }
  System_Buffer__BlockCopy(param_2,param_3,lVar5,iVar2,iVar4,0);
  iVar8 = *(int *)(param_1 + 0x1c);
  param_2 = lVar5;
  iVar12 = iVar2;
  param_3 = iVar2;
LAB_0742659c:
  Mono_Security_Cryptography_SymmetricTransform__InternalTransformBlock
            (param_1,param_2,param_3,iVar8,lVar5,iVar12);
  return lVar5;
}

