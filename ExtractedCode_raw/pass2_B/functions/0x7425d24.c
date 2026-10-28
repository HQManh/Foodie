// rea decompile_all
// name: Mono.Security.Cryptography.SymmetricTransform$$TransformBlock
// address: 0x7425d24
// body: available
// range: 0x7425d24-0x7425f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7425dfc to 0x7425f50 Mono.Security.Cryptography.SymmetricTransform$$InternalTransformBlock (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7425e60 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7425f24 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7425f28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_SymmetricTransform__TransformBlock
               (long param_1,long param_2,int param_3,int param_4,long param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar4 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09209438);
    System_ObjectDisposedException___ctor(uVar4,uVar3,0);
LAB_07425f10:
    uVar3 = thunk_FUN_03fc39d4(&DAT_091dab08);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar3);
  }
  Mono_Security_Cryptography_SymmetricTransform__CheckInput();
  if (param_5 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09220820);
    System_ArgumentNullException___ctor(uVar4,uVar3,0);
    goto LAB_07425f10;
  }
  if (param_6 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09220838);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091fa160);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar3,uVar5,0);
    goto LAB_07425f10;
  }
  iVar1 = *(int *)(param_5 + 0x18);
  iVar2 = iVar1 - (param_6 + param_4);
  if ((*(char *)(param_1 + 0x18) == '\0') && (iVar2 < 0)) {
    uVar6 = *(uint *)(param_1 + 0x40);
    if ((uVar6 | 2) == 3) goto LAB_07425e00;
LAB_07425d94:
    if ((uVar6 & 0xfffffffd) != 1) {
      if (*(int *)(param_1 + 0x1c) + iVar2 < 0) goto LAB_07425e00;
      goto LAB_07425dd4;
    }
  }
  else if (*(char *)(param_1 + 0x18) == '\0') {
    uVar6 = *(uint *)(param_1 + 0x40);
    goto LAB_07425d94;
  }
  if (iVar2 < 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(param_2 + 0x18) - (iVar1 + param_3) != *(int *)(param_1 + 0x1c)) {
LAB_07425e00:
      uVar3 = thunk_FUN_03fc39d4(&DAT_09209f98);
      uVar3 = Locale__GetText(uVar3,0);
      thunk_FUN_03fc39d4(&DAT_09182f98);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_09220820);
      System_Security_Cryptography_CryptographicException___ctor(uVar4,uVar5,uVar3,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091dab08);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar3);
    }
    param_4 = iVar1 - param_6;
  }
LAB_07425dd4:
  Mono_Security_Cryptography_SymmetricTransform__InternalTransformBlock
            (param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

