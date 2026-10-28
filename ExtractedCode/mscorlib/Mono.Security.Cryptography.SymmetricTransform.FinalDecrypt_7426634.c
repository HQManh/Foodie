// rea decompile_all
// name: Mono.Security.Cryptography.SymmetricTransform$$FinalDecrypt
// address: 0x7426634
// body: available
// range: 0x7426634-0x74268cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7426850 to 0x3f5c394 FUN_03f5c394 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74268a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74268ac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Mono_Security_Cryptography_SymmetricTransform__FinalDecrypt
          (long *param_1,undefined8 param_2,int param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auVar15 [16];
  
  if ((DAT_09520fad & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520fad = 1;
  }
  uVar13 = param_4;
  if (*(char *)((long)param_1 + 0x49) != '\0') {
    uVar13 = *(int *)((long)param_1 + 0x1c) + param_4;
  }
  lVar4 = FUN_03f5c394(DAT_0917fc88,uVar13);
  if ((int)param_4 < 1) {
    iVar14 = 0;
    lVar5 = lVar4;
  }
  else {
    iVar2 = *(int *)((long)param_1 + 0x1c);
    iVar14 = 0;
    do {
      lVar5 = Mono_Security_Cryptography_SymmetricTransform__InternalTransformBlock
                        (param_1,param_2,param_3,iVar2,lVar4,iVar14);
      iVar2 = *(int *)((long)param_1 + 0x1c);
      iVar14 = (int)lVar5 + iVar14;
      param_4 = param_4 - iVar2;
      param_3 = iVar2 + param_3;
    } while (0 < (int)param_4);
  }
  if (*(char *)((long)param_1 + 0x49) != '\0') {
    (**(code **)(*param_1 + 0x218))(param_1,param_1[6],param_1[7],*(undefined8 *)(*param_1 + 0x220))
    ;
    lVar5 = System_Buffer__BlockCopy
                      (param_1[7],0,lVar4,iVar14,*(undefined4 *)((long)param_1 + 0x1c),0);
    *(undefined1 *)((long)param_1 + 0x49) = 0;
  }
  if ((int)uVar13 < 1) {
    uVar10 = 0;
  }
  else {
    if (lVar4 == 0) goto LAB_074268a8;
    if (*(uint *)(lVar4 + 0x18) <= uVar13 - 1) {
LAB_074268ac:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar10 = (ulong)*(byte *)(lVar4 + (ulong)(uVar13 - 1) + 0x20);
  }
  iVar14 = (int)param_1[8];
  uVar9 = (uint)uVar10;
  if (iVar14 == 2) {
    if ((uVar9 == 0) || (*(int *)((long)param_1 + 0x1c) < (int)uVar9)) {
      uVar8 = 2;
LAB_074268c4:
      uVar11 = 0xffffffff;
      auVar15 = Mono_Security_Cryptography_SymmetricTransform__ThrowBadPaddingException
                          (lVar5,uVar8,uVar10,0xffffffff);
      plVar6 = auVar15._0_8_;
      if ((char)plVar6[9] != '\0') {
        thunk_FUN_03fc39d4(&DAT_09188ae0);
        uVar8 = thunk_FUN_03f9944c();
        uVar7 = thunk_FUN_03fc39d4(&DAT_09209438);
        System_ObjectDisposedException___ctor(uVar8,uVar7,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091dab10);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar7);
      }
      Mono_Security_Cryptography_SymmetricTransform__CheckInput();
      bVar3 = (char)plVar6[3] != '\0';
      lVar4 = 0x2a0;
      if (bVar3) {
        lVar4 = 0x290;
      }
      lVar5 = 0x298;
      if (bVar3) {
        lVar5 = 0x288;
      }
                    /* WARNING: Could not recover jumptable at 0x0742693c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)(*plVar6 + lVar5))
                        (plVar6,auVar15._8_8_,uVar10 & 0xffffffff,uVar11 & 0xffffffff,
                         *(undefined8 *)(*plVar6 + lVar4));
      return uVar8;
    }
    uVar13 = uVar13 - uVar9;
    uVar12 = uVar13;
    do {
      if (uVar10 - 1 == 0 || (long)uVar10 < 1) goto LAB_074267d0;
      if (lVar4 == 0) goto LAB_074268a8;
      if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_074268ac;
      lVar1 = (long)(int)uVar12;
      uVar12 = uVar12 + 1;
      uVar10 = uVar10 - 1;
    } while (*(byte *)(lVar4 + lVar1 + 0x20) == uVar9);
    uVar8 = 2;
LAB_074268a0:
    Mono_Security_Cryptography_SymmetricTransform__ThrowBadPaddingException(lVar5,uVar8,0xffffffff);
  }
  else {
    if (iVar14 == 5) {
      if ((uVar9 == 0) || (*(int *)((long)param_1 + 0x1c) < (int)uVar9)) {
        uVar8 = 5;
        goto LAB_074268c4;
      }
      uVar13 = uVar13 - uVar9;
    }
    else if (iVar14 == 4) {
      if ((uVar9 == 0) || (*(int *)((long)param_1 + 0x1c) < (int)uVar9)) {
        uVar8 = 4;
        goto LAB_074268c4;
      }
      uVar13 = uVar13 - uVar9;
      uVar9 = uVar13;
      do {
        if (uVar10 - 1 == 0 || (long)uVar10 < 1) goto LAB_074267d0;
        if (lVar4 == 0) goto LAB_074268a8;
        if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_074268ac;
        lVar1 = (long)(int)uVar9;
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (*(char *)(lVar4 + lVar1 + 0x20) == '\0');
      uVar8 = 4;
      goto LAB_074268a0;
    }
LAB_074267d0:
    if ((int)uVar13 < 1) {
      uVar8 = FUN_03f5c394(DAT_0917fc88,0);
      return uVar8;
    }
    uVar8 = FUN_03f5c394(DAT_0917fc88,uVar13);
    System_Buffer__BlockCopy(lVar4,0,uVar8,0,uVar13,0);
    if (lVar4 != 0) {
      System_Array__Clear(lVar4,0,*(undefined4 *)(lVar4 + 0x18),0);
      return uVar8;
    }
  }
LAB_074268a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

